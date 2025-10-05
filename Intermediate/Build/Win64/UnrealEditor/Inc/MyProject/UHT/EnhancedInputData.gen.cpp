// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/EnhancedInputData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnhancedInputData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UEnhancedInputData();
MYPROJECT_API UClass* Z_Construct_UClass_UEnhancedInputData_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnhancedInputData *******************************************************
void UEnhancedInputData::StaticRegisterNativesUEnhancedInputData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnhancedInputData;
UClass* UEnhancedInputData::GetPrivateStaticClass()
{
	using TClass = UEnhancedInputData;
	if (!Z_Registration_Info_UClass_UEnhancedInputData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnhancedInputData"),
			Z_Registration_Info_UClass_UEnhancedInputData.InnerSingleton,
			StaticRegisterNativesUEnhancedInputData,
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
	return Z_Registration_Info_UClass_UEnhancedInputData.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnhancedInputData_NoRegister()
{
	return UEnhancedInputData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnhancedInputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAsset/EnhancedInputData.h" },
		{ "ModuleRelativePath", "Public/DataAsset/EnhancedInputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[] = {
		{ "Category", "Enhanced Input Component" },
		{ "ModuleRelativePath", "Public/DataAsset/EnhancedInputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_Look_MetaData[] = {
		{ "Category", "Binding Action" },
		{ "ModuleRelativePath", "Public/DataAsset/EnhancedInputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_Move_MetaData[] = {
		{ "Category", "Binding Action" },
		{ "ModuleRelativePath", "Public/DataAsset/EnhancedInputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_Attack_MetaData[] = {
		{ "Category", "Binding Action" },
		{ "ModuleRelativePath", "Public/DataAsset/EnhancedInputData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction_Attack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedInputData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputData_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputData, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputContext_MetaData), NewProp_InputContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputData_Statics::NewProp_InputAction_Look = { "InputAction_Look", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputData, InputAction_Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_Look_MetaData), NewProp_InputAction_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputData_Statics::NewProp_InputAction_Move = { "InputAction_Move", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputData, InputAction_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_Move_MetaData), NewProp_InputAction_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedInputData_Statics::NewProp_InputAction_Attack = { "InputAction_Attack", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedInputData, InputAction_Attack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_Attack_MetaData), NewProp_InputAction_Attack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedInputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputData_Statics::NewProp_InputContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputData_Statics::NewProp_InputAction_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputData_Statics::NewProp_InputAction_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedInputData_Statics::NewProp_InputAction_Attack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedInputData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedInputData_Statics::ClassParams = {
	&UEnhancedInputData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnhancedInputData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedInputData_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedInputData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedInputData()
{
	if (!Z_Registration_Info_UClass_UEnhancedInputData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedInputData.OuterSingleton, Z_Construct_UClass_UEnhancedInputData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedInputData.OuterSingleton;
}
UEnhancedInputData::UEnhancedInputData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedInputData);
UEnhancedInputData::~UEnhancedInputData() {}
// ********** End Class UEnhancedInputData *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_EnhancedInputData_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedInputData, UEnhancedInputData::StaticClass, TEXT("UEnhancedInputData"), &Z_Registration_Info_UClass_UEnhancedInputData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedInputData), 1536092782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_EnhancedInputData_h__Script_MyProject_2458226593(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_EnhancedInputData_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_EnhancedInputData_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
