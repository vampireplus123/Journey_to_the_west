// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/JumpingInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeJumpingInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MYPROJECT_API UClass* Z_Construct_UClass_UJumpingInterface();
MYPROJECT_API UClass* Z_Construct_UClass_UJumpingInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UJumpingInterface ****************************************************
void UJumpingInterface::StaticRegisterNativesUJumpingInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UJumpingInterface;
UClass* UJumpingInterface::GetPrivateStaticClass()
{
	using TClass = UJumpingInterface;
	if (!Z_Registration_Info_UClass_UJumpingInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("JumpingInterface"),
			Z_Registration_Info_UClass_UJumpingInterface.InnerSingleton,
			StaticRegisterNativesUJumpingInterface,
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
	return Z_Registration_Info_UClass_UJumpingInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UJumpingInterface_NoRegister()
{
	return UJumpingInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UJumpingInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/JumpingInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IJumpingInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJumpingInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJumpingInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJumpingInterface_Statics::ClassParams = {
	&UJumpingInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJumpingInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UJumpingInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJumpingInterface()
{
	if (!Z_Registration_Info_UClass_UJumpingInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJumpingInterface.OuterSingleton, Z_Construct_UClass_UJumpingInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJumpingInterface.OuterSingleton;
}
UJumpingInterface::UJumpingInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJumpingInterface);
// ********** End Interface UJumpingInterface ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJumpingInterface, UJumpingInterface::StaticClass, TEXT("UJumpingInterface"), &Z_Registration_Info_UClass_UJumpingInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJumpingInterface), 2844269429U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h__Script_MyProject_53617137(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_JumpingInterface_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
