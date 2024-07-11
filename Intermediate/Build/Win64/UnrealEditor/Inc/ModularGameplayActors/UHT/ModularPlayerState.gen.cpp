// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularPlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// End Cross Module References

// Begin Class AModularPlayerState
void AModularPlayerState::StaticRegisterNativesAModularPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularPlayerState);
UClass* Z_Construct_UClass_AModularPlayerState_NoRegister()
{
	return AModularPlayerState::StaticClass();
}
struct Z_Construct_UClass_AModularPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularPlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularPlayerState_Statics::ClassParams = {
	&AModularPlayerState::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularPlayerState()
{
	if (!Z_Registration_Info_UClass_AModularPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularPlayerState.OuterSingleton, Z_Construct_UClass_AModularPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularPlayerState.OuterSingleton;
}
template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularPlayerState>()
{
	return AModularPlayerState::StaticClass();
}
AModularPlayerState::AModularPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularPlayerState);
AModularPlayerState::~AModularPlayerState() {}
// End Class AModularPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularPlayerState, AModularPlayerState::StaticClass, TEXT("AModularPlayerState"), &Z_Registration_Info_UClass_AModularPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularPlayerState), 3794383023U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPlayerState_h_1823405955(TEXT("/Script/ModularGameplayActors"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
