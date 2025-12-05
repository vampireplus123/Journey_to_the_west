#include "Component/AttackComponent.h"
#include "GameFramework/Character.h"
#include "DataAssets//BaseCharacterData.h"
#include "Interface/AttackInterface.h"

#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"

UAttackComponent::UAttackComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UAttackComponent::BeginPlay()
{
	Super::BeginPlay();
	AttackInterface = TScriptInterface<IAttackInterface>(GetOwner());
}

void UAttackComponent::Attack()
{
	if (AttackInterface && BaseCharacterData && GetCorrectAttackMontage())
	{
		AttackInterface->I_PlayAttackMontage(GetCorrectAttackMontage());
		AttackInterface->I_PlayStartAttackSound();
		
		bIsAttacking = true;
		bCanCombo = false;
		
		if (RequestAttackType == EAttackType::Normal) AttackIndex = (AttackIndex + 1) % BaseCharacterData->AttackMontages.Num();

		SuccessAttackCost = BaseCharacterData->CostMap[RequestAttackType];
		SuccessAttackDamage = BaseCharacterData->DamageMap[RequestAttackType];

		if (RequestAttackType == EAttackType::Normal)
			AttackCount_Normal++;
		else
			AttackCount_Normal = 0;

		
		AttackInterface->I_HandleAttackSuccess();
	}
}

void UAttackComponent::RequestAttack()
{
	if (CanAttack())
	{
		Attack();
	} else
	{
		bSavedAttack = true;
	}
}

bool UAttackComponent::CanAttack() const
{
	if (BaseCharacterData == nullptr) return false;

	const bool A = bIsAttacking == false || bCanCombo == true;
	const bool B = AttackInterface->I_DoesReadyAttack();
	const bool C = AttackInterface->I_HasEnoughStamina(BaseCharacterData->CostMap[RequestAttackType]);

	if (C == false) AttackInterface->I_RequestAttackFailed_Stamina(BaseCharacterData->CostMap[RequestAttackType]);
	
	return A && B && C;
}

void UAttackComponent::HandleHitResult(const FHitResult& Result)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			1.0f,
			FColor::Cyan,
			Result.BoneName.ToString()
		);
	}

	if (HitSomethingDelegate.IsBound()) HitSomethingDelegate.Execute(Result);
}

UAnimMontage* UAttackComponent::GetCorrectAttackMontage()
{
	if (BaseCharacterData == nullptr) return nullptr;
	if (RequestAttackType == EAttackType::Strong) return BaseCharacterData->AttackMontage_Strong;
    
    // Normal Attack
    
    if (BaseCharacterData->AttackMontages.IsEmpty()) return nullptr;
    return BaseCharacterData->AttackMontages[AttackIndex];
    
}

/*
void UAttackComponent::TraceHit()
{
	if (AttackInterface == nullptr) return;
	if (BaseCharacterData == nullptr) return;

	const FVector& StartLocation = AttackInterface->I_GetSocketLocation(BaseCharacterData->TraceStart);
	const FVector& EndLocation = AttackInterface->I_GetSocketLocation(BaseCharacterData->TraceEnd);

	TArray<FHitResult> HitResults;
	HitActors.Empty();
	
	bool doHitSomthing = UKismetSystemLibrary::SphereTraceMultiForObjects(
		this,
		StartLocation,
		EndLocation,
		BaseCharacterData->TraceRadius,
		BaseCharacterData->TraceObjectType,
		false,
		BaseCharacterData->ActorToIgnores,
		BaseCharacterData->bDrawDebugTrace ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
		HitResults,
		true,
		FLinearColor::Red,
		FLinearColor::Green,
		BaseCharacterData->DrawTime
	);

	if (doHitSomthing == false) return;

	for (const FHitResult& Result : HitResults)
	{
		if (HitActors.Contains(Result.GetActor())) continue;

		HandleHitResult(Result);
		HitActors.Emplace(Result.GetActor());
	}
}
*/
void UAttackComponent::TraceHit()
{
    if (AttackInterface == nullptr) return;
    if (BaseCharacterData == nullptr) return;

    // ========= GIỚI HẠN TẦN SUẤT TRACE =========
    const float CurrentTime = GetWorld()->GetTimeSeconds();
    if (CurrentTime - LastTraceTime < TraceInterval)
    {
        return; // chưa tới lúc trace tiếp
    }
    LastTraceTime = CurrentTime;
    // ===========================================

    const FVector StartLocation = AttackInterface->I_GetSocketLocation(BaseCharacterData->TraceStart);
    const FVector EndLocation   = AttackInterface->I_GetSocketLocation(BaseCharacterData->TraceEnd);

    CachedHitResults.Reset(); // không tạo TArray mới

    bool bHit = UKismetSystemLibrary::SphereTraceMultiForObjects(
        this,
        StartLocation,
        EndLocation,
        BaseCharacterData->TraceRadius,
        BaseCharacterData->TraceObjectType,
        false,
        BaseCharacterData->ActorToIgnores,
        BaseCharacterData->bDrawDebugTrace ? EDrawDebugTrace::ForDuration : EDrawDebugTrace::None,
        CachedHitResults,
        true,
        FLinearColor::Red,
        FLinearColor::Green,
        BaseCharacterData->DrawTime
    );

    if (!bHit) return;

    for (const FHitResult& Result : CachedHitResults)
    {
        AActor* HitActor = Result.GetActor();
        if (!HitActor) continue;

        if (HitActors.Contains(HitActor))
            continue;

        HitActors.Add(HitActor);
        HandleHitResult(Result);
    }
}

void UAttackComponent::SetupAttackComponent(UBaseCharacterData* BCD)
{
	BaseCharacterData = BCD;
}

void UAttackComponent::AN_EndAttack()
{
	bIsAttacking = false;
	bCanCombo = false;
	bSavedAttack = false;
	AttackIndex = 0;
}

void UAttackComponent::AN_Combo()
{
	bCanCombo = true;
	if (bSavedAttack)
	{
		RequestAttack();
		bSavedAttack = false;
	}
}

void UAttackComponent::SetupTraceHit()
{
	HitActors.Empty();
}
