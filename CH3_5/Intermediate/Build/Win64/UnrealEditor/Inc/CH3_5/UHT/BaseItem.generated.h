// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CH3_5_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define CH3_5_BaseItem_generated_h

#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_BaseItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemEndOverlap); \
	DECLARE_FUNCTION(execOnItemOverlap);


#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_BaseItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseItem(); \
	friend struct Z_Construct_UClass_ABaseItem_Statics; \
public: \
	DECLARE_CLASS(ABaseItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_5"), NO_API) \
	DECLARE_SERIALIZER(ABaseItem) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseItem*>(this); }


#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_BaseItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseItem(ABaseItem&&); \
	ABaseItem(const ABaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseItem) \
	NO_API virtual ~ABaseItem();


#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_BaseItem_h_11_PROLOG
#define FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_BaseItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_BaseItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_BaseItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_BaseItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_5_API UClass* StaticClass<class ABaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_CH3_5_CH3_5_Source_CH3_5_Public_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
