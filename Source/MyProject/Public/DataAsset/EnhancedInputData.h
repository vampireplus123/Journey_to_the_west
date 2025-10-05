// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnhancedInputData.generated.h"

/**
 * 
 */
class UInputMappingContext;
class UInputAction;
class UAnimMontage;
UCLASS()
class MYPROJECT_API UEnhancedInputData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly,Category="Enhanced Input Component")
	UInputMappingContext* InputContext;

	UPROPERTY(EditDefaultsOnly,Category="Binding Action")
	UInputAction* InputAction_Look;
	UPROPERTY(EditDefaultsOnly,Category="Binding Action")
	UInputAction* InputAction_Move;
	UPROPERTY(EditDefaultsOnly,Category="Binding Action")
	UInputAction* InputAction_Attack;
};
