// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/PlayerWidget.h"

#ifdef MYPROJECT_PlayerWidget_generated_h
#error "PlayerWidget.generated.h already included, missing '#pragma once' in PlayerWidget.h"
#endif
#define MYPROJECT_PlayerWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlayerWidget ************************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();

#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerWidget(); \
	friend struct Z_Construct_UClass_UPlayerWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlayerWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UPlayerWidget_NoRegister) \
	DECLARE_SERIALIZER(UPlayerWidget)


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlayerWidget(UPlayerWidget&&) = delete; \
	UPlayerWidget(const UPlayerWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerWidget) \
	NO_API virtual ~UPlayerWidget();


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h_14_PROLOG
#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlayerWidget;

// ********** End Class UPlayerWidget **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
