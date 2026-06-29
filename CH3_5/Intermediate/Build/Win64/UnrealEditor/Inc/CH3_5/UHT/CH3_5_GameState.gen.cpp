// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_5/Public/CH3_5_GameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCH3_5_GameState() {}

// Begin Cross Module References
CH3_5_API UClass* Z_Construct_UClass_ACH3_5_GameState();
CH3_5_API UClass* Z_Construct_UClass_ACH3_5_GameState_NoRegister();
CH3_5_API UScriptStruct* Z_Construct_UScriptStruct_FWaveSettings();
ENGINE_API UClass* Z_Construct_UClass_AGameState();
UPackage* Z_Construct_UPackage__Script_CH3_5();
// End Cross Module References

// Begin ScriptStruct FWaveSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveSettings;
class UScriptStruct* FWaveSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveSettings, (UObject*)Z_Construct_UPackage__Script_CH3_5(), TEXT("WaveSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WaveSettings.OuterSingleton;
}
template<> CH3_5_API UScriptStruct* StaticStruct<FWaveSettings>()
{
	return FWaveSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWaveSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveDuration_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSpawnCount_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemSpawnCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveSettings_Statics::NewProp_WaveDuration = { "WaveDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveSettings, WaveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveDuration_MetaData), NewProp_WaveDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaveSettings_Statics::NewProp_ItemSpawnCount = { "ItemSpawnCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWaveSettings, ItemSpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSpawnCount_MetaData), NewProp_ItemSpawnCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveSettings_Statics::NewProp_WaveDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveSettings_Statics::NewProp_ItemSpawnCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_5,
	nullptr,
	&NewStructOps,
	"WaveSettings",
	Z_Construct_UScriptStruct_FWaveSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSettings_Statics::PropPointers),
	sizeof(FWaveSettings),
	alignof(FWaveSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWaveSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWaveSettings()
{
	if (!Z_Registration_Info_UScriptStruct_WaveSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveSettings.InnerSingleton, Z_Construct_UScriptStruct_FWaveSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WaveSettings.InnerSingleton;
}
// End ScriptStruct FWaveSettings

// Begin Class ACH3_5_GameState Function AddScore
struct Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics
{
	struct CH3_5_GameState_eventAddScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_5_GameState_eventAddScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_GameState, nullptr, "AddScore", nullptr, nullptr, Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::CH3_5_GameState_eventAddScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::CH3_5_GameState_eventAddScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_5_GameState_AddScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_GameState_AddScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_GameState::execAddScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ACH3_5_GameState Function AddScore

// Begin Class ACH3_5_GameState Function GetScore
struct Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics
{
	struct CH3_5_GameState_eventGetScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_5_GameState_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_GameState, nullptr, "GetScore", nullptr, nullptr, Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::CH3_5_GameState_eventGetScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::CH3_5_GameState_eventGetScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_5_GameState_GetScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_GameState_GetScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_GameState::execGetScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetScore();
	P_NATIVE_END;
}
// End Class ACH3_5_GameState Function GetScore

// Begin Class ACH3_5_GameState Function OnGameOver
struct Z_Construct_UFunction_ACH3_5_GameState_OnGameOver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_GameState_OnGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_GameState, nullptr, "OnGameOver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_GameState_OnGameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_GameState_OnGameOver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACH3_5_GameState_OnGameOver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_GameState_OnGameOver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_GameState::execOnGameOver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameOver();
	P_NATIVE_END;
}
// End Class ACH3_5_GameState Function OnGameOver

// Begin Class ACH3_5_GameState
void ACH3_5_GameState::StaticRegisterNativesACH3_5_GameState()
{
	UClass* Class = ACH3_5_GameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddScore", &ACH3_5_GameState::execAddScore },
		{ "GetScore", &ACH3_5_GameState::execGetScore },
		{ "OnGameOver", &ACH3_5_GameState::execOnGameOver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACH3_5_GameState);
UClass* Z_Construct_UClass_ACH3_5_GameState_NoRegister()
{
	return ACH3_5_GameState::StaticClass();
}
struct Z_Construct_UClass_ACH3_5_GameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CH3_5_GameState.h" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollectedCoinCount_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelDuration_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevels_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelMapNames_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaveSettings_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWaveIndex_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/CH3_5_GameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnedCoinCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollectedCoinCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevels;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelMapNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelMapNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WaveSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WaveSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentWaveIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACH3_5_GameState_AddScore, "AddScore" }, // 966820103
		{ &Z_Construct_UFunction_ACH3_5_GameState_GetScore, "GetScore" }, // 4225221754
		{ &Z_Construct_UFunction_ACH3_5_GameState_OnGameOver, "OnGameOver" }, // 1272554915
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_5_GameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_GameState, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_SpawnedCoinCount = { "SpawnedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_GameState, SpawnedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedCoinCount_MetaData), NewProp_SpawnedCoinCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_CollectedCoinCount = { "CollectedCoinCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_GameState, CollectedCoinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollectedCoinCount_MetaData), NewProp_CollectedCoinCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_LevelDuration = { "LevelDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_GameState, LevelDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelDuration_MetaData), NewProp_LevelDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_GameState, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_MaxLevels = { "MaxLevels", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_GameState, MaxLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLevels_MetaData), NewProp_MaxLevels_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_LevelMapNames_Inner = { "LevelMapNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_LevelMapNames = { "LevelMapNames", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_GameState, LevelMapNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelMapNames_MetaData), NewProp_LevelMapNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_WaveSettings_Inner = { "WaveSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWaveSettings, METADATA_PARAMS(0, nullptr) }; // 600905061
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_WaveSettings = { "WaveSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_GameState, WaveSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaveSettings_MetaData), NewProp_WaveSettings_MetaData) }; // 600905061
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_CurrentWaveIndex = { "CurrentWaveIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_GameState, CurrentWaveIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWaveIndex_MetaData), NewProp_CurrentWaveIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACH3_5_GameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_SpawnedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_CollectedCoinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_LevelDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_CurrentLevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_MaxLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_LevelMapNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_LevelMapNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_WaveSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_WaveSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_GameState_Statics::NewProp_CurrentWaveIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_GameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACH3_5_GameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_GameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACH3_5_GameState_Statics::ClassParams = {
	&ACH3_5_GameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACH3_5_GameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_GameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_GameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACH3_5_GameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACH3_5_GameState()
{
	if (!Z_Registration_Info_UClass_ACH3_5_GameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACH3_5_GameState.OuterSingleton, Z_Construct_UClass_ACH3_5_GameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACH3_5_GameState.OuterSingleton;
}
template<> CH3_5_API UClass* StaticClass<ACH3_5_GameState>()
{
	return ACH3_5_GameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACH3_5_GameState);
ACH3_5_GameState::~ACH3_5_GameState() {}
// End Class ACH3_5_GameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWaveSettings::StaticStruct, Z_Construct_UScriptStruct_FWaveSettings_Statics::NewStructOps, TEXT("WaveSettings"), &Z_Registration_Info_UScriptStruct_WaveSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveSettings), 600905061U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACH3_5_GameState, ACH3_5_GameState::StaticClass, TEXT("ACH3_5_GameState"), &Z_Registration_Info_UClass_ACH3_5_GameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_5_GameState), 436124642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_505842654(TEXT("/Script/CH3_5"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameState_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
