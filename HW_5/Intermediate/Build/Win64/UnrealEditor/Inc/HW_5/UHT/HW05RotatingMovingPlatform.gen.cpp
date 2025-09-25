// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05RotatingMovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05RotatingMovingPlatform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
HW_5_API UClass* Z_Construct_UClass_AHW05MovingPlatformBase();
HW_5_API UClass* Z_Construct_UClass_AHW05RotatingMovingPlatform();
HW_5_API UClass* Z_Construct_UClass_AHW05RotatingMovingPlatform_NoRegister();
HW_5_API UClass* Z_Construct_UClass_UGimmickRotationInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW05RotatingMovingPlatform
void AHW05RotatingMovingPlatform::StaticRegisterNativesAHW05RotatingMovingPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW05RotatingMovingPlatform);
UClass* Z_Construct_UClass_AHW05RotatingMovingPlatform_NoRegister()
{
	return AHW05RotatingMovingPlatform::StaticClass();
}
struct Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HW05RotatingMovingPlatform.h" },
		{ "ModuleRelativePath", "Public/HW05RotatingMovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Gimmick|Rotation" },
		{ "ModuleRelativePath", "Public/HW05RotatingMovingPlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmLength_MetaData[] = {
		{ "Category", "Gimmick|Rotation" },
		{ "ModuleRelativePath", "Public/HW05RotatingMovingPlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW05RotatingMovingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05RotatingMovingPlatform, RotationSpeed), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::NewProp_ArmLength = { "ArmLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05RotatingMovingPlatform, ArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmLength_MetaData), NewProp_ArmLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::NewProp_ArmLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHW05MovingPlatformBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGimmickRotationInterface_NoRegister, (int32)VTABLE_OFFSET(AHW05RotatingMovingPlatform, IGimmickRotationInterface), false },  // 1173638544
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::ClassParams = {
	&AHW05RotatingMovingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW05RotatingMovingPlatform()
{
	if (!Z_Registration_Info_UClass_AHW05RotatingMovingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW05RotatingMovingPlatform.OuterSingleton, Z_Construct_UClass_AHW05RotatingMovingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW05RotatingMovingPlatform.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW05RotatingMovingPlatform>()
{
	return AHW05RotatingMovingPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW05RotatingMovingPlatform);
AHW05RotatingMovingPlatform::~AHW05RotatingMovingPlatform() {}
// End Class AHW05RotatingMovingPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05RotatingMovingPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW05RotatingMovingPlatform, AHW05RotatingMovingPlatform::StaticClass, TEXT("AHW05RotatingMovingPlatform"), &Z_Registration_Info_UClass_AHW05RotatingMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW05RotatingMovingPlatform), 1777703219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05RotatingMovingPlatform_h_3553936655(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05RotatingMovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05RotatingMovingPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
