// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify/AN_EndAttack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAN_EndAttack() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
MYPROJECT_API UClass* Z_Construct_UClass_UAN_EndAttack();
MYPROJECT_API UClass* Z_Construct_UClass_UAN_EndAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAN_EndAttack ************************************************************
void UAN_EndAttack::StaticRegisterNativesUAN_EndAttack()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAN_EndAttack;
UClass* UAN_EndAttack::GetPrivateStaticClass()
{
	using TClass = UAN_EndAttack;
	if (!Z_Registration_Info_UClass_UAN_EndAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AN_EndAttack"),
			Z_Registration_Info_UClass_UAN_EndAttack.InnerSingleton,
			StaticRegisterNativesUAN_EndAttack,
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
	return Z_Registration_Info_UClass_UAN_EndAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UAN_EndAttack_NoRegister()
{
	return UAN_EndAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAN_EndAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AN_EndAttack.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AN_EndAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAN_EndAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAN_EndAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAN_EndAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAN_EndAttack_Statics::ClassParams = {
	&UAN_EndAttack::StaticClass,
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
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAN_EndAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAN_EndAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAN_EndAttack()
{
	if (!Z_Registration_Info_UClass_UAN_EndAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAN_EndAttack.OuterSingleton, Z_Construct_UClass_UAN_EndAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAN_EndAttack.OuterSingleton;
}
UAN_EndAttack::UAN_EndAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAN_EndAttack);
UAN_EndAttack::~UAN_EndAttack() {}
// ********** End Class UAN_EndAttack **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_AnimNotify_AN_EndAttack_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAN_EndAttack, UAN_EndAttack::StaticClass, TEXT("UAN_EndAttack"), &Z_Registration_Info_UClass_UAN_EndAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAN_EndAttack), 439010247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_AnimNotify_AN_EndAttack_h__Script_MyProject_1021072646(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_AnimNotify_AN_EndAttack_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_AnimNotify_AN_EndAttack_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
