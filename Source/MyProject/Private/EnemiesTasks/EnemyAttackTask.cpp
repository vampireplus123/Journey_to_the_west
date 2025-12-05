// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemiesTasks/EnemyAttackTask.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Characters/BaseEnemyCharacter.h"
#include "Characters/PlayerCharacter.h"

UEnemyAttackTask::UEnemyAttackTask()
{
	NodeName = "Enemy Attack";
}

EBTNodeResult::Type UEnemyAttackTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Lấy AI Controller
	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon) return EBTNodeResult::Failed;

	// Lấy Enemy Pawn
	ABaseEnemyCharacter* Enemy = Cast<ABaseEnemyCharacter>(AICon->GetPawn());
	if (!Enemy) return EBTNodeResult::Failed;

	// Lấy Target từ Blackboard
	UObject* TargetObj = OwnerComp.GetBlackboardComponent()->GetValueAsObject(FName("TargetActor"));
	AActor* TargetActor = Cast<AActor>(TargetObj);
	if (!TargetActor) return EBTNodeResult::Failed;

	// Kiểm tra khoảng cách
	float Distance = FVector::Dist(Enemy->GetActorLocation(), TargetActor->GetActorLocation());
	UE_LOG(LogTemp, Warning, TEXT("Distance: %f, AttackRange: %f"), Distance, Enemy->AttackRange);

	/*if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,                     // Key, -1 để tạo mới mỗi lần
			2.0f,                   // Thời gian hiển thị (giây)
			FColor::Yellow,         // Màu chữ
			FString::Printf(TEXT("Distance: %.2f, AttackRange: %.2f"), Distance, Enemy->AttackRange)
		);
	}*/
	if (Distance <= Enemy->AttackRange)
	{
		UE_LOG(LogTemp, Warning, TEXT("Enemy Attack Player!"));
		Enemy->PerformCombo();
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
