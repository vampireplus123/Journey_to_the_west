#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "Interface/Damageable.h"
#include "Interface/SpawnClone.h"
#include "PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UPlayer_PlayerWidget; 
class UEnemyUserWidget;

UCLASS()
class MYPROJECT_API APlayerCharacter : public ABaseCharacter, public ISpawnClone
{
	GENERATED_BODY()

public:
	APlayerCharacter();
	virtual void Destroyed() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;
	virtual void HandleDead() override;
	virtual void HandleBeaten(const FVector& ShotFromDirection) override;
	virtual void NotifyHealthUpdatedToUI() override;


public:
	// Interfaces
	virtual void I_ReceiveCombat(AActor* TargetActor) override;
	virtual void I_ExitCombat() override;
	virtual void I_EnterCombat(AActor* TargetActor) override;
	virtual void I_HitTarget(float Health_Target, float MaxHealth_Target) override;
	virtual void I_HandleTargetDestroyed() override;
	virtual void I_DoJump() override;
	virtual void I_SpawnClone() override;


protected:
	// --- UI CONFIGURATION ---
	
	// Widget của Player (Thanh máu bản thân)
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UPlayer_PlayerWidget> PlayerHUDClass;

	// Widget của BOSS (Thanh máu to dưới màn hình)
	// Quái thường không dùng cái này, quái thường dùng Component
	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UEnemyUserWidget> BossHUDClass;
	//Healing
	UFUNCTION()
	void OnHealthChanged(float NewHealth);
	int GetEliminations() const { return Eliminations; }

//Player private setup
private:
	void AddMappingContextForCharacter();
	void Look(const FInputActionValue& Value);
	void Move(const FInputActionValue& Value);
	void AttackPressed();
	void StrongAttackPressed();
	void ExitCombatPressed();
	void HealPressed();

private:
	int Eliminations = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere, Category = "Clone")
	TSubclassOf<APlayerCharacter> CloneClass;
};