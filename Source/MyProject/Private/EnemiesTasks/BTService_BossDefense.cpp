// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemiesTasks/BTService_BossDefense.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/BaseEnemyCharacter.h"
#include "DataAssets/BaseEnemyDataAsset.h" 

UBTService_BossDefense::UBTService_BossDefense()
{
	NodeName = "Boss Defense Decision";
	Interval = 0.5f;        // Check mỗi 0.5 giây
	RandomDeviation = 0.1f;
}

void UBTService_BossDefense::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB) return;

	AAIController* Controller = OwnerComp.GetAIOwner();
	ABaseEnemyCharacter* Enemy = Controller ? Cast<ABaseEnemyCharacter>(Controller->GetPawn()) : nullptr;

	// 1. TỐI ƯU: Nếu không phải Enemy hoặc không có Data -> Dừng
	if (!Enemy || !Enemy->EnemyDataAsset) return;

	// 2. LOGIC QUAN TRỌNG: Nếu KHÔNG phải Boss -> Dừng ngay lập tức!
	// Minion sẽ không tốn CPU để chạy đoạn code bên dưới.
	if (!Enemy->EnemyDataAsset->bIsBoss) 
	{
		return; 
	}

	AActor* Target = Cast<AActor>(BB->GetValueAsObject("TargetActor")); // Đảm bảo tên Key khớp Blackboard của bạn
	if (!Target) 
	{
		BB->SetValueAsBool("ShouldBlock", false);
		return;
	}

	// 3. TÍNH TOÁN CHO BOSS
	bool bShouldBlock = false;
	float Dist = FVector::Dist(Enemy->GetActorLocation(), Target->GetActorLocation());
	
	// Điều kiện: Gần Player (< 3m) VÀ Máu < 50% (hoặc Stamina còn nhiều)
	if (Dist < 300.0f && Enemy->I_GetHealth() < (Enemy->I_GetMaxHealth() * 0.5f))
	{
		// 40% cơ hội sẽ đỡ đòn (Để không bị máy móc quá)
		if (FMath::RandRange(0, 100) < 40) 
		{
			bShouldBlock = true;
		}
	}

	// Set kết quả vào Blackboard
	BB->SetValueAsBool("ShouldBlock", bShouldBlock);
}