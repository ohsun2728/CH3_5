// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_5/Public/CH3_5_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCH3_5_Player() {}

// Begin Cross Module References
CH3_5_API UClass* Z_Construct_UClass_ACH3_5_Player();
CH3_5_API UClass* Z_Construct_UClass_ACH3_5_Player_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_5();
// End Cross Module References

// Begin Class ACH3_5_Player Function AddHealth
struct Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics
{
	struct CH3_5_Player_eventAddHealth_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/CH3_5_Player.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_5_Player_eventAddHealth_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_Player, nullptr, "AddHealth", nullptr, nullptr, Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::CH3_5_Player_eventAddHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::CH3_5_Player_eventAddHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_5_Player_AddHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_Player_AddHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_Player::execAddHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHealth(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class ACH3_5_Player Function AddHealth

// Begin Class ACH3_5_Player Function GetHealth
struct Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics
{
	struct CH3_5_Player_eventGetHealth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/CH3_5_Player.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_5_Player_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_Player, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::CH3_5_Player_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::CH3_5_Player_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_5_Player_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_Player_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_Player::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class ACH3_5_Player Function GetHealth

// Begin Class ACH3_5_Player Function OnDeath
struct Z_Construct_UFunction_ACH3_5_Player_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xeb\xa7\x9d \xec\xb2\x98\xeb\xa6\xac \xed\x95\xa8\xec\x88\x98 (\xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\xb4 0 \xec\x9d\xb4\xed\x95\x98\xea\xb0\x80 \xeb\x90\x98\xec\x97\x88\xec\x9d\x84 \xeb\x95\x8c \xed\x98\xb8\xec\xb6\x9c)\n" },
#endif
		{ "ModuleRelativePath", "Public/CH3_5_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xeb\xa7\x9d \xec\xb2\x98\xeb\xa6\xac \xed\x95\xa8\xec\x88\x98 (\xec\xb2\xb4\xeb\xa0\xa5\xec\x9d\xb4 0 \xec\x9d\xb4\xed\x95\x98\xea\xb0\x80 \xeb\x90\x98\xec\x97\x88\xec\x9d\x84 \xeb\x95\x8c \xed\x98\xb8\xec\xb6\x9c)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_5_Player_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_5_Player, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_5_Player_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_5_Player_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACH3_5_Player_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_5_Player_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_5_Player::execOnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeath();
	P_NATIVE_END;
}
// End Class ACH3_5_Player Function OnDeath

// Begin Class ACH3_5_Player
void ACH3_5_Player::StaticRegisterNativesACH3_5_Player()
{
	UClass* Class = ACH3_5_Player::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHealth", &ACH3_5_Player::execAddHealth },
		{ "GetHealth", &ACH3_5_Player::execGetHealth },
		{ "OnDeath", &ACH3_5_Player::execOnDeath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACH3_5_Player);
UClass* Z_Construct_UClass_ACH3_5_Player_NoRegister()
{
	return ACH3_5_Player::StaticClass();
}
struct Z_Construct_UClass_ACH3_5_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CH3_5_Player.h" },
		{ "ModuleRelativePath", "Public/CH3_5_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CH3_5_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CH3_5_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverheadWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CH3_5_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/CH3_5_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xeb\x8c\x80 \xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/CH3_5_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverheadWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACH3_5_Player_AddHealth, "AddHealth" }, // 1108975064
		{ &Z_Construct_UFunction_ACH3_5_Player_GetHealth, "GetHealth" }, // 2083093004
		{ &Z_Construct_UFunction_ACH3_5_Player_OnDeath, "OnDeath" }, // 2655320855
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_5_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_5_Player_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_Player, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_5_Player_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_Player, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_5_Player_Statics::NewProp_OverheadWidget = { "OverheadWidget", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_Player, OverheadWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverheadWidget_MetaData), NewProp_OverheadWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_5_Player_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_Player, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_5_Player_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_5_Player, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACH3_5_Player_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_Player_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_Player_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_Player_Statics::NewProp_OverheadWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_Player_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_5_Player_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_Player_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACH3_5_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACH3_5_Player_Statics::ClassParams = {
	&ACH3_5_Player::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACH3_5_Player_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_Player_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_ACH3_5_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACH3_5_Player()
{
	if (!Z_Registration_Info_UClass_ACH3_5_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACH3_5_Player.OuterSingleton, Z_Construct_UClass_ACH3_5_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACH3_5_Player.OuterSingleton;
}
template<> CH3_5_API UClass* StaticClass<ACH3_5_Player>()
{
	return ACH3_5_Player::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACH3_5_Player);
ACH3_5_Player::~ACH3_5_Player() {}
// End Class ACH3_5_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACH3_5_Player, ACH3_5_Player::StaticClass, TEXT("ACH3_5_Player"), &Z_Registration_Info_UClass_ACH3_5_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_5_Player), 4041366739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_Player_h_1170796393(TEXT("/Script/CH3_5"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
