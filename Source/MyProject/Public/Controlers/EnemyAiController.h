// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAiController.generated.h"

/**
 *  
 */
class UBehaviorTree;
class IEnemyInterface;
class UAIPerceptionComponent;
class UAISenseConfig_Sight;
UCLASS()
class MYPROJECT_API AEnemyAiController : public AAIController
{
	GENERATED_BODY()
public:
	AEnemyAiController();
	virtual void Tick(float DeltaTime) override;
	void Seeplayer(AActor* Actor);
	UFUNCTION(BlueprintCallable)
	void UpdatePatrolLocation();
	//AI Perception Component.
private:
	UPROPERTY(EditAnywhere)
	UAIPerceptionComponent* AiPerceptionComponent;
	UAISenseConfig_Sight* AISight_Config;
protected:
	UPROPERTY(EditAnywhere)
	APawn* PossessedPawn;
	virtual void OnPossess(APawn* InPawn) override;
private:
	UPROPERTY()
	TScriptInterface<IEnemyInterface> EnemyInterface;
	
	UPROPERTY(EditDefaultsOnly,Category="Behavior Tree")
	UBehaviorTree* BehaviorTree;
	UPROPERTY(EditDefaultsOnly,Category="Behavior Tree")
	FName Key_PatrolLocation;
	UPROPERTY(EditDefaultsOnly,Category="Behavior Tree")
    FName Key_IsCombat;
	UPROPERTY(EditDefaultsOnly,Category="Behavior Tree")
	FName Key_PlayerActor;
	
	//enemy method
private:
	FLinearColor DebugColor = FLinearColor::Green;
	UFUNCTION()
	void HandleTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
};


