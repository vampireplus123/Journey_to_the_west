// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
class UButton;
UCLASS()
class MYPROJECT_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void NativeConstruct() override; // Giống BeginPlay cho Widget

	// BindWidget: BẮT BUỘC đặt tên nút trong Blueprint TRÙNG KHỚP với tên biến này
	UPROPERTY(meta = (BindWidget))
	UButton* StartGameButton; // Nút Dùng cho Menu Chính

	UPROPERTY(meta = (BindWidget))
	UButton* RestartGameButton; // Nút Dùng cho Màn hình Game Over

	UPROPERTY(meta = (BindWidget))
	UButton* QuitGameButton;
    
	// Biến để gán tên map gameplay trong Editor (dễ tái sử dụng)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Flow")
	FName GameplayMapName = "Lvl_Gameplay"; 

private:
	UFUNCTION()
	void OnStartClicked();

	UFUNCTION()
	void OnRestartClicked();
    
	UFUNCTION()
	void OnQuitClicked();
};
