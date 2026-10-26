// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Practica_1_TopDownPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePractica_1_TopDownPlayerController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
PRACTICA_1_TOPDOWN_API UClass* Z_Construct_UClass_APractica_1_TopDownPlayerController();
PRACTICA_1_TOPDOWN_API UClass* Z_Construct_UClass_APractica_1_TopDownPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Practica_1_TopDown();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APractica_1_TopDownPlayerController **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APractica_1_TopDownPlayerController;
UClass* APractica_1_TopDownPlayerController::GetPrivateStaticClass()
{
	using TClass = APractica_1_TopDownPlayerController;
	if (!Z_Registration_Info_UClass_APractica_1_TopDownPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Practica_1_TopDownPlayerController"),
			Z_Registration_Info_UClass_APractica_1_TopDownPlayerController.InnerSingleton,
			StaticRegisterNativesAPractica_1_TopDownPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APractica_1_TopDownPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_APractica_1_TopDownPlayerController_NoRegister()
{
	return APractica_1_TopDownPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Player controller for a top-down perspective game.\n *  Implements point and click based controls\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Practica_1_TopDownPlayerController.h" },
		{ "ModuleRelativePath", "Practica_1_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player controller for a top-down perspective game.\nImplements point and click based controls" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathFollowingComponent_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Component used for moving along a NavMesh path. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Practica_1_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component used for moving along a NavMesh path." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
#endif
		{ "ModuleRelativePath", "Practica_1_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time Threshold to know if it was a short press" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
#endif
		{ "ModuleRelativePath", "Practica_1_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX Class that we will spawn when clicking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Practica_1_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationClickAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Practica_1_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetDestinationTouchAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Practica_1_TopDownPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class APractica_1_TopDownPlayerController constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathFollowingComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationClickAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SetDestinationTouchAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APractica_1_TopDownPlayerController constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APractica_1_TopDownPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics

// ********** Begin Class APractica_1_TopDownPlayerController Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_PathFollowingComponent = { "PathFollowingComponent", nullptr, (EPropertyFlags)0x01240800000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APractica_1_TopDownPlayerController, PathFollowingComponent), Z_Construct_UClass_UPathFollowingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathFollowingComponent_MetaData), NewProp_PathFollowingComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APractica_1_TopDownPlayerController, ShortPressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShortPressThreshold_MetaData), NewProp_ShortPressThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APractica_1_TopDownPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FXCursor_MetaData), NewProp_FXCursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APractica_1_TopDownPlayerController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_SetDestinationClickAction = { "SetDestinationClickAction", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APractica_1_TopDownPlayerController, SetDestinationClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationClickAction_MetaData), NewProp_SetDestinationClickAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_SetDestinationTouchAction = { "SetDestinationTouchAction", nullptr, (EPropertyFlags)0x0124080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APractica_1_TopDownPlayerController, SetDestinationTouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetDestinationTouchAction_MetaData), NewProp_SetDestinationTouchAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_PathFollowingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_ShortPressThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_FXCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_SetDestinationClickAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::NewProp_SetDestinationTouchAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::PropPointers) < 2048);
// ********** End Class APractica_1_TopDownPlayerController Property Definitions *******************
UObject* (*const Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Practica_1_TopDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::ClassParams = {
	&APractica_1_TopDownPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::PropPointers),
	0,
	0x008002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::Class_MetaDataParams)
};
void APractica_1_TopDownPlayerController::StaticRegisterNativesAPractica_1_TopDownPlayerController()
{
}
UClass* Z_Construct_UClass_APractica_1_TopDownPlayerController()
{
	if (!Z_Registration_Info_UClass_APractica_1_TopDownPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APractica_1_TopDownPlayerController.OuterSingleton, Z_Construct_UClass_APractica_1_TopDownPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APractica_1_TopDownPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APractica_1_TopDownPlayerController);
APractica_1_TopDownPlayerController::~APractica_1_TopDownPlayerController() {}
// ********** End Class APractica_1_TopDownPlayerController ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownPlayerController_h__Script_Practica_1_TopDown_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APractica_1_TopDownPlayerController, APractica_1_TopDownPlayerController::StaticClass, TEXT("APractica_1_TopDownPlayerController"), &Z_Registration_Info_UClass_APractica_1_TopDownPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APractica_1_TopDownPlayerController), 2178497919U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownPlayerController_h__Script_Practica_1_TopDown_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownPlayerController_h__Script_Practica_1_TopDown_2791452740{
	TEXT("/Script/Practica_1_TopDown"),
	Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownPlayerController_h__Script_Practica_1_TopDown_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownPlayerController_h__Script_Practica_1_TopDown_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
