// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_5/Public/OverlapableGimmickInterface.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlapableGimmickInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HW_5_API UClass* Z_Construct_UClass_UOverlapableGimmickInterface();
HW_5_API UClass* Z_Construct_UClass_UOverlapableGimmickInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_5();
// End Cross Module References

// Begin Interface UOverlapableGimmickInterface Function OnBeginGimmickOverlap
struct Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics
{
	struct OverlapableGimmickInterface_eventOnBeginGimmickOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlapableGimmickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverlapableGimmickInterface_eventOnBeginGimmickOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverlapableGimmickInterface_eventOnBeginGimmickOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverlapableGimmickInterface_eventOnBeginGimmickOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverlapableGimmickInterface_eventOnBeginGimmickOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((OverlapableGimmickInterface_eventOnBeginGimmickOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OverlapableGimmickInterface_eventOnBeginGimmickOverlap_Parms), &Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverlapableGimmickInterface_eventOnBeginGimmickOverlap_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlapableGimmickInterface, nullptr, "OnBeginGimmickOverlap", nullptr, nullptr, Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::OverlapableGimmickInterface_eventOnBeginGimmickOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::OverlapableGimmickInterface_eventOnBeginGimmickOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IOverlapableGimmickInterface::execOnBeginGimmickOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginGimmickOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Interface UOverlapableGimmickInterface Function OnBeginGimmickOverlap

// Begin Interface UOverlapableGimmickInterface Function OnEndGimmickOverlap
struct Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics
{
	struct OverlapableGimmickInterface_eventOnEndGimmickOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlapableGimmickInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverlapableGimmickInterface_eventOnEndGimmickOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverlapableGimmickInterface_eventOnEndGimmickOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverlapableGimmickInterface_eventOnEndGimmickOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OverlapableGimmickInterface_eventOnEndGimmickOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlapableGimmickInterface, nullptr, "OnEndGimmickOverlap", nullptr, nullptr, Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::OverlapableGimmickInterface_eventOnEndGimmickOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::OverlapableGimmickInterface_eventOnEndGimmickOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IOverlapableGimmickInterface::execOnEndGimmickOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndGimmickOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Interface UOverlapableGimmickInterface Function OnEndGimmickOverlap

// Begin Interface UOverlapableGimmickInterface
void UOverlapableGimmickInterface::StaticRegisterNativesUOverlapableGimmickInterface()
{
	UClass* Class = UOverlapableGimmickInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBeginGimmickOverlap", &IOverlapableGimmickInterface::execOnBeginGimmickOverlap },
		{ "OnEndGimmickOverlap", &IOverlapableGimmickInterface::execOnEndGimmickOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlapableGimmickInterface);
UClass* Z_Construct_UClass_UOverlapableGimmickInterface_NoRegister()
{
	return UOverlapableGimmickInterface::StaticClass();
}
struct Z_Construct_UClass_UOverlapableGimmickInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlapableGimmickInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOverlapableGimmickInterface_OnBeginGimmickOverlap, "OnBeginGimmickOverlap" }, // 2224981302
		{ &Z_Construct_UFunction_UOverlapableGimmickInterface_OnEndGimmickOverlap, "OnEndGimmickOverlap" }, // 2974224047
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOverlapableGimmickInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOverlapableGimmickInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapableGimmickInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlapableGimmickInterface_Statics::ClassParams = {
	&UOverlapableGimmickInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOverlapableGimmickInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOverlapableGimmickInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOverlapableGimmickInterface()
{
	if (!Z_Registration_Info_UClass_UOverlapableGimmickInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlapableGimmickInterface.OuterSingleton, Z_Construct_UClass_UOverlapableGimmickInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOverlapableGimmickInterface.OuterSingleton;
}
template<> HW_5_API UClass* StaticClass<UOverlapableGimmickInterface>()
{
	return UOverlapableGimmickInterface::StaticClass();
}
UOverlapableGimmickInterface::UOverlapableGimmickInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlapableGimmickInterface);
UOverlapableGimmickInterface::~UOverlapableGimmickInterface() {}
// End Interface UOverlapableGimmickInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOverlapableGimmickInterface, UOverlapableGimmickInterface::StaticClass, TEXT("UOverlapableGimmickInterface"), &Z_Registration_Info_UClass_UOverlapableGimmickInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlapableGimmickInterface), 3409007364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_253785249(TEXT("/Script/HW_5"),
	Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
