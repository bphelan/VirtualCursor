/*
	This code was written by Nick Darnell
	
	Plugin created by Rama
	Modified by Nicholas Helish
*/
#include "VirtualCursorFunctionLibrary.h"
#include "GamepadCursorSettings.h"
#include "GameAnalogCursor.h"
#include "GamepadCursorManager.h"

// Helper macro for getting the settings without being able to edit the settings
#define GET_SETTINGS GetDefault<UGamepadCursorSettings>()
// Helper macro for getting the settings while being able to edit the settings
#define GET_SETTINGS_EDIT GetMutableDefault<UGamepadCursorSettings>()

void UVirtualCursorFunctionLibrary::Global_EnableVirtualCursor(class APlayerController* PC)
{
	if (PC)
	{
		if (PC->GetLocalPlayer())
		{
			PC->GetLocalPlayer()->GetSubsystem<UGamepadCursorManager>()->EnableAnalogCursor();
		}
	}	
}

void UVirtualCursorFunctionLibrary::Global_DisableVirtualCursor(class APlayerController* PC)
{
	if (PC)
	{
		if (PC->GetLocalPlayer())
		{
			PC->GetLocalPlayer()->GetSubsystem<UGamepadCursorManager>()->DisableAnalogCursor();
		}
	}
}

bool UVirtualCursorFunctionLibrary::Global_IsCursorOverInteractableWidget(class APlayerController* PC)
{
	if (PC)
	{
		if (PC->GetLocalPlayer())
		{
			return PC->GetLocalPlayer()->GetSubsystem<UGamepadCursorManager>()->IsCursorOverInteractableWidget();
		}
	}
	
	return false;
}
