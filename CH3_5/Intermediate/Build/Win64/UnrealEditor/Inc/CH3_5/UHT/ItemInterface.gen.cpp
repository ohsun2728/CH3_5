// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_5/Public/ItemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemInterface() {}

// Begin Cross Module References
CH3_5_API UClass* Z_Construct_UClass_UItemInterface();
CH3_5_API UClass* Z_Construct_UClass_UItemInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_CH3_5();
// End Cross Module References

// Begin Interface UItemInterface
void UItemInterface::StaticRegisterNativesUItemInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemInterface);
UClass* Z_Construct_UClass_UItemInterface_NoRegister()
{
	return UItemInterface::StaticClass();
}
struct Z_Construct_UClass_UItemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemInterface_Statics::ClassParams = {
	&UItemInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemInterface()
{
	if (!Z_Registration_Info_UClass_UItemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemInterface.OuterSingleton, Z_Construct_UClass_UItemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemInterface.OuterSingleton;
}
template<> CH3_5_API UClass* StaticClass<UItemInterface>()
{
	return UItemInterface::StaticClass();
}
UItemInterface::UItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemInterface);
UItemInterface::~UItemInterface() {}
// End Interface UItemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_ItemInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemInterface, UItemInterface::StaticClass, TEXT("UItemInterface"), &Z_Registration_Info_UClass_UItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemInterface), 602525386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_ItemInterface_h_835751876(TEXT("/Script/CH3_5"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_ItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_ItemInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
