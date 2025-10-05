// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Kismet/KismetMathLibrary.h"

void UBaseAnimInstance::NativeInitializeAnimation()
{
	Character =  Cast<ACharacter>(TryGetPawnOwner());
	if (Character)
	{
		MovementComponent = Character->GetCharacterMovement();
	}
	
}

void UBaseAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	if (MovementComponent != nullptr)
	{
		Speed = UKismetMathLibrary::VSizeXY(MovementComponent->Velocity);
		shouldMove = Speed > 0.f;
	}
	return;
}
	
