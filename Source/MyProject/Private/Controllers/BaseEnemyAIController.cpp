#include "Controllers/BaseEnemyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Characters/BaseEnemyCharacter.h"
#include "Characters/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

ABaseEnemyAIController::ABaseEnemyAIController()
{
	// 1. Create components
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	PerceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));

	// 2. Sight config
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	SightConfig->SightRadius = 1500.f;
	SightConfig->LoseSightRadius = 1800.f;
	SightConfig->PeripheralVisionAngleDegrees = 90.f; // Tăng lên một chút để dễ nhìn thấy
	SightConfig->SetMaxAge(5.f);

	// Detect everything (Player, Enemy, Neutral)
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	PerceptionComp->ConfigureSense(*SightConfig);
	PerceptionComp->SetDominantSense(SightConfig->GetSenseImplementation());
}

void ABaseEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	ABaseEnemyCharacter* Enemy = Cast<ABaseEnemyCharacter>(InPawn);
	
	// Bind sự kiện nhìn thấy
	if (PerceptionComp)
	{
		PerceptionComp->OnTargetPerceptionUpdated.AddDynamic(this, &ABaseEnemyAIController::OnTargetPerceptionUpdated);
	}

	// Chạy Behavior Tree
	if (Enemy && BehaviorTree)
	{
		BlackboardComp->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
		BehaviorComp->StartTree(*BehaviorTree);
	}
}

void ABaseEnemyAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseEnemyAIController::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if (!Actor) return;

	// Chỉ quan tâm đến Player (bỏ qua các Enemy khác)
	if (!Actor->IsA(APlayerCharacter::StaticClass())) return;

	// Lấy tham chiếu đến con quái đang bị AI điều khiển
	ABaseEnemyCharacter* MyPawn = Cast<ABaseEnemyCharacter>(GetPawn());

	if (Stimulus.WasSuccessfullySensed())
	{
		// --- TRƯỜNG HỢP: NHÌN THẤY PLAYER ---

		// 1. Cập nhật Blackboard
		BlackboardComp->SetValueAsObject(FName("TargetActor"), Actor);

		// 2. KHÓA MỤC TIÊU (Quan trọng: Lệnh này bắt AI xoay đầu về phía Player)
		SetFocus(Actor);

		// 3. Chuyển Character sang chế độ Combat/Strafe
		// (Để thân người xoay theo cái đầu)
		if (MyPawn)
		{
			// Tắt xoay theo hướng di chuyển (kiểu chạy bộ)
			MyPawn->GetCharacterMovement()->bOrientRotationToMovement = false;
			
			// Bật xoay theo hướng nhìn (AI Controller)
			MyPawn->GetCharacterMovement()->bUseControllerDesiredRotation = true;
			MyPawn->GetCharacterMovement()->RotationRate = FRotator(0.0f, 400.0f, 0.0f); // Xoay nhanh
			
			// Gọi Interface nếu có (để rút vũ khí, đổi tốc độ chạy...)
			// MyPawn->I_EnterCombat(Actor); 
		}

		// Log Debug
		// UE_LOG(LogTemp, Warning, TEXT("[AI] LOCKED ON TARGET: %s"), *Actor->GetName());
	}
	else
	{
		// --- TRƯỜNG HỢP: MẤT DẤU PLAYER ---

		// 1. Xóa Blackboard
		BlackboardComp->ClearValue(FName("TargetActor"));

		// 2. BỎ KHÓA MỤC TIÊU
		ClearFocus(EAIFocusPriority::Gameplay);

		// 3. Trả về chế độ di chuyển bình thường
		if (MyPawn)
		{
			// Bật lại xoay theo hướng di chuyển (để đi tuần tra tự nhiên hơn)
			MyPawn->GetCharacterMovement()->bOrientRotationToMovement = true;
			
			// Tắt xoay theo Controller
			MyPawn->GetCharacterMovement()->bUseControllerDesiredRotation = false;

			// Gọi Interface thoát combat
			// MyPawn->I_ExitCombat();
		}

		// Log Debug
		// UE_LOG(LogTemp, Warning, TEXT("[AI] LOST TARGET"));
	}
}
