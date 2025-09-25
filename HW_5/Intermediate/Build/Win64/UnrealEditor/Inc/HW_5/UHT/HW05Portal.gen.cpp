// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05Portal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05Portal() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
HW_5_API UClass* Z_Construct_UClass_AHW05OverlapableGimmickBase();
HW_5_API UClass* Z_Construct_UClass_AHW05Portal();
HW_5_API UClass* Z_Construct_UClass_AHW05Portal_NoRegister();
HW_5_API UClass* Z_Construct_UClass_ULockableInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW05Portal
void AHW05Portal::StaticRegisterNativesAHW05Portal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW05Portal);
UClass* Z_Construct_UClass_AHW05Portal_NoRegister()
{
	return AHW05Portal::StaticClass();
}
struct Z_Construct_UClass_AHW05Portal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HW05Portal.h" },
		{ "ModuleRelativePath", "Public/HW05Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportationPoint_MetaData[] = {
		{ "Category", "Gimmick|Portal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HW05Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pair_MetaData[] = {
		{ "Category", "Gimmick|Portal" },
		{ "ModuleRelativePath", "Public/HW05Portal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLock_MetaData[] = {
		{ "Category", "Gimmick|Portal" },
		{ "ModuleRelativePath", "Public/HW05Portal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportationPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pair;
	static void NewProp_bIsLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW05Portal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW05Portal_Statics::NewProp_TeleportationPoint = { "TeleportationPoint", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05Portal, TeleportationPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportationPoint_MetaData), NewProp_TeleportationPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHW05Portal_Statics::NewProp_pair = { "pair", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05Portal, pair), Z_Construct_UClass_AHW05Portal_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pair_MetaData), NewProp_pair_MetaData) };
void Z_Construct_UClass_AHW05Portal_Statics::NewProp_bIsLock_SetBit(void* Obj)
{
	((AHW05Portal*)Obj)->bIsLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHW05Portal_Statics::NewProp_bIsLock = { "bIsLock", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHW05Portal), &Z_Construct_UClass_AHW05Portal_Statics::NewProp_bIsLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLock_MetaData), NewProp_bIsLock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW05Portal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05Portal_Statics::NewProp_TeleportationPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05Portal_Statics::NewProp_pair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05Portal_Statics::NewProp_bIsLock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05Portal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW05Portal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHW05OverlapableGimmickBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05Portal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHW05Portal_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULockableInterface_NoRegister, (int32)VTABLE_OFFSET(AHW05Portal, ILockableInterface), false },  // 2892829995
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW05Portal_Statics::ClassParams = {
	&AHW05Portal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHW05Portal_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW05Portal_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05Portal_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW05Portal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW05Portal()
{
	if (!Z_Registration_Info_UClass_AHW05Portal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW05Portal.OuterSingleton, Z_Construct_UClass_AHW05Portal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW05Portal.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW05Portal>()
{
	return AHW05Portal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW05Portal);
AHW05Portal::~AHW05Portal() {}
// End Class AHW05Portal

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05Portal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW05Portal, AHW05Portal::StaticClass, TEXT("AHW05Portal"), &Z_Registration_Info_UClass_AHW05Portal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW05Portal), 3515790781U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05Portal_h_1296381707(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05Portal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05Portal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
