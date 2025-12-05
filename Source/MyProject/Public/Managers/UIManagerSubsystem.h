#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIManagerSubsystem.generated.h"

// Forward Declaration
class UPlayer_PlayerWidget;
class UEnemyUserWidget;

UCLASS()
class MYPROJECT_API UUIManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	static UUIManagerSubsystem* Get(const UObject* WorldContextObject);

	// --- SETUP ---
	UFUNCTION(BlueprintCallable)
	void InitializeUI(TSubclassOf<UPlayer_PlayerWidget> PlayerClass, TSubclassOf<UEnemyUserWidget> BossClass);

	// --- PLAYER UI ---
	void CreatePlayerHUD();
	void UpdatePlayerHealth(float Current, float Max);
	void UpdatePlayerStamina(float Current, float Max);

	// --- BOSS UI (Chỉ dành cho Boss, Quái thường tự lo bằng Component) ---
	void ShowBossHUD(bool bVisible); 
	void UpdateBossHealth(float Current, float Max);

protected:
	// Instance Widget đang hiện
	UPROPERTY()
	UPlayer_PlayerWidget* PlayerWidget;

	UPROPERTY()
	UEnemyUserWidget* BossWidget;

	// Class Reference để tạo Widget
	UPROPERTY()
	TSubclassOf<UPlayer_PlayerWidget> PlayerWidgetClassRef;

	UPROPERTY()
	TSubclassOf<UEnemyUserWidget> BossWidgetClassRef;
};