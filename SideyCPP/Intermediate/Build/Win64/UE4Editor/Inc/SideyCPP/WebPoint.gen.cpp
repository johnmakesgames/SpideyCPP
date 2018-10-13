// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideyCPP/WebPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebPoint() {}
// Cross Module References
	SIDEYCPP_API UClass* Z_Construct_UClass_AWebPoint_NoRegister();
	SIDEYCPP_API UClass* Z_Construct_UClass_AWebPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideyCPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AWebPoint::StaticRegisterNativesAWebPoint()
	{
	}
	UClass* Z_Construct_UClass_AWebPoint_NoRegister()
	{
		return AWebPoint::StaticClass();
	}
	struct Z_Construct_UClass_AWebPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pointLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWebPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideyCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebPoint.h" },
		{ "ModuleRelativePath", "WebPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWebPoint_Statics::NewProp_pointLocation_MetaData[] = {
		{ "Category", "Web Variables" },
		{ "ModuleRelativePath", "WebPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWebPoint_Statics::NewProp_pointLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "pointLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AWebPoint, pointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWebPoint_Statics::NewProp_pointLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWebPoint_Statics::NewProp_pointLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWebPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWebPoint_Statics::NewProp_pointLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWebPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWebPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWebPoint_Statics::ClassParams = {
		&AWebPoint::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AWebPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AWebPoint_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWebPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWebPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWebPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWebPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWebPoint, 2400332719);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWebPoint(Z_Construct_UClass_AWebPoint, &AWebPoint::StaticClass, TEXT("/Script/SideyCPP"), TEXT("AWebPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWebPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
