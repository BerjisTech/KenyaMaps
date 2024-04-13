// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KenyaMaps/Public/MapLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapLocation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	KENYAMAPS_API UClass* Z_Construct_UClass_AMapLocation();
	KENYAMAPS_API UClass* Z_Construct_UClass_AMapLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KenyaMaps();
// End Cross Module References
	void AMapLocation::StaticRegisterNativesAMapLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapLocation);
	UClass* Z_Construct_UClass_AMapLocation_NoRegister()
	{
		return AMapLocation::StaticClass();
	}
	struct Z_Construct_UClass_AMapLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Neighbors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Neighbors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KenyaMaps,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapLocation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapLocation.h" },
		{ "ModuleRelativePath", "Public/MapLocation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapLocation_Statics::NewProp_Neighbors_Inner = { "Neighbors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMapLocation_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLocation_Statics::NewProp_Neighbors_MetaData[] = {
		{ "Category", "Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Variables\n\x09 * @param string Name - Name of location (string)\n\x09 * @param array Neighbors - Closest actor array (Editable)\n\x09 * @param string LocationType\n\x09 * @param string LocationCategory\n\x09 *\n\x09 */// @param array Neighbors - Closest actor array (Editable)\n" },
#endif
		{ "ModuleRelativePath", "Public/MapLocation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables\n@param string Name - Name of location (string)\n@param array Neighbors - Closest actor array (Editable)\n@param string LocationType\n@param string LocationCategory\n\n        // @param array Neighbors - Closest actor array (Editable)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapLocation_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapLocation, Neighbors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapLocation_Statics::NewProp_Neighbors_MetaData), Z_Construct_UClass_AMapLocation_Statics::NewProp_Neighbors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLocation_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// @param string Name - Name of location (string)\n" },
#endif
		{ "ModuleRelativePath", "Public/MapLocation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param string Name - Name of location (string)" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMapLocation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapLocation, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapLocation_Statics::NewProp_Name_MetaData), Z_Construct_UClass_AMapLocation_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLocation_Statics::NewProp_LocationType_MetaData[] = {
		{ "Category", "Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Variables\n\x09 * @param string LocationType\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MapLocation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables\n@param string LocationType" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMapLocation_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapLocation, LocationType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapLocation_Statics::NewProp_LocationType_MetaData), Z_Construct_UClass_AMapLocation_Statics::NewProp_LocationType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLocation_Statics::NewProp_LocationCategory_MetaData[] = {
		{ "Category", "Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @param string LocationCategory\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MapLocation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@param string LocationCategory" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMapLocation_Statics::NewProp_LocationCategory = { "LocationCategory", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapLocation, LocationCategory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapLocation_Statics::NewProp_LocationCategory_MetaData), Z_Construct_UClass_AMapLocation_Statics::NewProp_LocationCategory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLocation_Statics::NewProp_Neighbors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLocation_Statics::NewProp_Neighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLocation_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLocation_Statics::NewProp_LocationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLocation_Statics::NewProp_LocationCategory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapLocation_Statics::ClassParams = {
		&AMapLocation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMapLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapLocation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapLocation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapLocation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMapLocation()
	{
		if (!Z_Registration_Info_UClass_AMapLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapLocation.OuterSingleton, Z_Construct_UClass_AMapLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMapLocation.OuterSingleton;
	}
	template<> KENYAMAPS_API UClass* StaticClass<AMapLocation>()
	{
		return AMapLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapLocation);
	AMapLocation::~AMapLocation() {}
	struct Z_CompiledInDeferFile_FID_Mbogi_Plugins_KenyaMaps_Source_KenyaMaps_Public_MapLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mbogi_Plugins_KenyaMaps_Source_KenyaMaps_Public_MapLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMapLocation, AMapLocation::StaticClass, TEXT("AMapLocation"), &Z_Registration_Info_UClass_AMapLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapLocation), 4010441487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mbogi_Plugins_KenyaMaps_Source_KenyaMaps_Public_MapLocation_h_3468134035(TEXT("/Script/KenyaMaps"),
		Z_CompiledInDeferFile_FID_Mbogi_Plugins_KenyaMaps_Source_KenyaMaps_Public_MapLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mbogi_Plugins_KenyaMaps_Source_KenyaMaps_Public_MapLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
