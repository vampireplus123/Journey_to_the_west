// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/EnemyCharacter.h"

#include "Components/HealthComponent.h"
#include "Interfaces/AttackInterface.h"

//Khi goi se set gia tri cho key patrol location
// lam trong AI controller
// goi toi set black board key
FVector AEnemyCharacter::I_GetPatrolLocation()
{
	if (PatrolPoints.IsEmpty()) return GetActorLocation();
	if (PatrolPoints[PatrolIndex] == nullptr) return GetActorLocation();
	
	auto ReturnValue = PatrolPoints[PatrolIndex]->GetActorLocation();
	PatrolIndex = (PatrolIndex + 1)%PatrolPoints.Num();
	return ReturnValue;
}

void AEnemyCharacter::I_HandleSeePlayer(AActor* PlayerActor)
{
	 AttackInterface_Player = TScriptInterface<IAttackInterface>(PlayerActor);
	if (AttackInterface_Player && HealthComponent)
	{
		AttackInterface_Player->I_EnterCombat(HealthComponent->Health,HealthComponent->MaxHealth);
	}
}

void AEnemyCharacter::HandleTakePointDamage(AActor* DamagedActor, float Damage, class AController* InstigatedBy,
	FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection,
	const class UDamageType* DamageType, AActor* DamageCauser)
{
	Super::HandleTakePointDamage(DamagedActor, Damage, InstigatedBy, HitLocation, FHitComponent, BoneName,
	                             ShotFromDirection, DamageType,
	                             DamageCauser);
	if (AttackInterface_Player && HealthComponent)
	{
		AttackInterface_Player->I_HitTarget(HealthComponent->Health,HealthComponent->MaxHealth);
	}
}
