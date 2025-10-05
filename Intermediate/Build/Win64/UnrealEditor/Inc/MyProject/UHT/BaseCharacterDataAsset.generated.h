// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAsset/BaseCharacterDataAsset.h"

#ifdef MYPROJECT_BaseCharacterDataAsset_generated_h
#error "BaseCharacterDataAsset.generated.h already included, missing '#pragma once' in BaseCharacterDataAsset.h"
#endif
#define MYPROJECT_BaseCharacterDataAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseCharacterDataAsset **************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UBaseCharacterDataAsset_NoRegister();

#define FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCharacterDataAsset(); \
	friend struct Z_Construct_UClass_UBaseCharacterDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UBaseCharacterDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseCharacterDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UBaseCharacterDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UBaseCharacterDataAsset)


#define FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseCharacterDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseCharacterDataAsset(UBaseCharacterDataAsset&&) = delete; \
	UBaseCharacterDataAsset(const UBaseCharacterDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCharacterDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCharacterDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseCharacterDataAsset) \
	NO_API virtual ~UBaseCharacterDataAsset();


#define FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h_14_PROLOG
#define FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h_17_INCLASS_NO_PURE_DECLS \
	FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseCharacterDataAsset;

// ********** End Class UBaseCharacterDataAsset ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
