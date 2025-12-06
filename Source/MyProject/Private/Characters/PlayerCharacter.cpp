#include "Characters/PlayerCharacter.h"
#include "DataAssets/BaseCharacterData.h"
#include "DataAssets/EnhancedInputData.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Component/HealthComponent.h"
#include "Component/StaminaComponent.h"
#include "Component/AttackComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "AnimInstance/BaseAnimInstance.h"
#include "Kismet/GameplayStatics.h"

// --- MANAGER INCLUDES ---
#include "Managers/GameManagerSubsystem.h"
#include "Managers/UIManagerSubsystem.h" 

// --- WIDGET INCLUDES (QUAN TRỌNG ĐỂ BIẾT TSubclassOf LÀ GÌ) ---
#include "Widgets/Player_PlayerWidget.h"
#include "Widgets/EnemyUserWidget.h"

APlayerCharacter::APlayerCharacter()
{
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm Component"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Component"));
	CameraComponent->SetupAttachment(SpringArmComponent);
	CameraComponent->bUsePawnControlRotation = false;
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!EnhancedInputComponent || !EnhancedInputData) return;

	EnhancedInputComponent->BindAction(EnhancedInputData->IA_Look, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);
	EnhancedInputComponent->BindAction(EnhancedInputData->IA_Move, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
	EnhancedInputComponent->BindAction(EnhancedInputData->IA_Jump, ETriggerEvent::Started, this, &APlayerCharacter::I_DoJump);
	EnhancedInputComponent->BindAction(EnhancedInputData->IA_Attack, ETriggerEvent::Started, this, &APlayerCharacter::AttackPressed);
	EnhancedInputComponent->BindAction(EnhancedInputData->IA_StrongAttack, ETriggerEvent::Started, this, &APlayerCharacter::StrongAttackPressed);
	EnhancedInputComponent->BindAction(EnhancedInputData->IA_ExitCombat, ETriggerEvent::Started, this, &APlayerCharacter::ExitCombatPressed);
	EnhancedInputComponent->BindAction(EnhancedInputData->IA_Health, ETriggerEvent::Started, this, &APlayerCharacter::HealPressed);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	AddMappingContextForCharacter();
	
	// --- TỰ ĐỘNG KHỞI TẠO UI (KHÔNG CẦN LEVEL BLUEPRINT) ---
	if (UUIManagerSubsystem* UI = UUIManagerSubsystem::Get(this))
	{
		if (PlayerHUDClass && BossHUDClass)
		{
			UI->InitializeUI(PlayerHUDClass, BossHUDClass);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("UI Classes NOT set in BP_PlayerCharacter!"));
		}

		// Cập nhật chỉ số lần đầu
		if (HealthComponent)
		{
			UI->UpdatePlayerHealth(HealthComponent->Health, HealthComponent->MaxHealth);
		}
	}
	// -------------------------------------------------------

	if (HealthComponent)
	{
		HealthComponent->OnDeath.AddDynamic(this, &APlayerCharacter::HandleDead);
		HealthComponent->OnHealthChanged.AddDynamic(this, &APlayerCharacter::OnHealthChanged);
	}
}

void APlayerCharacter::Destroyed()
{
	if (AttackInterface_Target)
		AttackInterface_Target->I_HandleTargetDestroyed();
	Super::Destroyed();
}


void APlayerCharacter::OnHealthChanged(float NewHealth)
{
	if (UUIManagerSubsystem* UI = UUIManagerSubsystem::Get(this))
	{
		UI->UpdatePlayerHealth(NewHealth, HealthComponent->MaxHealth);
	}
}

void APlayerCharacter::HandleBeaten(const FVector& ShotFromDirection)
{
	Super::HandleBeaten(ShotFromDirection); 

	auto CameraManager = UGameplayStatics::GetPlayerCameraManager(this, 0);
	if (CameraManager && BaseCharacterData)
	{
		CameraManager->StartCameraShake(BaseCharacterData->CameraShakeClass, BaseCharacterData->ShakeScale);
	}
}

void APlayerCharacter::NotifyHealthUpdatedToUI()
{
	Super::NotifyHealthUpdatedToUI();
	if (UUIManagerSubsystem* UI = UUIManagerSubsystem::Get(this))
	{
		UI->UpdatePlayerHealth(HealthComponent->GetHealth(), HealthComponent->MaxHealth);
	}
}

void APlayerCharacter::HandleDead()
{
	Super::HandleDead();

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		DisableInput(PC);
	}

	float MontageDuration = 0.f;
	if (BaseCharacterData && BaseCharacterData->DeadMontage)
	{
		MontageDuration = PlayAnimMontage(BaseCharacterData->DeadMontage);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Player DeadMontage is NULL!"));
	}

	if (MontageDuration <= 0.f) MontageDuration = 1.0f;
	
	// Đóng băng Animation
	float FreezeTime = MontageDuration - 0.1f;
	if (FreezeTime < 0.1f) FreezeTime = 0.1f;

	FTimerHandle TimerHandle_Freeze;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Freeze, [this]()
	{
		if (IsValid(this) && GetMesh())
		{
			GetMesh()->bPauseAnims = true;
			GetMesh()->bNoSkeletonUpdate = true;
		}
		
		// --- BÁO GAME MANAGER LÀ CHẾT RỒI ---
		if (UGameManagerSubsystem* GM = UGameManagerSubsystem::Get(this))
		{
			GM->OnPlayerDied();
		}
		
	}, FreezeTime, false);
}

