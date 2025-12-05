
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Enum/AttackType.h"
#include "AttackComponent.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FHitSomethingDelegate, const FHitResult&, HitResult);

class ACharacter;
class UAnimMontage;
class UBaseCharacterData;
class IAttackInterface;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UAttackComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAttackComponent();
	// virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void RequestAttack();
	void TraceHit();
	void SetupAttackComponent(UBaseCharacterData* BCD);
	void AN_EndAttack();
	void AN_Combo();
	void SetupTraceHit();

protected:
	virtual void BeginPlay() override;
	
private:
	void Attack();
	void HandleHitResult(const FHitResult& Result);
	UAnimMontage* GetCorrectAttackMontage();
	bool CanAttack() const;
	
public:
	FHitSomethingDelegate HitSomethingDelegate;
	EAttackType RequestAttackType = EAttackType::Normal;
	float SuccessAttackCost = 0.0f;
	float SuccessAttackDamage = 0.0f;
	
	bool bIsAttacking = false;
	int AttackCount_Normal = 0;

	
private:
	UPROPERTY()
	TScriptInterface<IAttackInterface> AttackInterface;

	UPROPERTY()
	UBaseCharacterData* BaseCharacterData;

	bool bCanCombo = false;
	bool bSavedAttack = false;
	int AttackIndex = 0;

	TArray<AActor*> HitActors;
	int HitCount = 0;
	float LastTraceTime = 0.f;
	float TraceInterval = 0.03f; // ~33 FPS tracing (siêu ổn)
	TArray<FHitResult> CachedHitResults; // dùng lại để tránh tạo mỗi frame
};
