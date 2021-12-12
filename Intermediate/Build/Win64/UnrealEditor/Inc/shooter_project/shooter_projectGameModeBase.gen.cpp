// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shooter_project/shooter_projectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeshooter_projectGameModeBase() {}
// Cross Module References
	SHOOTER_PROJECT_API UClass* Z_Construct_UClass_Ashooter_projectGameModeBase_NoRegister();
	SHOOTER_PROJECT_API UClass* Z_Construct_UClass_Ashooter_projectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_shooter_project();
// End Cross Module References
	void Ashooter_projectGameModeBase::StaticRegisterNativesAshooter_projectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Ashooter_projectGameModeBase_NoRegister()
	{
		return Ashooter_projectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Ashooter_projectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ashooter_projectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_shooter_project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashooter_projectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "shooter_projectGameModeBase.h" },
		{ "ModuleRelativePath", "shooter_projectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ashooter_projectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ashooter_projectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Ashooter_projectGameModeBase_Statics::ClassParams = {
		&Ashooter_projectGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Ashooter_projectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ashooter_projectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ashooter_projectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ashooter_projectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ashooter_projectGameModeBase, 3103952081);
	template<> SHOOTER_PROJECT_API UClass* StaticClass<Ashooter_projectGameModeBase>()
	{
		return Ashooter_projectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ashooter_projectGameModeBase(Z_Construct_UClass_Ashooter_projectGameModeBase, &Ashooter_projectGameModeBase::StaticClass, TEXT("/Script/shooter_project"), TEXT("Ashooter_projectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ashooter_projectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