// ... (Phần Combat Interface & Input giữ nguyên như cũ, chỉ thêm update Stamina UI nếu cần) ...

void APlayerCharacter::I_EnterCombat(AActor* TargetActor)
{
	Super::I_EnterCombat(TargetActor);
}

void APlayerCharacter::I_ReceiveCombat(AActor* TargetActor)
{
	Super::I_ReceiveCombat(TargetActor);
}

void APlayerCharacter::I_ExitCombat()
{
	Super::I_ExitCombat();
	if (AttackInterface_Target)
		AttackInterface_Target->I_HandleTargetExitCombat();
}

void APlayerCharacter::I_HitTarget(float Health_Target, float MaxHealth_Target)
{
	Super::I_HitTarget(Health_Target, MaxHealth_Target);
	
	// Cập nhật thanh máu Enemy trên UI
	if (UUIManagerSubsystem* UI = UUIManagerSubsystem::Get(this))
	{
		UI->ShowBossHUD(true);
		UI->UpdateBossHealth(Health_Target, MaxHealth_Target);
	}
}

void APlayerCharacter::I_HandleTargetDestroyed()
{
	Eliminations++;
	NotStrafe();

	// Cập nhật số kill lên UI
	if (UUIManagerSubsystem* UI = UUIManagerSubsystem::Get(this))
	{
		// Ẩn thanh máu boss đi vì nó chết rồi
		UI->ShowBossHUD(false);
		// Nếu UI có hàm UpdateEliminations thì gọi ở đây
		// UI->UpdateEliminations(Eliminations);
	}
}

// ... (Phần Input Look, Move, Attack giữ nguyên) ...

void APlayerCharacter::AddMappingContextForCharacter()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (!PlayerController) return;

	UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
	if (Subsystem && EnhancedInputData) Subsystem->AddMappingContext(EnhancedInputData->InputMappingContext, 0);
}

void APlayerCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxis = Value.Get<FVector2D>();
	if (Controller)
	{
		AddControllerYawInput(LookAxis.X);
		AddControllerPitchInput(LookAxis.Y);
	}
}

void APlayerCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (!Controller) return;

	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection   = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	AddMovementInput(ForwardDirection, MovementVector.Y);
	AddMovementInput(RightDirection, MovementVector.X);

	const FVector MoveDir = (ForwardDirection * MovementVector.Y + RightDirection * MovementVector.X).GetSafeNormal();
	if (!MoveDir.IsNearlyZero())
	{
		const FRotator TargetRot = MoveDir.Rotation();
		const FRotator CurrentRot = GetActorRotation();
		const FRotator SmoothedRot = FMath::RInterpTo(CurrentRot, TargetRot, GetWorld()->GetDeltaSeconds(), RotationSpeed);
		SetActorRotation(SmoothedRot);
	}
}

void APlayerCharacter::AttackPressed()
{
	UBaseAnimInstance* AnimInst = Cast<UBaseAnimInstance>(GetMesh()->GetAnimInstance());
	if (AnimInst && AnimInst->bIsJumping) return;

	AttackComponent->RequestAttackType = EAttackType::Normal;
	I_RequestAttack();
}

void APlayerCharacter::StrongAttackPressed()
{
	AttackComponent->RequestAttackType = EAttackType::Strong;
	I_RequestAttack();
}

void APlayerCharacter::ExitCombatPressed()
{
	I_ExitCombat();
}

void APlayerCharacter::HealPressed()
{
	// Kiểm tra dữ liệu cần thiết
	if (!BaseCharacterData) return; 

	// Gọi hàm logic chính trong ABaseCharacter
	RequestHeal(
		BaseCharacterData->HealMontage, 
		50.0f, 
		BaseCharacterData->HealthRestoreAmount
	);
}



void APlayerCharacter::I_DoJump()
{
	ACharacter::Jump();
}

void APlayerCharacter::I_SpawnClone()
{
	if (!GetWorld() || !StaminaComponent || !CloneClass) return;

	const float CloneCost = 50.f;
	if (StaminaComponent->Stamina < CloneCost) return;

	StaminaComponent->UpdateStamina(CloneCost);
	
	// Cập nhật UI Stamina
	if (UUIManagerSubsystem* UI = UUIManagerSubsystem::Get(this))
	{
		UI->UpdatePlayerStamina(StaminaComponent->Stamina, StaminaComponent->MaxStamina);
	}

	FVector MoveDirection = GetVelocity().GetSafeNormal();
	FVector RightVector = GetActorRightVector();
	FVector SpawnOffset = MoveDirection.IsNearlyZero() ? -RightVector * 300.f : 
						  (FVector::DotProduct(MoveDirection, RightVector) > 0.f ? -RightVector : RightVector) * 300.f;

	FVector CloneLocation = GetActorLocation() + SpawnOffset;
	FRotator CloneRotation = GetActorRotation();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	APlayerCharacter* Clone = GetWorld()->SpawnActor<APlayerCharacter>(CloneClass, CloneLocation, CloneRotation, SpawnParams);
	if (Clone)
	{
		Clone->SetActorEnableCollision(false);
		Clone->DisableInput(nullptr);
		if (Clone->HealthComponent) Clone->HealthComponent->Health = HealthComponent->Health;
		if (Clone->StaminaComponent) Clone->StaminaComponent->Stamina = StaminaComponent->Stamina;

		FTimerHandle TimerHandle;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, [Clone]() { if (IsValid(Clone)) Clone->Destroy(); }, 1.0f, false);
	}
}