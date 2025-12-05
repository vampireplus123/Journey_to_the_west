#include "Characters/BaseEnemyCharacter.h"
#include "DataAssets/BaseEnemyDataAsset.h"
#include "Component/HealthComponent.h"
#include "Interface/Damageable.h"
#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Animation/AnimMontage.h" 

// --- MANAGER/UI INCLUDES ---
#include "Components/WidgetComponent.h" 
#include "Managers/UIManagerSubsystem.h"
#include "Managers/GameManagerSubsystem.h"
#include "Widgets/EnemyUserWidget.h"
// ----------------------------

ABaseEnemyCharacter::ABaseEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));

	// Cấu hình Component Widget (Thanh máu trên đầu cho Minion)
	HealthBarComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarComponent"));
	HealthBarComponent->SetupAttachment(GetRootComponent());
	HealthBarComponent->SetWidgetSpace(EWidgetSpace::Screen); 
	HealthBarComponent->SetDrawSize(FVector2D(100.0f, 15.0f));
	HealthBarComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 90.0f));
}

void ABaseEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (HealthBarComponent)
	{
		HealthBarComponent->SetVisibility(false);
	}

	if (HealthComponent)
	{
		HealthComponent->SetupComponent(EnemyDataAsset);
		HealthComponent->OnDeath.AddDynamic(this, &ABaseEnemyCharacter::HandleDead);
	}

	// Load chỉ số từ DataAsset
	if (EnemyDataAsset)
	{
		Stamina = EnemyDataAsset->Stamina;
		AttackRange = EnemyDataAsset->AttackRange;
		MeleeDamage = EnemyDataAsset->MeleeDamage;
	}
	EnemyHealth = HealthComponent ? HealthComponent->GetHealth() : 0.f;
	EnemyMaxHealth = HealthComponent ? HealthComponent->GetMaxHealth() : 0.f;
}

void ABaseEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// ------------------------------------------------------------------
// NHẬN DAMAGE (I_DamageAble_TakeDamage)
// ------------------------------------------------------------------
void ABaseEnemyCharacter::I_DamageAble_TakeDamage(float Damage, AActor* DamageCauser)
{
	if (!HealthComponent || HealthComponent->IsDead()) return;

	// 1. Trừ máu
	HealthComponent->ApplyDamage(Damage, DamageCauser);

	// 2. CHECK CHẾT & PHẢN ỨNG
	if (HealthComponent->IsDead())
	{
		HandleDead(); // Chạy logic chết
	}
	else
	{
		// HIT REACTION (Montage Hit đơn giản)
		if (DamageCauser)
		{
			FVector ShotFromDirection = (DamageCauser->GetActorLocation() - GetActorLocation()).GetSafeNormal();
			HandleBeaten(ShotFromDirection); 
		}
		
		// 3. CẬP NHẬT UI (Boss/Minion Split)
		bool bIsBoss = (EnemyDataAsset && EnemyDataAsset->bIsBoss);

		if (bIsBoss)
		{
			// BOSS: Gọi Manager (Thanh to)
			if (UUIManagerSubsystem* UI = UUIManagerSubsystem::Get(this))
			{
				UI->ShowBossHUD(true);
				UI->UpdateBossHealth(HealthComponent->Health, HealthComponent->MaxHealth);
			}
		}
		else
		{
			// MINION: Cập nhật Widget Component trên đầu
			if (HealthBarComponent)
			{
				HealthBarComponent->SetVisibility(true);
				if (UEnemyUserWidget* Bar = Cast<UEnemyUserWidget>(HealthBarComponent->GetUserWidgetObject()))
				{
					Bar->UpdateHealth(HealthComponent->Health, HealthComponent->MaxHealth);
				}
			}
		}
	}
}

// ------------------------------------------------------------------
// LOGIC SỐNG SÓT VÀ CHẾT
// ------------------------------------------------------------------
void ABaseEnemyCharacter::HandleBeaten(const FVector& ShotFromDirection)
{
	// Logic Hit Montage đơn giản (Không cần tính hướng phức tạp)
	if (!HealthComponent || HealthComponent->IsDead() || !EnemyDataAsset || !EnemyDataAsset->HitMontage) return;
	
	if (UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance())
    {
        AnimInstance->Montage_Stop(0.0f); // Dừng Attack Montage
    }
    
	PlayAnimMontage(EnemyDataAsset->HitMontage);
}

void ABaseEnemyCharacter::HandleDead()
{
	// 1. Dừng hoạt động
	if (Controller) { Controller->StopMovement(); DetachFromControllerPendingDestroy(); }
	if (GetCharacterMovement()) { GetCharacterMovement()->StopMovementImmediately(); GetCharacterMovement()->DisableMovement(); }
	if (GetCapsuleComponent()) { GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision); }
	if (GetMesh()) GetMesh()->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

	// 2. ẨN UI VÀ BÁO MANAGER
	bool bIsBoss = (EnemyDataAsset && EnemyDataAsset->bIsBoss);
	if (bIsBoss)
	{
		if (UUIManagerSubsystem* UI = UUIManagerSubsystem::Get(this)) UI->ShowBossHUD(false);
	}
	else
	{
		if (HealthBarComponent) HealthBarComponent->SetVisibility(false);
	}

	if (UGameManagerSubsystem* GM = UGameManagerSubsystem::Get(this)) GM->AddElimination();

	// 3. Chạy Montage Chết và Hủy Actor
	float Duration = 0.f;
	if (EnemyDataAsset && EnemyDataAsset->DieMontage) Duration = PlayAnimMontage(EnemyDataAsset->DieMontage);
	SetLifeSpan(Duration + 5.0f);
}

