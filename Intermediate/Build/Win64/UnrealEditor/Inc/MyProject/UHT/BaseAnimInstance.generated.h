// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseAnimInstance.h"

#ifdef MYPROJECT_BaseAnimInstance_generated_h
#error "BaseAnimInstance.generated.h already included, missing '#pragma once' in BaseAnimInstance.h"
#endif
#define MYPROJECT_BaseAnimInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBaseAnimInstance ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister();

#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_BaseAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseAnimInstance(); \
	friend struct Z_Construct_UClass_UBaseAnimInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UBaseAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UBaseAnimInstance_NoRegister) \
	DECLARE_SERIALIZER(UBaseAnimInstance)


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_BaseAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBaseAnimInstance(UBaseAnimInstance&&) = delete; \
	UBaseAnimInstance(const UBaseAnimInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseAnimInstance) \
	NO_API virtual ~UBaseAnimInstance();


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_BaseAnimInstance_h_13_PROLOG
#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_BaseAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_BaseAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_BaseAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBaseAnimInstance;

// ********** End Class UBaseAnimInstance **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_BaseAnimInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
