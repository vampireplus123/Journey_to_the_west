// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Character/Wukong/SunWukong.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSunWukong() {}

// ********** Begin Cross Module References ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
MYPROJECT_API UClass* Z_Construct_UClass_ASunWukong();
MYPROJECT_API UClass* Z_Construct_UClass_ASunWukong_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_USunWukongDataAsset_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_USunWukongEnhancedInputData_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASunWukong ***************************************************************
void ASunWukong::StaticRegisterNativesASunWukong()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASunWukong;
UClass* ASunWukong::GetPrivateStaticClass()
{
	using TClass = ASunWukong;
	if (!Z_Registration_Info_UClass_ASunWukong.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SunWukong"),
			Z_Registration_Info_UClass_ASunWukong.InnerSingleton,
			StaticRegisterNativesASunWukong,
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
	return Z_Registration_Info_UClass_ASunWukong.InnerSingleton;
}
UClass* Z_Construct_UClass_ASunWukong_NoRegister()
{
	return ASunWukong::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASunWukong_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Wukong/SunWukong.h" },
		{ "ModuleRelativePath", "Public/Character/Wukong/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunWukongEnhancedInputData_MetaData[] = {
		{ "Category", "Wukong Input Data" },
		{ "ModuleRelativePath", "Public/Character/Wukong/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WukongDamage_MetaData[] = {
		{ "Category", "Wukong Damage" },
		{ "ModuleRelativePath", "Public/Character/Wukong/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SunWukongDataAsset_MetaData[] = {
		{ "Category", "Wukong DataAsset" },
		{ "ModuleRelativePath", "Public/Character/Wukong/SunWukong.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/Wukong/SunWukong.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SunWukongEnhancedInputData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WukongDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SunWukongDataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASunWukong>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_SunWukongEnhancedInputData = { "SunWukongEnhancedInputData", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, SunWukongEnhancedInputData), Z_Construct_UClass_USunWukongEnhancedInputData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunWukongEnhancedInputData_MetaData), NewProp_SunWukongEnhancedInputData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_WukongDamage = { "WukongDamage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, WukongDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WukongDamage_MetaData), NewProp_WukongDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_SunWukongDataAsset = { "SunWukongDataAsset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, SunWukongDataAsset), Z_Construct_UClass_USunWukongDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SunWukongDataAsset_MetaData), NewProp_SunWukongDataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASunWukong_Statics::NewProp_PlayerWidget = { "PlayerWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASunWukong, PlayerWidget), Z_Construct_UClass_UPlayerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerWidget_MetaData), NewProp_PlayerWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASunWukong_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_SunWukongEnhancedInputData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_WukongDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_SunWukongDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASunWukong_Statics::NewProp_PlayerWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASunWukong_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASunWukong_Statics::ClassParams = {
	&ASunWukong::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASunWukong_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASunWukong_Statics::Class_MetaDataParams), Z_Construct_UClass_ASunWukong_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASunWukong()
{
	if (!Z_Registration_Info_UClass_ASunWukong.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASunWukong.OuterSingleton, Z_Construct_UClass_ASunWukong_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASunWukong.OuterSingleton;
}
ASunWukong::ASunWukong() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASunWukong);
ASunWukong::~ASunWukong() {}
// ********** End Class ASunWukong *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Character_Wukong_SunWukong_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASunWukong, ASunWukong::StaticClass, TEXT("ASunWukong"), &Z_Registration_Info_UClass_ASunWukong, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASunWukong), 2168278704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Character_Wukong_SunWukong_h__Script_MyProject_3327295441(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Character_Wukong_SunWukong_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Character_Wukong_SunWukong_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
