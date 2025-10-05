// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAsset/BaseCharacterDataAsset.h"
#include "Interfaces/IFlyingInterface.h"
#include "SunWukongDataAsset.generated.h"

/**
 * 
 */
class UAnimMontage;
class UParticleSystem;
UCLASS()
class MYPROJECT_API USunWukongDataAsset : public UBaseCharacterDataAsset
{
	GENERATED_BODY()

	//Montage
public:
	UPROPERTY(EditAnywhere, Category = "SunWukong Air")
	UAnimMontage* WukongFlyingMontage;
	UPROPERTY(EditAnywhere, Category = "SunWukong Air")
	UAnimMontage* WukongJumpingMontage;
	UPROPERTY(EditAnywhere, Category = "SunWukong Attack Montage Addition")
	TArray<UAnimMontage*> WukongOtherAttackMontages;
	// Particle Impact
public:
	UPROPERTY(EditAnywhere, Category = "SunWukong Hit Impact Particle")
	UParticleSystem* WukongHitImpact;
};
