// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank_vs_Zombies/Tank_vs_ZombiesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank_vs_ZombiesGameModeBase() {}
// Cross Module References
	TANK_VS_ZOMBIES_API UClass* Z_Construct_UClass_ATank_vs_ZombiesGameModeBase_NoRegister();
	TANK_VS_ZOMBIES_API UClass* Z_Construct_UClass_ATank_vs_ZombiesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tank_vs_Zombies();
// End Cross Module References
	void ATank_vs_ZombiesGameModeBase::StaticRegisterNativesATank_vs_ZombiesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATank_vs_ZombiesGameModeBase_NoRegister()
	{
		return ATank_vs_ZombiesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATank_vs_ZombiesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATank_vs_ZombiesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank_vs_Zombies,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATank_vs_ZombiesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tank_vs_ZombiesGameModeBase.h" },
		{ "ModuleRelativePath", "Tank_vs_ZombiesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATank_vs_ZombiesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATank_vs_ZombiesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATank_vs_ZombiesGameModeBase_Statics::ClassParams = {
		&ATank_vs_ZombiesGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATank_vs_ZombiesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATank_vs_ZombiesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATank_vs_ZombiesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATank_vs_ZombiesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank_vs_ZombiesGameModeBase, 3293881296);
	template<> TANK_VS_ZOMBIES_API UClass* StaticClass<ATank_vs_ZombiesGameModeBase>()
	{
		return ATank_vs_ZombiesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank_vs_ZombiesGameModeBase(Z_Construct_UClass_ATank_vs_ZombiesGameModeBase, &ATank_vs_ZombiesGameModeBase::StaticClass, TEXT("/Script/Tank_vs_Zombies"), TEXT("ATank_vs_ZombiesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank_vs_ZombiesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
