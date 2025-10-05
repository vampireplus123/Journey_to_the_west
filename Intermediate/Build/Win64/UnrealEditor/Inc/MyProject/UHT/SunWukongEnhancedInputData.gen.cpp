// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/Characters/SunWukong/SunWukongEnhancedInputData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSunWukongEnhancedInputData() {}

// ********** Begin Cross Module References ********************************************************
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UEnhancedInputData();
MYPROJECT_API UClass* Z_Construct_UClass_USunWukongEnhancedInputData();
MYPROJECT_API UClass* Z_Construct_UClass_USunWukongEnhancedInputData_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USunWukongEnhancedInputData **********************************************
void USunWukongEnhancedInputData::StaticRegisterNativesUSunWukongEnhancedInputData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USunWukongEnhancedInputData;
UClass* USunWukongEnhancedInputData::GetPrivateStaticClass()
{
	using TClass = USunWukongEnhancedInputData;
	if (!Z_Registration_Info_UClass_USunWukongEnhancedInputData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SunWukongEnhancedInputData"),
			Z_Registration_Info_UClass_USunWukongEnhancedInputData.InnerSingleton,
			StaticRegisterNativesUSunWukongEnhancedInputData,
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
	return Z_Registration_Info_UClass_USunWukongEnhancedInputData.InnerSingleton;
}
UClass* Z_Construct_UClass_USunWukongEnhancedInputData_NoRegister()
{
	return USunWukongEnhancedInputData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USunWukongEnhancedInputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAsset/Characters/SunWukong/SunWukongEnhancedInputData.h" },
		{ "ModuleRelativePath", "Public/DataAsset/Characters/SunWukong/SunWukongEnhancedInputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Jump_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Public/DataAsset/Characters/SunWukong/SunWukongEnhancedInputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Second_Attack_MetaData[] = {
		{ "Category", "Second Attack" },
		{ "ModuleRelativePath", "Public/DataAsset/Characters/SunWukong/SunWukongEnhancedInputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IA_Third_Attack_MetaData[] = {
		{ "Category", "Third Attack" },
		{ "ModuleRelativePath", "Public/DataAsset/Characters/SunWukong/SunWukongEnhancedInputData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Jump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Second_Attack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IA_Third_Attack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USunWukongEnhancedInputData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USunWukongEnhancedInputData_Statics::NewProp_IA_Jump = { "IA_Jump", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USunWukongEnhancedInputData, IA_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Jump_MetaData), NewProp_IA_Jump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USunWukongEnhancedInputData_Statics::NewProp_IA_Second_Attack = { "IA_Second_Attack", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USunWukongEnhancedInputData, IA_Second_Attack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Second_Attack_MetaData), NewProp_IA_Second_Attack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USunWukongEnhancedInputData_Statics::NewProp_IA_Third_Attack = { "IA_Third_Attack", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USunWukongEnhancedInputData, IA_Third_Attack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IA_Third_Attack_MetaData), NewProp_IA_Third_Attack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USunWukongEnhancedInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USunWukongEnhancedInputData_Statics::NewProp_IA_Jump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USunWukongEnhancedInputData_Statics::NewProp_IA_Second_Attack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USunWukongEnhancedInputData_Statics::NewProp_IA_Third_Attack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USunWukongEnhancedInputData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USunWukongEnhancedInputData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputData,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USunWukongEnhancedInputData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USunWukongEnhancedInputData_Statics::ClassParams = {
	&USunWukongEnhancedInputData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USunWukongEnhancedInputData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USunWukongEnhancedInputData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USunWukongEnhancedInputData_Statics::Class_MetaDataParams), Z_Construct_UClass_USunWukongEnhancedInputData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USunWukongEnhancedInputData()
{
	if (!Z_Registration_Info_UClass_USunWukongEnhancedInputData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USunWukongEnhancedInputData.OuterSingleton, Z_Construct_UClass_USunWukongEnhancedInputData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USunWukongEnhancedInputData.OuterSingleton;
}
USunWukongEnhancedInputData::USunWukongEnhancedInputData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USunWukongEnhancedInputData);
USunWukongEnhancedInputData::~USunWukongEnhancedInputData() {}
// ********** End Class USunWukongEnhancedInputData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_Characters_SunWukong_SunWukongEnhancedInputData_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USunWukongEnhancedInputData, USunWukongEnhancedInputData::StaticClass, TEXT("USunWukongEnhancedInputData"), &Z_Registration_Info_UClass_USunWukongEnhancedInputData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USunWukongEnhancedInputData), 1218480436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_Characters_SunWukong_SunWukongEnhancedInputData_h__Script_MyProject_3013442209(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_Characters_SunWukong_SunWukongEnhancedInputData_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_Characters_SunWukong_SunWukongEnhancedInputData_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
