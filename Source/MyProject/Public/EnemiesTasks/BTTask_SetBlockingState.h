// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetBlockingState.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UBTTask_SetBlockingState : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTTask_SetBlockingState();
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	// Cho phép tick chọn True/False trong Editor
	UPROPERTY(EditAnywhere, Category = "AI")
	bool bEnableBlock = true;
};
