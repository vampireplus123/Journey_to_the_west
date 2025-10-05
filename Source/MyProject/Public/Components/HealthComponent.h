// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

class UBaseCharacterDataAsset;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UHealthComponent();
	/*virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;*/
	void SetupComponent(UBaseCharacterDataAsset* BCD);
	void UpdateHealthByDamage(float DamageAmount);

protected:
	
	virtual void BeginPlay() override;
	
public:
	float Health = 0.0f;
	float MaxHealth = 100.0f;
		
};
