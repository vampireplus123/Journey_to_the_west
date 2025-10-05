// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/JumpingInterface.h"

#ifdef MYPROJECT_JumpingInterface_generated_h
#error "JumpingInterface.generated.h already included, missing '#pragma once' in JumpingInterface.h"
#endif
#define MYPROJECT_JumpingInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UJumpingInterface ****************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UJumpingInterface_NoRegister();

#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UJumpingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UJumpingInterface(UJumpingInterface&&) = delete; \
	UJumpingInterface(const UJumpingInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UJumpingInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJumpingInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJumpingInterface) \
	virtual ~UJumpingInterface() = default;


#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUJumpingInterface(); \
	friend struct Z_Construct_UClass_UJumpingInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UJumpingInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UJumpingInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UJumpingInterface_NoRegister) \
	DECLARE_SERIALIZER(UJumpingInterface)


#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IJumpingInterface() {} \
public: \
	typedef UJumpingInterface UClassType; \
	typedef IJumpingInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h_10_PROLOG
#define FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UJumpingInterface;

// ********** End Interface UJumpingInterface ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
