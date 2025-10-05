// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controlers/EnemyAiController.h"

#ifdef MYPROJECT_EnemyAiController_generated_h
#error "EnemyAiController.generated.h already included, missing '#pragma once' in EnemyAiController.h"
#endif
#define MYPROJECT_EnemyAiController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FAIStimulus;

// ********** Begin Class AEnemyAiController *******************************************************
#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Controlers_EnemyAiController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTargetPerceptionUpdated); \
	DECLARE_FUNCTION(execUpdatePatrolLocation);


MYPROJECT_API UClass* Z_Construct_UClass_AEnemyAiController_NoRegister();

#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Controlers_EnemyAiController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAiController(); \
	friend struct Z_Construct_UClass_AEnemyAiController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_AEnemyAiController_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyAiController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AEnemyAiController_NoRegister) \
	DECLARE_SERIALIZER(AEnemyAiController)


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Controlers_EnemyAiController_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyAiController(AEnemyAiController&&) = delete; \
	AEnemyAiController(const AEnemyAiController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAiController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAiController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAiController) \
	NO_API virtual ~AEnemyAiController();


#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Controlers_EnemyAiController_h_16_PROLOG
#define FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Controlers_EnemyAiController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Controlers_EnemyAiController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Controlers_EnemyAiController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Controlers_EnemyAiController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyAiController;

// ********** End Class AEnemyAiController *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Shadow_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Controlers_EnemyAiController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
