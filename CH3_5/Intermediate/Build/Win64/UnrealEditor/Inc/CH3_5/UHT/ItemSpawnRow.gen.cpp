// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_5/Public/ItemSpawnRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSpawnRow() {}

// Begin Cross Module References
CH3_5_API UScriptStruct* Z_Construct_UScriptStruct_FItemSpawnRow();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_CH3_5();
// End Cross Module References

// Begin ScriptStruct FItemSpawnRow
static_assert(std::is_polymorphic<FItemSpawnRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemSpawnRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemSpawnRow;
class UScriptStruct* FItemSpawnRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemSpawnRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemSpawnRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemSpawnRow, (UObject*)Z_Construct_UPackage__Script_CH3_5(), TEXT("ItemSpawnRow"));
	}
	return Z_Registration_Info_UScriptStruct_ItemSpawnRow.OuterSingleton;
}
template<> CH3_5_API UScriptStruct* StaticStruct<FItemSpawnRow>()
{
	return FItemSpawnRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemSpawnRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/ItemSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnChance_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/ItemSpawnRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnChance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemSpawnRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FItemSpawnRow_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemSpawnRow, ItemClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemSpawnRow_Statics::NewProp_SpawnChance = { "SpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemSpawnRow, SpawnChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnChance_MetaData), NewProp_SpawnChance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemSpawnRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSpawnRow_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSpawnRow_Statics::NewProp_SpawnChance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSpawnRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemSpawnRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_5,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemSpawnRow",
	Z_Construct_UScriptStruct_FItemSpawnRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSpawnRow_Statics::PropPointers),
	sizeof(FItemSpawnRow),
	alignof(FItemSpawnRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSpawnRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemSpawnRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemSpawnRow()
{
	if (!Z_Registration_Info_UScriptStruct_ItemSpawnRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemSpawnRow.InnerSingleton, Z_Construct_UScriptStruct_FItemSpawnRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemSpawnRow.InnerSingleton;
}
// End ScriptStruct FItemSpawnRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_ItemSpawnRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemSpawnRow::StaticStruct, Z_Construct_UScriptStruct_FItemSpawnRow_Statics::NewStructOps, TEXT("ItemSpawnRow"), &Z_Registration_Info_UScriptStruct_ItemSpawnRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemSpawnRow), 1156250991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_ItemSpawnRow_h_324635487(TEXT("/Script/CH3_5"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_ItemSpawnRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_ItemSpawnRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
