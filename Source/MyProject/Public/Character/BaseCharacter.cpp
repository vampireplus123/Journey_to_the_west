// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DataAsset/EnhancedInputData.h"
#include "Components/AttackComponent.h"
#include "Components/HealthComponent.h"
#include "DataAsset/BaseCharacterDataAsset.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// -------------------------------
// 1. Constructor
// -------------------------------
ABaseCharacter::ABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = springArmLength;
	SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;
	
	AttackComponent = CreateDefaultSubobject<UAttackComponent>(TEXT("Attack Component"));
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
	
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 540.f, 0.f);
}

// -------------------------------
// 2. PostInitializeComponents
// -------------------------------
void ABaseCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	if (AttackComponent)
	{
		AttackComponent->HitSomethingDelegate.BindDynamic(this, &ABaseCharacter::HandleHitSomething);
		AttackComponent->SettupAttackComponent(BaseCharacterDataAsset);
	}
	if (HealthComponent)
	{
		HealthComponent->SetupComponent(BaseCharacterDataAsset);
	}
}

void ABaseCharacter::HitImpactEffect(FVector HitLocation)
{
	
}

void ABaseCharacter::HandleTakePointDamage(AActor* DamagedActor, float Damage, class AController* InstigatedBy,
                                           FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection,
                                           const class UDamageType* DamageType, AActor* DamageCauser)
{
	if (BaseCharacterDataAsset == nullptr) return;
	HitImpactEffect(HitLocation);
	
	if (HealthComponent)
	{
		HealthComponent->UpdateHealthByDamage(Damage);	
	}
	if (BaseCharacterDataAsset)
	{
		PlayAnimMontage(BaseCharacterDataAsset->HitReactionMontage);
	}
}

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			if (EnhancedInputData == nullptr)
			{
				return;
			}
			Subsystem->AddMappingContext(EnhancedInputData->InputContext, 0);
		}
	}
	OnTakePointDamage.AddDynamic(this,&ABaseCharacter::HandleTakePointDamage);
}

void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (EnhancedInputData == nullptr)
	{
		return;
	}
	if (UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(EnhancedInputData->InputAction_Move, ETriggerEvent::Triggered, this, &ABaseCharacter::MoveAround);
		Input->BindAction(EnhancedInputData->InputAction_Look, ETriggerEvent::Triggered, this, &ABaseCharacter::LookAround);
		Input->BindAction(EnhancedInputData->InputAction_Attack, ETriggerEvent::Started, this, &ABaseCharacter::Attack);
	}
}

void ABaseCharacter::MoveAround(const FInputActionValue& Value)
{
	FVector2D InputVector = Value.Get<FVector2D>();

	if (Controller)
	{
		FRotator ControlRotation = Controller->GetControlRotation();
		FRotator YawRotation(0.f, ControlRotation.Yaw, 0.f);

		const FVector FowardDirection = YawRotation.RotateVector(FVector::ForwardVector);
		const FVector RightDirection = YawRotation.RotateVector(FVector::RightVector);
		AddMovementInput(FowardDirection, InputVector.Y);
		AddMovementInput(RightDirection, InputVector.X);
	}
}

void ABaseCharacter::LookAround(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	AddControllerYawInput(LookAxisVector.X);
	AddControllerPitchInput(LookAxisVector.Y);
}


void ABaseCharacter::Attack()
{
	if (AttackComponent)
	{
		AttackComponent->RequestAttack();
	}
}

float ABaseCharacter::ApplyDamage()
{
	return 200.f;
}

void ABaseCharacter::HandleHitSomething(const FHitResult& HitResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("hitsomethign"));
	auto HitActor = HitResult.GetActor();
	auto AttackLocation = UKismetMathLibrary::GetDirectionUnitVector(GetActorLocation(), HitActor->GetActorLocation());

	UGameplayStatics::ApplyPointDamage(
		HitActor,
		ApplyDamage(),
		AttackLocation,
		HitResult,
		GetController(),
		this,
		UDamageType::StaticClass()
	);
}
void ABaseCharacter::IPlayAttackMontage(UAnimMontage* AttackMontage)
{
	PlayAnimMontage(AttackMontage);
}

void ABaseCharacter::IAnimNotifyEndAttack()
{
	if (AttackComponent)
	{
		AttackComponent->EndAttack();
	}
}

FVector ABaseCharacter::IGetSocketLocation(const FName& SocketName)
{
	if (GetMesh()==nullptr) 
	{
		return FVector();
	}
	return GetMesh()->GetSocketLocation(SocketName);
}

void ABaseCharacter::TraceHitBegin()
{
	if (AttackComponent)
	{
		AttackComponent->SetUpTraceHit();
	}
}

void ABaseCharacter::AnimNotifyStateTraceHit()
{
	AttackComponent->TraceHit();
}

