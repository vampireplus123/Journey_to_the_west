// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/HealthComponent.h"
#include "DataAsset/BaseCharacterDataAsset.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	
	PrimaryComponentTick.bCanEverTick = false;
}

void UHealthComponent::SetupComponent(UBaseCharacterDataAsset* BCD)
{
	if (BCD == nullptr) return;
	Health = BCD-> Health;
	MaxHealth = BCD-> MaxHealth;
}

void UHealthComponent::UpdateHealthByDamage(float DamageAmount)
{
	Health = FMath::Max(Health-DamageAmount,0.0f);
}

void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
}
