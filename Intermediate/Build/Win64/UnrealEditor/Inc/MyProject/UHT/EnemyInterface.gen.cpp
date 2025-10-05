// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/EnemyInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MYPROJECT_API UClass* Z_Construct_UClass_UEnemyInterface();
MYPROJECT_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UEnemyInterface ******************************************************
void UEnemyInterface::StaticRegisterNativesUEnemyInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemyInterface;
UClass* UEnemyInterface::GetPrivateStaticClass()
{
	using TClass = UEnemyInterface;
	if (!Z_Registration_Info_UClass_UEnemyInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyInterface"),
			Z_Registration_Info_UClass_UEnemyInterface.InnerSingleton,
			StaticRegisterNativesUEnemyInterface,
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
	return Z_Registration_Info_UClass_UEnemyInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemyInterface_NoRegister()
{
	return UEnemyInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/EnemyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyInterface_Statics::ClassParams = {
	&UEnemyInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyInterface()
{
	if (!Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton, Z_Construct_UClass_UEnemyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyInterface.OuterSingleton;
}
UEnemyInterface::UEnemyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyInterface);
// ********** End Interface UEnemyInterface ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_EnemyInterface_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyInterface, UEnemyInterface::StaticClass, TEXT("UEnemyInterface"), &Z_Registration_Info_UClass_UEnemyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyInterface), 2833547819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_EnemyInterface_h__Script_MyProject_1770326118(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_EnemyInterface_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Interfaces_EnemyInterface_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
