// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePractica_1_TopDown_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	PRACTICA_1_TOPDOWN_API UFunction* Z_Construct_UDelegateFunction_Practica_1_TopDown_OnUnitMoveCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Practica_1_TopDown;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Practica_1_TopDown()
	{
		if (!Z_Registration_Info_UPackage__Script_Practica_1_TopDown.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_Practica_1_TopDown_OnUnitMoveCompletedDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Practica_1_TopDown",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x876DA5FF,
			0xC2F1522B,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Practica_1_TopDown.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Practica_1_TopDown.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Practica_1_TopDown(Z_Construct_UPackage__Script_Practica_1_TopDown, TEXT("/Script/Practica_1_TopDown"), Z_Registration_Info_UPackage__Script_Practica_1_TopDown, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x876DA5FF, 0xC2F1522B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
