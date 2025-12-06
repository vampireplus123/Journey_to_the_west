#include "Characters/BaseCharacter.h"

#include "Characters/PlayerCharacter.h"
#include "Components/InputComponent.h"

#include "GameFramework/CharacterMovementComponent.h"

#include "DataAssets/BaseCharacterData.h"

#include "Component/AttackComponent.h"
#include "Component/HealthComponent.h"
#include "Component/StaminaComponent.h"

#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"
#include "Managers/UIManagerSubsystem.h"

ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// Attack Component
	AttackComponent = CreateDefaultSubobject<UAttackComponent>(TEXT("Attack Component"));
	//Health Component
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));

	StaminaComponent = CreateDefaultSubobject<UStaminaComponent>(TEXT("Stamina Component"));

	bUseControllerRotationYaw = false;

	// ✅ tốc độ xoay mượt
	RotationSpeed = 8.0f;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	// Z -> Yaw
	GetCharacterMovement()->RotationRate.Yaw = 540.0;

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
}

void ABaseCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	if (AttackComponent)
	{
		AttackComponent->HitSomethingDelegate.BindDynamic(this, &ABaseCharacter::HandleHitSomething); 
		AttackComponent->SetupAttackComponent(BaseCharacterData);
	}
	
	if (HealthComponent)
	{
		HealthComponent->SetupComponent(BaseCharacterData);
	}
	
	if (StaminaComponent) StaminaComponent->SetupComponent(BaseCharacterData);
}

void ABaseCharacter::ChangeMaxWalkSpeed(float NewSpeed)
{
	if (GetCharacterMovement()) GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
}

void ABaseCharacter::RequestHeal(UAnimMontage* HealMontage, float StaminaCost, float HealAmount)
{
	if (bIsHealing) return; 
    
	if (!HealthComponent || HealthComponent->IsDead()) return;
	if (!HealMontage) return;

	// 2. Kiểm tra và Trừ Stamina
	if (!I_HasEnoughStamina(StaminaCost))
	{
		return; 
	}
    
	// Trừ Stamina
	if (StaminaComponent) StaminaComponent->UpdateStamina(-StaminaCost); 
    
	bIsHealing = true; 
    
    
	if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
	{
		AnimInstance->Montage_Stop(0.0f); 
	}
    
	// Lưu HealAmount vào biến thành viên 
	PendingHealAmount = HealAmount; 
    

	float MontageDuration = PlayAnimMontage(HealMontage);
	if (MontageDuration <= 0.0f) MontageDuration = 1.0f; 

	// 4. Thiết lập Timer
	GetWorld()->GetTimerManager().SetTimer(
		TimerHandle_HealFinished, 
		this, 
		&ABaseCharacter::HandleHealingTimerFinished, 
		BaseCharacterData->HealCooldownDuration, 
		false 
	);
}

void ABaseCharacter::I_ExitCombat()
{
	NotStrafe();
}

void ABaseCharacter::I_HandleTargetExitCombat()
{
	NotStrafe();
}

void ABaseCharacter::I_EnterCombat(AActor* TargetActor)
{
	AttackInterface_Target = TScriptInterface<IAttackInterface>(TargetActor);
	Strafe();
}

void ABaseCharacter::I_ReceiveCombat(AActor* TargetActor)
{
	AttackInterface_Target = TScriptInterface<IAttackInterface>(TargetActor);
	Strafe();
}

void ABaseCharacter::Strafe()
{
	if (BaseCharacterData)
		ChangeMaxWalkSpeed(BaseCharacterData->CombatSpeed);

	bUseControllerRotationYaw = true;
	if (GetCharacterMovement())
		GetCharacterMovement()->bOrientRotationToMovement = false;

	bIsStrafing = true;
}

void ABaseCharacter::NotStrafe()
{
	if (BaseCharacterData)
		ChangeMaxWalkSpeed(BaseCharacterData->DefaultSpeed);

	bUseControllerRotationYaw = false;
	if (GetCharacterMovement())
		GetCharacterMovement()->bOrientRotationToMovement = true;

	bIsStrafing = false;
}

float ABaseCharacter::I_GetHealth() const
{
	return HealthComponent ? HealthComponent->Health : 0.0f;
}

float ABaseCharacter::I_GetMaxHealth() const
{
	return HealthComponent ? HealthComponent->MaxHealth : 0.0f;
}

float ABaseCharacter::I_GetStamina() const
{
	return StaminaComponent ? StaminaComponent->Stamina : 0.0f;
}

float ABaseCharacter::I_GetMaxStamina() const
{
	return StaminaComponent ? StaminaComponent->MaxStamina : 0.0f;
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	// ✅ Thiết lập trace
	/*
	 *BaseCharacterData->TraceObjectType.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldStatic));
	BaseCharacterData->TraceObjectType.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));
	BaseCharacterData->TraceObjectType.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	BaseCharacterData->ActorToIgnores.Add(this);
	*/


	OnTakePointDamage.AddDynamic(this, &ABaseCharacter::HandleOnTakePointDamage);
	if (BaseCharacterData) ChangeMaxWalkSpeed(BaseCharacterData->DefaultSpeed);
	
}

