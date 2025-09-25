// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05ItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05ItemBase() {}

// Begin Cross Module References
HW_5_API UClass* Z_Construct_UClass_AHW05ItemBase();
HW_5_API UClass* Z_Construct_UClass_AHW05ItemBase_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW05OverlapableGimmickBase();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW05ItemBase
void AHW05ItemBase::StaticRegisterNativesAHW05ItemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW05ItemBase);
UClass* Z_Construct_UClass_AHW05ItemBase_NoRegister()
{
	return AHW05ItemBase::StaticClass();
}
struct Z_Construct_UClass_AHW05ItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HW05ItemBase.h" },
		{ "ModuleRelativePath", "Public/HW05ItemBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW05ItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHW05ItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHW05OverlapableGimmickBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW05ItemBase_Statics::ClassParams = {
	&AHW05ItemBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW05ItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW05ItemBase()
{
	if (!Z_Registration_Info_UClass_AHW05ItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW05ItemBase.OuterSingleton, Z_Construct_UClass_AHW05ItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW05ItemBase.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW05ItemBase>()
{
	return AHW05ItemBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW05ItemBase);
AHW05ItemBase::~AHW05ItemBase() {}
// End Class AHW05ItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW05ItemBase, AHW05ItemBase::StaticClass, TEXT("AHW05ItemBase"), &Z_Registration_Info_UClass_AHW05ItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW05ItemBase), 1396343833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemBase_h_3981190493(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
