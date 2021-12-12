// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTER_PROJECT_CharacterAnimInstance_generated_h
#error "CharacterAnimInstance.generated.h already included, missing '#pragma once' in CharacterAnimInstance.h"
#endif
#define SHOOTER_PROJECT_CharacterAnimInstance_generated_h

#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_SPARSE_DATA
#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAnimationProperties);


#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/shooter_project"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimInstance)


#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCharacterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/shooter_project"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimInstance)


#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAnimInstance(UCharacterAnimInstance&&); \
	NO_API UCharacterAnimInstance(const UCharacterAnimInstance&); \
public:


#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAnimInstance(UCharacterAnimInstance&&); \
	NO_API UCharacterAnimInstance(const UCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAnimInstance)


#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mainCharacter() { return STRUCT_OFFSET(UCharacterAnimInstance, mainCharacter); } \
	FORCEINLINE static uint32 __PPO__speed() { return STRUCT_OFFSET(UCharacterAnimInstance, speed); } \
	FORCEINLINE static uint32 __PPO__bIsInAir() { return STRUCT_OFFSET(UCharacterAnimInstance, bIsInAir); } \
	FORCEINLINE static uint32 __PPO__bIsAccelerating() { return STRUCT_OFFSET(UCharacterAnimInstance, bIsAccelerating); } \
	FORCEINLINE static uint32 __PPO__movementOffest() { return STRUCT_OFFSET(UCharacterAnimInstance, movementOffest); } \
	FORCEINLINE static uint32 __PPO__lastMovementOffest() { return STRUCT_OFFSET(UCharacterAnimInstance, lastMovementOffest); }


#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_12_PROLOG
#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_SPARSE_DATA \
	shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_RPC_WRAPPERS \
	shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_INCLASS \
	shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_SPARSE_DATA \
	shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTER_PROJECT_API UClass* StaticClass<class UCharacterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID shooter_project_Source_shooter_project_Public_CharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
