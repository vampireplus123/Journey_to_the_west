// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/MyGameModeBase.h"

#ifdef MYPROJECT_MyGameModeBase_generated_h
#error "MyGameModeBase.generated.h already included, missing '#pragma once' in MyGameModeBase.h"
#endif
#define MYPROJECT_MyGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyGameModeBase **********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister();

#define FID_Journey_to_the_west_Source_MyProject_GameMode_MyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameModeBase(); \
	friend struct Z_Construct_UClass_AMyGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_AMyGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AMyGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AMyGameModeBase)


#define FID_Journey_to_the_west_Source_MyProject_GameMode_MyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyGameModeBase(AMyGameModeBase&&) = delete; \
	AMyGameModeBase(const AMyGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameModeBase) \
	NO_API virtual ~AMyGameModeBase();


#define FID_Journey_to_the_west_Source_MyProject_GameMode_MyGameModeBase_h_12_PROLOG
#define FID_Journey_to_the_west_Source_MyProject_GameMode_MyGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Journey_to_the_west_Source_MyProject_GameMode_MyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Journey_to_the_west_Source_MyProject_GameMode_MyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyGameModeBase;

// ********** End Class AMyGameModeBase ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Journey_to_the_west_Source_MyProject_GameMode_MyGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
