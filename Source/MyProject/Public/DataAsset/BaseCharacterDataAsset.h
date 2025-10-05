// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseCharacterDataAsset.generated.h"

/**
 * 
 */
class UAnimMontage;
class USoundBase;
UCLASS()
class MYPROJECT_API UBaseCharacterDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	USoundBase* TrailSound;
	// Montage
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Attack Montage")
	UAnimMontage* AttackMontage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Hit React Montage")
	UAnimMontage* HitReactionMontage;
public:
	//trace hit
	UPROPERTY(EditDefaultsOnly, Category = "Trace Hit Data")
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTyoe;
	UPROPERTY(EditDefaultsOnly, Category = "Trace Hit Data")
	TArray<AActor*> ActorsToIgnore;
	UPROPERTY(EditDefaultsOnly, Category = "Trace Hit Data")
	float TraceRadius = 10.f;
	UPROPERTY(EditDefaultsOnly, Category = "Trace Hit Data")
	FName StartPoint;
	UPROPERTY(EditDefaultsOnly, Category = "TTrace Hit Data")
	FName EndPoint;
	UPROPERTY(EditDefaultsOnly, Category = "TTrace Hit Data")
	float DrawTime;
	UPROPERTY(EditDefaultsOnly, Category = "TTrace Hit Data")
	bool bDrawTraceHit = true;

	/*Stats*/
	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	float Damage = 200.f;
	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	float Health = 100.0f;
	UPROPERTY(EditDefaultsOnly,Category="Stats")
	float MaxHealth = 100.0f;
};
