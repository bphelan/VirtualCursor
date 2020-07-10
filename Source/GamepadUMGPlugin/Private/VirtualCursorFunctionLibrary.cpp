/*
	This code was written by Nick Darnell
	
	Plugin created by Rama
	Modified by Nicholas Helish
*/
#include "VirtualCursorFunctionLibrary.h"
#include "GamepadCursorSettings.h"
#include "GameAnalogCursor.h"
#include "GamepadCursorManager.h"

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
