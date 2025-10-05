// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widget/PlayerWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerWidget() {}

// ********** Begin Cross Module References ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UPlayerWidget();
MYPROJECT_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerWidget ************************************************************
void UPlayerWidget::StaticRegisterNativesUPlayerWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerWidget;
UClass* UPlayerWidget::GetPrivateStaticClass()
{
	using TClass = UPlayerWidget;
	if (!Z_Registration_Info_UClass_UPlayerWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerWidget"),
			Z_Registration_Info_UClass_UPlayerWidget.InnerSingleton,
			StaticRegisterNativesUPlayerWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPlayerWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerWidget_NoRegister()
{
	return UPlayerWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/PlayerWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_Player_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_Enemy_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthText_Enemy_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar_Enemy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthText_Enemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_HealthBar_Player = { "HealthBar_Player", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, HealthBar_Player), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_Player_MetaData), NewProp_HealthBar_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_HealthBar_Enemy = { "HealthBar_Enemy", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, HealthBar_Enemy), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_Enemy_MetaData), NewProp_HealthBar_Enemy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_HealthText_Enemy = { "HealthText_Enemy", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, HealthText_Enemy), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthText_Enemy_MetaData), NewProp_HealthText_Enemy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_HealthBar_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_HealthBar_Enemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_HealthText_Enemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWidget_Statics::ClassParams = {
	&UPlayerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton, Z_Construct_UClass_UPlayerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton;
}
UPlayerWidget::UPlayerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWidget);
UPlayerWidget::~UPlayerWidget() {}
// ********** End Class UPlayerWidget **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerWidget, UPlayerWidget::StaticClass, TEXT("UPlayerWidget"), &Z_Registration_Info_UClass_UPlayerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerWidget), 3531781654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h__Script_MyProject_1099495204(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Widget_PlayerWidget_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
