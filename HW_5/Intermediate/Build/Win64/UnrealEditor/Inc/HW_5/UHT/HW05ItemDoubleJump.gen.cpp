// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05ItemDoubleJump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05ItemDoubleJump() {}

// Begin Cross Module References
HW_5_API UClass* Z_Construct_UClass_AHW05ItemBase();
HW_5_API UClass* Z_Construct_UClass_AHW05ItemDoubleJump();
HW_5_API UClass* Z_Construct_UClass_AHW05ItemDoubleJump_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW05ItemDoubleJump
void AHW05ItemDoubleJump::StaticRegisterNativesAHW05ItemDoubleJump()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW05ItemDoubleJump);
UClass* Z_Construct_UClass_AHW05ItemDoubleJump_NoRegister()
{
	return AHW05ItemDoubleJump::StaticClass();
}
struct Z_Construct_UClass_AHW05ItemDoubleJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HW05ItemDoubleJump.h" },
		{ "ModuleRelativePath", "Public/HW05ItemDoubleJump.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW05ItemDoubleJump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHW05ItemDoubleJump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHW05ItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ItemDoubleJump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW05ItemDoubleJump_Statics::ClassParams = {
	&AHW05ItemDoubleJump::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05ItemDoubleJump_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW05ItemDoubleJump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW05ItemDoubleJump()
{
	if (!Z_Registration_Info_UClass_AHW05ItemDoubleJump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW05ItemDoubleJump.OuterSingleton, Z_Construct_UClass_AHW05ItemDoubleJump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW05ItemDoubleJump.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW05ItemDoubleJump>()
{
	return AHW05ItemDoubleJump::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW05ItemDoubleJump);
AHW05ItemDoubleJump::~AHW05ItemDoubleJump() {}
// End Class AHW05ItemDoubleJump

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemDoubleJump_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW05ItemDoubleJump, AHW05ItemDoubleJump::StaticClass, TEXT("AHW05ItemDoubleJump"), &Z_Registration_Info_UClass_AHW05ItemDoubleJump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW05ItemDoubleJump), 153029619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemDoubleJump_h_2457410171(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemDoubleJump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05ItemDoubleJump_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
