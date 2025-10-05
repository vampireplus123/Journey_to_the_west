// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/IFlyingInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIFlyingInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MYPROJECT_API UClass* Z_Construct_UClass_UIFlyingInterface();
MYPROJECT_API UClass* Z_Construct_UClass_UIFlyingInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIFlyingInterface ****************************************************
void UIFlyingInterface::StaticRegisterNativesUIFlyingInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIFlyingInterface;
UClass* UIFlyingInterface::GetPrivateStaticClass()
{
	using TClass = UIFlyingInterface;
	if (!Z_Registration_Info_UClass_UIFlyingInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IFlyingInterface"),
			Z_Registration_Info_UClass_UIFlyingInterface.InnerSingleton,
			StaticRegisterNativesUIFlyingInterface,
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
	return Z_Registration_Info_UClass_UIFlyingInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UIFlyingInterface_NoRegister()
{
	return UIFlyingInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIFlyingInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/IFlyingInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIFlyingInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIFlyingInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIFlyingInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIFlyingInterface_Statics::ClassParams = {
	&UIFlyingInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIFlyingInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UIFlyingInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIFlyingInterface()
{
	if (!Z_Registration_Info_UClass_UIFlyingInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIFlyingInterface.OuterSingleton, Z_Construct_UClass_UIFlyingInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIFlyingInterface.OuterSingleton;
}
UIFlyingInterface::UIFlyingInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIFlyingInterface);
// ********** End Interface UIFlyingInterface ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_IFlyingInterface_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIFlyingInterface, UIFlyingInterface::StaticClass, TEXT("UIFlyingInterface"), &Z_Registration_Info_UClass_UIFlyingInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIFlyingInterface), 491324898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_IFlyingInterface_h__Script_MyProject_1235041175(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_IFlyingInterface_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_IFlyingInterface_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
