// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ANS_Trace.generated.h"

/**
 * 
 */
class IAttackInterface;
UCLASS()
class MYPROJECT_API UANS_Trace : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	virtual void NotifyBegin(
		USkeletalMeshComponent * MeshComp,
		UAnimSequenceBase * Animation,
		float TotalDuration,
		const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyTick(
		USkeletalMeshComponent * MeshComp,
		UAnimSequenceBase * Animation,
		float FrameDeltaTime,
		const FAnimNotifyEventReference& EventReference) override;
private:
	UPROPERTY(EditDefaultsOnly,Category="Attack Interface")
	TScriptInterface<IAttackInterface> AttackInterface;
};
