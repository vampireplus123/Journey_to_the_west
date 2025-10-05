// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "Interfaces/AttackInterface.h"
#include "SunWukong.generated.h"

class UPlayerWidget;
/**
 * 
 */
class USunWukongDataAsset;
class USunWukongEnhancedInputData;
UCLASS()
class MYPROJECT_API ASunWukong : public ABaseCharacter
{
	GENERATED_BODY()
//Atatck Interface
public:
	virtual void I_EnterCombat(float EnemyHealth,float EnemyMaxHeal)override;
	virtual void I_HitTarget(float EnemyHealth, float EnemyMaxHeal) override;
// Input
private:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(EditDefaultsOnly,Category="Wukong Input Data")
	USunWukongEnhancedInputData* SunWukongEnhancedInputData;
	
// Data Asset
private:
	UPROPERTY(EditDefaultsOnly,Category="Wukong Damage")
	float WukongDamage = 300.f;
	UPROPERTY(EditDefaultsOnly,Category="Wukong DataAsset")
	USunWukongDataAsset* SunWukongDataAsset;
	UPROPERTY()
	UPlayerWidget* PlayerWidget;
//Override from base character
protected:
	/*virtual void Attack() override;*/
	virtual float ApplyDamage() override;
	virtual void HitImpactEffect(FVector HitLocation) override;
	// private only for Wukong
private:
	void SecondAttack();
	void ThirdAttack();
};

