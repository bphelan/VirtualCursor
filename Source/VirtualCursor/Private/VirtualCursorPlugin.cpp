
#include "VirtualCursorPlugin.h"

DEFINE_LOG_CATEGORY(VirtualCursorModule);


#define LOCTEXT_NAMESPACE "FVirtualCursorPlugin"


void FVirtualCursorPlugin::StartupModule()
{
	UE_LOG(VirtualCursorModule, Warning, TEXT("VirtualCursor module has started"));
}


void FVirtualCursorPlugin::ShutdownModule()
{
	UE_LOG(VirtualCursorModule, Warning, TEXT("VirtualCursor module has shut down"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FVirtualCursorPlugin, VirtualCursor)
