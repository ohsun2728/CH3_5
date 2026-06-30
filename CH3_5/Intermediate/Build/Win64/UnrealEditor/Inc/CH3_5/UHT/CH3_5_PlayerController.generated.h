// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CH3_5_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef CH3_5_CH3_5_PlayerController_generated_h
#error "CH3_5_PlayerController.generated.h already included, missing '#pragma once' in CH3_5_PlayerController.h"
#endif
#define CH3_5_CH3_5_PlayerController_generated_h

#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuitGame); \
	DECLARE_FUNCTION(execGoToMainMenu); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execShowGameHUD); \
	DECLARE_FUNCTION(execShowGameOverMenu); \
	DECLARE_FUNCTION(execShowMainMenu); \
	DECLARE_FUNCTION(execGetHUDWidget);


#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACH3_5_PlayerController(); \
	friend struct Z_Construct_UClass_ACH3_5_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ACH3_5_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_5"), NO_API) \
	DECLARE_SERIALIZER(ACH3_5_PlayerController)


#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACH3_5_PlayerController(ACH3_5_PlayerController&&); \
	ACH3_5_PlayerController(const ACH3_5_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACH3_5_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACH3_5_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACH3_5_PlayerController) \
	NO_API virtual ~ACH3_5_PlayerController();


#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_11_PROLOG
#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_5_API UClass* StaticClass<class ACH3_5_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
