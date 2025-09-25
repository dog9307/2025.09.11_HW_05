// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05InteractableGimmickBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05InteractableGimmickBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW05GimmickBase();
HW_5_API UClass* Z_Construct_UClass_AHW05InteractableGimmickBase();
HW_5_API UClass* Z_Construct_UClass_AHW05InteractableGimmickBase_NoRegister();
HW_5_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW05InteractableGimmickBase
void AHW05InteractableGimmickBase::StaticRegisterNativesAHW05InteractableGimmickBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW05InteractableGimmickBase);
UClass* Z_Construct_UClass_AHW05InteractableGimmickBase_NoRegister()
{
	return AHW05InteractableGimmickBase::StaticClass();
}
struct Z_Construct_UClass_AHW05InteractableGimmickBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HW05InteractableGimmickBase.h" },
		{ "ModuleRelativePath", "Public/HW05InteractableGimmickBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Gimmick|Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW05InteractableGimmickBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadingDuration_MetaData[] = {
		{ "Category", "Gimmick|Text" },
		{ "ModuleRelativePath", "Public/HW05InteractableGimmickBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadingDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW05InteractableGimmickBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05InteractableGimmickBase, Text), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::NewProp_FadingDuration = { "FadingDuration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05InteractableGimmickBase, FadingDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadingDuration_MetaData), NewProp_FadingDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::NewProp_FadingDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHW05GimmickBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AHW05InteractableGimmickBase, IInteractableInterface), false },  // 1802759244
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::ClassParams = {
	&AHW05InteractableGimmickBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW05InteractableGimmickBase()
{
	if (!Z_Registration_Info_UClass_AHW05InteractableGimmickBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW05InteractableGimmickBase.OuterSingleton, Z_Construct_UClass_AHW05InteractableGimmickBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW05InteractableGimmickBase.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW05InteractableGimmickBase>()
{
	return AHW05InteractableGimmickBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW05InteractableGimmickBase);
AHW05InteractableGimmickBase::~AHW05InteractableGimmickBase() {}
// End Class AHW05InteractableGimmickBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05InteractableGimmickBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW05InteractableGimmickBase, AHW05InteractableGimmickBase::StaticClass, TEXT("AHW05InteractableGimmickBase"), &Z_Registration_Info_UClass_AHW05InteractableGimmickBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW05InteractableGimmickBase), 868342309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05InteractableGimmickBase_h_1341545657(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05InteractableGimmickBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05InteractableGimmickBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
