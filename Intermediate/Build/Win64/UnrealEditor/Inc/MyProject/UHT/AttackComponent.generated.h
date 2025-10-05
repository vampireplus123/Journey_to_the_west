// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AttackComponent.h"

#ifdef MYPROJECT_AttackComponent_generated_h
#error "AttackComponent.generated.h already included, missing '#pragma once' in AttackComponent.h"
#endif
#define MYPROJECT_AttackComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FHitResult;

// ********** Begin Delegate FHitSomethingDelegate *************************************************
#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h_10_DELEGATE \
MYPROJECT_API void FHitSomethingDelegate_DelegateWrapper(const FScriptDelegate& HitSomethingDelegate, FHitResult const& Result);


// ********** End Delegate FHitSomethingDelegate ***************************************************

// ********** Begin Class UAttackComponent *********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();

#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackComponent(); \
	friend struct Z_Construct_UClass_UAttackComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAttackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UAttackComponent_NoRegister) \
	DECLARE_SERIALIZER(UAttackComponent)


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttackComponent(UAttackComponent&&) = delete; \
	UAttackComponent(const UAttackComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttackComponent) \
	NO_API virtual ~UAttackComponent();


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h_15_PROLOG
#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttackComponent;

// ********** End Class UAttackComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
