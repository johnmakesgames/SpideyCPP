// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideyCPP/Player_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Base() {}
// Cross Module References
	SIDEYCPP_API UClass* Z_Construct_UClass_APlayer_Base_NoRegister();
	SIDEYCPP_API UClass* Z_Construct_UClass_APlayer_Base();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SideyCPP();
// End Cross Module References
	void APlayer_Base::StaticRegisterNativesAPlayer_Base()
	{
	}
	UClass* Z_Construct_UClass_APlayer_Base_NoRegister()
	{
		return APlayer_Base::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SideyCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_Base.h" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Base_Statics::ClassParams = {
		&APlayer_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Base, 3545042267);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Base(Z_Construct_UClass_APlayer_Base, &APlayer_Base::StaticClass, TEXT("/Script/SideyCPP"), TEXT("APlayer_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
