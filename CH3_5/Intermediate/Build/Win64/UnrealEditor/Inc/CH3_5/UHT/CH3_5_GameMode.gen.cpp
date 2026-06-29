// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_5/Public/CH3_5_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCH3_5_GameMode() {}

// Begin Cross Module References
CH3_5_API UClass* Z_Construct_UClass_ACH3_5_GameMode();
CH3_5_API UClass* Z_Construct_UClass_ACH3_5_GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_CH3_5();
// End Cross Module References

// Begin Class ACH3_5_GameMode
void ACH3_5_GameMode::StaticRegisterNativesACH3_5_GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACH3_5_GameMode);
UClass* Z_Construct_UClass_ACH3_5_GameMode_NoRegister()
{
	return ACH3_5_GameMode::StaticClass();
}
struct Z_Construct_UClass_ACH3_5_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CH3_5_GameMode.h" },
		{ "ModuleRelativePath", "Public/CH3_5_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_5_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACH3_5_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACH3_5_GameMode_Statics::ClassParams = {
	&ACH3_5_GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_5_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACH3_5_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACH3_5_GameMode()
{
	if (!Z_Registration_Info_UClass_ACH3_5_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACH3_5_GameMode.OuterSingleton, Z_Construct_UClass_ACH3_5_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACH3_5_GameMode.OuterSingleton;
}
template<> CH3_5_API UClass* StaticClass<ACH3_5_GameMode>()
{
	return ACH3_5_GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACH3_5_GameMode);
ACH3_5_GameMode::~ACH3_5_GameMode() {}
// End Class ACH3_5_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACH3_5_GameMode, ACH3_5_GameMode::StaticClass, TEXT("ACH3_5_GameMode"), &Z_Registration_Info_UClass_ACH3_5_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_5_GameMode), 1348650699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameMode_h_1408739801(TEXT("/Script/CH3_5"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
