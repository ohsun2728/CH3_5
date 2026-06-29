// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_5/Public/HealingItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealingItem() {}

// Begin Cross Module References
CH3_5_API UClass* Z_Construct_UClass_ABaseItem();
CH3_5_API UClass* Z_Construct_UClass_AHealingItem();
CH3_5_API UClass* Z_Construct_UClass_AHealingItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_5();
// End Cross Module References

// Begin Class AHealingItem
void AHealingItem::StaticRegisterNativesAHealingItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealingItem);
UClass* Z_Construct_UClass_AHealingItem_NoRegister()
{
	return AHealingItem::StaticClass();
}
struct Z_Construct_UClass_AHealingItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HealingItem.h" },
		{ "ModuleRelativePath", "Public/HealingItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealingItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHealingItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseItem,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealingItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealingItem_Statics::ClassParams = {
	&AHealingItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealingItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealingItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHealingItem()
{
	if (!Z_Registration_Info_UClass_AHealingItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealingItem.OuterSingleton, Z_Construct_UClass_AHealingItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHealingItem.OuterSingleton;
}
template<> CH3_5_API UClass* StaticClass<AHealingItem>()
{
	return AHealingItem::StaticClass();
}
AHealingItem::AHealingItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHealingItem);
AHealingItem::~AHealingItem() {}
// End Class AHealingItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_HealingItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHealingItem, AHealingItem::StaticClass, TEXT("AHealingItem"), &Z_Registration_Info_UClass_AHealingItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealingItem), 1992523058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_HealingItem_h_1125433883(TEXT("/Script/CH3_5"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_HealingItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_HealingItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
