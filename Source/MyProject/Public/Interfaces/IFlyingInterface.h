// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IFlyingInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIFlyingInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MYPROJECT_API IIFlyingInterface
{
	GENERATED_BODY()
	
public:
	virtual void IFlyingMotion() = 0;
};
