// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Enum/AttackType.h"
#include "BaseCharacterData.generated.h"

class UAnimMontage;
class UParticleSystem;
class USoundBase;

UCLASS()
class MYPROJECT_API UBaseCharacterData : public UDataAsset
{
	GENERATED_BODY()
public:
	UBaseCharacterData();
public:
	UPROPERTY(EditDefaultsOnly, Category="Attack Montage", meta = (AllowPrivateAccess = "true"))
	TArray<UAnimMontage*> AttackMontages;

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	UAnimMontage* AttackMontage_Strong;

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	TMap<EAttackType, float> CostMap;

	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	TMap<EAttackType, float> DamageMap;

	UPROPERTY(EditDefaultsOnly, Category="Hit React", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HitReactMontage;
	
	UPROPERTY(EditDefaultsOnly, Category="Sound")
	USoundBase* PainSound;
	/*
	* Dead
	*/
	UPROPERTY(EditDefaultsOnly, Category = "Dead")
	UAnimMontage* DeadMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Dead")
	USoundBase* DeadSound;

	UPROPERTY(EditDefaultsOnly, Category="Hit Impact")
	UParticleSystem* HitImpactEffect;

	UPROPERTY(EditDefaultsOnly, Category="Sound")
	USoundBase* HitImpactSound;

	UPROPERTY(EditDefaultsOnly, Category="Sound")
	USoundBase* StartAttackSound;
	
	UPROPERTY(EditDefaultsOnly, Category="Jump Montage", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* JumpMontage;

	// Trace hit 
	UPROPERTY(EditDefaultsOnly,Category="Trace Hit")
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectType;
	 
	UPROPERTY(EditDefaultsOnly, Category="Trace Hit")
	TArray<AActor*> ActorToIgnores;

	UPROPERTY(EditDefaultsOnly,Category="Trace Hit")
	float TraceRadius = 20.0f; 

	UPROPERTY(EditDefaultsOnly,Category="Trace Hit")
	FName TraceStart;

	UPROPERTY(EditDefaultsOnly,Category="Trace Hit")
	FName TraceEnd;

	UPROPERTY(EditDefaultsOnly,Category="Trace Hit")
	float DrawTime = 1.0f;

	UPROPERTY(EditDefaultsOnly,Category="Trace Hit")
	bool bDrawDebugTrace = true;
	
	UPROPERTY(EditDefaultsOnly,Category="Stats")
	float Health = 20.0f;
	
	UPROPERTY(EditDefaultsOnly,Category="Stats")
	float MaxHealth = 100.0f;
	
	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	float Stamina = 100.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	float MaxStamina = 100.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	float RegenSpeed = 40.0f;

	UPROPERTY(EditDefaultsOnly,Category="Speed")
	float DefaultSpeed = 600.0f;

	UPROPERTY(EditDefaultsOnly,Category="Speed")
	float PatrolSpeed = 300.0f;

	UPROPERTY(EditDefaultsOnly,Category="Speed")
	float CombatSpeed = 400.0f;
	UPROPERTY(EditDefaultsOnly,Category="Health Restore Amount")
	float HealthRestoreAmount = 20.0f;
	UPROPERTY(EditDefaultsOnly, Category = "Healing Cool Down")
	float HealCooldownDuration = 120.0f;

	/*
	* Sound
	*/

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundBase* ThemeSound;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	USoundBase* CombatSound;


	UPROPERTY(EditDefaultsOnly, Category = "Sound")
	float BackgroundAudioVolume = 0.5f;

	/*
	* Player
	*/
	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<UCameraShakeBase> CameraShakeClass;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float ShakeScale = 30.0f;
	//Health
	UPROPERTY(EditDefaultsOnly, Category = "Healing")
	UAnimMontage* HealMontage;
};
