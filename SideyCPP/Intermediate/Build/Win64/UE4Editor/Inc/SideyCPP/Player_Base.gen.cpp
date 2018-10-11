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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animMovementSpeedRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_animMovementSpeedRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animMovementSpeedForward_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_animMovementSpeedForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedRight_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedRight = { UE4CodeGen_Private::EPropertyClass::Float, "animMovementSpeedRight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, animMovementSpeedRight), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedRight_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedForward_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedForward = { UE4CodeGen_Private::EPropertyClass::Float, "animMovementSpeedForward", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, animMovementSpeedForward), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedForward_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed_MetaData[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "movementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayer_Base, movementSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_animMovementSpeedForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Base_Statics::NewProp_movementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Base_Statics::ClassParams = {
		&APlayer_Base::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APlayer_Base_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::PropPointers),
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
	IMPLEMENT_CLASS(APlayer_Base, 1102570420);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Base(Z_Construct_UClass_APlayer_Base, &APlayer_Base::StaticClass, TEXT("/Script/SideyCPP"), TEXT("APlayer_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
