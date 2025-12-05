// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnemyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UEnemyUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	// Hàm này để Blueprint tự nối dây (Set Percent)
	UFUNCTION(BlueprintImplementableEvent, Category = "Enemy UI")
	void UpdateHealth(float CurrentHealth, float MaxHealth);

	// (Tùy chọn) Hiện tên quái
	UFUNCTION(BlueprintImplementableEvent, Category = "Enemy UI")
	void SetEnemyName(const FString& Name);
};
