// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Practica_1_TopDownCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePractica_1_TopDownCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
PRACTICA_1_TOPDOWN_API UClass* Z_Construct_UClass_APractica_1_TopDownCharacter();
PRACTICA_1_TOPDOWN_API UClass* Z_Construct_UClass_APractica_1_TopDownCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Practica_1_TopDown();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APractica_1_TopDownCharacter *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APractica_1_TopDownCharacter;
UClass* APractica_1_TopDownCharacter::GetPrivateStaticClass()
{
	using TClass = APractica_1_TopDownCharacter;
	if (!Z_Registration_Info_UClass_APractica_1_TopDownCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Practica_1_TopDownCharacter"),
			Z_Registration_Info_UClass_APractica_1_TopDownCharacter.InnerSingleton,
			StaticRegisterNativesAPractica_1_TopDownCharacter,
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
	return Z_Registration_Info_UClass_APractica_1_TopDownCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APractica_1_TopDownCharacter_NoRegister()
{
	return APractica_1_TopDownCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APractica_1_TopDownCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A controllable top-down perspective character\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Practica_1_TopDownCharacter.h" },
		{ "ModuleRelativePath", "Practica_1_TopDownCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A controllable top-down perspective character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Top down camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Practica_1_TopDownCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Top down camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Practica_1_TopDownCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera above the character" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class APractica_1_TopDownCharacter constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APractica_1_TopDownCharacter constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APractica_1_TopDownCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APractica_1_TopDownCharacter_Statics

// ********** Begin Class APractica_1_TopDownCharacter Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APractica_1_TopDownCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData), NewProp_TopDownCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APractica_1_TopDownCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::NewProp_TopDownCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::NewProp_CameraBoom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::PropPointers) < 2048);
// ********** End Class APractica_1_TopDownCharacter Property Definitions **************************
UObject* (*const Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Practica_1_TopDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::ClassParams = {
	&APractica_1_TopDownCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::Class_MetaDataParams)
};
void APractica_1_TopDownCharacter::StaticRegisterNativesAPractica_1_TopDownCharacter()
{
}
UClass* Z_Construct_UClass_APractica_1_TopDownCharacter()
{
	if (!Z_Registration_Info_UClass_APractica_1_TopDownCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APractica_1_TopDownCharacter.OuterSingleton, Z_Construct_UClass_APractica_1_TopDownCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APractica_1_TopDownCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APractica_1_TopDownCharacter);
APractica_1_TopDownCharacter::~APractica_1_TopDownCharacter() {}
// ********** End Class APractica_1_TopDownCharacter ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownCharacter_h__Script_Practica_1_TopDown_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APractica_1_TopDownCharacter, APractica_1_TopDownCharacter::StaticClass, TEXT("APractica_1_TopDownCharacter"), &Z_Registration_Info_UClass_APractica_1_TopDownCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APractica_1_TopDownCharacter), 2980273639U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownCharacter_h__Script_Practica_1_TopDown_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownCharacter_h__Script_Practica_1_TopDown_676013132{
	TEXT("/Script/Practica_1_TopDown"),
	Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownCharacter_h__Script_Practica_1_TopDown_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_msi_Documents_Unreal_Projects_Practica_1_TopDown_Source_Practica_1_TopDown_Practica_1_TopDownCharacter_h__Script_Practica_1_TopDown_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
