// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataAsset/BaseCharacterDataAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBaseCharacterDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
MYPROJECT_API UClass* Z_Construct_UClass_UBaseCharacterDataAsset();
MYPROJECT_API UClass* Z_Construct_UClass_UBaseCharacterDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBaseCharacterDataAsset **************************************************
void UBaseCharacterDataAsset::StaticRegisterNativesUBaseCharacterDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBaseCharacterDataAsset;
UClass* UBaseCharacterDataAsset::GetPrivateStaticClass()
{
	using TClass = UBaseCharacterDataAsset;
	if (!Z_Registration_Info_UClass_UBaseCharacterDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BaseCharacterDataAsset"),
			Z_Registration_Info_UClass_UBaseCharacterDataAsset.InnerSingleton,
			StaticRegisterNativesUBaseCharacterDataAsset,
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
	return Z_Registration_Info_UClass_UBaseCharacterDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UBaseCharacterDataAsset_NoRegister()
{
	return UBaseCharacterDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBaseCharacterDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DataAsset/BaseCharacterDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attack Montage" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactionMontage_MetaData[] = {
		{ "Category", "Hit React Montage" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceObjectTyoe_MetaData[] = {
		{ "Category", "Trace Hit Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//trace hit\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "trace hit" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "Trace Hit Data" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Trace Hit Data" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "Category", "Trace Hit Data" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "Category", "TTrace Hit Data" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawTime_MetaData[] = {
		{ "Category", "TTrace Hit Data" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawTraceHit_MetaData[] = {
		{ "Category", "TTrace Hit Data" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Stats*/" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stats" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/DataAsset/BaseCharacterDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactionMontage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjectTyoe_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTyoe;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
	static void NewProp_bDrawTraceHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawTraceHit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_HitReactionMontage = { "HitReactionMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, HitReactionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactionMontage_MetaData), NewProp_HitReactionMontage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_TraceObjectTyoe_Inner = { "TraceObjectTyoe", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_TraceObjectTyoe = { "TraceObjectTyoe", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, TraceObjectTyoe), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceObjectTyoe_MetaData), NewProp_TraceObjectTyoe_MetaData) }; // 1798967895
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorsToIgnore_MetaData), NewProp_ActorsToIgnore_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, StartPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, EndPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, DrawTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawTime_MetaData), NewProp_DrawTime_MetaData) };
void Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_bDrawTraceHit_SetBit(void* Obj)
{
	((UBaseCharacterDataAsset*)Obj)->bDrawTraceHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_bDrawTraceHit = { "bDrawTraceHit", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseCharacterDataAsset), &Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_bDrawTraceHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawTraceHit_MetaData), NewProp_bDrawTraceHit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterDataAsset, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCharacterDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_AttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_HitReactionMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_TraceObjectTyoe_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_TraceObjectTyoe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_ActorsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_ActorsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_DrawTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_bDrawTraceHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterDataAsset_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseCharacterDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterDataAsset_Statics::ClassParams = {
	&UBaseCharacterDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseCharacterDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseCharacterDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseCharacterDataAsset()
{
	if (!Z_Registration_Info_UClass_UBaseCharacterDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCharacterDataAsset.OuterSingleton, Z_Construct_UClass_UBaseCharacterDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseCharacterDataAsset.OuterSingleton;
}
UBaseCharacterDataAsset::UBaseCharacterDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterDataAsset);
UBaseCharacterDataAsset::~UBaseCharacterDataAsset() {}
// ********** End Class UBaseCharacterDataAsset ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCharacterDataAsset, UBaseCharacterDataAsset::StaticClass, TEXT("UBaseCharacterDataAsset"), &Z_Registration_Info_UClass_UBaseCharacterDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCharacterDataAsset), 3404965009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h__Script_MyProject_171497446(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_DataAsset_BaseCharacterDataAsset_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
