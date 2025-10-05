// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseAnimInstance.generated.h"

/**
 * 
 */
class UCharacterMovementComponent;
UCLASS()
class MYPROJECT_API UBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
protected:
	UPROPERTY(EditDefaultsOnly,Category="Ground Speed In Anim Instance")
	float Speed;
	
	UPROPERTY(BlueprintReadOnly,Category="Should Move in AnimInstance")
	bool shouldMove = false;
private:
	ACharacter* Character = nullptr;
	UCharacterMovementComponent* MovementComponent;
	
};
