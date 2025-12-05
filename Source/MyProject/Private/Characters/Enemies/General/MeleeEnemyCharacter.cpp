// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Enemies/General/MeleeEnemyCharacter.h"

#include "Controllers/EnemyAIController.h"
#include "DataAssets/BaseEnemyDataAsset.h"


void AMeleeEnemyCharacter::PerformCombo()
{
	Super::PerformCombo();

	if (!EnemyDataAsset || EnemyDataAsset->MeleeAttackMontage.Num() == 0)
		return;
	UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
	if (!AnimInstance) return; // không có AnimInstance thì thôi

	// Kiểm tra có đang chơi montage không
	if (AnimInstance->IsAnyMontagePlaying())
	{
		UE_LOG(LogTemp, Warning, TEXT("Montage đang chơi, chưa play combo mới"));
		return;
	}

	// Stop movement trước khi play
	if (AAIController* AICon = Cast<AAIController>(GetController()))
	{
		AICon->StopMovement();
	}

	// Chọn montage theo ComboIndex
	const TArray<UAnimMontage*>& Montages = EnemyDataAsset->MeleeAttackMontage;
	UAnimMontage* MontageToPlay = Montages[ComboIndex % Montages.Num()];

	if (MontageToPlay)
	{
		PlayAnimMontage(MontageToPlay);
		UE_LOG(LogTemp, Warning, TEXT("PerformCombo: Playing combo index %d - %s"), ComboIndex, *MontageToPlay->GetName());
		ComboIndex++;
	}
}
