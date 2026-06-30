// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_5/Public/CH3_5_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCH3_5_PlayerController() {}

// Begin Cross Module References
CH3_5_API UClass* Z_Construct_UClass_ACH3_5_PlayerController();
CH3_5_API UClass* Z_Construct_UClass_ACH3_5_PlayerController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_5();
// End Cross Module References

// Begin Class ACH3_5_PlayerController Function GetHUDWidget
struct Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics
{
	struct CH3_5_PlayerController_eventGetHUDWidget_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_5_PlayerController_eventGetHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_PlayerController, nullptr, "GetHUDWidget", nullptr, nullptr, Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::CH3_5_PlayerController_eventGetHUDWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::CH3_5_PlayerController_eventGetHUDWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_PlayerController::execGetHUDWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetHUDWidget();
	P_NATIVE_END;
}
// End Class ACH3_5_PlayerController Function GetHUDWidget

// Begin Class ACH3_5_PlayerController Function GoToMainMenu
struct Z_Construct_UFunction_ACH3_5_PlayerController_GoToMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_PlayerController_GoToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_PlayerController, nullptr, "GoToMainMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_PlayerController_GoToMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_PlayerController_GoToMainMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACH3_5_PlayerController_GoToMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_PlayerController_GoToMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_PlayerController::execGoToMainMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GoToMainMenu();
	P_NATIVE_END;
}
// End Class ACH3_5_PlayerController Function GoToMainMenu

// Begin Class ACH3_5_PlayerController Function QuitGame
struct Z_Construct_UFunction_ACH3_5_PlayerController_QuitGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_PlayerController_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_PlayerController, nullptr, "QuitGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_PlayerController_QuitGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_PlayerController_QuitGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACH3_5_PlayerController_QuitGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_PlayerController_QuitGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_PlayerController::execQuitGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuitGame();
	P_NATIVE_END;
}
// End Class ACH3_5_PlayerController Function QuitGame

// Begin Class ACH3_5_PlayerController Function ShowGameHUD
struct Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_PlayerController, nullptr, "ShowGameHUD", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameHUD_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_PlayerController::execShowGameHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameHUD();
	P_NATIVE_END;
}
// End Class ACH3_5_PlayerController Function ShowGameHUD

// Begin Class ACH3_5_PlayerController Function ShowGameOverMenu
struct Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameOverMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameOverMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_PlayerController, nullptr, "ShowGameOverMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameOverMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameOverMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameOverMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameOverMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_PlayerController::execShowGameOverMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowGameOverMenu();
	P_NATIVE_END;
}
// End Class ACH3_5_PlayerController Function ShowGameOverMenu

// Begin Class ACH3_5_PlayerController Function ShowMainMenu
struct Z_Construct_UFunction_ACH3_5_PlayerController_ShowMainMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_PlayerController_ShowMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_PlayerController, nullptr, "ShowMainMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_PlayerController_ShowMainMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_PlayerController_ShowMainMenu_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACH3_5_PlayerController_ShowMainMenu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_PlayerController_ShowMainMenu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_PlayerController::execShowMainMenu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowMainMenu();
	P_NATIVE_END;
}
// End Class ACH3_5_PlayerController Function ShowMainMenu

// Begin Class ACH3_5_PlayerController Function StartGame
struct Z_Construct_UFunction_ACH3_5_PlayerController_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_PlayerController_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_PlayerController, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_PlayerController_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_PlayerController_StartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACH3_5_PlayerController_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_PlayerController_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_PlayerController::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// End Class ACH3_5_PlayerController Function StartGame

// Begin Class ACH3_5_PlayerController
void ACH3_5_PlayerController::StaticRegisterNativesACH3_5_PlayerController()
{
	UClass* Class = ACH3_5_PlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHUDWidget", &ACH3_5_PlayerController::execGetHUDWidget },
		{ "GoToMainMenu", &ACH3_5_PlayerController::execGoToMainMenu },
		{ "QuitGame", &ACH3_5_PlayerController::execQuitGame },
		{ "ShowGameHUD", &ACH3_5_PlayerController::execShowGameHUD },
		{ "ShowGameOverMenu", &ACH3_5_PlayerController::execShowGameOverMenu },
		{ "ShowMainMenu", &ACH3_5_PlayerController::execShowMainMenu },
		{ "StartGame", &ACH3_5_PlayerController::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACH3_5_PlayerController);
UClass* Z_Construct_UClass_ACH3_5_PlayerController_NoRegister()
{
	return ACH3_5_PlayerController::StaticClass();
}
struct Z_Construct_UClass_ACH3_5_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CH3_5_PlayerController.h" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetInstance_MetaData[] = {
		{ "Category", "HUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetClass_MetaData[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuWidgetInstance_MetaData[] = {
		{ "Category", "Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "Menu" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetInstance_MetaData[] = {
		{ "Category", "Menu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CH3_5_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenuWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameOverWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACH3_5_PlayerController_GetHUDWidget, "GetHUDWidget" }, // 1065481906
		{ &Z_Construct_UFunction_ACH3_5_PlayerController_GoToMainMenu, "GoToMainMenu" }, // 755477959
		{ &Z_Construct_UFunction_ACH3_5_PlayerController_QuitGame, "QuitGame" }, // 3553408894
		{ &Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameHUD, "ShowGameHUD" }, // 1140917383
		{ &Z_Construct_UFunction_ACH3_5_PlayerController_ShowGameOverMenu, "ShowGameOverMenu" }, // 3668178017
		{ &Z_Construct_UFunction_ACH3_5_PlayerController_ShowMainMenu, "ShowMainMenu" }, // 564584661
		{ &Z_Construct_UFunction_ACH3_5_PlayerController_StartGame, "StartGame" }, // 3360085930
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_5_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_PlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_PlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_PlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_PlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_PlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_HUDWidgetInstance = { "HUDWidgetInstance", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_PlayerController, HUDWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetInstance_MetaData), NewProp_HUDWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_MainMenuWidgetClass = { "MainMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_PlayerController, MainMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetClass_MetaData), NewProp_MainMenuWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_MainMenuWidgetInstance = { "MainMenuWidgetInstance", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_PlayerController, MainMenuWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenuWidgetInstance_MetaData), NewProp_MainMenuWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_PlayerController, GameOverWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverWidgetClass_MetaData), NewProp_GameOverWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_GameOverWidgetInstance = { "GameOverWidgetInstance", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_PlayerController, GameOverWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverWidgetInstance_MetaData), NewProp_GameOverWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACH3_5_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_HUDWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_MainMenuWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_MainMenuWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_GameOverWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_PlayerController_Statics::NewProp_GameOverWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACH3_5_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACH3_5_PlayerController_Statics::ClassParams = {
	&ACH3_5_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACH3_5_PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACH3_5_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACH3_5_PlayerController()
{
	if (!Z_Registration_Info_UClass_ACH3_5_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACH3_5_PlayerController.OuterSingleton, Z_Construct_UClass_ACH3_5_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACH3_5_PlayerController.OuterSingleton;
}
template<> CH3_5_API UClass* StaticClass<ACH3_5_PlayerController>()
{
	return ACH3_5_PlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACH3_5_PlayerController);
ACH3_5_PlayerController::~ACH3_5_PlayerController() {}
// End Class ACH3_5_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACH3_5_PlayerController, ACH3_5_PlayerController::StaticClass, TEXT("ACH3_5_PlayerController"), &Z_Registration_Info_UClass_ACH3_5_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_5_PlayerController), 548510186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_3970498107(TEXT("/Script/CH3_5"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
