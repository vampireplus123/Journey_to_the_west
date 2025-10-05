// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "Interfaces/EnemyInterface.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
class IAttackInterface;
UCLASS()
class MYPROJECT_API AEnemyCharacter : public ABaseCharacter,public IEnemyInterface
{
	GENERATED_BODY()
public:
	virtual FVector I_GetPatrolLocation() override;
	virtual void I_HandleSeePlayer(AActor* PlayerActor) override;

private:
	UPROPERTY(EditInstanceOnly,Category="Patrol Point")
	TArray<AActor*> PatrolPoints;
	int PatrolIndex;
	UPROPERTY()
	TScriptInterface<IAttackInterface> AttackInterface_Player;
	
//Handle Take Point Damage
protected:
	virtual void HandleTakePointDamage(
		AActor* DamagedActor,
		float
		Damage,
		class AController* InstigatedBy,
		FVector HitLocation, 
		class UPrimitiveComponent* FHitComponent,
		FName BoneName,
		FVector ShotFromDirection,
		const class UDamageType* DamageType,
		AActor* DamageCauser) override;
};
