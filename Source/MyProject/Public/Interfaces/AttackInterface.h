// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AttackInterface.generated.h"

class UAnimMontage;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAttackInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MYPROJECT_API IAttackInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void IPlayAttackMontage(UAnimMontage* AttackMontage) = 0;
	virtual void IAnimNotifyEndAttack() = 0;
	virtual FVector IGetSocketLocation(const FName& SocketName)  = 0;
//Combat
public:
	virtual void I_EnterCombat(float EnemyHealth,float EnemyMaxHeal);
	virtual void I_HitTarget(float TargetHealth, float MaxTargetHealth);
//Trace hit
public:
	virtual  void AnimNotifyStateTraceHit() = 0;
	virtual void TraceHitBegin() = 0;
	
};
