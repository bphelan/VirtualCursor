/*
	This code was written by Nick Darnell

	Plugin created by Rama
	Modified by Nicholas Helish
*/
#include "GamepadUMGPlugin.h"

DEFINE_LOG_CATEGORY(GamepadUMGPluginModule);


#define LOCTEXT_NAMESPACE "FGamepadUMGPluginModule"

void FGamepadUMGPlugin::StartupModule()
{
	UE_LOG(GamepadUMGPluginModule, Warning, TEXT("RivalsUi module has started!"));
}

void FGamepadUMGPlugin::ShutdownModule()
{
	UE_LOG(GamepadUMGPluginModule, Warning, TEXT("RivalsUi module has shut down"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FGamepadUMGPlugin, GamepadUMGPlugin)
