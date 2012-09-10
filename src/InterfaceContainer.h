#ifndef __INCLUDE_INTERFACECONTAINER_H__
#define __INCLUDE_INTERFACECONTAINER_H__

#include "HL2SDK.h"
#include "ViperRootConsoleCommand.h"
#include "ISDKTools.h"

class ViperRootConsoleCommand;

class InterfaceContainer {
public:
	InterfaceContainer();

	ICvar *CvarInstance;
	IUniformRandomStream *UniformRandomStreamInstance;
	IServerPluginHelpers *ServerPluginsHelperInstance;
	IGameEventManager2 *GameEventManagerInstance;
	IEngineSound *EngineSoundInstance;
	IFileSystem *BaseFileSystemInstance;
	IServerGameClients *ServerGameClientsInstance;
	IServerGameEnts *ServerGameEntsInstance;
	SourceHook::CallClass<IServerGameDLL> *ServerGameDLLCallClass;
	CGlobalVars *GlobalVarsInstance;
	SourceMod::IGameConfig *GameConfigInstance;
	SourceMod::IBinTools *BinToolsInstance;
	CSharedEdictChangeInfo *SharedEdictChangeInfoInstance;
	IServerPluginCallbacks *ServerPluginCallbacksInstance;
	ViperRootConsoleCommand *RootConsoleCommandInstance;
	ISDKTools *SDKToolsInstance;
};

extern InterfaceContainer g_Interfaces;

#endif