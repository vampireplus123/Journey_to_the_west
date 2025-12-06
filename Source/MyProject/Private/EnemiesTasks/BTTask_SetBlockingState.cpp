// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemiesTasks/BTTask_SetBlockingState.h"
#include "AIController.h"
#include "Characters/BaseEnemyCharacter.h"

UBTTask_SetBlockingState::UBTTask_SetBlockingState()
{
	NodeName = "Set Block State";
}

EBTNodeResult::Type UBTTask_SetBlockingState::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* Controller = OwnerComp.GetAIOwner();
	ABaseEnemyCharacter* Enemy = Controller ? Cast<ABaseEnemyCharacter>(Controller->GetPawn()) : nullptr;

	if (Enemy)
	{
		if (bEnableBlock)
		{
			Enemy->StartBlocking(); // Gọi hàm bạn đã viết
		}
		else
		{
			Enemy->StopBlocking();
		}
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}