#pragma region Attack_Interface

void ABaseCharacter::I_PlayAttackMontage(UAnimMontage* AttackMontage)
{
	PlayAnimMontage(AttackMontage);
}

void ABaseCharacter::I_PlayStartAttackSound()
{
	if (BaseCharacterData == nullptr) return;
	UGameplayStatics::PlaySoundAtLocation(
		this,
		BaseCharacterData->StartAttackSound,
		GetActorLocation()
	);
}

void ABaseCharacter::I_AN_EndAttack()
{
	if (AttackComponent)
	{
		AttackComponent->AN_EndAttack();
	}
}

void ABaseCharacter::I_AN_Combo()
{
	if (AttackComponent)
	{
		AttackComponent->AN_Combo();
	}
}

FVector ABaseCharacter::I_GetSocketLocation(const FName& SocketName) const
{
	if (GetMesh() == nullptr) return FVector();

	return GetMesh()->GetSocketLocation(SocketName);
}

void ABaseCharacter::I_ANS_BeginTraceHit()
{
	if (AttackComponent) AttackComponent->SetupTraceHit();
}

void ABaseCharacter::I_RequestAttack()
{
	if(AttackComponent)
		AttackComponent->RequestAttack();
}

void ABaseCharacter::I_AN_EndHitReact()
{
	// khi minh bi danh xong
	// combatstate -> ready
	CombatState = ECombatState::Ready;
	I_AN_EndAttack();
}

void ABaseCharacter::I_HandleAttackSuccess()
{
	if(StaminaComponent) StaminaComponent->UpdateStamina(20.0f);
}

bool ABaseCharacter::I_DoesReadyAttack() const
{
	return CombatState == ECombatState::Ready;
}

bool ABaseCharacter::I_HasEnoughStamina(float Cost) const
{
	if (StaminaComponent == nullptr) return false;

	return StaminaComponent->Stamina >= Cost;
}

bool ABaseCharacter::I_IsAttacking() const
{
	if (AttackComponent == nullptr) return false;

	return AttackComponent->bIsAttacking;
}

void ABaseCharacter::I_DoJump()
{
	IJumpInterface::I_DoJump();
	UE_LOG(LogTemp, Warning, TEXT("Player Jump"));
}
void ABaseCharacter::I_DamageAble_TakeDamage(float Damage, AActor* DamageCauser)
{
	if (bIsDodging) 
	{
		return; 
	}
	if (HealthComponent)
	{
		// 1. GỌI HEALTH COMPONENT ĐỂ TRỪ MÁU
		HealthComponent->ApplyDamage(Damage, DamageCauser);

		// 2. CHẠY HIT REACTION (NẾU VẪN CÒN SỐNG)
		if (!HealthComponent->IsDead() && DamageCauser)
		{
			FVector ShotFromDirection = (DamageCauser->GetActorLocation() - GetActorLocation()).GetSafeNormal();
            
			// Gọi hàm chơi Montage Hit (Đã được đơn giản hóa)
			HandleBeaten(ShotFromDirection); 
		}
        
		// 3. XỬ LÝ UI / DEBUG MESSAGE (Phần này có thể xóa nếu đã chuyển sang UIManager)
		if (GEngine)
		{
			FString MessageAfter = FString::Printf(TEXT("Player Health after damage: %f"), HealthComponent->GetHealth());
			GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, MessageAfter);
		}
        
		// Lưu ý: Hàm HandleDead sẽ được gọi tự động khi HealthComponent->ApplyDamage 
		// kích hoạt OnDeath delegate (đã bind trong PlayerCharacter::BeginPlay).
	}
}
void ABaseCharacter::I_ANS_TraceHit()
{
	if (AttackComponent) AttackComponent->TraceHit();
}

#pragma endregion

// BaseCharacter.cpp

void ABaseCharacter::HandleHitSomething(const FHitResult& HitResult)
{
	if (AttackComponent == nullptr) return;

	auto HitActor = HitResult.GetActor();
	if (HitActor == nullptr) return;

	// --- CODE CŨ (XÓA HOẶC COMMENT) ---
	/*
	const auto AttackDirection = UKismetMathLibrary::GetDirectionUnitVector(
	   GetActorLocation(),
	   HitActor->GetActorLocation()
	);
	
	UGameplayStatics::ApplyPointDamage(
	   HitActor,
	   AttackComponent->SuccessAttackDamage,
	   AttackDirection,
	   HitResult,
	   GetController(),
	   this,
	   UDamageType::StaticClass()
	);
	*/

	// --- CODE MỚI (SỬ DỤNG INTERFACE) ---
    
	// 1. Spawn Impact Effect (Giữ nguyên logic visual của bạn)
	SpawnHitImpact(HitResult.Location); 

	// 2. Kiểm tra xem HitActor có phải là IDamageable không
	if (HitActor->GetClass()->ImplementsInterface(UDamageable::StaticClass()) || Cast<IDamageable>(HitActor))
	{
		IDamageable* DamageInterface = Cast<IDamageable>(HitActor);
		if (DamageInterface)
		{
			// Gọi hàm Interface để trừ máu Enemy
			DamageInterface->I_DamageAble_TakeDamage(AttackComponent->SuccessAttackDamage, this);
            
			// Xử lý thành công (Hồi stamina, v.v.)
			I_HandleAttackSuccess();
		}
	}
}


