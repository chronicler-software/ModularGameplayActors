// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayActors/Public/ModularCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// End Cross Module References

// Begin Class AModularCharacter
void AModularCharacter::StaticRegisterNativesAModularCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularCharacter);
UClass* Z_Construct_UClass_AModularCharacter_NoRegister()
{
	return AModularCharacter::StaticClass();
}
struct Z_Construct_UClass_AModularCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Minimal class that supports extension by game feature plugins */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ModularCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal class that supports extension by game feature plugins" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularCharacter_Statics::ClassParams = {
	&AModularCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularCharacter()
{
	if (!Z_Registration_Info_UClass_AModularCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularCharacter.OuterSingleton, Z_Construct_UClass_AModularCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularCharacter.OuterSingleton;
}
template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<AModularCharacter>()
{
	return AModularCharacter::StaticClass();
}
AModularCharacter::AModularCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularCharacter);
AModularCharacter::~AModularCharacter() {}
// End Class AModularCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularCharacter, AModularCharacter::StaticClass, TEXT("AModularCharacter"), &Z_Registration_Info_UClass_AModularCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularCharacter), 1827104240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h_3627999651(TEXT("/Script/ModularGameplayActors"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
