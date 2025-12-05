// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseEnemyCharacter.h"
#include "Characters/EnemyCharacter.h"
#include "Interface/EnemyCombatInterface.h"
#include "MeleeEnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API AMeleeEnemyCharacter : public ABaseEnemyCharacter
{
	GENERATED_BODY()
//Functions from parent
protected:
	virtual void PerformCombo() override;
//Variable from parent
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attack")
	int32 ComboIndex = 0;
};
