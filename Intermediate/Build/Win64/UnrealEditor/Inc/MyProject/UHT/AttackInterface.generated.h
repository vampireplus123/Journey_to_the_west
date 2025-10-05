// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/AttackInterface.h"

#ifdef MYPROJECT_AttackInterface_generated_h
#error "AttackInterface.generated.h already included, missing '#pragma once' in AttackInterface.h"
#endif
#define MYPROJECT_AttackInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAttackInterface *****************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UAttackInterface_NoRegister();

#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_AttackInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UAttackInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttackInterface(UAttackInterface&&) = delete; \
	UAttackInterface(const UAttackInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UAttackInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttackInterface) \
	virtual ~UAttackInterface() = default;


#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_AttackInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAttackInterface(); \
	friend struct Z_Construct_UClass_UAttackInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UAttackInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAttackInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UAttackInterface_NoRegister) \
	DECLARE_SERIALIZER(UAttackInterface)


#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_AttackInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_AttackInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_AttackInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_AttackInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAttackInterface() {} \
public: \
	typedef UAttackInterface UClassType; \
	typedef IAttackInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_AttackInterface_h_11_PROLOG
#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_AttackInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_AttackInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttackInterface;

// ********** End Interface UAttackInterface *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_AttackInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
