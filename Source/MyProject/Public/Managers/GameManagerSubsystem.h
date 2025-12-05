#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameManagerSubsystem.generated.h"

// Delegate để bắn sự kiện cho Blueprint (Level BP) biết là thắng rồi -> Chiếu phim đi
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameWinEvent);

UCLASS()
class MYPROJECT_API UGameManagerSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	// Hàm Static để gọi nhanh: UGameManagerSubsystem::Get(this)
	static UGameManagerSubsystem* Get(const UObject* WorldContextObject);

	// --- EVENT ---
	// Blueprint sẽ lắng nghe cái này
	UPROPERTY(BlueprintAssignable, Category = "Game Manager")
	FOnGameWinEvent OnGameWin;
	// HÀM CHO NÚT "RESTART" (Game Over Screen)
	UFUNCTION(BlueprintCallable, Category = "Game Flow")
	void RestartGame(); 
    
	// HÀM CHO NÚT "START GAME" (Main Menu)
	UFUNCTION(BlueprintCallable, Category = "Game Flow")
	void StartNewGame(FName GameplayLevelName);

	// --- GAMEPLAY LOGIC ---
	// Gọi khi Enemy chết
	void AddElimination();
	
	// Gọi khi Player chết
	void OnPlayerDied();

	// Hàm này để Level Blueprint gọi sau khi chiếu hết phim MP4
	UFUNCTION(BlueprintCallable, Category = "Game Manager")
	void LoadNextLevel(FName LevelName);

	// Hàm để reset lại các thông số khi qua màn mới (nếu cần)
	void ResetGameStats();

protected:
	// Xử lý logic nội bộ
	void TriggerGameOver(bool bIsWin);

	// --- VARIABLES ---
	int32 KillCount = 0;
	
	// Số lượng quái cần giết để thắng (Bạn có thể sửa số này)
	int32 TargetKills = 1; 

	// Cờ chặn bug (ví dụ: chết rồi thì không thể thắng, và ngược lại)
	bool bHasGameEnded = false;
	
};