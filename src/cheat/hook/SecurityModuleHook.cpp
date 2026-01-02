/*
*	OXWARE developed by oxiKKK
*	Copyright (c) 2023
* 
*	This program is licensed under the MIT license. By downloading, copying, 
*	installing or using this software you agree to this license.
*
*	License Agreement
*
*	Permission is hereby granted, free of charge, to any person obtaining a 
*	copy of this software and associated documentation files (the "Software"), 
*	to deal in the Software without restriction, including without limitation 
*	the rights to use, copy, modify, merge, publish, distribute, sublicense, 
*	and/or sell copies of the Software, and to permit persons to whom the 
*	Software is furnished to do so, subject to the following conditions:
*
*	The above copyright notice and this permission notice shall be included 
*	in all copies or substantial portions of the Software. 
*
*	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
*	OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
*	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL 
*	THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
*	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
*	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS 
*	IN THE SOFTWARE.
*/

#include "precompiled.h"

#if 0
#define P(name) CConsole::the().info("{}()", name)
#else
#define P(name)
#endif

//-----------------------------------------------------------------------------
//
// modfuncs_t
//

static void ModFuncs_LoadMod(char* pchModule)
{
	P(__FUNCTION__);
}

static void ModFuncs_CloseMod()
{
	P(__FUNCTION__);
}

static int ModFuncs_NCall(int ijump, int cnArg, ...)
{
	P(__FUNCTION__);
	return 0;
}

static void ModFuncs_GetClDstAddrs(hl::cldll_func_dst_t* pcldstAddrs)
{
	P(__FUNCTION__);
}

static void ModFuncs_GetEngDstAddrs(hl::cl_enginefunc_dst_t* pengdstAddrs)
{
	P(__FUNCTION__);
}

static void ModFuncs_ModuleLoaded()
{
	P(__FUNCTION__);
}

static void ModFuncs_ProcessOutgoingNet(hl::netchan_t* pchan, hl::sizebuf_t* psizebuf)
{
	P(__FUNCTION__);
}

static hl::qboolean ModFuncs_ProcessIncomingNet(hl::netchan_t* pchan, hl::sizebuf_t* psizebuf)
{
	P(__FUNCTION__);

	// called inside Netchan_Process. Has to return TRUE, othwerside the function fails.

	return TRUE;
}

static void ModFuncs_TextureLoad(char* pszName, int dxWidth, int dyHeight, char* pbData)
{
	P(__FUNCTION__);
}

static void ModFuncs_ModelLoad(hl::model_t* pmodel, void* pvBuf)
{
	P(__FUNCTION__);
}

static void ModFuncs_FrameBegin()
{
	P(__FUNCTION__);
}

static void ModFuncs_FrameRender1()
{
	P(__FUNCTION__);
}

static void ModFuncs_FrameRender2()
{
	P(__FUNCTION__);
}

static void ModFuncs_SetModsHelpers(hl::modshelpers_t* pmodshelpers)
{
	P(__FUNCTION__);
}

static void ModFuncs_SetModcHelpers(hl::modchelpers_t* pmodchelpers)
{
	P(__FUNCTION__);
}

static void ModFuncs_SetEngData(hl::engdata_t* pengdata)
{
	P(__FUNCTION__);
}

static void ModFuncs_ConnectClient(int iPlayer)
{
	P(__FUNCTION__);
}

static void ModFuncs_RecordIp(unsigned int pnIP)
{
	P(__FUNCTION__);
}

static void ModFuncs_PlayerStatus(unsigned char* pbData, int cbData)
{
	P(__FUNCTION__);
}

static void ModFuncs_SetEngineVersion(int nVersion)
{
	P(__FUNCTION__);
}

static int ModFuncs_PCMachine()
{
	P(__FUNCTION__);
	// unused
}

static void ModFuncs_SetIp(int ijump)
{
	P(__FUNCTION__);
	// unused
}

