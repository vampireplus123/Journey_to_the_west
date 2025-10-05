// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify/ANS_Trace.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeANS_Trace() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
MYPROJECT_API UClass* Z_Construct_UClass_UANS_Trace();
MYPROJECT_API UClass* Z_Construct_UClass_UANS_Trace_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UAttackInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UANS_Trace ***************************************************************
void UANS_Trace::StaticRegisterNativesUANS_Trace()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UANS_Trace;
UClass* UANS_Trace::GetPrivateStaticClass()
{
	using TClass = UANS_Trace;
	if (!Z_Registration_Info_UClass_UANS_Trace.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ANS_Trace"),
			Z_Registration_Info_UClass_UANS_Trace.InnerSingleton,
			StaticRegisterNativesUANS_Trace,
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
	return Z_Registration_Info_UClass_UANS_Trace.InnerSingleton;
}
UClass* Z_Construct_UClass_UANS_Trace_NoRegister()
{
	return UANS_Trace::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UANS_Trace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/ANS_Trace.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/ANS_Trace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackInterface_MetaData[] = {
		{ "Category", "Attack Interface" },
		{ "ModuleRelativePath", "Public/AnimNotify/ANS_Trace.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AttackInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UANS_Trace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UANS_Trace_Statics::NewProp_AttackInterface = { "AttackInterface", nullptr, (EPropertyFlags)0x0044000000010011, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UANS_Trace, AttackInterface), Z_Construct_UClass_UAttackInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackInterface_MetaData), NewProp_AttackInterface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UANS_Trace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UANS_Trace_Statics::NewProp_AttackInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_Trace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UANS_Trace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_Trace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UANS_Trace_Statics::ClassParams = {
	&UANS_Trace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UANS_Trace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UANS_Trace_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UANS_Trace_Statics::Class_MetaDataParams), Z_Construct_UClass_UANS_Trace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UANS_Trace()
{
	if (!Z_Registration_Info_UClass_UANS_Trace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UANS_Trace.OuterSingleton, Z_Construct_UClass_UANS_Trace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UANS_Trace.OuterSingleton;
}
UANS_Trace::UANS_Trace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UANS_Trace);
UANS_Trace::~UANS_Trace() {}
// ********** End Class UANS_Trace *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UANS_Trace, UANS_Trace::StaticClass, TEXT("UANS_Trace"), &Z_Registration_Info_UClass_UANS_Trace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UANS_Trace), 3877507209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h__Script_MyProject_4230875664(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_AnimNotify_ANS_Trace_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
