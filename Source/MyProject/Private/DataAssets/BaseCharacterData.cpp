// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/BaseCharacterData.h"

UBaseCharacterData::UBaseCharacterData()
{
	CostMap.Emplace(EAttackType::Normal, 20.0f);
	CostMap.Emplace(EAttackType::Strong, 60.0f);

	DamageMap.Emplace(EAttackType::Normal, 20.0f);
	DamageMap.Emplace(EAttackType::Strong, 20.0f);
}
