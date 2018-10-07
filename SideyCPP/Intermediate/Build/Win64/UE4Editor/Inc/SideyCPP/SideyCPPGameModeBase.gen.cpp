// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideyCPP/SideyCPPGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideyCPPGameModeBase() {}
// Cross Module References
	SIDEYCPP_API UClass* Z_Construct_UClass_ASideyCPPGameModeBase_NoRegister();
	SIDEYCPP_API UClass* Z_Construct_UClass_ASideyCPPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SideyCPP();
// End Cross Module References
	void ASideyCPPGameModeBase::StaticRegisterNativesASideyCPPGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASideyCPPGameModeBase_NoRegister()
	{
		return ASideyCPPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASideyCPPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASideyCPPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SideyCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASideyCPPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SideyCPPGameModeBase.h" },
		{ "ModuleRelativePath", "SideyCPPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASideyCPPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASideyCPPGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASideyCPPGameModeBase_Statics::ClassParams = {
		&ASideyCPPGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASideyCPPGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASideyCPPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASideyCPPGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASideyCPPGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASideyCPPGameModeBase, 3390267695);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASideyCPPGameModeBase(Z_Construct_UClass_ASideyCPPGameModeBase, &ASideyCPPGameModeBase::StaticClass, TEXT("/Script/SideyCPP"), TEXT("ASideyCPPGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASideyCPPGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
