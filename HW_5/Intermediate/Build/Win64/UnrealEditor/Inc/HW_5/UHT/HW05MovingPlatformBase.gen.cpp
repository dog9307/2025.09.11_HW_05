// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/HW05MovingPlatformBase.h"
#include "HW_5/Public/HW05WayPointInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHW05MovingPlatformBase() {}

// Begin Cross Module References
HW_5_API UClass* Z_Construct_UClass_AHW05GimmickBase();
HW_5_API UClass* Z_Construct_UClass_AHW05MovingPlatformBase();
HW_5_API UClass* Z_Construct_UClass_AHW05MovingPlatformBase_NoRegister();
HW_5_API UScriptStruct* Z_Construct_UScriptStruct_FWayPointInfo();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Class AHW05MovingPlatformBase
void AHW05MovingPlatformBase::StaticRegisterNativesAHW05MovingPlatformBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHW05MovingPlatformBase);
UClass* Z_Construct_UClass_AHW05MovingPlatformBase_NoRegister()
{
	return AHW05MovingPlatformBase::StaticClass();
}
struct Z_Construct_UClass_AHW05MovingPlatformBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HW05MovingPlatformBase.h" },
		{ "ModuleRelativePath", "Public/HW05MovingPlatformBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WayPoints_MetaData[] = {
		{ "Category", "Gimmick|WayPoints" },
		{ "ModuleRelativePath", "Public/HW05MovingPlatformBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCanPingPong_MetaData[] = {
		{ "Category", "Gimmick|MoveSetting" },
		{ "ModuleRelativePath", "Public/HW05MovingPlatformBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsForward_MetaData[] = {
		{ "Category", "Gimmick|MoveSetting" },
		{ "ModuleRelativePath", "Public/HW05MovingPlatformBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoveStart_MetaData[] = {
		{ "Category", "Gimmick|MoveSetting" },
		{ "ModuleRelativePath", "Public/HW05MovingPlatformBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Category", "Gimmick|MoveSetting" },
		{ "ModuleRelativePath", "Public/HW05MovingPlatformBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[] = {
		{ "Category", "Gimmick|MoveSetting" },
		{ "ModuleRelativePath", "Public/HW05MovingPlatformBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextTargetIndex_MetaData[] = {
		{ "Category", "Gimmick|MoveSetting" },
		{ "ModuleRelativePath", "Public/HW05MovingPlatformBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WayPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WayPoints;
	static void NewProp_bIsCanPingPong_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCanPingPong;
	static void NewProp_bIsForward_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsForward;
	static void NewProp_bIsMoveStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoveStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextTargetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHW05MovingPlatformBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_WayPoints_Inner = { "WayPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWayPointInfo, METADATA_PARAMS(0, nullptr) }; // 78287445
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_WayPoints = { "WayPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05MovingPlatformBase, WayPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WayPoints_MetaData), NewProp_WayPoints_MetaData) }; // 78287445
void Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsCanPingPong_SetBit(void* Obj)
{
	((AHW05MovingPlatformBase*)Obj)->bIsCanPingPong = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsCanPingPong = { "bIsCanPingPong", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHW05MovingPlatformBase), &Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsCanPingPong_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCanPingPong_MetaData), NewProp_bIsCanPingPong_MetaData) };
void Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsForward_SetBit(void* Obj)
{
	((AHW05MovingPlatformBase*)Obj)->bIsForward = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsForward = { "bIsForward", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHW05MovingPlatformBase), &Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsForward_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsForward_MetaData), NewProp_bIsForward_MetaData) };
void Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsMoveStart_SetBit(void* Obj)
{
	((AHW05MovingPlatformBase*)Obj)->bIsMoveStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsMoveStart = { "bIsMoveStart", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHW05MovingPlatformBase), &Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsMoveStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMoveStart_MetaData), NewProp_bIsMoveStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05MovingPlatformBase, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05MovingPlatformBase, CurrentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIndex_MetaData), NewProp_CurrentIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_NextTargetIndex = { "NextTargetIndex", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHW05MovingPlatformBase, NextTargetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextTargetIndex_MetaData), NewProp_NextTargetIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHW05MovingPlatformBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_WayPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_WayPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsCanPingPong,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_bIsMoveStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_CurrentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHW05MovingPlatformBase_Statics::NewProp_NextTargetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05MovingPlatformBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHW05MovingPlatformBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHW05GimmickBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05MovingPlatformBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHW05MovingPlatformBase_Statics::ClassParams = {
	&AHW05MovingPlatformBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHW05MovingPlatformBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHW05MovingPlatformBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHW05MovingPlatformBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AHW05MovingPlatformBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHW05MovingPlatformBase()
{
	if (!Z_Registration_Info_UClass_AHW05MovingPlatformBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHW05MovingPlatformBase.OuterSingleton, Z_Construct_UClass_AHW05MovingPlatformBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHW05MovingPlatformBase.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<AHW05MovingPlatformBase>()
{
	return AHW05MovingPlatformBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHW05MovingPlatformBase);
AHW05MovingPlatformBase::~AHW05MovingPlatformBase() {}
// End Class AHW05MovingPlatformBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05MovingPlatformBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHW05MovingPlatformBase, AHW05MovingPlatformBase::StaticClass, TEXT("AHW05MovingPlatformBase"), &Z_Registration_Info_UClass_AHW05MovingPlatformBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHW05MovingPlatformBase), 1977580728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05MovingPlatformBase_h_350064824(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05MovingPlatformBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_HW05MovingPlatformBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
