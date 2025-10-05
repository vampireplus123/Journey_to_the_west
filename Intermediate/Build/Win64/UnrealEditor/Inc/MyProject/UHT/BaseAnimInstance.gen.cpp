// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
MYPROJECT_API UClass* Z_Construct_UClass_UBaseAnimInstance();
MYPROJECT_API UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseAnimInstance ********************************************************
void UBaseAnimInstance::StaticRegisterNativesUBaseAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseAnimInstance;
UClass* UBaseAnimInstance::GetPrivateStaticClass()
{
	using TClass = UBaseAnimInstance;
	if (!Z_Registration_Info_UClass_UBaseAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseAnimInstance"),
			Z_Registration_Info_UClass_UBaseAnimInstance.InnerSingleton,
			StaticRegisterNativesUBaseAnimInstance,
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
	return Z_Registration_Info_UClass_UBaseAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister()
{
	return UBaseAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Ground Speed In Anim Instance" },
		{ "ModuleRelativePath", "Public/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_shouldMove_MetaData[] = {
		{ "Category", "Should Move in AnimInstance" },
		{ "ModuleRelativePath", "Public/BaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_shouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_shouldMove_SetBit(void* Obj)
{
	((UBaseAnimInstance*)Obj)->shouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_shouldMove = { "shouldMove", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseAnimInstance), &Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_shouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_shouldMove_MetaData), NewProp_shouldMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_shouldMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams = {
	&UBaseAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton;
}
UBaseAnimInstance::UBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAnimInstance);
UBaseAnimInstance::~UBaseAnimInstance() {}
// ********** End Class UBaseAnimInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_BaseAnimInstance_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAnimInstance, UBaseAnimInstance::StaticClass, TEXT("UBaseAnimInstance"), &Z_Registration_Info_UClass_UBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAnimInstance), 1295707313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_BaseAnimInstance_h__Script_MyProject_1137095797(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_BaseAnimInstance_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_BaseAnimInstance_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
