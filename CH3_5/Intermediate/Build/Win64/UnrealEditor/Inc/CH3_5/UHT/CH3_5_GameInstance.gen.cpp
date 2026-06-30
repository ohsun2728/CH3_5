// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_5/Public/CH3_5_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCH3_5_GameInstance() {}

// Begin Cross Module References
CH3_5_API UClass* Z_Construct_UClass_UCH3_5_GameInstance();
CH3_5_API UClass* Z_Construct_UClass_UCH3_5_GameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_CH3_5();
// End Cross Module References

// Begin Class UCH3_5_GameInstance Function AddToScore
struct Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics
{
	struct CH3_5_GameInstance_eventAddToScore_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/CH3_5_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_5_GameInstance_eventAddToScore_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCH3_5_GameInstance, nullptr, "AddToScore", nullptr, nullptr, Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::CH3_5_GameInstance_eventAddToScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::CH3_5_GameInstance_eventAddToScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCH3_5_GameInstance::execAddToScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToScore(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UCH3_5_GameInstance Function AddToScore

// Begin Class UCH3_5_GameInstance
void UCH3_5_GameInstance::StaticRegisterNativesUCH3_5_GameInstance()
{
	UClass* Class = UCH3_5_GameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddToScore", &UCH3_5_GameInstance::execAddToScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCH3_5_GameInstance);
UClass* Z_Construct_UClass_UCH3_5_GameInstance_NoRegister()
{
	return UCH3_5_GameInstance::StaticClass();
}
struct Z_Construct_UClass_UCH3_5_GameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CH3_5_GameInstance.h" },
		{ "ModuleRelativePath", "Public/CH3_5_GameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalScore_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/CH3_5_GameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevelIndex_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/CH3_5_GameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldShowMainMenu_MetaData[] = {
		{ "Category", "GameData" },
		{ "ModuleRelativePath", "Public/CH3_5_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevelIndex;
	static void NewProp_bShouldShowMainMenu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldShowMainMenu;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCH3_5_GameInstance_AddToScore, "AddToScore" }, // 945841742
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCH3_5_GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCH3_5_GameInstance_Statics::NewProp_TotalScore = { "TotalScore", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCH3_5_GameInstance, TotalScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalScore_MetaData), NewProp_TotalScore_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCH3_5_GameInstance_Statics::NewProp_CurrentLevelIndex = { "CurrentLevelIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCH3_5_GameInstance, CurrentLevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevelIndex_MetaData), NewProp_CurrentLevelIndex_MetaData) };
void Z_Construct_UClass_UCH3_5_GameInstance_Statics::NewProp_bShouldShowMainMenu_SetBit(void* Obj)
{
	((UCH3_5_GameInstance*)Obj)->bShouldShowMainMenu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCH3_5_GameInstance_Statics::NewProp_bShouldShowMainMenu = { "bShouldShowMainMenu", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCH3_5_GameInstance), &Z_Construct_UClass_UCH3_5_GameInstance_Statics::NewProp_bShouldShowMainMenu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldShowMainMenu_MetaData), NewProp_bShouldShowMainMenu_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCH3_5_GameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCH3_5_GameInstance_Statics::NewProp_TotalScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCH3_5_GameInstance_Statics::NewProp_CurrentLevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCH3_5_GameInstance_Statics::NewProp_bShouldShowMainMenu,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCH3_5_GameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCH3_5_GameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCH3_5_GameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCH3_5_GameInstance_Statics::ClassParams = {
	&UCH3_5_GameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCH3_5_GameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCH3_5_GameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCH3_5_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCH3_5_GameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCH3_5_GameInstance()
{
	if (!Z_Registration_Info_UClass_UCH3_5_GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCH3_5_GameInstance.OuterSingleton, Z_Construct_UClass_UCH3_5_GameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCH3_5_GameInstance.OuterSingleton;
}
template<> CH3_5_API UClass* StaticClass<UCH3_5_GameInstance>()
{
	return UCH3_5_GameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCH3_5_GameInstance);
UCH3_5_GameInstance::~UCH3_5_GameInstance() {}
// End Class UCH3_5_GameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCH3_5_GameInstance, UCH3_5_GameInstance::StaticClass, TEXT("UCH3_5_GameInstance"), &Z_Registration_Info_UClass_UCH3_5_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCH3_5_GameInstance), 601003373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameInstance_h_4264194330(TEXT("/Script/CH3_5"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
