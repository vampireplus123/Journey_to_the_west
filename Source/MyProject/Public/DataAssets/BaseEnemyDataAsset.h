// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseEnemyDataAsset.generated.h"

/**
 * 
 */
class UBehaviorTree;
UCLASS()
class MYPROJECT_API UBaseEnemyDataAsset : public UDataAsset
{
	GENERATED_BODY()

	
public:
	// Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	float Health = 100.f;
	
 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Stats")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Stats")
	float Stamina = 100.f;

	// Attack
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
	float MeleeDamage = 20.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
	float RangedDamage = 15.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
	float AttackRange = 150.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
	float SkillRange = 800.f;
	

	// Optional: AI / Boss
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI")
	float SightRadius = 1500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI")
	float HearingRadius = 600.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI")
	float VisionAngle = 360.f;

	// Combo / Boss info
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Combat")
	int32 MaxComboCount = 3;

	UPROPERTY(EditAnywhere, Category="Melee Montage")
	TArray<UAnimMontage*> MeleeAttackMontage;
	
	UPROPERTY(EditAnywhere,Category="Range Montage")
	TArray<UAnimMontage*> RangeAttackMontage;

	//Hit and DIe
	UPROPERTY(EditAnywhere, Category="hiT Montage")
	UAnimMontage* HitMontage;
	UPROPERTY(EditAnywhere, Category="Die Montage")
	UAnimMontage* DieMontage;

	UPROPERTY(EditAnywhere,Category="Waeapon Socket")
	FName StartPoint;
	UPROPERTY(EditAnywhere,Category="Waeapon Socket")
	FName EndPoint;
	UPROPERTY(EditAnywhere,Category="Boss or Not")
	bool bIsBoss;
};
