#include "Managers/UIManagerSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Widgets/Player_PlayerWidget.h"
#include "Widgets/EnemyUserWidget.h"

UUIManagerSubsystem* UUIManagerSubsystem::Get(const UObject* WorldContextObject)
{
	if (!WorldContextObject) return nullptr;
	UGameInstance* GI = UGameplayStatics::GetGameInstance(WorldContextObject);
	return GI ? GI->GetSubsystem<UUIManagerSubsystem>() : nullptr;
}

void UUIManagerSubsystem::InitializeUI(TSubclassOf<UPlayer_PlayerWidget> PlayerClass, TSubclassOf<UEnemyUserWidget> BossClass)
{
	PlayerWidgetClassRef = PlayerClass;
	BossWidgetClassRef = BossClass;

	// Vào game là hiện HUD Player luôn
	CreatePlayerHUD();
}


void UUIManagerSubsystem::CreatePlayerHUD()
{
	if (!PlayerWidgetClassRef) return;

	if (!PlayerWidget)
	{
		PlayerWidget = CreateWidget<UPlayer_PlayerWidget>(GetWorld(), PlayerWidgetClassRef);
	}

	if (PlayerWidget && !PlayerWidget->IsInViewport())
	{
		PlayerWidget->AddToViewport();
	}
}

void UUIManagerSubsystem::UpdatePlayerHealth(float Current, float Max)
{
	if (PlayerWidget) PlayerWidget->UpdateHealth(Current, Max);
}

void UUIManagerSubsystem::UpdatePlayerStamina(float Current, float Max)
{
	if (PlayerWidget) PlayerWidget->UpdateStamina(Current, Max);
}


void UUIManagerSubsystem::ShowBossHUD(bool bVisible)
{
	if (bVisible)
	{
		// 1. Tạo mới nếu chưa có (Lazy Loading)
		if (!BossWidget && BossWidgetClassRef)
		{
			BossWidget = CreateWidget<UEnemyUserWidget>(GetWorld(), BossWidgetClassRef);
		}

		// 2. Hiện lên màn hình
		if (BossWidget && !BossWidget->IsInViewport())
		{
			BossWidget->AddToViewport();
		}
	}
	else
	{
		// 3. Ẩn đi
		if (BossWidget && BossWidget->IsInViewport())
		{
			BossWidget->RemoveFromParent();
		}
	}
}

void UUIManagerSubsystem::UpdateBossHealth(float Current, float Max)
{
	if (BossWidget)
	{
		BossWidget->UpdateHealth(Current, Max);
	}
}