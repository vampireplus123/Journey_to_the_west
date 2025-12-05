#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h" 
#include "Interface/Damageable.h"
#include "Interface/EnemyCombatInterface.h"
#include "Interface/AttackInterface.h" 
#include "BaseEnemyCharacter.generated.h"

// Forward Declarations
class UBaseEnemyDataAsset;
class UHealthComponent;
class UWidgetComponent; 
class UAnimMontage;

UCLASS()
class MYPROJECT_API ABaseEnemyCharacter : public ACharacter, 
    public IDamageable, 
    public IEnemyCombatInterface,
    public IAttackInterface // <--- Thừa kế IAttackInterface
{
	GENERATED_BODY()

public:
	ABaseEnemyCharacter();

protected:
	virtual void BeginPlay() override;

	// --- LOGIC SINH TỒN ---
	virtual void HandleBeaten(const FVector& ShotFromDirection); // Chơi Hit Montage
	UFUNCTION()
	virtual void HandleDead(); // Xử lý chết

	// --- TRACE VÀ UI NỘI BỘ ---
	void TraceMeleeHit(); // Logic Trace
	void HitTarget(AActor* Target); 

public:
	virtual void Tick(float DeltaTime) override;

	// --- INTERFACE IMPLEMENTATION (CÁC HÀM BẮT BUỘC) ---
	virtual void I_DamageAble_TakeDamage(float Damage, AActor* DamageCauser) override;

    // IAttackInterface (Triển khai các hàm Pure Virtual để compile)
	virtual void I_RequestAttack() override;
	virtual void I_PlayAttackMontage(UAnimMontage* AttackMontage) override;
	virtual bool I_DoesReadyAttack() const override;
	virtual bool I_HasEnoughStamina(float Cost) const override;
	virtual bool I_IsAttacking() const override;
	virtual float I_GetHealth() const override;
	virtual float I_GetMaxHealth() const override;
	virtual float I_GetStamina() const override;
	virtual float I_GetMaxStamina() const override;
	virtual void I_AN_EndAttack() override;
	virtual void I_AN_Combo() override;
	virtual void I_AN_EndHitReact() override;
	virtual void I_PlayStartAttackSound() override;
	virtual FVector I_GetSocketLocation(const FName& SocketName) const override;
	virtual void I_HandleAttackSuccess() override;
	virtual void I_RequestAttackFailed_Stamina(float StaminaCost) override;
    virtual void I_ANS_BeginTraceHit() override;
    virtual void I_ANS_TraceHit() override;
    
    // Non-Pure Virtual Functions (Phải khai báo để override)
    virtual void I_EnterCombat(AActor* TargetActor) override;
	virtual void I_ReceiveCombat(AActor* TargetActor) override;
	virtual void I_ExitCombat() override;
	virtual void I_HandleTargetExitCombat() override;

	// IEnemyCombatInterface
	virtual void PerformAttack() override;
	virtual void PerformCombo() override;
	virtual void PerformRangedAttack() override;

public:
	// --- COMPONENTS ---
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	UHealthComponent* HealthComponent;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	UWidgetComponent* HealthBarComponent; // Cho Minion (Trên đầu)

	// --- DATA ASSET ---
	UPROPERTY(EditAnywhere, Category = "Enemy Data")
	UBaseEnemyDataAsset* EnemyDataAsset;

	// --- STATS CACHE (ĐẦY ĐỦ) ---
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats Cache")
	float EnemyHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats Cache")
	float EnemyMaxHealth;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats Cache")
	float Stamina;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats Cache")
	float MeleeDamage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats Cache")
	float RangedDamage;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats Cache")
	float AttackRange;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats Cache")
	float SkillRange;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats Cache")
	float SightRadius;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats Cache")
	float VisionAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Settings")
	int32 ComboCount = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat Settings")
	float HitRadius = 50.f;
};