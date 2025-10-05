// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/AN_EndAttack.h"
#include "Interfaces/AttackInterface.h"

void UAN_EndAttack::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);
	if (MeshComp == nullptr)
	{
		return;
	}
	
	auto AttackInterface = TScriptInterface<IAttackInterface>(MeshComp->GetOwner());
	if(AttackInterface)
	{
		AttackInterface->IAnimNotifyEndAttack();
	}
}
