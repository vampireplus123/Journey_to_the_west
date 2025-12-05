#include "AnimInstance/BaseAnimInstance.h"
#include "Characters/BaseCharacter.h"
#include "Characters/BaseEnemyCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UBaseAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	// Không assign gì ở đây, sẽ cast ở Update
}

void UBaseAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn* Pawn = TryGetPawnOwner();
	if (!Pawn) return;

	UCharacterMovementComponent* MoveComp = nullptr;

	// Cast từng type riêng
	if (ABaseCharacter* Player = Cast<ABaseCharacter>(Pawn))
	{
		PlayerCharacter = Player;
		MoveComp = PlayerCharacter->GetCharacterMovement();
	}
	else if (ABaseEnemyCharacter* Enemy = Cast<ABaseEnemyCharacter>(Pawn))
	{
		EnemyCharacter = Enemy;
		MoveComp = EnemyCharacter->GetCharacterMovement();
	}
	else
	{
		return; // Không phải type nào hỗ trợ, thoát
	}

	if (!MoveComp) return;

	// --- Ground Speed ---
	GroundSpeed = MoveComp->Velocity.Size2D();
	bShouldMove = GroundSpeed > 3.0f;

	// --- Jump / Falling ---
	bIsJumping = MoveComp->IsFalling();

	bShouldBlendLowerUpper = bShouldMove;

	// --- Strafe ---
	FRotator AimRot;
	FVector Velocity;

	if (PlayerCharacter)
	{
		AimRot = PlayerCharacter->GetBaseAimRotation();
		Velocity = PlayerCharacter->GetVelocity();
		bIsStrafing = PlayerCharacter->bIsStrafing;
	}
	else if (EnemyCharacter)
	{
		AimRot = EnemyCharacter->GetBaseAimRotation();
		Velocity = EnemyCharacter->GetVelocity();
	}

	const FRotator MoveRot = UKismetMathLibrary::MakeRotFromX(Velocity);
	StrafeValue = UKismetMathLibrary::NormalizedDeltaRotator(MoveRot, AimRot).Yaw;
}