// ------------------------------------------------------------------
// CÁC HÀM PURE VIRTUAL TỪ IAttackInterface (BẮT BUỘC IMPLEMENT)
// ------------------------------------------------------------------

void ABaseEnemyCharacter::I_PlayAttackMontage(UAnimMontage* AttackMontage) { PlayAnimMontage(AttackMontage); }
void ABaseEnemyCharacter::I_RequestAttack() { PerformAttack(); }
bool ABaseEnemyCharacter::I_DoesReadyAttack() const { return !HealthComponent || !HealthComponent->IsDead(); }
bool ABaseEnemyCharacter::I_HasEnoughStamina(float Cost) const { return true; } 
bool ABaseEnemyCharacter::I_IsAttacking() const { return false; }
float ABaseEnemyCharacter::I_GetHealth() const { return EnemyHealth; }
float ABaseEnemyCharacter::I_GetMaxHealth() const { return EnemyMaxHealth; }
float ABaseEnemyCharacter::I_GetStamina() const { return Stamina; }
float ABaseEnemyCharacter::I_GetMaxStamina() const { return Stamina; }
void ABaseEnemyCharacter::I_AN_EndAttack() {}
void ABaseEnemyCharacter::I_AN_Combo() {}
void ABaseEnemyCharacter::I_AN_EndHitReact() {} 
void ABaseEnemyCharacter::I_PlayStartAttackSound() {}
void ABaseEnemyCharacter::I_RequestAttackFailed_Stamina(float StaminaCost) {}
void ABaseEnemyCharacter::I_HandleAttackSuccess() {}
void ABaseEnemyCharacter::I_EnterCombat(AActor* TargetActor) {}
void ABaseEnemyCharacter::I_ReceiveCombat(AActor* TargetActor) {}
void ABaseEnemyCharacter::I_ExitCombat() {}
void ABaseEnemyCharacter::I_HandleTargetExitCombat() {}

FVector ABaseEnemyCharacter::I_GetSocketLocation(const FName& SocketName) const
{
	if (GetMesh() == nullptr) return FVector::ZeroVector;
	return GetMesh()->GetSocketLocation(SocketName);
}

void ABaseEnemyCharacter::I_ANS_BeginTraceHit() {}
void ABaseEnemyCharacter::I_ANS_TraceHit() { TraceMeleeHit(); }

// ------------------------------------------------------------------
// COMBAT EXECUTION (Trace execution)
// ------------------------------------------------------------------
void ABaseEnemyCharacter::PerformAttack() { for(int i=0;i<ComboCount;i++) TraceMeleeHit(); }
void ABaseEnemyCharacter::PerformCombo() { PerformAttack(); }
void ABaseEnemyCharacter::PerformRangedAttack() {}

void ABaseEnemyCharacter::TraceMeleeHit()
{
	// 1. Lấy vị trí BẮT ĐẦU từ Socket
	FVector Start = GetMesh()->GetSocketLocation(EnemyDataAsset->StartPoint);
	
	// 2. Xác định HƯỚNG TRACE 
	FVector TraceDirection = GetActorForwardVector();

	// 3. TÍNH TOÁN ĐIỂM END CỐ ĐỊNH DỰ TRÊN TẦM ĐÁNH DATA ASSET
	FVector End = Start + TraceDirection * AttackRange;	
	
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	TArray<FHitResult> Hits;
	
	bool bHit = GetWorld()->SweepMultiByChannel(
		Hits, Start, End, FQuat::Identity, ECC_Pawn, FCollisionShape::MakeSphere(HitRadius), Params
	);

/*#if WITH_EDITOR || UE_BUILD_DEBUG
	FColor DebugColor = bHit ? FColor::Green : FColor::Red;
	DrawDebugLine(GetWorld(), Start, End, DebugColor, false, 2.0f, 0, 2.0f);
	DrawDebugSphere(GetWorld(), End, HitRadius, 12, DebugColor, false, 2.0f);
#endif*/

	for (auto& Hit : Hits)
	{
		HitTarget(Hit.GetActor());
	}
}

void ABaseEnemyCharacter::HitTarget(AActor* Target)
{
	if (!Target || Target->IsA(ABaseEnemyCharacter::StaticClass())) return;
	if (IDamageable* DamageInterface = Cast<IDamageable>(Target))
	{
		// --- DEBUG: XEM GIÁ TRỊ DAMAGE ĐANG ĐƯỢC GỬI ---
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, 
			FString::Printf(TEXT("SENT DAMAGE VALUE: %f"), EnemyDataAsset->MeleeDamage));
		// -----------------------------------------------

		DamageInterface->I_DamageAble_TakeDamage(EnemyDataAsset->MeleeDamage, this);
	}
}