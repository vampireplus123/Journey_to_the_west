// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Player_PlayerWidget.generated.h"

class UProgressBar;
class UTextBlock;
/**
 * 
 */
UCLASS()
class MYPROJECT_API UPlayer_PlayerWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	// Event để Blueprint bắt lấy và cập nhật thanh máu
	// (Không cần BindWidget trong C++ nữa)
	UFUNCTION(BlueprintImplementableEvent, Category = "Player UI")
	void UpdateHealth(float CurrentHealth, float MaxHealth);

	UFUNCTION(BlueprintImplementableEvent, Category = "Player UI")
	void UpdateStamina(float CurrentStamina, float MaxStamina);

	UFUNCTION(BlueprintImplementableEvent, Category = "Player UI")
	void UpdateEliminations(int32 Count);
};
