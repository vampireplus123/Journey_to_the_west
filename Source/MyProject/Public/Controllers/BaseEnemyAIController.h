#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "BaseEnemyAIController.generated.h"

UCLASS()
class MYPROJECT_API ABaseEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:
	ABaseEnemyAIController();

	virtual void OnPossess(APawn* InPawn) override;
	virtual void BeginPlay() override;

	/** Behavior Tree và Blackboard */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="AI")
	UBehaviorTree* BehaviorTree;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AI")
	UBlackboardComponent* BlackboardComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AI")
	UBehaviorTreeComponent* BehaviorComp;

	/** Perception */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AI")
	class UAIPerceptionComponent* PerceptionComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="AI")
	class UAISenseConfig_Sight* SightConfig;

protected:
	UFUNCTION()
	void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
};
