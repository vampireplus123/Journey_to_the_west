// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNotify/ANS_Trace.h"

#ifdef MYPROJECT_ANS_Trace_generated_h
#error "ANS_Trace.generated.h already included, missing '#pragma once' in ANS_Trace.h"
#endif
#define MYPROJECT_ANS_Trace_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UANS_Trace ***************************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UANS_Trace_NoRegister();

#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUANS_Trace(); \
	friend struct Z_Construct_UClass_UANS_Trace_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UANS_Trace_NoRegister(); \
public: \
	DECLARE_CLASS2(UANS_Trace, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UANS_Trace_NoRegister) \
	DECLARE_SERIALIZER(UANS_Trace)


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UANS_Trace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UANS_Trace(UANS_Trace&&) = delete; \
	UANS_Trace(const UANS_Trace&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UANS_Trace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UANS_Trace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UANS_Trace) \
	NO_API virtual ~UANS_Trace();


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h_13_PROLOG
#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UANS_Trace;

// ********** End Class UANS_Trace *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
