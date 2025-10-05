

#include "Components/AttackComponent.h"
#include "GameFramework/Character.h"
#include "DataAsset/BaseCharacterDataAsset.h"
#include "Interfaces/AttackInterface.h"
#include "Kismet/KismetSystemLibrary.h"
#include "DataAsset/BaseCharacterDataAsset.h"

UAttackComponent::UAttackComponent()
{
	
	PrimaryComponentTick.bCanEverTick = false;
}
// Called when the game starts
void UAttackComponent::BeginPlay()
{
	Super::BeginPlay();
	AttackInterface = TScriptInterface<IAttackInterface>(GetOwner());
}

void UAttackComponent::Attack()
{
	PlayAttackMontage = CharacterDataAsset->AttackMontage;
	if (AttackInterface && CharacterDataAsset)
	{
		AttackInterface->IPlayAttackMontage(PlayAttackMontage);
	}
	isAttack = true;
}

void UAttackComponent::RequestAttack()
{
	if (isAttack)
	{
		return;
	}
	Attack();
}
void UAttackComponent::RequestAttack(UAnimMontage* AdditionalAttackMontage)
{
	if (isAttack || AdditionalAttackMontage == nullptr || !AttackInterface) return;

	PlayAttackMontage = AdditionalAttackMontage;
	AttackInterface->IPlayAttackMontage(PlayAttackMontage);
	isAttack = true;
}

void UAttackComponent::SettupAttackComponent(UBaseCharacterDataAsset* BCD)
{
	CharacterDataAsset = BCD;
}
void UAttackComponent::EndAttack()
{
	isAttack = false;
}

void UAttackComponent::HandleHitResult(const FHitResult& Result)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage
		(
			-1,
			1.0f,
			FColor::Red,
			Result.BoneName.ToString()
		);
		hitActors.Emplace(Result.GetActor());
	}
	if (HitSomethingDelegate.IsBound())
	{
		HitSomethingDelegate.Execute(Result);
	}
}

void UAttackComponent::TraceHit()
{
	if (CharacterDataAsset == nullptr)
	{
		return;
	}
	if (AttackInterface==nullptr)
	{
		return;
	}
	TArray<FHitResult> HitsResults;
	const FVector StartLocation = AttackInterface->IGetSocketLocation(CharacterDataAsset->StartPoint);
	const FVector EndLocation = AttackInterface->IGetSocketLocation(CharacterDataAsset->EndPoint);

	auto isDrawDebugTrace = CharacterDataAsset->bDrawTraceHit ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None;
	bool bHit = UKismetSystemLibrary::SphereTraceMultiForObjects(
		this,
		StartLocation,
		EndLocation,
		CharacterDataAsset->TraceRadius,
		CharacterDataAsset->TraceObjectTyoe,
		false,
		CharacterDataAsset->ActorsToIgnore,
		isDrawDebugTrace,
		HitsResults,
		true,
		FLinearColor::Red,
		FLinearColor::Green,
		CharacterDataAsset->DrawTime
	);
	if (!bHit)
	{
		return;
	}
	for (const FHitResult& Result : HitsResults)
	{
		if (hitActors.Contains(Result.GetActor()))
		{
			continue;
		}
		HandleHitResult(Result);
	}
}

void UAttackComponent::SetUpTraceHit()
{
	hitActors.Empty();
}




