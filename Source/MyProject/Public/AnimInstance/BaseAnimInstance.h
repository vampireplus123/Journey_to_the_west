#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BaseAnimInstance.generated.h"

class ABaseCharacter;
class ABaseEnemyCharacter;
class UCharacterMovementComponent;

UCLASS()
class MYPROJECT_API UBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	// Có đang nhảy hoặc rơi không
	UPROPERTY(BlueprintReadOnly, Category = "Jump")
	bool bIsJumping = false;

	// Tốc độ để blend chạy / idle
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	float GroundSpeed = 0.0f;

	// Có đang di chuyển không
	UPROPERTY(BlueprintReadOnly, Category = "Movement")
	bool bShouldMove = false;

	// Có blend upper/lower body không
	UPROPERTY(BlueprintReadOnly)
	bool bShouldBlendLowerUpper = true;

	// Strafe
	UPROPERTY(BlueprintReadOnly)
	double StrafeValue = 0.0;

	UPROPERTY(BlueprintReadOnly)
	bool bIsStrafing = false;

protected:
	// Không dùng pointer chung, cast từng type riêng
	UPROPERTY()
	ABaseCharacter* PlayerCharacter = nullptr;

	UPROPERTY()
	ABaseEnemyCharacter* EnemyCharacter = nullptr;
};
