// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05SuperJumpPlane.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05SuperJumpPlane() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW05RotatingMovingPlatform();
HW_5_API UClass* Z_Construct_UClass_AHW05SuperJumpPlane();
HW_5_API UClass* Z_Construct_UClass_AHW05SuperJumpPlane_NoRegister();
HW_5_API UClass* Z_Construct_UClass_UOverlapableGimmickInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW05SuperJumpPlane
void AHW05SuperJumpPlane::StaticRegisterNativesAHW05SuperJumpPlane()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW05SuperJumpPlane);
UClass* Z_Construct_UClass_AHW05SuperJumpPlane_NoRegister()
{
	return AHW05SuperJumpPlane::StaticClass();
}
struct Z_Construct_UClass_AHW05SuperJumpPlane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HW05SuperJumpPlane.h" },
		{ "ModuleRelativePath", "Public/HW05SuperJumpPlane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRange_MetaData[] = {
		{ "Category", "Gimmick|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW05SuperJumpPlane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpPower_MetaData[] = {
		{ "Category", "Gimmick|GimmickJump" },
		{ "ModuleRelativePath", "Public/HW05SuperJumpPlane.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW05SuperJumpPlane>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW05SuperJumpPlane_Statics::NewProp_OverlapRange = { "OverlapRange", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05SuperJumpPlane, OverlapRange), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapRange_MetaData), NewProp_OverlapRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW05SuperJumpPlane_Statics::NewProp_JumpPower = { "JumpPower", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05SuperJumpPlane, JumpPower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpPower_MetaData), NewProp_JumpPower_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW05SuperJumpPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05SuperJumpPlane_Statics::NewProp_OverlapRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05SuperJumpPlane_Statics::NewProp_JumpPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05SuperJumpPlane_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW05SuperJumpPlane_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHW05RotatingMovingPlatform,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05SuperJumpPlane_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHW05SuperJumpPlane_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOverlapableGimmickInterface_NoRegister, (int32)VTABLE_OFFSET(AHW05SuperJumpPlane, IOverlapableGimmickInterface), false },  // 3409007364
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW05SuperJumpPlane_Statics::ClassParams = {
	&AHW05SuperJumpPlane::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHW05SuperJumpPlane_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW05SuperJumpPlane_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05SuperJumpPlane_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW05SuperJumpPlane_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW05SuperJumpPlane()
{
	if (!Z_Registration_Info_UClass_AHW05SuperJumpPlane.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW05SuperJumpPlane.OuterSingleton, Z_Construct_UClass_AHW05SuperJumpPlane_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW05SuperJumpPlane.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW05SuperJumpPlane>()
{
	return AHW05SuperJumpPlane::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW05SuperJumpPlane);
AHW05SuperJumpPlane::~AHW05SuperJumpPlane() {}
// End Class AHW05SuperJumpPlane

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05SuperJumpPlane_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW05SuperJumpPlane, AHW05SuperJumpPlane::StaticClass, TEXT("AHW05SuperJumpPlane"), &Z_Registration_Info_UClass_AHW05SuperJumpPlane, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW05SuperJumpPlane), 3541351463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05SuperJumpPlane_h_2578613642(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05SuperJumpPlane_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05SuperJumpPlane_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
