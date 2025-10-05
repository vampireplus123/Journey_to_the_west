// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Interfaces/AttackInterface.h"
#include "BaseCharacter.generated.h"


class UCameraComponent;
class USpringArmComponent;
class UInputMappingContext;
class UInputAction;
class UEnhancedInputData;
class UAttackComponent;
class UHealthComponent;
class UBaseCharacterDataAsset;
struct FInputActionState;

UCLASS(Abstract)
class MYPROJECT_API ABaseCharacter : public ACharacter,public IAttackInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void PostInitializeComponents() override;
	//Imterface implementation
public:
	
	// IAttackInterface implementation
	virtual void IPlayAttackMontage(UAnimMontage* AttackMontage) override;
	virtual void IAnimNotifyEndAttack() override;
	virtual FVector IGetSocketLocation(const FName& SocketName) override;
	virtual void AnimNotifyStateTraceHit() override;
	virtual void TraceHitBegin() override;
	//Hit Impact affet function for CHild:
protected:
	virtual void HitImpactEffect(FVector HitLocation);
protected:
	UPROPERTY(EditDefaultsOnly,Category="Data Assett")
	UEnhancedInputData* EnhancedInputData;
	UPROPERTY(EditDefaultsOnly,Category="Attack Component")
	UAttackComponent* AttackComponent;
	UPROPERTY(EditDefaultsOnly,Category="Health Component")
	UHealthComponent* HealthComponent;

protected:
	virtual void BeginPlay() override;
	virtual void Attack();
	virtual float ApplyDamage();
	
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float springArmLength = 400.f;
private:
	void LookAround(const FInputActionValue& value);
	void MoveAround(const FInputActionValue& value);
	UFUNCTION()
	void HandleHitSomething(const FHitResult& HitResult);
	
protected:
	//character data asset
	UPROPERTY(EditAnywhere,Category="Character Data Asset for Montage")
	UBaseCharacterDataAsset* BaseCharacterDataAsset;
	
private:
	UPROPERTY(VisibleAnywhere,Category="Spring Arm Component")
	USpringArmComponent* SpringArmComponent;
	UPROPERTY(VisibleAnywhere,Category="Camera Component")
	UCameraComponent* CameraComponent;
// User Widget
protected:
	UPROPERTY(EditDefaultsOnly,Category="User Widget")
	TSubclassOf<UUserWidget> PlayerWidgetClass;
//Take Point Damage
protected:
	UFUNCTION()
	virtual void HandleTakePointDamage(
		AActor* DamagedActor,
		float
		Damage,
		class AController* InstigatedBy,
		FVector HitLocation, 
		class UPrimitiveComponent* FHitComponent,
		FName BoneName,
		FVector ShotFromDirection,
		const class UDamageType* DamageType,
		AActor* DamageCauser);
};


