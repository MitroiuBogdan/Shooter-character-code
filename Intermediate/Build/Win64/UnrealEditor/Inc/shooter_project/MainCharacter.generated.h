// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_PROJECT_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define SHOOTER_PROJECT_MainCharacter_generated_h

#define shooter_project_Source_shooter_project_Public_MainCharacter_h_12_SPARSE_DATA
#define shooter_project_Source_shooter_project_Public_MainCharacter_h_12_RPC_WRAPPERS
#define shooter_project_Source_shooter_project_Public_MainCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define shooter_project_Source_shooter_project_Public_MainCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/shooter_project"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define shooter_project_Source_shooter_project_Public_MainCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/shooter_project"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define shooter_project_Source_shooter_project_Public_MainCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define shooter_project_Source_shooter_project_Public_MainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define shooter_project_Source_shooter_project_Public_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__cameraBoom() { return STRUCT_OFFSET(AMainCharacter, cameraBoom); } \
	FORCEINLINE static uint32 __PPO__followingCamera() { return STRUCT_OFFSET(AMainCharacter, followingCamera); } \
	FORCEINLINE static uint32 __PPO__fireSound() { return STRUCT_OFFSET(AMainCharacter, fireSound); } \
	FORCEINLINE static uint32 __PPO__particleSystem() { return STRUCT_OFFSET(AMainCharacter, particleSystem); } \
	FORCEINLINE static uint32 __PPO__impactParticle() { return STRUCT_OFFSET(AMainCharacter, impactParticle); } \
	FORCEINLINE static uint32 __PPO__smokeBeamParticle() { return STRUCT_OFFSET(AMainCharacter, smokeBeamParticle); } \
	FORCEINLINE static uint32 __PPO__hipsFireMontage() { return STRUCT_OFFSET(AMainCharacter, hipsFireMontage); } \
	FORCEINLINE static uint32 __PPO__baseTurnRate() { return STRUCT_OFFSET(AMainCharacter, baseTurnRate); } \
	FORCEINLINE static uint32 __PPO__baseLookupRate() { return STRUCT_OFFSET(AMainCharacter, baseLookupRate); } \
	FORCEINLINE static uint32 __PPO__bAiming() { return STRUCT_OFFSET(AMainCharacter, bAiming); }


#define shooter_project_Source_shooter_project_Public_MainCharacter_h_9_PROLOG
#define shooter_project_Source_shooter_project_Public_MainCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	shooter_project_Source_shooter_project_Public_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	shooter_project_Source_shooter_project_Public_MainCharacter_h_12_SPARSE_DATA \
	shooter_project_Source_shooter_project_Public_MainCharacter_h_12_RPC_WRAPPERS \
	shooter_project_Source_shooter_project_Public_MainCharacter_h_12_INCLASS \
	shooter_project_Source_shooter_project_Public_MainCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define shooter_project_Source_shooter_project_Public_MainCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	shooter_project_Source_shooter_project_Public_MainCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	shooter_project_Source_shooter_project_Public_MainCharacter_h_12_SPARSE_DATA \
	shooter_project_Source_shooter_project_Public_MainCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	shooter_project_Source_shooter_project_Public_MainCharacter_h_12_INCLASS_NO_PURE_DECLS \
	shooter_project_Source_shooter_project_Public_MainCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_PROJECT_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID shooter_project_Source_shooter_project_Public_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
