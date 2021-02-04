#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "VirtualCursor.generated.h"


UCLASS()
class VIRTUALCURSOR_API UVirtualCursor : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category="Virtual Cursor", meta = (DisplayName = "Enable Virtual Cursor"))
	static void Enable(class APlayerController* PlayerController, bool bUseLeftStick = true);

	UFUNCTION(BlueprintCallable, Category = "Virtual Cursor", meta = (DisplayName = "Disable Virtual Cursor"))
	static void Disable(class APlayerController* PlayerController);

	UFUNCTION(BlueprintPure, Category="Virtual Cursor", meta = (DisplayName = "Is Cursor Over Interactable Widget"))
	static bool IsOverInteractableWidget(class APlayerController* PlayerController);
};
