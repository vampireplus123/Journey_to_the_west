// Fill out your copyright notice in the Description page of Project Settings.


#include "Controlers/EnemyAiController.h"
#include "Interfaces/EnemyInterface.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Kismet/KismetSystemLibrary.h"
AEnemyAiController::AEnemyAiController()
{
	AiPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception Component"));
	AISight_Config = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("AI Sight Config"));
	AISight_Config -> SightRadius = 2500.0f;
	AISight_Config -> LoseSightRadius = 2500.0f;
	AISight_Config -> PeripheralVisionAngleDegrees = 55.0f;
	AISight_Config -> DetectionByAffiliation.bDetectNeutrals = true;

	AiPerceptionComponent->ConfigureSense(*AISight_Config);
}
void AEnemyAiController::	OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	PossessedPawn = InPawn;
	EnemyInterface = TScriptInterface<IEnemyInterface>(InPawn);
	RunBehaviorTree(BehaviorTree);
	if (AiPerceptionComponent)
	{
		AiPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic
		(
			this,
			&AEnemyAiController::HandleTargetPerceptionUpdated
		);
	}
}

void AEnemyAiController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (PossessedPawn == nullptr) return;
	UKismetSystemLibrary::DrawDebugCone(
		this,
		PossessedPawn->GetActorLocation(),
		PossessedPawn->GetActorForwardVector(),
		2500.0f,
		FMath::DegreesToRadians(55.0f),
		FMath::DegreesToRadians(55.0f),
		20.0f,
		DebugColor,
		-1.0f,
		3.0f
		);
}

void AEnemyAiController::Seeplayer(AActor* Actor)
{
	
	DebugColor = FLinearColor::Red;
	if (EnemyInterface)
	{
		EnemyInterface->I_HandleSeePlayer(Actor);
	}
	if (Blackboard)
	{
		Blackboard->SetValueAsBool(Key_IsCombat,true);
		Blackboard->SetValueAsObject(Key_PlayerActor, Actor);
	}
	
}

void AEnemyAiController::HandleTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		Seeplayer(Actor);
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage
			(
				-1,
				1.0f,
				FColor::Red,
				TEXT("Loose Player")
			);
		}
		DebugColor = FLinearColor::Green;
	}
}


void AEnemyAiController::UpdatePatrolLocation()
{
	if (Blackboard && EnemyInterface)
	{
		Blackboard->SetValueAsVector(
		Key_PatrolLocation,
		EnemyInterface->I_GetPatrolLocation());
	}
}
