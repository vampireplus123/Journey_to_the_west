// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controlers/EnemyAiController.h"
#include "Perception/AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyAiController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_AEnemyAiController();
MYPROJECT_API UClass* Z_Construct_UClass_AEnemyAiController_NoRegister();
MYPROJECT_API UClass* Z_Construct_UClass_UEnemyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyAiController Function HandleTargetPerceptionUpdated ****************
struct Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics
{
	struct EnemyAiController_eventHandleTargetPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controlers/EnemyAiController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyAiController_eventHandleTargetPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyAiController_eventHandleTargetPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 1267494880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyAiController, nullptr, "HandleTargetPerceptionUpdated", Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::EnemyAiController_eventHandleTargetPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::EnemyAiController_eventHandleTargetPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyAiController::execHandleTargetPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// ********** End Class AEnemyAiController Function HandleTargetPerceptionUpdated ******************

// ********** Begin Class AEnemyAiController Function UpdatePatrolLocation *************************
struct Z_Construct_UFunction_AEnemyAiController_UpdatePatrolLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Controlers/EnemyAiController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyAiController_UpdatePatrolLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AEnemyAiController, nullptr, "UpdatePatrolLocation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyAiController_UpdatePatrolLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyAiController_UpdatePatrolLocation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AEnemyAiController_UpdatePatrolLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyAiController_UpdatePatrolLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyAiController::execUpdatePatrolLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePatrolLocation();
	P_NATIVE_END;
}
// ********** End Class AEnemyAiController Function UpdatePatrolLocation ***************************

// ********** Begin Class AEnemyAiController *******************************************************
void AEnemyAiController::StaticRegisterNativesAEnemyAiController()
{
	UClass* Class = AEnemyAiController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleTargetPerceptionUpdated", &AEnemyAiController::execHandleTargetPerceptionUpdated },
		{ "UpdatePatrolLocation", &AEnemyAiController::execUpdatePatrolLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyAiController;
UClass* AEnemyAiController::GetPrivateStaticClass()
{
	using TClass = AEnemyAiController;
	if (!Z_Registration_Info_UClass_AEnemyAiController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyAiController"),
			Z_Registration_Info_UClass_AEnemyAiController.InnerSingleton,
			StaticRegisterNativesAEnemyAiController,
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
	return Z_Registration_Info_UClass_AEnemyAiController.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyAiController_NoRegister()
{
	return AEnemyAiController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyAiController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controlers/EnemyAiController.h" },
		{ "ModuleRelativePath", "Public/Controlers/EnemyAiController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AiPerceptionComponent_MetaData[] = {
		{ "Category", "EnemyAiController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Controlers/EnemyAiController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PossessedPawn_MetaData[] = {
		{ "Category", "EnemyAiController" },
		{ "ModuleRelativePath", "Public/Controlers/EnemyAiController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/Controlers/EnemyAiController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "Behavior Tree" },
		{ "ModuleRelativePath", "Public/Controlers/EnemyAiController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_PatrolLocation_MetaData[] = {
		{ "Category", "Behavior Tree" },
		{ "ModuleRelativePath", "Public/Controlers/EnemyAiController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_IsCombat_MetaData[] = {
		{ "Category", "Behavior Tree" },
		{ "ModuleRelativePath", "Public/Controlers/EnemyAiController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_PlayerActor_MetaData[] = {
		{ "Category", "Behavior Tree" },
		{ "ModuleRelativePath", "Public/Controlers/EnemyAiController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AiPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PossessedPawn;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_EnemyInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_PatrolLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_IsCombat;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key_PlayerActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyAiController_HandleTargetPerceptionUpdated, "HandleTargetPerceptionUpdated" }, // 2545471336
		{ &Z_Construct_UFunction_AEnemyAiController_UpdatePatrolLocation, "UpdatePatrolLocation" }, // 4266286148
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyAiController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAiController_Statics::NewProp_AiPerceptionComponent = { "AiPerceptionComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAiController, AiPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AiPerceptionComponent_MetaData), NewProp_AiPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAiController_Statics::NewProp_PossessedPawn = { "PossessedPawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAiController, PossessedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PossessedPawn_MetaData), NewProp_PossessedPawn_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AEnemyAiController_Statics::NewProp_EnemyInterface = { "EnemyInterface", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAiController, EnemyInterface), Z_Construct_UClass_UEnemyInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyInterface_MetaData), NewProp_EnemyInterface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyAiController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAiController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemyAiController_Statics::NewProp_Key_PatrolLocation = { "Key_PatrolLocation", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAiController, Key_PatrolLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_PatrolLocation_MetaData), NewProp_Key_PatrolLocation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemyAiController_Statics::NewProp_Key_IsCombat = { "Key_IsCombat", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAiController, Key_IsCombat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_IsCombat_MetaData), NewProp_Key_IsCombat_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AEnemyAiController_Statics::NewProp_Key_PlayerActor = { "Key_PlayerActor", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyAiController, Key_PlayerActor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_PlayerActor_MetaData), NewProp_Key_PlayerActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyAiController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAiController_Statics::NewProp_AiPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAiController_Statics::NewProp_PossessedPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAiController_Statics::NewProp_EnemyInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAiController_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAiController_Statics::NewProp_Key_PatrolLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAiController_Statics::NewProp_Key_IsCombat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyAiController_Statics::NewProp_Key_PlayerActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAiController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyAiController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAiController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyAiController_Statics::ClassParams = {
	&AEnemyAiController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyAiController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAiController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyAiController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyAiController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyAiController()
{
	if (!Z_Registration_Info_UClass_AEnemyAiController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyAiController.OuterSingleton, Z_Construct_UClass_AEnemyAiController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyAiController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyAiController);
AEnemyAiController::~AEnemyAiController() {}
// ********** End Class AEnemyAiController *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Controlers_EnemyAiController_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyAiController, AEnemyAiController::StaticClass, TEXT("AEnemyAiController"), &Z_Registration_Info_UClass_AEnemyAiController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyAiController), 2968315814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Controlers_EnemyAiController_h__Script_MyProject_3109123368(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Controlers_EnemyAiController_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Journey_to_the_west_Source_MyProject_Public_Controlers_EnemyAiController_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
