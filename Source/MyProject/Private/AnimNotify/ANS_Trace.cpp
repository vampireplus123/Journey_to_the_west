// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify/ANS_Trace.h"
#include "Interfaces/AttackInterface.h"
void UANS_Trace::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
	if (!MeshComp) return;
	AttackInterface = TScriptInterface<IAttackInterface>(MeshComp->GetOwner());
	if (AttackInterface)
	{
		AttackInterface-> TraceHitBegin();
	}
}

void UANS_Trace::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);
	if (AttackInterface)
	{
		AttackInterface->AnimNotifyStateTraceHit();
	}
}