static void ModFuncs_Execute()
{
	P(__FUNCTION__);
	// unused
}

//-----------------------------------------------------------------------------
//
// cl_enginefunc_dst_t detour
//
// See https://github.com/ValveSoftware/halflife/issues/2131 for what handlers are missing
//

void EngDst_SPR_Load(const char** pTextureName)
{
	P(__FUNCTION__);
	
}

void EngDst_SPR_Frames(hl::HSPRITE_t*)
{
	P(__FUNCTION__);
}

void EngDst_SPR_Height(hl::HSPRITE_t*, int*)
{
	P(__FUNCTION__);
}

void EngDst_SPR_Width(hl::HSPRITE_t*, int*)
{
	P(__FUNCTION__);
}

void EngDst_SPR_Set(hl::HSPRITE_t*, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_SPR_Draw(int*, int*, int*, const hl::wrect_t**)
{
	P(__FUNCTION__);
}

void EngDst_SPR_DrawHoles(int*, int*, int*, const hl::wrect_t**)
{
	P(__FUNCTION__);
}

void EngDst_SPR_DrawAdditive(int*, int*, int*, const hl::wrect_t**)
{
	P(__FUNCTION__);
}

void EngDst_SPR_EnableScissor(int*, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_SPR_DisableScissor()
{
	P(__FUNCTION__);
}

void EngDst_SPR_GetList(const char**, int**)
{
	P(__FUNCTION__);
}

void EngDst_FillRGBA(int*, int*, int*, int*, int*, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_GetScreenInfo(hl::SCREENINFO**)
{
	P(__FUNCTION__);
}

void EngDst_SetCrosshair(hl::HSPRITE_t*, hl::wrect_t*, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_RegisterVariable(char**, char**, int*)
{
	P(__FUNCTION__);
}

void EngDst_GetCvarFloat(char**)
{
	P(__FUNCTION__);
}

void EngDst_GetCvarString(char**)
{
	P(__FUNCTION__);
}

void EngDst_AddCommand(char**, void (**()))
{
	P(__FUNCTION__);
}

void EngDst_HookUserMsg(char**, hl::pfnUserMsgHook*)
{
	P(__FUNCTION__);
}

void EngDst_ServerCmd(char**)
{
	P(__FUNCTION__);
}

void EngDst_ClientCmd(char**)
{
	P(__FUNCTION__);
}

void EngDst_PrimeMusicStream(const char**, int*)
{
	P(__FUNCTION__);
}

void EngDst_GetPlayerInfo(int*, hl::hud_player_info_t**)
{
	P(__FUNCTION__);
}

void EngDst_PlaySoundByName(char**, float*)
{
	P(__FUNCTION__);
}

void EngDst_PlaySoundByNameAtPitch(char**, float*, int*)
{
	P(__FUNCTION__);
}

void EngDst_PlaySoundVoiceByName(char**, float*)
{
	P(__FUNCTION__);
}

void EngDst_PlaySoundByIndex(int*, float*)
{
	P(__FUNCTION__);
}

void EngDst_AngleVectors(float**, float**, float**, float**)
{
	P(__FUNCTION__);
}

void EngDst_TextMessageGet(const char**)
{
	P(__FUNCTION__);
}

void EngDst_DrawCharacter(int*, int*, int*, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_DrawConsoleString(int*, int*, const char**)
{
	P(__FUNCTION__);
}

void EngDst_DrawSetTextColor(float*, float*, float*)
{
	P(__FUNCTION__);
}

void EngDst_DrawConsoleStringLen(const char**, int**, int**)
{
	P(__FUNCTION__);
}

void EngDst_ConsolePrint(const char**)
{
	P(__FUNCTION__);
}

void EngDst_CenterPrint(const char**)
{
	P(__FUNCTION__);
}

void EngDst_GetWindowCenterX()
{
	P(__FUNCTION__);
}

void EngDst_GetWindowCenterY()
{
	P(__FUNCTION__);
}

void EngDst_GetViewAngles(float**)
{
	P(__FUNCTION__);
}

void EngDst_SetViewAngles(float**)
{
	P(__FUNCTION__);
}

void EngDst_GetMaxClients()
{
	P(__FUNCTION__);
}

void EngDst_Cvar_SetValue(char**, float*)
{
	P(__FUNCTION__);
}

void EngDst_Cmd_Argc()
{
	P(__FUNCTION__);
}

void EngDst_Cmd_Argv(int*)
{
	P(__FUNCTION__);
}

void EngDst_Con_Printf(char**)
{
	P(__FUNCTION__);
}

void EngDst_Con_DPrintf(char**)
{
	P(__FUNCTION__);
}

void EngDst_Con_NPrintf(int*, char**)
{
	P(__FUNCTION__);
}

void EngDst_Con_NXPrintf(hl::con_nprint_t**, char**)
{
	P(__FUNCTION__);
}

void EngDst_PhysInfo_ValueForKey(const char**)
{
	P(__FUNCTION__);
}

void EngDst_ServerInfo_ValueForKey(const char**)
{
	P(__FUNCTION__);
}

void EngDst_GetClientMaxspeed()
{
	P(__FUNCTION__);
}

void EngDst_CheckParm(char**, char***)
{
	P(__FUNCTION__);
}

void EngDst_Key_Event(int*, hl::qboolean*)
{
	P(__FUNCTION__);
}

void EngDst_GetMousePosition(int**, int**)
{
	P(__FUNCTION__);
}

void EngDst_IsNoClipping()
{
	P(__FUNCTION__);
}

void EngDst_GetLocalPlayer()
{
	P(__FUNCTION__);
}

void EngDst_GetViewModel()
{
	P(__FUNCTION__);
}

void EngDst_GetEntityByIndex(int*)
{
	P(__FUNCTION__);
}

void EngDst_GetClientTime()
{
	P(__FUNCTION__);
}

void EngDst_V_CalcShake()
{
	P(__FUNCTION__);
}

void EngDst_V_ApplyShake(float**, float**, float*)
{
	P(__FUNCTION__);
}

void EngDst_PM_PointContents(float**, int**)
{
	P(__FUNCTION__);
}

void EngDst_PM_WaterEntity(float**)
{
	P(__FUNCTION__);
}

void EngDst_PM_TraceLine(float**, float**, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_CL_LoadModel(const char**, int**)
{
	P(__FUNCTION__);
}

void EngDst_CL_CreateVisibleEntity(int*, hl::cl_entity_t**)
{
	P(__FUNCTION__);
}

void EngDst_GetSpritePointer(hl::HSPRITE_t*)
{
	P(__FUNCTION__);
}

void EngDst_PlaySoundByNameAtLocation(char**, float*, float**)
{
	P(__FUNCTION__);
}

void EngDst_PrecacheEvent(int*, const char**)
{
	P(__FUNCTION__);
}

void EngDst_PlaybackEvent(int*, const hl::edict_t**, unsigned short*, float*, float**, float**, float*, float*, int*, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_WeaponAnim(int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_RandomFloat(float*, float*)
{
	P(__FUNCTION__);
}

void EngDst_RandomLong(hl::int32*, hl::int32*)
{
	P(__FUNCTION__);
}

void EngDst_HookEvent(char**, void (**(hl::event_args_t*)))
{
	P(__FUNCTION__);
}

void EngDst_Con_IsVisible()
{
	P(__FUNCTION__);
}

void EngDst_GetGameDirectory()
{
	P(__FUNCTION__);
}

void EngDst_GetCvarPointer(char**)
{
	P(__FUNCTION__);
}

void EngDst_Key_LookupBinding(const char**)
{
	P(__FUNCTION__);
}

void EngDst_GetLevelName()
{
	P(__FUNCTION__);
}

void EngDst_GetScreenFade(hl::screenfade_t**)
{
	P(__FUNCTION__);
}

void EngDst_SetScreenFade(hl::screenfade_t**)
{
	P(__FUNCTION__);
}

void EngDst_VGui_GetPanel()
{
	P(__FUNCTION__);
}

void EngDst_VGui_ViewportPaintBackground(int**)
{
	P(__FUNCTION__);
}

void EngDst_COM_LoadFile(const char**, int*, int**)
{
	P(__FUNCTION__);
}

void EngDst_COM_ParseFile(char**, char**)
{
	P(__FUNCTION__);
}

void EngDst_COM_FreeFile(void**)
{
	P(__FUNCTION__);
}

void EngDst_IsSpectateOnly()
{
	P(__FUNCTION__);
}

void EngDst_LoadMapSprite(const char**)
{
	P(__FUNCTION__);
}

void EngDst_COM_AddAppDirectoryToSearchPath(const char**, const char**)
{
	P(__FUNCTION__);
}

void EngDst_COM_ExpandFilename(const char**, char**, int*)
{
	P(__FUNCTION__);
}

void EngDst_PlayerInfo_ValueForKey(int*, const char**)
{
	P(__FUNCTION__);
}

void EngDst_PlayerInfo_SetValueForKey(const char**, const char**)
{
	P(__FUNCTION__);
}

void EngDst_GetPlayerUniqueID(int*, char**)
{
	P(__FUNCTION__);
}

void EngDst_GetTrackerIDForPlayer(int*)
{
	P(__FUNCTION__);
}

void EngDst_GetPlayerForTrackerID(int*)
{
	P(__FUNCTION__);
}

void EngDst_ServerCmdUnreliable(char**)
{
	P(__FUNCTION__);
}

void EngDst_GetMousePos(POINT**)
{
	P(__FUNCTION__);
}

void EngDst_SetMousePos(int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_SetMouseEnable(hl::qboolean*)
{
	P(__FUNCTION__);
}

void EngDst_SetFilterMode(int*)
{
	P(__FUNCTION__);
}

void EngDst_SetFilterColor(float*, float*, float*)
{
	P(__FUNCTION__);
}

void EngDst_SetFilterBrightness(float*)
{
	P(__FUNCTION__);
}

void EngDst_SequenceGet(const char**, const char**)
{
	P(__FUNCTION__);
}

void EngDst_SPR_DrawGeneric(int*, int*, int*, const hl::wrect_t**, int*, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_SequencePickSentence(const char**, int*, int**)
{
	P(__FUNCTION__);
}

void EngDst_DrawString(int*, int*, const char*, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_DrawStringReverse(int*, int*, const char*, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_LocalPlayerInfo_ValueForKey(const char**)
{
	P(__FUNCTION__);
}

void EngDst_VGUI2DrawCharacter(int*, int*, int*, unsigned int*)
{
	P(__FUNCTION__);
}

void EngDst_VGUI2DrawCharacterAdd(int*, int*, int*, int*, int*, int*, unsigned int*)
{
	P(__FUNCTION__);
}

void EngDst_ProcessTutorMessageDecayBuffer(int**, int*)
{
	P(__FUNCTION__);
}

void EngDst_ConstructTutorMessageDecayBuffer(int**, int*)
{
	P(__FUNCTION__);
}

void EngDst_ResetTutorMessageDecayData()
{
	P(__FUNCTION__);
}

void EngDst_FillRGBABlend(int*, int*, int*, int*, int*, int*, int*, int*)
{
	P(__FUNCTION__);
}

void EngDst_GetAppID()
{
	P(__FUNCTION__);
}

void EngDst_GetAliases()
{
	P(__FUNCTION__);
}

void EngDst_VguiWrap2_GetMouseDelta(int* x, int* y)
{
	P(__FUNCTION__);
}

void EngDst_FilteredClientCmd(char**)
{
	P(__FUNCTION__);
}

//-----------------------------------------------------------------------------

bool CSecurityModuleHook::install_hooks()
{
	CConsole::the().info("Initializng security module hook...");
	
	if (!g_modfuncs().install())
	{
		return false;
	}

    if (!g_engdstAddrs().install())
    {
        return false;
    }

    fill_modfuncs_callback_table();

	CConsole::the().info("Security module hook initialized.");

	m_initialized = true;
	return true;
}

void CSecurityModuleHook::uninstall_hooks()
{
	if (!m_initialized)
	{
		return;
	}

	restore_modfuncs_callback_table();
}

void CSecurityModuleHook::fill_modfuncs_callback_table()
{
	auto pg_modfuncs = g_modfuncs().get();

	pg_modfuncs->m_nVersion = k_nModuleVersionCur;
	pg_modfuncs->m_pfnLoadMod = ModFuncs_LoadMod;
	pg_modfuncs->m_pfnCloseMod = ModFuncs_CloseMod;
	pg_modfuncs->m_pfnNCall = ModFuncs_NCall;
	pg_modfuncs->m_pfnGetClDstAddrs = ModFuncs_GetClDstAddrs;
	pg_modfuncs->m_pfnGetEngDstAddrs = ModFuncs_GetEngDstAddrs;
	pg_modfuncs->m_pfnModuleLoaded = ModFuncs_ModuleLoaded;
	pg_modfuncs->m_pfnProcessOutgoingNet = ModFuncs_ProcessOutgoingNet;
	pg_modfuncs->m_pfnProcessIncomingNet = ModFuncs_ProcessIncomingNet;
	pg_modfuncs->m_pfnTextureLoad = ModFuncs_TextureLoad;
	pg_modfuncs->m_pfnModelLoad = ModFuncs_ModelLoad;
	pg_modfuncs->m_pfnFrameBegin = ModFuncs_FrameBegin;
	pg_modfuncs->m_pfnFrameRender1 = ModFuncs_FrameRender1;
	pg_modfuncs->m_pfnFrameRender2 = ModFuncs_FrameRender2;
	pg_modfuncs->m_pfnSetModSHelpers = ModFuncs_SetModsHelpers;
	pg_modfuncs->m_pfnSetModCHelpers = ModFuncs_SetModcHelpers;
	pg_modfuncs->m_pfnSetEngData = ModFuncs_SetEngData;
	pg_modfuncs->m_pfnConnectClient = ModFuncs_ConnectClient;
	pg_modfuncs->m_pfnRecordIP = ModFuncs_RecordIp;
	pg_modfuncs->m_pfnPlayerStatus = ModFuncs_PlayerStatus;
	pg_modfuncs->m_pfnSetEngineVersion = ModFuncs_SetEngineVersion;
}

void CSecurityModuleHook::restore_modfuncs_callback_table()
{
	auto pg_modfuncs = g_modfuncs().get();

	memset(pg_modfuncs, NULL, sizeof(hl::modfuncs_t));
}

void CSecurityModuleHook::fill_engdst_callback_table()
{
    auto pg_engdstAddrs = g_engdstAddrs().get();
	pg_engdstAddrs->pfnSPR_Load = EngDst_SPR_Load;
	pg_engdstAddrs->pfnSPR_Frames = EngDst_SPR_Frames;
	pg_engdstAddrs->pfnSPR_Height = EngDst_SPR_Height;
	pg_engdstAddrs->pfnSPR_Width = EngDst_SPR_Width;
	pg_engdstAddrs->pfnSPR_Set = EngDst_SPR_Set;
	pg_engdstAddrs->pfnSPR_Draw = EngDst_SPR_Draw;
	pg_engdstAddrs->pfnSPR_DrawHoles = EngDst_SPR_DrawHoles;
	pg_engdstAddrs->pfnSPR_DrawAdditive = EngDst_SPR_DrawAdditive;
	pg_engdstAddrs->pfnSPR_EnableScissor = EngDst_SPR_EnableScissor;
	pg_engdstAddrs->pfnSPR_DisableScissor = EngDst_SPR_DisableScissor;
	pg_engdstAddrs->pfnSPR_GetList = EngDst_SPR_GetList;
	pg_engdstAddrs->pfnFillRGBA = EngDst_FillRGBA;
	pg_engdstAddrs->pfnGetScreenInfo = EngDst_GetScreenInfo;
	pg_engdstAddrs->pfnSetCrosshair = EngDst_SetCrosshair;
	pg_engdstAddrs->pfnRegisterVariable = EngDst_RegisterVariable;
	pg_engdstAddrs->pfnGetCvarFloat = EngDst_GetCvarFloat;
	pg_engdstAddrs->pfnGetCvarString = EngDst_GetCvarString;
	pg_engdstAddrs->pfnAddCommand = (hl::pfnDst_AddCommand_t)EngDst_AddCommand;
	pg_engdstAddrs->pfnHookUserMsg = EngDst_HookUserMsg;
	pg_engdstAddrs->pfnServerCmd = EngDst_ServerCmd;
	pg_engdstAddrs->pfnClientCmd = EngDst_ClientCmd;
	pg_engdstAddrs->pfnGetPlayerInfo = EngDst_GetPlayerInfo;
	pg_engdstAddrs->pfnPlaySoundByName = EngDst_PlaySoundByName;
	pg_engdstAddrs->pfnPlaySoundByIndex = EngDst_PlaySoundByIndex;
	pg_engdstAddrs->pfnAngleVectors = EngDst_AngleVectors;
	pg_engdstAddrs->pfnTextMessageGet = EngDst_TextMessageGet;
	pg_engdstAddrs->pfnDrawCharacter = EngDst_DrawCharacter;
	pg_engdstAddrs->pfnDrawConsoleString = EngDst_DrawConsoleString;
	pg_engdstAddrs->pfnDrawSetTextColor = EngDst_DrawSetTextColor;
	pg_engdstAddrs->pfnDrawConsoleStringLen = EngDst_DrawConsoleStringLen;
	pg_engdstAddrs->pfnConsolePrint = EngDst_ConsolePrint;
	pg_engdstAddrs->pfnCenterPrint = EngDst_CenterPrint;
	pg_engdstAddrs->GetWindowCenterX = EngDst_GetWindowCenterX;
	pg_engdstAddrs->GetWindowCenterY = EngDst_GetWindowCenterY;
	pg_engdstAddrs->GetViewAngles = EngDst_GetViewAngles;
	pg_engdstAddrs->SetViewAngles = EngDst_SetViewAngles;
	pg_engdstAddrs->GetMaxClients = EngDst_GetMaxClients;
	pg_engdstAddrs->Cvar_SetValue = EngDst_Cvar_SetValue;
	pg_engdstAddrs->Cmd_Argc = EngDst_Cmd_Argc;
	pg_engdstAddrs->Cmd_Argv = EngDst_Cmd_Argv;
	pg_engdstAddrs->Con_Printf = EngDst_Con_Printf;
	pg_engdstAddrs->Con_DPrintf = EngDst_Con_DPrintf;
	pg_engdstAddrs->Con_NPrintf = EngDst_Con_NPrintf;
	pg_engdstAddrs->Con_NXPrintf = EngDst_Con_NXPrintf;
	pg_engdstAddrs->PhysInfo_ValueForKey = EngDst_PhysInfo_ValueForKey;
	pg_engdstAddrs->ServerInfo_ValueForKey = EngDst_ServerInfo_ValueForKey;
	pg_engdstAddrs->GetClientMaxspeed = EngDst_GetClientMaxspeed;
	pg_engdstAddrs->CheckParm = EngDst_CheckParm;
	pg_engdstAddrs->Key_Event = EngDst_Key_Event;
	pg_engdstAddrs->GetMousePosition = EngDst_GetMousePosition;
	pg_engdstAddrs->IsNoClipping = EngDst_IsNoClipping;
	pg_engdstAddrs->GetLocalPlayer = EngDst_GetLocalPlayer;
	pg_engdstAddrs->GetViewModel = EngDst_GetViewModel;
	pg_engdstAddrs->GetEntityByIndex = EngDst_GetEntityByIndex;
	pg_engdstAddrs->GetClientTime = EngDst_GetClientTime;
	pg_engdstAddrs->V_CalcShake = EngDst_V_CalcShake;
	pg_engdstAddrs->V_ApplyShake = EngDst_V_ApplyShake;
	pg_engdstAddrs->PM_PointContents = EngDst_PM_PointContents;
	pg_engdstAddrs->PM_WaterEntity = EngDst_PM_WaterEntity;
	pg_engdstAddrs->PM_TraceLine = EngDst_PM_TraceLine;
	pg_engdstAddrs->CL_LoadModel = EngDst_CL_LoadModel;
	pg_engdstAddrs->CL_CreateVisibleEntity = EngDst_CL_CreateVisibleEntity;
	pg_engdstAddrs->GetSpritePointer = EngDst_GetSpritePointer;
	pg_engdstAddrs->pfnPlaySoundByNameAtLocation = EngDst_PlaySoundByNameAtLocation;
	pg_engdstAddrs->pfnPrecacheEvent = EngDst_PrecacheEvent;
	pg_engdstAddrs->pfnPlaybackEvent = EngDst_PlaybackEvent;
	pg_engdstAddrs->pfnWeaponAnim = EngDst_WeaponAnim;
	pg_engdstAddrs->pfnRandomFloat = EngDst_RandomFloat;
	pg_engdstAddrs->pfnRandomLong = EngDst_RandomLong;
	pg_engdstAddrs->pfnHookEvent = (hl::pfnDst_HookEvent_t)EngDst_HookEvent;
	pg_engdstAddrs->Con_IsVisible = EngDst_Con_IsVisible;
	pg_engdstAddrs->pfnGetGameDirectory = EngDst_GetGameDirectory;
	pg_engdstAddrs->pfnGetCvarPointer = EngDst_GetCvarPointer;
	pg_engdstAddrs->Key_LookupBinding = EngDst_Key_LookupBinding;
	pg_engdstAddrs->pfnGetLevelName = EngDst_GetLevelName;
	pg_engdstAddrs->pfnGetScreenFade = EngDst_GetScreenFade;
	pg_engdstAddrs->pfnSetScreenFade = EngDst_SetScreenFade;
	pg_engdstAddrs->VGui_GetPanel = EngDst_VGui_GetPanel;
	pg_engdstAddrs->VGui_ViewportPaintBackground = EngDst_VGui_ViewportPaintBackground;
	pg_engdstAddrs->COM_LoadFile = EngDst_COM_LoadFile;
	pg_engdstAddrs->COM_ParseFile = EngDst_COM_ParseFile;
	pg_engdstAddrs->COM_FreeFile = EngDst_COM_FreeFile;
	pg_engdstAddrs->IsSpectateOnly = EngDst_IsSpectateOnly;
	pg_engdstAddrs->LoadMapSprite = EngDst_LoadMapSprite;
	pg_engdstAddrs->COM_AddAppDirectoryToSearchPath = EngDst_COM_AddAppDirectoryToSearchPath;
	pg_engdstAddrs->COM_ExpandFilename = EngDst_COM_ExpandFilename;
	pg_engdstAddrs->PlayerInfo_ValueForKey = EngDst_PlayerInfo_ValueForKey;
	pg_engdstAddrs->PlayerInfo_SetValueForKey = EngDst_PlayerInfo_SetValueForKey;
	pg_engdstAddrs->GetPlayerUniqueID = EngDst_GetPlayerUniqueID;
	pg_engdstAddrs->GetTrackerIDForPlayer = EngDst_GetTrackerIDForPlayer;
	pg_engdstAddrs->GetPlayerForTrackerID = EngDst_GetPlayerForTrackerID;
	pg_engdstAddrs->pfnServerCmdUnreliable = EngDst_ServerCmdUnreliable;
	pg_engdstAddrs->pfnGetMousePos = EngDst_GetMousePos;
	pg_engdstAddrs->pfnSetMousePos = EngDst_SetMousePos;
	pg_engdstAddrs->pfnSetMouseEnable = EngDst_SetMouseEnable;
	pg_engdstAddrs->pfnSetFilterMode = EngDst_SetFilterMode;
	pg_engdstAddrs->pfnSetFilterColor = EngDst_SetFilterColor;
	pg_engdstAddrs->pfnSetFilterBrightness = EngDst_SetFilterBrightness;
	pg_engdstAddrs->pfnSequenceGet = EngDst_SequenceGet;
	pg_engdstAddrs->pfnSPR_DrawGeneric = EngDst_SPR_DrawGeneric;
	pg_engdstAddrs->pfnSequencePickSentence = EngDst_SequencePickSentence;
	pg_engdstAddrs->pfnDrawString = EngDst_DrawString;
	pg_engdstAddrs->pfnDrawStringReverse = EngDst_DrawStringReverse;
	pg_engdstAddrs->LocalPlayerInfo_ValueForKey = EngDst_LocalPlayerInfo_ValueForKey;
	pg_engdstAddrs->pfnVGUI2DrawCharacter = EngDst_VGUI2DrawCharacter;
	pg_engdstAddrs->pfnVGUI2DrawCharacterAdd = EngDst_VGUI2DrawCharacterAdd;
	pg_engdstAddrs->pfnPlaySoundVoiceByName = EngDst_PlaySoundVoiceByName;
	pg_engdstAddrs->pfnPrimeMusicStream = EngDst_PrimeMusicStream;
	pg_engdstAddrs->pfnProcessTutorMessageDecayBuffer = EngDst_ProcessTutorMessageDecayBuffer;
	pg_engdstAddrs->pfnConstructTutorMessageDecayBuffer = EngDst_ConstructTutorMessageDecayBuffer;
	pg_engdstAddrs->pfnResetTutorMessageDecayData = EngDst_ResetTutorMessageDecayData;
	pg_engdstAddrs->pfnPlaySoundByNameAtPitch = EngDst_PlaySoundByNameAtPitch;
	pg_engdstAddrs->pfnFillRGBABlend = EngDst_FillRGBABlend;
	pg_engdstAddrs->pfnGetAppID = EngDst_GetAppID;
	pg_engdstAddrs->pfnGetAliasList = EngDst_GetAliases;
	pg_engdstAddrs->pfnVguiWrap2_GetMouseDelta = EngDst_VguiWrap2_GetMouseDelta;
	pg_engdstAddrs->pfnFilteredClientCmd = EngDst_FilteredClientCmd;
}

//-----------------------------------------------------------------------------

bool g_modfuncs_MemoryHook::install()
{
	initialize("g_modfuncs", L"hw.dll");
	return install_using_bytepattern(1);
}

void g_modfuncs_MemoryHook::test_hook()
{
	auto p = get();

	CHookTests::the().run_seh_protected_block(
		m_name,
		[&]()
	{
		return p->m_nVersion != NULL;
	});
}

//-----------------------------------------------------------------------------

bool g_engdstAddrs_MemoryHook::install()
{
    initialize("g_engdstAddrs", L"hw.dll");
    return install_using_bytepattern(1);
}

//-----------------------------------------------------------------------------