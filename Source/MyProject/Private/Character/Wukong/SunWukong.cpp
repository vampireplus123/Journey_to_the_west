// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Wukong/SunWukong.h"

#include "Components/AttackComponent.h"
#include "Components/HealthComponent.h"
#include "DataAsset/SunWukongDataAsset.h"
#include "Components/InputComponent.h"
#include "DataAsset/Characters/SunWukong/SunWukongEnhancedInputData.h"
#include "Kismet/GameplayStatics.h"
#include "Widget/PlayerWidget.h"



void ASunWukong::BeginPlay()
{
	Super::BeginPlay();
	PlayerWidget = CreateWidget<UPlayerWidget>(GetWorld(),PlayerWidgetClass);
	if (PlayerWidget && HealthComponent)
	{
		PlayerWidget->AddToViewport();
		PlayerWidget->Update_HealthBar_Player(HealthComponent->Health,HealthComponent->MaxHealth);
		PlayerWidget->HideEnemyStats();
	}
}
void ASunWukong::I_EnterCombat(float EnemyHealth,float EnemyMaxHeal)
{
	Super::I_EnterCombat( EnemyHealth, EnemyMaxHeal);
	if (PlayerWidget)
	{
		PlayerWidget->ShowEnemyStats();
		PlayerWidget->Update_HealthBar_Enemy(EnemyHealth,EnemyMaxHeal);
	}
}

void ASunWukong::I_HitTarget(float TargetHealth, float MaxTargetHealth)
{
	Super::I_HitTarget(TargetHealth, MaxTargetHealth);
	if (PlayerWidget)
	{
		PlayerWidget->Update_HealthBar_Enemy(TargetHealth,MaxTargetHealth);
	}
}

void ASunWukong::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	Input->BindAction(SunWukongEnhancedInputData->IA_Second_Attack, ETriggerEvent::Triggered, this, &ASunWukong::SecondAttack);
	Input->BindAction(SunWukongEnhancedInputData->IA_Third_Attack, ETriggerEvent::Triggered, this, &ASunWukong::ThirdAttack);
}

float ASunWukong::ApplyDamage()
{
	Super::ApplyDamage();
	return WukongDamage;
}

void ASunWukong::HitImpactEffect(FVector HitLocation)
{
	Super::HitImpactEffect(HitLocation);
	if (SunWukongDataAsset)
	{
		UGameplayStatics::SpawnEmitterAtLocation(
		GetWorld(),
		SunWukongDataAsset->WukongHitImpact,
		HitLocation
		);
	}
}

void ASunWukong::SecondAttack()
{
	
	if (SunWukongDataAsset == nullptr) return;
	if (SunWukongDataAsset->WukongOtherAttackMontages.IsValidIndex(0))
	{
		AttackComponent->RequestAttack(SunWukongDataAsset->WukongOtherAttackMontages[0]);
	}
}

void ASunWukong::ThirdAttack()
{
	if (SunWukongDataAsset == nullptr) return;
	if (SunWukongDataAsset->WukongOtherAttackMontages.IsValidIndex(1))
	{
		AttackComponent->RequestAttack(SunWukongDataAsset->WukongOtherAttackMontages[1]);
	}
}



