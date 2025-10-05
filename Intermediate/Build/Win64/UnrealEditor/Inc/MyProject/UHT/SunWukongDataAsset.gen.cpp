// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/SunWukongDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSunWukongDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UBaseCharacterDataAsset();
MYPROJECT_API UClass* Z_Construct_UClass_USunWukongDataAsset();
MYPROJECT_API UClass* Z_Construct_UClass_USunWukongDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USunWukongDataAsset ******************************************************
void USunWukongDataAsset::StaticRegisterNativesUSunWukongDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USunWukongDataAsset;
UClass* USunWukongDataAsset::GetPrivateStaticClass()
{
	using TClass = USunWukongDataAsset;
	if (!Z_Registration_Info_UClass_USunWukongDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SunWukongDataAsset"),
			Z_Registration_Info_UClass_USunWukongDataAsset.InnerSingleton,
			StaticRegisterNativesUSunWukongDataAsset,
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
	return Z_Registration_Info_UClass_USunWukongDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_USunWukongDataAsset_NoRegister()
{
	return USunWukongDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USunWukongDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAsset/SunWukongDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAsset/SunWukongDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WukongFlyingMontage_MetaData[] = {
		{ "Category", "SunWukong Air" },
		{ "ModuleRelativePath", "Public/DataAsset/SunWukongDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WukongJumpingMontage_MetaData[] = {
		{ "Category", "SunWukong Air" },
		{ "ModuleRelativePath", "Public/DataAsset/SunWukongDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WukongOtherAttackMontages_MetaData[] = {
		{ "Category", "SunWukong Attack Montage Addition" },
		{ "ModuleRelativePath", "Public/DataAsset/SunWukongDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WukongHitImpact_MetaData[] = {
		{ "Category", "SunWukong Hit Impact Particle" },
		{ "ModuleRelativePath", "Public/DataAsset/SunWukongDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WukongFlyingMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WukongJumpingMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WukongOtherAttackMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WukongOtherAttackMontages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WukongHitImpact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USunWukongDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USunWukongDataAsset_Statics::NewProp_WukongFlyingMontage = { "WukongFlyingMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USunWukongDataAsset, WukongFlyingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WukongFlyingMontage_MetaData), NewProp_WukongFlyingMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USunWukongDataAsset_Statics::NewProp_WukongJumpingMontage = { "WukongJumpingMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USunWukongDataAsset, WukongJumpingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WukongJumpingMontage_MetaData), NewProp_WukongJumpingMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USunWukongDataAsset_Statics::NewProp_WukongOtherAttackMontages_Inner = { "WukongOtherAttackMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USunWukongDataAsset_Statics::NewProp_WukongOtherAttackMontages = { "WukongOtherAttackMontages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USunWukongDataAsset, WukongOtherAttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WukongOtherAttackMontages_MetaData), NewProp_WukongOtherAttackMontages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USunWukongDataAsset_Statics::NewProp_WukongHitImpact = { "WukongHitImpact", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USunWukongDataAsset, WukongHitImpact), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WukongHitImpact_MetaData), NewProp_WukongHitImpact_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USunWukongDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USunWukongDataAsset_Statics::NewProp_WukongFlyingMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USunWukongDataAsset_Statics::NewProp_WukongJumpingMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USunWukongDataAsset_Statics::NewProp_WukongOtherAttackMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USunWukongDataAsset_Statics::NewProp_WukongOtherAttackMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USunWukongDataAsset_Statics::NewProp_WukongHitImpact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USunWukongDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USunWukongDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseCharacterDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USunWukongDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USunWukongDataAsset_Statics::ClassParams = {
	&USunWukongDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USunWukongDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USunWukongDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USunWukongDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_USunWukongDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USunWukongDataAsset()
{
	if (!Z_Registration_Info_UClass_USunWukongDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USunWukongDataAsset.OuterSingleton, Z_Construct_UClass_USunWukongDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USunWukongDataAsset.OuterSingleton;
}
USunWukongDataAsset::USunWukongDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USunWukongDataAsset);
USunWukongDataAsset::~USunWukongDataAsset() {}
// ********** End Class USunWukongDataAsset ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_SunWukongDataAsset_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USunWukongDataAsset, USunWukongDataAsset::StaticClass, TEXT("USunWukongDataAsset"), &Z_Registration_Info_UClass_USunWukongDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USunWukongDataAsset), 4118779380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_SunWukongDataAsset_h__Script_MyProject_431150522(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_SunWukongDataAsset_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_SunWukongDataAsset_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
