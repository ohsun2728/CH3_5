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
UPackage* Z_Construct_UPackage__Script_CH3_5();
// End Cross Module References

// Begin Class ACH3_5_Player
void ACH3_5_Player::StaticRegisterNativesACH3_5_Player()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_5_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ACH3_5_Player, ACH3_5_Player::StaticClass, TEXT("ACH3_5_Player"), &Z_Registration_Info_UClass_ACH3_5_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_5_Player), 3071271084U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_Player_h_1020169788(TEXT("/Script/CH3_5"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_CH3_5_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
