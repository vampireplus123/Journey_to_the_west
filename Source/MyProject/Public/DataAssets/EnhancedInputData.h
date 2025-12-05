// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnhancedInputData.generated.h"

/**
 * 
 */
class UInputAction;
class UInputMappingContext;
UCLASS()
class MYPROJECT_API UEnhancedInputData : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "Mapping Context")
	UInputMappingContext* InputMappingContext;
	
	UPROPERTY(EditDefaultsOnly, Category = "Mapping Context")
	UInputAction* IA_Look;
	
	UPROPERTY(EditDefaultsOnly, Category = "Mapping Context")
	UInputAction* IA_Move;
	
	UPROPERTY(EditDefaultsOnly, Category = "Mapping Context")
	UInputAction* IA_Jump;
	
	UPROPERTY(EditDefaultsOnly, Category = "Mapping Context")
	UInputAction* IA_Attack;
	
	UPROPERTY(EditDefaultsOnly, Category = "Enhanced Input")
	UInputAction* IA_StrongAttack;
	
	UPROPERTY(EditDefaultsOnly, Category = "Enhanced Input")
	UInputAction* IA_ExitCombat;
	UPROPERTY(EditDefaultsOnly, Category = "Enhanced Input")
	UInputAction* IA_Clone;
	UPROPERTY(EditDefaultsOnly, Category = "Enhanced Input")
	UInputAction* IA_Health;
};
