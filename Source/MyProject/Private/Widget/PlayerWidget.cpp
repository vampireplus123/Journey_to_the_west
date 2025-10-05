// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/PlayerWidget.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UPlayerWidget::Update_HealthBar_Player(float health, float maxHealth)
{
	if (HealthBar_Player)
	{
		HealthBar_Player->SetPercent(health/maxHealth);
	}
}

void UPlayerWidget::Update_HealthBar_Enemy(float health, float maxHealth)
{
	if (HealthBar_Enemy)
	{
		HealthBar_Enemy->SetPercent(health/maxHealth);
	}
	FString HealthSring = FString::Printf(TEXT("%d / %d"), FMath::CeilToInt(health), FMath::CeilToInt(maxHealth));
	HealthText_Enemy->SetText(FText::FromString(HealthSring));
}

void UPlayerWidget::ShowEnemyStats()
{
	if (HealthBar_Enemy && HealthText_Enemy)
	{
		HealthBar_Enemy->SetVisibility(ESlateVisibility::Visible);
		HealthText_Enemy->SetVisibility(ESlateVisibility::Visible);
	}
}

void UPlayerWidget::HideEnemyStats()
{
	if (HealthBar_Enemy && HealthText_Enemy)
	{
		HealthBar_Enemy->SetVisibility(ESlateVisibility::Hidden);
		HealthText_Enemy->SetVisibility(ESlateVisibility::Hidden);
	}
}
