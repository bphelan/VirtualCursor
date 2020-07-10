// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamepadUMGPlugin/Public/VirtualCursorFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCursorFunctionLibrary() {}
// Cross Module References
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary_NoRegister();
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GamepadUMGPlugin();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVirtualCursorFunctionLibrary::execGlobal_IsCursorOverInteractableWidget)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::Global_IsCursorOverInteractableWidget(Z_Param_PC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCursorFunctionLibrary::execGlobal_DisableVirtualCursor)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVirtualCursorFunctionLibrary::Global_DisableVirtualCursor(Z_Param_PC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVirtualCursorFunctionLibrary::execGlobal_EnableVirtualCursor)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVirtualCursorFunctionLibrary::Global_EnableVirtualCursor(Z_Param_PC);
		P_NATIVE_END;
	}
	void UVirtualCursorFunctionLibrary::StaticRegisterNativesUVirtualCursorFunctionLibrary()
	{
		UClass* Class = UVirtualCursorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Global_DisableVirtualCursor", &UVirtualCursorFunctionLibrary::execGlobal_DisableVirtualCursor },
			{ "Global_EnableVirtualCursor", &UVirtualCursorFunctionLibrary::execGlobal_EnableVirtualCursor },
			{ "Global_IsCursorOverInteractableWidget", &UVirtualCursorFunctionLibrary::execGlobal_IsCursorOverInteractableWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics
	{
		struct VirtualCursorFunctionLibrary_eventGlobal_DisableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventGlobal_DisableVirtualCursor_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "(Global) Disable Virtual Cursor" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, nullptr, "Global_DisableVirtualCursor", nullptr, nullptr, sizeof(VirtualCursorFunctionLibrary_eventGlobal_DisableVirtualCursor_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics
	{
		struct VirtualCursorFunctionLibrary_eventGlobal_EnableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventGlobal_EnableVirtualCursor_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "(Global) Enable Virtual Cursor" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, nullptr, "Global_EnableVirtualCursor", nullptr, nullptr, sizeof(VirtualCursorFunctionLibrary_eventGlobal_EnableVirtualCursor_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics
	{
		struct VirtualCursorFunctionLibrary_eventGlobal_IsCursorOverInteractableWidget_Parms
		{
			APlayerController* PC;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCursorFunctionLibrary_eventGlobal_IsCursorOverInteractableWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VirtualCursorFunctionLibrary_eventGlobal_IsCursorOverInteractableWidget_Parms), &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventGlobal_IsCursorOverInteractableWidget_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "DisplayName", "(Global) Is Cursor Over Interactable Widget" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, nullptr, "Global_IsCursorOverInteractableWidget", nullptr, nullptr, sizeof(VirtualCursorFunctionLibrary_eventGlobal_IsCursorOverInteractableWidget_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary_NoRegister()
	{
		return UVirtualCursorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamepadUMGPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_DisableVirtualCursor, "Global_DisableVirtualCursor" }, // 2426273041
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_EnableVirtualCursor, "Global_EnableVirtualCursor" }, // 1386165275
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_Global_IsCursorOverInteractableWidget, "Global_IsCursorOverInteractableWidget" }, // 3139394927
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VirtualCursorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualCursorFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::ClassParams = {
		&UVirtualCursorFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualCursorFunctionLibrary, 1000494517);
	template<> GAMEPADUMGPLUGIN_API UClass* StaticClass<UVirtualCursorFunctionLibrary>()
	{
		return UVirtualCursorFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualCursorFunctionLibrary(Z_Construct_UClass_UVirtualCursorFunctionLibrary, &UVirtualCursorFunctionLibrary::StaticClass, TEXT("/Script/GamepadUMGPlugin"), TEXT("UVirtualCursorFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCursorFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
