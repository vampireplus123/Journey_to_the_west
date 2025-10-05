// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAsset/EnhancedInputData.h"

#ifdef MYPROJECT_EnhancedInputData_generated_h
#error "EnhancedInputData.generated.h already included, missing '#pragma once' in EnhancedInputData.h"
#endif
#define MYPROJECT_EnhancedInputData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnhancedInputData *******************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UEnhancedInputData_NoRegister();

#define FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_EnhancedInputData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputData(); \
	friend struct Z_Construct_UClass_UEnhancedInputData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UEnhancedInputData_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedInputData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UEnhancedInputData_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedInputData)


#define FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_EnhancedInputData_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedInputData(UEnhancedInputData&&) = delete; \
	UEnhancedInputData(const UEnhancedInputData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputData) \
	NO_API virtual ~UEnhancedInputData();


#define FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_EnhancedInputData_h_15_PROLOG
#define FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_EnhancedInputData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_EnhancedInputData_h_18_INCLASS_NO_PURE_DECLS \
	FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_EnhancedInputData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedInputData;

// ********** End Class UEnhancedInputData *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Journey_to_the_west_Source_MyProject_Public_DataAsset_EnhancedInputData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
