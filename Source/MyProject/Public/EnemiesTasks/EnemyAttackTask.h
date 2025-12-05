// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EnemyAttackTask.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UEnemyAttackTask : public UBTTaskNode
{
	GENERATED_BODY()
public:

	UEnemyAttackTask();

	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
