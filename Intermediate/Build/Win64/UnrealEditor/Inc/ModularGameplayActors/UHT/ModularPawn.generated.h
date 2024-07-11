// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARGAMEPLAYACTORS_ModularPawn_generated_h
#error "ModularPawn.generated.h already included, missing '#pragma once' in ModularPawn.h"
#endif
#define MODULARGAMEPLAYACTORS_ModularPawn_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularPawn(); \
	friend struct Z_Construct_UClass_AModularPawn_Statics; \
public: \
	DECLARE_CLASS(AModularPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayActors"), NO_API) \
	DECLARE_SERIALIZER(AModularPawn)


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModularPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AModularPawn(AModularPawn&&); \
	AModularPawn(const AModularPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularPawn) \
	NO_API virtual ~AModularPawn();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_12_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYACTORS_API UClass* StaticClass<class AModularPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