void ABaseCharacter::HandleOnTakePointDamage(AActor* DamagedActor, float Damage, class AController* InstigatedBy,
                                             FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName,
                                             FVector ShotFromDirection,
                                             const class UDamageType* DamageType, AActor* DamageCauser)
{
	SpawnHitImpact(HitLocation);
	
	if (HealthComponent) HealthComponent->UpdateHealthByDamage(Damage);

	if (HealthComponent->Health > 0.0f)
		HandleBeaten(ShotFromDirection);
	else
		HandleDead();
}

/*void ABaseCharacter::HandleBeaten(const FVector& ShotFromDirection)
{
	if (BaseCharacterData == nullptr) return;

	// Play Pain Sound
	UGameplayStatics::PlaySoundAtLocation(
		this,
		BaseCharacterData->PainSound,
		GetActorLocation()
	);

	// Hit React Montage
	PlayAnimMontage(BaseCharacterData->HitReactMontage);
	CombatState = ECombatState::Beaten;
}*/
void ABaseCharacter::HandleBeaten(const FVector& ShotFromDirection)
{
	// Kiểm tra xem nhân vật còn sống không
	if (!HealthComponent || HealthComponent->IsDead())
	{
		return;
	}
    
	// Nếu không có Montage thì dừng
	if (!BaseCharacterData || !BaseCharacterData->HitReactMontage)
	{
		return;
	}
    
	// --- KHẮC PHỤC DELAY (QUAN TRỌNG) ---
	if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
	{
		// Dừng tất cả Montages đang chạy (ví dụ: Attack Montage)
		// Blend Time = 0.0f đảm bảo nó dừng ngay lập tức, không chờ đợi
		AnimInstance->Montage_Stop(0.0f); 
	}
	// --------------------------------------

	// 1. Play Pain Sound
	if (BaseCharacterData)
	{
		UGameplayStatics::PlaySoundAtLocation(
			this,
			BaseCharacterData->PainSound,
			GetActorLocation()
		);
	}
    
	// 2. Play Hit React Montage
	PlayAnimMontage(BaseCharacterData->HitReactMontage);
    
	// 3. Set Combat State
	CombatState = ECombatState::Beaten;

	// (Tùy chọn: Thêm dòng này để tạo cảm giác khựng lại khi bị đánh)
	// if (GetCharacterMovement())
	//     GetCharacterMovement()->StopMovementImmediately();
}

void ABaseCharacter::HandleHealingTimerFinished()
{
	if (HealthComponent)
	{
		// 1. Lưu lượng máu hồi phục
		float ActualHealedAmount = PendingHealAmount; 
        
		// 2. Áp dụng hồi máu (gọi hàm trong Component)
		HealthComponent->ApplyHealing(ActualHealedAmount);
		
		if (GEngine)
		{
			FString Message = FString::Printf(
				TEXT("Hồi máu: +%.2f | Máu mới: %.2f / %.2f"), 
				ActualHealedAmount, 
				HealthComponent->GetHealth(), 
				HealthComponent->GetMaxHealth()
			);
			// Hiển thị thông báo màu Xanh lá trong 5 giây
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);
		}
		NotifyHealthUpdatedToUI();
		// 4. Dọn dẹp
		PendingHealAmount = 0.0f; 
	}
    
	bIsHealing = false; 
    
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_HealFinished);
	
}

void ABaseCharacter::NotifyHealthUpdatedToUI()
{
	
}

void ABaseCharacter::HandleDead()
{
	if (BaseCharacterData == nullptr) return;

	UGameplayStatics::PlaySoundAtLocation(
		this,
		BaseCharacterData->DeadSound,
		GetActorLocation()
	);

	float DeadMontageSecond = PlayAnimMontage(BaseCharacterData->DeadMontage);

	CombatState = ECombatState::Dead;

	if (GetCharacterMovement())
		GetCharacterMovement()->StopMovementImmediately();

	if (GetCapsuleComponent() && GetMesh())
	{
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	// enemy character
	// sau khi enemy character bi xoa ra khoi level
	// override function destroyed
	// enemy character -> thong bao cho player
	// de player xoa thanh mau cua enemy
	SetLifeSpan(DeadMontageSecond);
}


void ABaseCharacter::SpawnHitImpact(const FVector& HitLocation)
{
	if (BaseCharacterData == nullptr) return;


	// spawn hit impact effect
	UGameplayStatics::SpawnEmitterAtLocation(
		GetWorld(),
		BaseCharacterData->HitImpactEffect,
		HitLocation
	);

	// play hit impact sound
	UGameplayStatics::PlaySoundAtLocation(
		this,
		BaseCharacterData->HitImpactSound,
		HitLocation
	);
	
}
