// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/EnemyCharacter.h"

#ifdef MYPROJECT_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define MYPROJECT_EnemyCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemyCharacter **********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();

#define FID_Journey_to_the_west_Source_MyProject_Public_Character_EnemyCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AEnemyCharacter_NoRegister) \
	DECLARE_SERIALIZER(AEnemyCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemyCharacter*>(this); }


#define FID_Journey_to_the_west_Source_MyProject_Public_Character_EnemyCharacter_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyCharacter(AEnemyCharacter&&) = delete; \
	AEnemyCharacter(const AEnemyCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter) \
	NO_API virtual ~AEnemyCharacter();


#define FID_Journey_to_the_west_Source_MyProject_Public_Character_EnemyCharacter_h_14_PROLOG
#define FID_Journey_to_the_west_Source_MyProject_Public_Character_EnemyCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Journey_to_the_west_Source_MyProject_Public_Character_EnemyCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Journey_to_the_west_Source_MyProject_Public_Character_EnemyCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyCharacter;

// ********** End Class AEnemyCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Journey_to_the_west_Source_MyProject_Public_Character_EnemyCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
