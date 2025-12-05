#include "Managers/GameManagerSubsystem.h"
#include "Kismet/GameplayStatics.h"

UGameManagerSubsystem* UGameManagerSubsystem::Get(const UObject* WorldContextObject)
{
	if (!WorldContextObject) return nullptr;
	if (UGameInstance* GI = UGameplayStatics::GetGameInstance(WorldContextObject))
	{
		return GI->GetSubsystem<UGameManagerSubsystem>();
	}
	return nullptr;
}

void UGameManagerSubsystem::ResetGameStats()
{
	KillCount = 0;
	bHasGameEnded = false;
	UE_LOG(LogTemp, Warning, TEXT("=== GAME RESET ==="));
}

void UGameManagerSubsystem::AddElimination()
{
	if (bHasGameEnded) return;

	KillCount++;
	
	// In thông báo lên màn hình (thay cho UI)
	FString Msg = FString::Printf(TEXT("Enemy Killed: %d / %d"), KillCount, TargetKills);
	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, Msg);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);

	if (KillCount >= TargetKills)
	{
		TriggerGameOver(true); // Thắng
	}
}

void UGameManagerSubsystem::OnPlayerDied()
{
	if (bHasGameEnded) return;
	TriggerGameOver(false); // Thua
}

void UGameManagerSubsystem::TriggerGameOver(bool bIsWin)
{
	// Nếu game đã kết thúc rồi thì không làm gì nữa (tránh spam)
	if (bHasGameEnded) return;
	bHasGameEnded = true;

	if (bIsWin)
	{
		// Xử lý thắng (để sau)
		if (GEngine) 
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("YOU WIN!"));
	}
	else
	{
		// --- XỬ LÝ THUA (PLAYER LOST) ---
        
		// 1. In dòng chữ đỏ lên màn hình
		if (GEngine) 
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("PLAYER LOST - GAME OVER"));
		}

		// 2. Log ra cửa sổ Output để kiểm tra
		UE_LOG(LogTemp, Error, TEXT("PLAYER LOST"));

		// 3. Tự động Restart sau 3 giây (để test vòng lặp game)
		FTimerHandle TimerHandle;
		if (UWorld* World = GetWorld())
		{
			World->GetTimerManager().SetTimer(TimerHandle, [this]()
			{
				// Reset biến cờ
				bHasGameEnded = false; 
				KillCount = 0;
                
				// Load lại level hiện tại
				UGameplayStatics::OpenLevel(this, FName(*UGameplayStatics::GetCurrentLevelName(this)));
			}, 3.0f, false);
		}
	}
}

void UGameManagerSubsystem::LoadNextLevel(FName LevelName)
{
	ResetGameStats();
	
	// Mở khóa Input (phòng trường hợp bị khóa lúc xem phim)
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		PC->SetIgnoreMoveInput(false);
		PC->SetIgnoreLookInput(false);
	}

	UGameplayStatics::OpenLevel(this, LevelName);
}
void UGameManagerSubsystem::RestartGame()
{
	// Reset biến trạng thái
	bHasGameEnded = false;

	// Bỏ Pause nếu đang Pause
	UGameplayStatics::SetGamePaused(this, false);

	// Load lại Map hiện tại
	FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(this);
	UGameplayStatics::OpenLevel(this, FName(*CurrentLevelName));
	
	// (Bạn có thể thêm logic ResetGameStats() ở đây nếu cần)
}

void UGameManagerSubsystem::StartNewGame(FName GameplayLevelName)
{
	// Đảm bảo LevelName hợp lệ
	if (GameplayLevelName.IsNone()) return;

	// Ẩn Menu UI (Nếu có)
	if (UWorld* World = GetWorld())
	{
		if (APlayerController* PC = World->GetFirstPlayerController())
		{
			PC->SetShowMouseCursor(false);
			PC->SetInputMode(FInputModeGameOnly()); // Chuyển về chế độ Input trong game
		}
	}

	// Load level Gameplay
	UGameplayStatics::OpenLevel(this, GameplayLevelName);
}