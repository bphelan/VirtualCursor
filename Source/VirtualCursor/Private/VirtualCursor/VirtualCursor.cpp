#include "VirtualCursor/VirtualCursor.h"
#include "VirtualCursor/CursorSettings.h"
#include "VirtualCursor/ExtendedAnalogCursor.h"
#include "VirtualCursor/VirtualCursorManager.h"


void UVirtualCursor::Enable(class APlayerController* PlayerController, const bool bUseLeftStick)
{
	if (PlayerController)
	{
		if (PlayerController->GetLocalPlayer())
		{
			PlayerController->GetLocalPlayer()->GetSubsystem<UVirtualCursorManager>()->EnableAnalogCursor(bUseLeftStick);
		}
	}
}


void UVirtualCursor::Disable(class APlayerController* PlayerController)
{
	if (PlayerController)
	{
		if (PlayerController->GetLocalPlayer())
		{
			PlayerController->GetLocalPlayer()->GetSubsystem<UVirtualCursorManager>()->DisableAnalogCursor();
		}
	}
}


bool UVirtualCursor::IsOverInteractableWidget(class APlayerController* PlayerController)
{
	if (PlayerController)
	{
		if (PlayerController->GetLocalPlayer())
		{
			return PlayerController->GetLocalPlayer()->GetSubsystem<UVirtualCursorManager>()->IsCursorOverInteractableWidget();
		}
	}

	return false;
}
