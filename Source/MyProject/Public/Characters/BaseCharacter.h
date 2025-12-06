// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/AttackInterface.h"
#include "Interface/Damageable.h"
#include "Enum/CombatState.h"
#include "Interface/JumpInterface.h"
#include "BaseCharacter.generated.h"

struct FInputActionValue;
class UEnhancedInputData;
class UAttackComponent;

class UHealthComponent;
class UStaminaComponent;

class UBaseCharacterData;

UCLASS()
class MYPROJECT_API ABaseCharacter :public ACharacter, public IAttackInterface, public IJumpInterface, public IDamageable
{
	GENERATED_BODY()

public:
	ABaseCharacter();

	virtual void PostInitializeComponents() override;
	// virtual void Tick(float DeltaSeconds) override;
	void ChangeMaxWalkSpeed(float NewSpeed);

	FORCEINLINE
	ECombatState GetCombatState() const { return CombatState; }
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement|Rotation")
	float RotationSpeed = 8.0f;
	void RequestHeal(UAnimMontage* HealMontage, float StaminaCost, float HealAmount);

	// attack interface
#pragma region Attack_Interface
	virtual void I_ExitCombat() override;
	
	virtual void I_HandleTargetExitCombat() override;
	virtual void I_EnterCombat(AActor* TargetActor) override;
	virtual void I_ReceiveCombat(AActor* TargetActor) override;

	virtual float I_GetHealth() const override;
	virtual float I_GetMaxHealth() const override;

	virtual float I_GetStamina() const override;
	virtual float I_GetMaxStamina() const override;
	
	virtual void I_PlayAttackMontage(UAnimMontage* AttackMontage) override;
	
	virtual void I_PlayStartAttackSound() override;
	
	virtual void I_AN_EndAttack() override;
	
	virtual void I_AN_Combo() override;
	
	virtual  FVector I_GetSocketLocation(const FName& SocketName) const override;
	
	virtual void I_ANS_TraceHit() override;
	
	virtual void I_ANS_BeginTraceHit() override;
	
	virtual void I_RequestAttack() override;
	
	virtual void I_AN_EndHitReact() override;
	
	virtual void I_HandleAttackSuccess() override;
	
	virtual bool I_DoesReadyAttack() const override;

	virtual bool I_HasEnoughStamina(float Cost) const override;

	virtual bool I_IsAttacking() const override;
#pragma endregion
#pragma region Jump_Interface
	virtual void I_DoJump() override;
#pragma endregion
#pragma region IDamageable
	virtual void I_DamageAble_TakeDamage(float Damage, AActor* DamageCauser) override;
#pragma endregion
public:
	bool bIsStrafing = false;
	bool bIsDodging = false;
	
//Component
protected:
	UPROPERTY()
	TScriptInterface<IAttackInterface> AttackInterface_Target;
	
	UPROPERTY(VisibleAnywhere)
	UAttackComponent* AttackComponent;
	
	UPROPERTY(VisibleAnywhere)
	UHealthComponent* HealthComponent;

	UPROPERTY(VisibleAnywhere)
	UStaminaComponent* StaminaComponent;

	UPROPERTY(EditDefaultsOnly,Category="Character Data Assets")
	UEnhancedInputData* EnhancedInputData;

	UPROPERTY(EditDefaultsOnly,Category="Character Data Assets")
	UBaseCharacterData* BaseCharacterData;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION()
	virtual void HandleOnTakePointDamage(
		AActor* DamagedActor,
		float Damage,
		class AController* InstigatedBy,
		FVector HitLocation,
		class UPrimitiveComponent* FHitComponent,
		FName BoneName,
		FVector ShotFromDirection,
		const class UDamageType* DamageType,
		AActor* DamageCauser
	);
	//Timer
	FTimerHandle TimerHandle_HealFinished;
	FTimerHandle TimerHandle_DodgeFinished;

	
	float PendingHealAmount = 0.0f;
	UFUNCTION()
	void HandleHealingTimerFinished();
	UFUNCTION()
	virtual void NotifyHealthUpdatedToUI();
	
	UFUNCTION()
	virtual void HandleDead();
	virtual void HandleBeaten(const FVector& ShotFromDirection);

	void Strafe();
	void NotStrafe();
	bool bIsHealing = false;
	//Base Function for player
private:
	ECombatState CombatState = ECombatState::Ready;
	
private:
	
	UFUNCTION()
	void HandleHitSomething(const FHitResult& HitResult);

	void SpawnHitImpact(const FVector& HitLocation);
};


