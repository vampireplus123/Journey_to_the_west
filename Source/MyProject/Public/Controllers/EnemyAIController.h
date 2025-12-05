// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

class UAISenseConfig_Sight;
class IEnemyInterface;
class UBehaviorTree;
class UAIPerceptionComponent;
struct  FLinearColor;
/**
 * 
 */
UCLASS()
class MYPROJECT_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
public:
	AEnemyAIController();
	void CombatMode(AActor* Actor);
	virtual void Tick(float DeltaSeconds) override;
	
	UFUNCTION(BlueprintCallable)
	void UpdatePatrolLocation();

	UFUNCTION(BlueprintCallable)
	void CheckDistance(AActor* AIActor, AActor* PlayerActor, float AttackRange);

	void BackToPatrol();

	void StartRegenStamina(float Stamina);

	void RegenToCombat();

	UFUNCTION(BlueprintCallable)
	void UpdateRegenLocation(AActor* AIActor, AActor* PlayerActor, float RegenRange);

	/*
	* Affiliation
	*/
	virtual ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
	virtual FGenericTeamId GetGenericTeamId() const override;
protected:
	void OnPossess(APawn* InPawn) override;
public:
	bool bIsRegenStamina = false;

	float TargetStamina = 0.0f;
private:
	UFUNCTION()
	void HandleTargetPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus);
	void HandleSeePlayer(AActor* Actor);
	
	void ExitCombatTimerFinished();
private:
	UPROPERTY(EditDefaultsOnly)
	FGenericTeamId TeamId = FGenericTeamId(0);
	
	UPROPERTY()
	APawn* PossessPawn;
	
	UPROPERTY(VisibleAnywhere)
	UAIPerceptionComponent* AIPerceptionComponent;
	
	UPROPERTY(visibleAnywhere)
	UAISenseConfig_Sight* SenseConfig_Sight;
	
	UPROPERTY()
	TScriptInterface<IEnemyInterface> EnemyInterface;
	
	UPROPERTY(EditDefaultsOnly, Category="Behaviour Tree")
	UBehaviorTree* BehaviorTree;
	
	UPROPERTY(EditDefaultsOnly, Category="Black Board Key")
	FName Key_PatrolLocation;

	UPROPERTY(EditDefaultsOnly)
	FName Key_PlayerActor;

	UPROPERTY(EditDefaultsOnly)
	FName Key_AIState;

	UPROPERTY(EditDefaultsOnly)
	FName Key_RegenLocation;
	
	FLinearColor DebugColor = FLinearColor::Green;

	
	FTimerHandle ExitCombatTimer;

	UPROPERTY(EditDefaultsOnly)
	float ExitCombatSecond = 3.0f;
};
