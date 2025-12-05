// HealthComponent.h (giữ nguyên tên)
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

class UBaseCharacterData;
class UDataAsset;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MYPROJECT_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHealthComponent();

	/** Thiết lập Health từ DataAsset bất kỳ, Player hay Enemy đều được */
	void SetupComponent(UDataAsset* DataAsset);

	/** Áp dụng sát thương */
	void ApplyDamage(float Damage, AActor* DamageCauser = nullptr);

	/** Kiểm tra còn sống hay chết */
	bool IsDead() const { return Health <= 0.f; }
	void UpdateHealthByDamage(float Damage);

	/** Lấy giá trị hiện tại */
	float GetHealth() const { return Health; }
	float GetMaxHealth() const { return MaxHealth; }
	void ApplyHealing(float HealAmount);	

	UPROPERTY(BlueprintAssignable)
	FOnHealthChanged OnHealthChanged;

	UPROPERTY(BlueprintAssignable)
	FOnDeath OnDeath;

protected:
	virtual void BeginPlay() override;

public:
	float Health = 100.f;
	float MaxHealth = 100.f;
};
