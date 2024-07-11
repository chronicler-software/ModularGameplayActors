// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameState();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameState();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameState_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// End Cross Module References

// Begin Class AModularGameStateBase
void AModularGameStateBase::StaticRegisterNativesAModularGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularGameStateBase);
UClass* Z_Construct_UClass_AModularGameStateBase_NoRegister()
{
	return AModularGameStateBase::StaticClass();
}
struct Z_Construct_UClass_AModularGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a ModularGameModeBase */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a ModularGameModeBase" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameStateBase_Statics::ClassParams = {
	&AModularGameStateBase::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularGameStateBase()
{
	if (!Z_Registration_Info_UClass_AModularGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameStateBase.OuterSingleton, Z_Construct_UClass_AModularGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularGameStateBase.OuterSingleton;
}
template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameStateBase>()
{
	return AModularGameStateBase::StaticClass();
}
AModularGameStateBase::AModularGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameStateBase);
AModularGameStateBase::~AModularGameStateBase() {}
// End Class AModularGameStateBase

// Begin Class AModularGameState
void AModularGameState::StaticRegisterNativesAModularGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularGameState);
UClass* Z_Construct_UClass_AModularGameState_NoRegister()
{
	return AModularGameState::StaticClass();
}
struct Z_Construct_UClass_AModularGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a ModularGameState */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a ModularGameState" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameState_Statics::ClassParams = {
	&AModularGameState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularGameState()
{
	if (!Z_Registration_Info_UClass_AModularGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameState.OuterSingleton, Z_Construct_UClass_AModularGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularGameState.OuterSingleton;
}
template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularGameState>()
{
	return AModularGameState::StaticClass();
}
AModularGameState::AModularGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameState);
AModularGameState::~AModularGameState() {}
// End Class AModularGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularGameStateBase, AModularGameStateBase::StaticClass, TEXT("AModularGameStateBase"), &Z_Registration_Info_UClass_AModularGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameStateBase), 492712736U) },
		{ Z_Construct_UClass_AModularGameState, AModularGameState::StaticClass, TEXT("AModularGameState"), &Z_Registration_Info_UClass_AModularGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameState), 3010852117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_2173133655(TEXT("/Script/ModularGameplayActors"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
