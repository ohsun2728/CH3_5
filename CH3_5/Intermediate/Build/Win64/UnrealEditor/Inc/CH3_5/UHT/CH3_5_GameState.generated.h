// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CH3_5_GameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH3_5_CH3_5_GameState_generated_h
#error "CH3_5_GameState.generated.h already included, missing '#pragma once' in CH3_5_GameState.h"
#endif
#define CH3_5_CH3_5_GameState_generated_h

#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveSettings_Statics; \
	CH3_5_API static class UScriptStruct* StaticStruct();


template<> CH3_5_API UScriptStruct* StaticStruct<struct FWaveSettings>();

#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execAddScore); \
	DECLARE_FUNCTION(execGetScore);


#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACH3_5_GameState(); \
	friend struct Z_Construct_UClass_ACH3_5_GameState_Statics; \
public: \
	DECLARE_CLASS(ACH3_5_GameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_5"), NO_API) \
	DECLARE_SERIALIZER(ACH3_5_GameState)


#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACH3_5_GameState(ACH3_5_GameState&&); \
	ACH3_5_GameState(const ACH3_5_GameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACH3_5_GameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACH3_5_GameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACH3_5_GameState) \
	NO_API virtual ~ACH3_5_GameState();


#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_20_PROLOG
#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_5_API UClass* StaticClass<class ACH3_5_GameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
