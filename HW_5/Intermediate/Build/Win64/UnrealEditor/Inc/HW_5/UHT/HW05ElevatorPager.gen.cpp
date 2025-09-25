// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05ElevatorPager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05ElevatorPager() {}

// Begin Cross Module References
HW_5_API UClass* Z_Construct_UClass_AHW05Elevator_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW05ElevatorPager();
HW_5_API UClass* Z_Construct_UClass_AHW05ElevatorPager_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW05InteractableGimmickBase();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW05ElevatorPager
void AHW05ElevatorPager::StaticRegisterNativesAHW05ElevatorPager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW05ElevatorPager);
UClass* Z_Construct_UClass_AHW05ElevatorPager_NoRegister()
{
	return AHW05ElevatorPager::StaticClass();
}
struct Z_Construct_UClass_AHW05ElevatorPager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HW05ElevatorPager.h" },
		{ "ModuleRelativePath", "Public/HW05ElevatorPager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elevator_MetaData[] = {
		{ "Category", "Gimmick|Elevator" },
		{ "ModuleRelativePath", "Public/HW05ElevatorPager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[] = {
		{ "Category", "Gimmick|Elevator" },
		{ "ModuleRelativePath", "Public/HW05ElevatorPager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Elevator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW05ElevatorPager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW05ElevatorPager_Statics::NewProp_Elevator = { "Elevator", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05ElevatorPager, Elevator), Z_Construct_UClass_AHW05Elevator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elevator_MetaData), NewProp_Elevator_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHW05ElevatorPager_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05ElevatorPager, TargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetIndex_MetaData), NewProp_TargetIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW05ElevatorPager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05ElevatorPager_Statics::NewProp_Elevator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05ElevatorPager_Statics::NewProp_TargetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ElevatorPager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW05ElevatorPager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHW05InteractableGimmickBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ElevatorPager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW05ElevatorPager_Statics::ClassParams = {
	&AHW05ElevatorPager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHW05ElevatorPager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ElevatorPager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ElevatorPager_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW05ElevatorPager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW05ElevatorPager()
{
	if (!Z_Registration_Info_UClass_AHW05ElevatorPager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW05ElevatorPager.OuterSingleton, Z_Construct_UClass_AHW05ElevatorPager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW05ElevatorPager.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW05ElevatorPager>()
{
	return AHW05ElevatorPager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW05ElevatorPager);
AHW05ElevatorPager::~AHW05ElevatorPager() {}
// End Class AHW05ElevatorPager

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ElevatorPager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW05ElevatorPager, AHW05ElevatorPager::StaticClass, TEXT("AHW05ElevatorPager"), &Z_Registration_Info_UClass_AHW05ElevatorPager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW05ElevatorPager), 964589959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ElevatorPager_h_2741744967(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ElevatorPager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ElevatorPager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
