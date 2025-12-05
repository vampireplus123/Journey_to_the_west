// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/HealthComponent.h"

#include "DataAssets/BaseCharacterData.h"
#include "DataAssets/BaseEnemyDataAsset.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}

void UHealthComponent::SetupComponent(UDataAsset* DataAsset)
{
	if (!DataAsset) return;

	// Nếu là DataAsset của Player
	if (UBaseCharacterData* PlayerData = Cast<UBaseCharacterData>(DataAsset))
	{
		Health = PlayerData->Health;
		MaxHealth = PlayerData->MaxHealth;
	}
	// Nếu là DataAsset của Enemy
	else if (UBaseEnemyDataAsset* EnemyData = Cast<UBaseEnemyDataAsset>(DataAsset))
	{
		Health = EnemyData->Health;
		MaxHealth = EnemyData->MaxHealth;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SetupComponent: DataAsset không hợp lệ!"));
	}
}
void UHealthComponent::ApplyDamage(float Damage, AActor* DamageCauser)
{
	if (Damage <= 0.f || IsDead()) return;

	// In ra máu hiện tại của đối tượng nhận damage (Trước khi nhận damage)
	if (GEngine)
	{
		FString Message = FString::Printf(TEXT("Current Health: %f, Damage: %f"), Health, Damage);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, Message);
	}

	Health = FMath::Clamp(Health - Damage, 0.f, MaxHealth);

	// In ra máu sau khi nhận damage
	if (GEngine)
	{
		FString MessageAfter = FString::Printf(TEXT("Health after Damage: %f"), Health);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, MessageAfter);
	}

	OnHealthChanged.Broadcast(Health);

	if (Health <= 0.f)
	{
		OnDeath.Broadcast();
	}
}


void UHealthComponent::UpdateHealthByDamage(float Damage)
{
	// Health = FMath::Max(Health - Damage, 0.0f); // <-- Code cũ chỉ trừ máu âm thầm
    
	// Gọi ApplyDamage để tái sử dụng logic (trừ máu + broadcast event + check dead)
	ApplyDamage(Damage, nullptr); 
}

void UHealthComponent::ApplyHealing(float HealAmount)
{
	if (Health <= 0.0f) return; 

	if (GEngine) 
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, TEXT("--- 1. Applying Health Change ---"));

	Health = FMath::Clamp(Health + HealAmount, 0.0f, MaxHealth);

	OnHealthChanged.Broadcast(Health); // <--- Điểm kích hoạt

	if (GEngine) 
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, TEXT("--- 2. Delegate Broadcasted! ---"));
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}




