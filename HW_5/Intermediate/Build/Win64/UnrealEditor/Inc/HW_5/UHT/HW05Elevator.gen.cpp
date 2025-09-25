// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05Elevator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05Elevator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW05Elevator();
HW_5_API UClass* Z_Construct_UClass_AHW05Elevator_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW05MovingPlatformBase();
HW_5_API UClass* Z_Construct_UClass_UOverlapableGimmickInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW05Elevator
void AHW05Elevator::StaticRegisterNativesAHW05Elevator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW05Elevator);
UClass* Z_Construct_UClass_AHW05Elevator_NoRegister()
{
	return AHW05Elevator::StaticClass();
}
struct Z_Construct_UClass_AHW05Elevator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HW05Elevator.h" },
		{ "ModuleRelativePath", "Public/HW05Elevator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRange_MetaData[] = {
		{ "Category", "Gimmick|Elevator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW05Elevator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationIndex_MetaData[] = {
		{ "Category", "Gimmick|Elevator" },
		{ "ModuleRelativePath", "Public/HW05Elevator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DestinationIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW05Elevator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW05Elevator_Statics::NewProp_OverlapRange = { "OverlapRange", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05Elevator, OverlapRange), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapRange_MetaData), NewProp_OverlapRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHW05Elevator_Statics::NewProp_DestinationIndex = { "DestinationIndex", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05Elevator, DestinationIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationIndex_MetaData), NewProp_DestinationIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW05Elevator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05Elevator_Statics::NewProp_OverlapRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05Elevator_Statics::NewProp_DestinationIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05Elevator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW05Elevator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHW05MovingPlatformBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05Elevator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHW05Elevator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOverlapableGimmickInterface_NoRegister, (int32)VTABLE_OFFSET(AHW05Elevator, IOverlapableGimmickInterface), false },  // 3409007364
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW05Elevator_Statics::ClassParams = {
	&AHW05Elevator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHW05Elevator_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW05Elevator_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05Elevator_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW05Elevator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW05Elevator()
{
	if (!Z_Registration_Info_UClass_AHW05Elevator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW05Elevator.OuterSingleton, Z_Construct_UClass_AHW05Elevator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW05Elevator.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW05Elevator>()
{
	return AHW05Elevator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW05Elevator);
AHW05Elevator::~AHW05Elevator() {}
// End Class AHW05Elevator

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05Elevator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW05Elevator, AHW05Elevator::StaticClass, TEXT("AHW05Elevator"), &Z_Registration_Info_UClass_AHW05Elevator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW05Elevator), 2491886032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05Elevator_h_3021149226(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05Elevator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05Elevator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
