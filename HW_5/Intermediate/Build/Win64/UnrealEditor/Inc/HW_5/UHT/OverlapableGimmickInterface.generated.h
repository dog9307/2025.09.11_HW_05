// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OverlapableGimmickInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HW_5_OverlapableGimmickInterface_generated_h
#error "OverlapableGimmickInterface.generated.h already included, missing '#pragma once' in OverlapableGimmickInterface.h"
#endif
#define HW_5_OverlapableGimmickInterface_generated_h

#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndGimmickOverlap); \
	DECLARE_FUNCTION(execOnBeginGimmickOverlap);


#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HW_5_API UOverlapableGimmickInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOverlapableGimmickInterface(UOverlapableGimmickInterface&&); \
	UOverlapableGimmickInterface(const UOverlapableGimmickInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HW_5_API, UOverlapableGimmickInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOverlapableGimmickInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOverlapableGimmickInterface) \
	HW_5_API virtual ~UOverlapableGimmickInterface();


#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOverlapableGimmickInterface(); \
	friend struct Z_Construct_UClass_UOverlapableGimmickInterface_Statics; \
public: \
	DECLARE_CLASS(UOverlapableGimmickInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HW_5"), HW_5_API) \
	DECLARE_SERIALIZER(UOverlapableGimmickInterface)


#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOverlapableGimmickInterface() {} \
public: \
	typedef UOverlapableGimmickInterface UClassType; \
	typedef IOverlapableGimmickInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_7_PROLOG
#define FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW_5_API UClass* StaticClass<class UOverlapableGimmickInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpartaCoding_SpartaCoding_2025_09_11_HW_05_2025_09_11_HW_05_HW_5_Source_HW_5_Public_OverlapableGimmickInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
