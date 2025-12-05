#include "Widgets/MainMenuWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Managers/GameManagerSubsystem.h" // Cần Subsystem để quản lý Game Flow

void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Bind nút Start (Menu Chính)
	if (StartGameButton)
	{
		StartGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnStartClicked);
	}
    
	// Bind nút Restart (Game Over Screen)
	if (RestartGameButton)
	{
		RestartGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnRestartClicked);
	}

	// Bind nút Quit
	if (QuitGameButton)
	{
		QuitGameButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnQuitClicked);
	}
}

void UMainMenuWidget::OnStartClicked()
{
	// Báo GameManager bắt đầu game và truyền tên map Gameplay
	if (UGameManagerSubsystem* GM = UGameManagerSubsystem::Get(this))
	{
		// Hàm StartNewGame cần được thêm vào GameManagerSubsystem.h
		GM->StartNewGame(GameplayMapName); 
	}
}

void UMainMenuWidget::OnRestartClicked()
{
	// Báo GameManager khởi động lại màn chơi hiện tại
	if (UGameManagerSubsystem* GM = UGameManagerSubsystem::Get(this))
	{
		// Hàm RestartGame đã có sẵn trong GameManagerSubsystem
		GM->RestartGame();
	}
}

void UMainMenuWidget::OnQuitClicked()
{
	// Logic thoát game
	if (APlayerController* PC = GetOwningPlayer())
	{
		UKismetSystemLibrary::QuitGame(this, PC, EQuitPreference::Quit, true);
	}
}