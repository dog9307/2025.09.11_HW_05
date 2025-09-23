// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05WayPointInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05WayPointInfo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HW_5_API UScriptStruct* Z_Construct_UScriptStruct_FWayPointInfo();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin ScriptStruct FWayPointInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WayPointInfo;
class UScriptStruct* FWayPointInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WayPointInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WayPointInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWayPointInfo, (UObject*)Z_Construct_UPackage__Script_HW_5(), TEXT("WayPointInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WayPointInfo.OuterSingleton;
}
template<> HW_5_API UScriptStruct* StaticStruct<FWayPointInfo>()
{
	return FWayPointInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWayPointInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HW05WayPointInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "WayPointInfo" },
		{ "ModuleRelativePath", "Public/HW05WayPointInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "WayPointInfo" },
		{ "ModuleRelativePath", "Public/HW05WayPointInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[] = {
		{ "Category", "WayPointInfo" },
		{ "ModuleRelativePath", "Public/HW05WayPointInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Point;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWayPointInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWayPointInfo_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWayPointInfo, Point), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWayPointInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWayPointInfo, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWayPointInfo_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWayPointInfo, Interval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interval_MetaData), NewProp_Interval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWayPointInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWayPointInfo_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWayPointInfo_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWayPointInfo_Statics::NewProp_Interval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWayPointInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWayPointInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
	nullptr,
	&NewStructOps,
	"WayPointInfo",
	Z_Construct_UScriptStruct_FWayPointInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWayPointInfo_Statics::PropPointers),
	sizeof(FWayPointInfo),
	alignof(FWayPointInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000011),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWayPointInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWayPointInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWayPointInfo()
{
	if (!Z_Registration_Info_UScriptStruct_WayPointInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WayPointInfo.InnerSingleton, Z_Construct_UScriptStruct_FWayPointInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WayPointInfo.InnerSingleton;
}
// End ScriptStruct FWayPointInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05WayPointInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWayPointInfo::StaticStruct, Z_Construct_UScriptStruct_FWayPointInfo_Statics::NewStructOps, TEXT("WayPointInfo"), &Z_Registration_Info_UScriptStruct_WayPointInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWayPointInfo), 78287445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05WayPointInfo_h_2373161919(TEXT("/Script/HW_5"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05WayPointInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05WayPointInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
