// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BaseCharacter.h"

#ifdef MYPROJECT_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define MYPROJECT_BaseCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABaseCharacter ***********************************************************
#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Character_BaseCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTakePointDamage); \
	DECLARE_FUNCTION(execHandleHitSomething);


MYPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();

#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Character_BaseCharacter_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_ABaseCharacter_NoRegister) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseCharacter*>(this); }


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Character_BaseCharacter_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseCharacter(ABaseCharacter&&) = delete; \
	ABaseCharacter(const ABaseCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter) \
	NO_API virtual ~ABaseCharacter();


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Character_BaseCharacter_h_23_PROLOG
#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Character_BaseCharacter_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Character_BaseCharacter_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Character_BaseCharacter_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Character_BaseCharacter_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseCharacter;

// ********** End Class ABaseCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Character_BaseCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
