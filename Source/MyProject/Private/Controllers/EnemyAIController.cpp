// Fill out your copyright notice in the Description page of Project Settings.


#include "Controllers/EnemyAIController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Interface/EnemyInterface.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"

#include "Enum/AIState.h"


AEnemyAIController::AEnemyAIController()
{
	SetGenericTeamId(GetGenericTeamId());
	
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception Component"));
	SenseConfig_Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sense Config Sight"));
	SenseConfig_Sight->SightRadius = 2500.0f; // changed
	SenseConfig_Sight->LoseSightRadius = 2500.0f; // changed
	SenseConfig_Sight->PeripheralVisionAngleDegrees = 55.0f;
	SenseConfig_Sight->DetectionByAffiliation.bDetectFriendlies = false;
	SenseConfig_Sight->DetectionByAffiliation.bDetectNeutrals = false;
	SenseConfig_Sight->DetectionByAffiliation.bDetectEnemies = true;
	
	AIPerceptionComponent->ConfigureSense(*SenseConfig_Sight); 
}
void AEnemyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	PossessPawn = InPawn;
	EnemyInterface = TScriptInterface<IEnemyInterface>(InPawn);
	
	RunBehaviorTree(BehaviorTree);
	
	if (AIPerceptionComponent && AIPerceptionComponent->OnTargetPerceptionUpdated.IsBound() == false)
	{
		AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyAIController::HandleTargetPerceptionUpdate);
	}
}

void AEnemyAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	/*UKismetSystemLibrary::DrawDebugCone(
		this,
		PossessPawn->GetActorLocation(),
		PossessPawn->GetActorForwardVector(),
		2500.0f,
		FMath::DegreesToRadians(55.0f),
		FMath::DegreesToRadians(55.0f),
		20,
		DebugColor,
-1.0f,
		3.0f
		);*/
}


void AEnemyAIController::HandleSeePlayer(AActor* Actor)
{
	CombatMode(Actor);
	if (EnemyInterface)
	{
		EnemyInterface->I_HandleSeePlayer(Actor);
	}
}

void AEnemyAIController::CombatMode(AActor* Actor)
{
	DebugColor = FLinearColor::Red;

	if (Blackboard)
	{
		Blackboard->SetValueAsEnum(Key_AIState, (uint8)EAIState::Combat);
		Blackboard->SetValueAsObject(Key_PlayerActor, Actor);
	}

	if (AIPerceptionComponent && AIPerceptionComponent->OnTargetPerceptionUpdated.IsBound())
	{
		AIPerceptionComponent->OnTargetPerceptionUpdated.RemoveDynamic(this, &AEnemyAIController::HandleTargetPerceptionUpdate);
	}

	SetFocus(Actor);
}

void AEnemyAIController::HandleTargetPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus)
{
	if (Stimulus.WasSuccessfullySensed())
	{
		HandleSeePlayer(Actor);
	}
	else 
	{
		if(GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Loose Sight Player"));
		}
		DebugColor = FLinearColor::Green ;
	}

}


/*void AEnemyAIController::UpdatePatrolLocation()
{
	if (!Blackboard || !EnemyInterface) return;
	Blackboard->SetValueAsVector(Key_PatrolLocation,EnemyInterface->I_GetPatrolLocation());
}*/
void AEnemyAIController::UpdatePatrolLocation()
{
	if (!Blackboard || !EnemyInterface) return;

	FVector PatrolLocation = EnemyInterface->I_GetPatrolLocation();
	Blackboard->SetValueAsVector(Key_PatrolLocation, PatrolLocation);

	// Lấy Pawn và xoay về hướng Patrol
	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn)
	{
		FVector Direction = (PatrolLocation - ControlledPawn->GetActorLocation()).GetSafeNormal();
		FRotator NewRotation = Direction.Rotation();
		ControlledPawn->SetActorRotation(FRotator(0.f, NewRotation.Yaw, 0.f));
	}
}

void AEnemyAIController::CheckDistance(AActor* AIActor, AActor* PlayerActor, float AttackRange)
{
	if (PlayerActor == nullptr) 
	{
		BackToPatrol();
		return;
	}

	if (bIsRegenStamina) return;
	
	 if (AIActor == nullptr) return;

	const auto Distance_AI_Player = AIActor->GetDistanceTo(PlayerActor);
	
	if (Distance_AI_Player <= AttackRange)
	{
		if (Blackboard) Blackboard->SetValueAsEnum(Key_AIState, (uint8)EAIState::Attack);
	} else
	{
		if (Blackboard) Blackboard->SetValueAsEnum(Key_AIState, (uint8)EAIState::Combat);
	}
}

void AEnemyAIController::BackToPatrol()
{
	if (Blackboard)
		Blackboard->SetValueAsEnum(Key_AIState, (uint8)EAIState::Patrol);

	DebugColor = FLinearColor::Gray;

	if (GetWorldTimerManager().IsTimerActive(ExitCombatTimer)) GetWorldTimerManager().ClearTimer(ExitCombatTimer);

	GetWorldTimerManager().SetTimer(
		ExitCombatTimer,
		this,
		&AEnemyAIController::ExitCombatTimerFinished,
		ExitCombatSecond
	);

	SetFocus(nullptr);
}

void AEnemyAIController::StartRegenStamina(float Stamina)
{
	bIsRegenStamina = true;
	TargetStamina = Stamina;

	if (Blackboard)
		Blackboard->SetValueAsEnum(Key_AIState, (uint8)EAIState::Regen);
}

void AEnemyAIController::RegenToCombat()
{
	bIsRegenStamina = false;

	if (Blackboard)
		Blackboard->SetValueAsEnum(Key_AIState, (uint8)EAIState::Combat);
}

void AEnemyAIController::UpdateRegenLocation(AActor* AIActor, AActor* PlayerActor, float RegenRange)
{
	if (PlayerActor == nullptr || AIActor == nullptr) return;

	const auto Direction_Player_AI = UKismetMathLibrary::GetDirectionUnitVector(
		PlayerActor->GetActorLocation(),
		AIActor->GetActorLocation());

	const auto RegenLocation = PlayerActor->GetActorLocation() + (Direction_Player_AI * RegenRange);

	if (Blackboard)
		Blackboard->SetValueAsVector(Key_RegenLocation, RegenLocation);

}

ETeamAttitude::Type AEnemyAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	if (APawn const* OtherPawn = Cast<APawn>(&Other))
	{
		if (auto const TeamAgent = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController()))
		{
			if (TeamAgent->GetGenericTeamId() == GetGenericTeamId())
			{
				return ETeamAttitude::Friendly;
			}
			else
			{
				return ETeamAttitude::Hostile;
			}
		}
	}
	return ETeamAttitude::Neutral;
}

FGenericTeamId AEnemyAIController::GetGenericTeamId() const
{
	return TeamId;
}


void AEnemyAIController::ExitCombatTimerFinished()
{
	DebugColor = FLinearColor::Green;

	if (AIPerceptionComponent && AIPerceptionComponent->OnTargetPerceptionUpdated.IsBound() == false)
	{
		AIPerceptionComponent->OnTargetPerceptionUpdated.AddDynamic
			(this, &AEnemyAIController::HandleTargetPerceptionUpdate);
	}
}

