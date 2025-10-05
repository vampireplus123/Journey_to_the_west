// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/AttackComponent.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAttackComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MYPROJECT_API UClass* Z_Construct_UClass_UAttackComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UAttackInterface_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UBaseCharacterDataAsset_NoRegister();
MYPROJECT_API UFunction* Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FHitSomethingDelegate *************************************************
struct Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics
{
	struct _Script_MyProject_eventHitSomethingDelegate_Parms
	{
		FHitResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MyProject_eventHitSomethingDelegate_Parms, Result), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MyProject, nullptr, "HitSomethingDelegate__DelegateSignature", Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::_Script_MyProject_eventHitSomethingDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::_Script_MyProject_eventHitSomethingDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MyProject_HitSomethingDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHitSomethingDelegate_DelegateWrapper(const FScriptDelegate& HitSomethingDelegate, FHitResult const& Result)
{
	struct _Script_MyProject_eventHitSomethingDelegate_Parms
	{
		FHitResult Result;
	};
	_Script_MyProject_eventHitSomethingDelegate_Parms Parms;
	Parms.Result=Result;
	HitSomethingDelegate.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FHitSomethingDelegate ***************************************************

// ********** Begin Class UAttackComponent *********************************************************
void UAttackComponent::StaticRegisterNativesUAttackComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackComponent;
UClass* UAttackComponent::GetPrivateStaticClass()
{
	using TClass = UAttackComponent;
	if (!Z_Registration_Info_UClass_UAttackComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AttackComponent"),
			Z_Registration_Info_UClass_UAttackComponent.InnerSingleton,
			StaticRegisterNativesUAttackComponent,
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
	return Z_Registration_Info_UClass_UAttackComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackComponent_NoRegister()
{
	return UAttackComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AttackComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hitActors_MetaData[] = {
		{ "Category", "Trace Hit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//trace hit data\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "trace hit data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDataAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayAttackMontage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/AttackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_hitActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_hitActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDataAsset;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_AttackInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayAttackMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_hitActors_Inner = { "hitActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_hitActors = { "hitActors", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, hitActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hitActors_MetaData), NewProp_hitActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_CharacterDataAsset = { "CharacterDataAsset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, CharacterDataAsset), Z_Construct_UClass_UBaseCharacterDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDataAsset_MetaData), NewProp_CharacterDataAsset_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_AttackInterface = { "AttackInterface", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, AttackInterface), Z_Construct_UClass_UAttackInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackInterface_MetaData), NewProp_AttackInterface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_PlayAttackMontage = { "PlayAttackMontage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, PlayAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayAttackMontage_MetaData), NewProp_PlayAttackMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_hitActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_hitActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_CharacterDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_AttackInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_PlayAttackMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttackComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackComponent_Statics::ClassParams = {
	&UAttackComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttackComponent()
{
	if (!Z_Registration_Info_UClass_UAttackComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackComponent.OuterSingleton, Z_Construct_UClass_UAttackComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackComponent);
UAttackComponent::~UAttackComponent() {}
// ********** End Class UAttackComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackComponent, UAttackComponent::StaticClass, TEXT("UAttackComponent"), &Z_Registration_Info_UClass_UAttackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackComponent), 2133781377U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h__Script_MyProject_5756457(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Components_AttackComponent_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
