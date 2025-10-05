// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.generated.h"

/**
 * 
 */
class UProgressBar;
class UTextBlock;
UCLASS()
class MYPROJECT_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void Update_HealthBar_Player(float health, float maxHealth);
	
	void Update_HealthBar_Enemy(float health, float maxHealth);
public:
	void ShowEnemyStats();
	void HideEnemyStats();
private:
	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthBar_Player;
	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthBar_Enemy;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* HealthText_Enemy;
};
