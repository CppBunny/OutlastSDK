#pragma once

// Outlast (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OLGame.OLBashableObject.OnToggle
struct AOLBashableObject_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLBashableObject.ClearBreakTimer
struct AOLBashableObject_ClearBreakTimer_Params
{
};

// Function OLGame.OLBashableObject.TriggerBreakTimer
struct AOLBashableObject_TriggerBreakTimer_Params
{
	float                                              Time;                                                     // (Parm)
};

// Function OLGame.OLBashableObject.Break
struct AOLBashableObject_Break_Params
{
};

// Function OLGame.OLCamcorderHud.UpdateRecordingTime
struct UOLCamcorderHud_UpdateRecordingTime_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLCamcorderHud.WidgetInitialized
struct UOLCamcorderHud_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCamcorderHud.SetVisible
struct UOLCamcorderHud_SetVisible_Params
{
	bool                                               bShow;                                                    // (Parm)
};

// Function OLGame.OLCameraActor.GetCameraView
struct AOLCameraActor_GetCameraView_Params
{
	float                                              DeltaTime;                                                // (Parm)
	struct FTPOV                                       OutPOV;                                                   // (Parm, OutParm)
};

// Function OLGame.OLCameraActor.NativeGetCameraView
struct AOLCameraActor_NativeGetCameraView_Params
{
	struct FTPOV                                       OutPOV;                                                   // (Parm, OutParm)
};

// Function OLGame.OLPlayerController.UnlockAchievement
struct AOLPlayerController_UnlockAchievement_Params
{
	TEnumAsByte<EOutlastAchievement>                   achievement;                                              // (Parm)
};

// Function OLGame.OLPlayerController.NotifyDifficultyChanged
struct AOLPlayerController_NotifyDifficultyChanged_Params
{
};

// Function OLGame.OLPlayerController.UpdateDifficultyBasedValues
struct AOLPlayerController_UpdateDifficultyBasedValues_Params
{
};

// Function OLGame.OLPlayerController.CheckForProfileUpdate
struct AOLPlayerController_CheckForProfileUpdate_Params
{
};

// Function OLGame.OLPlayerController.UpdateLocalCacheOfProfileSettings
struct AOLPlayerController_UpdateLocalCacheOfProfileSettings_Params
{
	class UOLProfileSettings*                          EffectiveProfileSettings;                                 // (Parm)
};

// Function OLGame.OLPlayerController.ClientSaveAllPlayerData
struct AOLPlayerController_ClientSaveAllPlayerData_Params
{
	bool                                               bShouldForce;                                             // (OptionalParm, Parm)
	bool                                               bSkipCacheUpdate;                                         // (OptionalParm, Parm)
};

// Function OLGame.OLPlayerController.OnProfileWriteComplete
struct AOLPlayerController_OnProfileWriteComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OLGame.OLPlayerController.ClearSaveProfileDelegate
struct AOLPlayerController_ClearSaveProfileDelegate_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.SaveProfile
struct AOLPlayerController_SaveProfile_Params
{
};

// Function OLGame.OLPlayerController.UnregisterPlayerDataStores
struct AOLPlayerController_UnregisterPlayerDataStores_Params
{
};

// Function OLGame.OLPlayerController.RegisterCustomPlayerDataStores
struct AOLPlayerController_RegisterCustomPlayerDataStores_Params
{
};

// Function OLGame.OLPlayerController.ShippingCheat_GiveAllCheckpoints
struct AOLPlayerController_ShippingCheat_GiveAllCheckpoints_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.ClearAllProgress
struct AOLPlayerController_ClearAllProgress_Params
{
};

// Function OLGame.OLPlayerController.SaveBeforeQuitting
struct AOLPlayerController_SaveBeforeQuitting_Params
{
};

// Function OLGame.OLPlayerController.ClientCommitMapChange
struct AOLPlayerController_ClientCommitMapChange_Params
{
};

// Function OLGame.OLPlayerController.StartNewGameAtCheckpoint
struct AOLPlayerController_StartNewGameAtCheckpoint_Params
{
	struct FString                                     CheckpointStr;                                            // (Parm, NeedCtorLink)
	bool                                               bSaveToDisk;                                              // (Parm)
};

// Function OLGame.OLPlayerController.ApplyDeprecatedCheckpointRecord
struct AOLPlayerController_ApplyDeprecatedCheckpointRecord_Params
{
	struct FDeprecatedCheckpointRecord                 OldRecord;                                                // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.ApplyCheckpointRecord
struct AOLPlayerController_ApplyCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.CreateCheckpointRecord
struct AOLPlayerController_CreateCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.NativeApplyCheckpointRecord
struct AOLPlayerController_NativeApplyCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                                   // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.NativeCreateCheckpointRecord
struct AOLPlayerController_NativeCreateCheckpointRecord_Params
{
	struct AOLPlayerController_FCheckpointRecord       Record;                                                   // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLPlayerController.SavePersistentState
struct AOLPlayerController_SavePersistentState_Params
{
};

// Function OLGame.OLPlayerController.OnOverrideAIMusic
struct AOLPlayerController_OnOverrideAIMusic_Params
{
	class UOLSeqAct_OverrideAIMusic*                   Action;                                                   // (Parm)
};

// Function OLGame.OLPlayerController.StopAllSounds
struct AOLPlayerController_StopAllSounds_Params
{
};

// Function OLGame.OLPlayerController.DisplayDebug
struct AOLPlayerController_DisplayDebug_Params
{
	class AHUD*                                        H;                                                        // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLPlayerController.DrawHUD
struct AOLPlayerController_DrawHUD_Params
{
	class AHUD*                                        H;                                                        // (Parm)
};

// Function OLGame.OLPlayerController.FullScreenOverlayChanged
struct AOLPlayerController_FullScreenOverlayChanged_Params
{
};

// Function OLGame.OLPlayerController.ForcePause
struct AOLPlayerController_ForcePause_Params
{
	bool                                               bPause;                                                   // (Parm)
};

// Function OLGame.OLPlayerController.ClientSetHUD
struct AOLPlayerController_ClientSetHUD_Params
{
	class UClass*                                      newHUDType;                                               // (Parm)
};

// Function OLGame.OLPlayerController.OnSetMesh
struct AOLPlayerController_OnSetMesh_Params
{
	class USeqAct_SetMesh*                             Action;                                                   // (Parm)
};

// Function OLGame.OLPlayerController.ClientSetCameraFade
struct AOLPlayerController_ClientSetCameraFade_Params
{
	bool                                               _enableFading;                                            // (Parm)
	struct FColor                                      _FadeColor;                                               // (OptionalParm, Parm)
	struct FVector2D                                   _FadeAlpha;                                               // (OptionalParm, Parm)
	float                                              _FadeTime;                                                // (OptionalParm, Parm)
	bool                                               _fadeAudio;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLPlayerController.SetCinematicMode
struct AOLPlayerController_SetCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 Action;                                                   // (Parm)
	bool                                               bInCinematicMode;                                         // (Parm)
	bool                                               bHidePlayer;                                              // (Parm)
	bool                                               bAffectsHUD;                                              // (Parm)
	bool                                               bAffectsMovement;                                         // (Parm)
	bool                                               bAffectsTurning;                                          // (Parm)
	bool                                               bAffectsButtons;                                          // (Parm)
};

// Function OLGame.OLPlayerController.GetPlayerViewPoint
struct AOLPlayerController_GetPlayerViewPoint_Params
{
	struct FVector                                     POVLocation;                                              // (Parm, OutParm)
	struct FRotator                                    POVRotation;                                              // (Parm, OutParm)
};

// Function OLGame.OLPlayerController.GetFOVAngle
struct AOLPlayerController_GetFOVAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.SpawnCamera
struct AOLPlayerController_SpawnCamera_Params
{
};

// Function OLGame.OLPlayerController.SetCameraMode
struct AOLPlayerController_SetCameraMode_Params
{
	struct FName                                       NewCamMode;                                               // (Parm)
};

// Function OLGame.OLPlayerController.UsingFirstPersonCamera
struct AOLPlayerController_UsingFirstPersonCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.SetBehindView
struct AOLPlayerController_SetBehindView_Params
{
	bool                                               bNewBehindView;                                           // (Parm)
};

// Function OLGame.OLPlayerController.BehindView
struct AOLPlayerController_BehindView_Params
{
};

// Function OLGame.OLPlayerController.GammaCalibration
struct AOLPlayerController_GammaCalibration_Params
{
};

// Function OLGame.OLPlayerController.PressedJump
struct AOLPlayerController_PressedJump_Params
{
};

// Function OLGame.OLPlayerController.PressedReloadBatteries
struct AOLPlayerController_PressedReloadBatteries_Params
{
};

// Function OLGame.OLPlayerController.StopZoom
struct AOLPlayerController_StopZoom_Params
{
};

// Function OLGame.OLPlayerController.StartZoomOut
struct AOLPlayerController_StartZoomOut_Params
{
};

// Function OLGame.OLPlayerController.StartZoomIn
struct AOLPlayerController_StartZoomIn_Params
{
};

// Function OLGame.OLPlayerController.ZoomOut
struct AOLPlayerController_ZoomOut_Params
{
};

// Function OLGame.OLPlayerController.ZoomIn
struct AOLPlayerController_ZoomIn_Params
{
};

// Function OLGame.OLPlayerController.ToggleCamcorder
struct AOLPlayerController_ToggleCamcorder_Params
{
};

// Function OLGame.OLPlayerController.ToggleNightVision
struct AOLPlayerController_ToggleNightVision_Params
{
};

// Function OLGame.OLPlayerController.ReleasedUseButton
struct AOLPlayerController_ReleasedUseButton_Params
{
};

// Function OLGame.OLPlayerController.PressedUseButton
struct AOLPlayerController_PressedUseButton_Params
{
};

// Function OLGame.OLPlayerController.PerformedUseAction
struct AOLPlayerController_PerformedUseAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.SetPlayerFoundWhileHidden
struct AOLPlayerController_SetPlayerFoundWhileHidden_Params
{
	class AOLEnemyPawn*                                SearchingEnemy;                                           // (Parm)
};

// Function OLGame.OLPlayerController.IsPlayerFindableWhileHidden
struct AOLPlayerController_IsPlayerFindableWhileHidden_Params
{
	class AOLEnemyPawn*                                SearchingEnemy;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.PlayerDied
struct AOLPlayerController_PlayerDied_Params
{
};

// Function OLGame.OLPlayerController.Destroyed
struct AOLPlayerController_Destroyed_Params
{
};

// Function OLGame.OLPlayerController.ClientRestart
struct AOLPlayerController_ClientRestart_Params
{
	class APawn*                                       NewPawn;                                                  // (Parm)
};

// Function OLGame.OLPlayerController.Reset
struct AOLPlayerController_Reset_Params
{
};

// Function OLGame.OLPlayerController.UnPossess
struct AOLPlayerController_UnPossess_Params
{
};

// Function OLGame.OLPlayerController.Possess
struct AOLPlayerController_Possess_Params
{
	class APawn*                                       inPawn;                                                   // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function OLGame.OLPlayerController.PostBeginPlay
struct AOLPlayerController_PostBeginPlay_Params
{
};

// Function OLGame.OLPlayerController.HideLoadingOverlay
struct AOLPlayerController_HideLoadingOverlay_Params
{
};

// Function OLGame.OLPlayerController.ShowLoadingOverlay
struct AOLPlayerController_ShowLoadingOverlay_Params
{
};

// Function OLGame.OLPlayerController.SetVolume
struct AOLPlayerController_SetVolume_Params
{
	float                                              VolumeLevel;                                              // (Parm)
};

// Function OLGame.OLPlayerController.SetGamma
struct AOLPlayerController_SetGamma_Params
{
	float                                              GammaValue;                                               // (Parm)
};

// Function OLGame.OLPlayerController.GetGamma
struct AOLPlayerController_GetGamma_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerController.NativePlayerMove
struct AOLPlayerController_NativePlayerMove_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLCheatManager.SetLanguage
struct UOLCheatManager_SetLanguage_Params
{
	struct FString                                     LanguageCode;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.ReloadSoundBanks
struct UOLCheatManager_ReloadSoundBanks_Params
{
	bool                                               bDLC;                                                     // (Parm)
};

// Function OLGame.OLCheatManager.ProcessCheatInput
struct UOLCheatManager_ProcessCheatInput_Params
{
	class UOLPlayerInput*                              InputMgr;                                                 // (Parm)
	struct FName                                       Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCheatManager.IsViewModeUnlit
struct UOLCheatManager_IsViewModeUnlit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCheatManager.SetFinishedGame
struct UOLCheatManager_SetFinishedGame_Params
{
	bool                                               hasFinishedGame;                                          // (Parm)
	bool                                               hasFinishedDLC;                                           // (Parm)
};

// Function OLGame.OLCheatManager.OutlastPause
struct UOLCheatManager_OutlastPause_Params
{
};

// Function OLGame.OLCheatManager.ResetGS
struct UOLCheatManager_ResetGS_Params
{
};

// Function OLGame.OLCheatManager.ActivateGS
struct UOLCheatManager_ActivateGS_Params
{
	struct FName                                       gsName;                                                   // (Parm)
};

// Function OLGame.OLCheatManager.DumpGS
struct UOLCheatManager_DumpGS_Params
{
};

// Function OLGame.OLCheatManager.DebugGameState
struct UOLCheatManager_DebugGameState_Params
{
};

// Function OLGame.OLCheatManager.SuppressAllMessages
struct UOLCheatManager_SuppressAllMessages_Params
{
};

// Function OLGame.OLCheatManager.DrawDebug
struct UOLCheatManager_DrawDebug_Params
{
};

// Function OLGame.OLCheatManager.ToggleMute
struct UOLCheatManager_ToggleMute_Params
{
};

// Function OLGame.OLCheatManager.InflictDamage
struct UOLCheatManager_InflictDamage_Params
{
	float                                              Amount;                                                   // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.ResetWorldState
struct UOLCheatManager_ResetWorldState_Params
{
};

// Function OLGame.OLCheatManager.ResetPushables
struct UOLCheatManager_ResetPushables_Params
{
};

// Function OLGame.OLCheatManager.ResetDoors
struct UOLCheatManager_ResetDoors_Params
{
};

// Function OLGame.OLCheatManager.SetGamma
struct UOLCheatManager_SetGamma_Params
{
	float                                              newGamma;                                                 // (Parm)
};

// Function OLGame.OLCheatManager.DemoMode
struct UOLCheatManager_DemoMode_Params
{
};

// Function OLGame.OLCheatManager.LoadGame
struct UOLCheatManager_LoadGame_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.SaveGame
struct UOLCheatManager_SaveGame_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.GiveItem
struct UOLCheatManager_GiveItem_Params
{
	struct FString                                     ItemName;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.ApplyCP
struct UOLCheatManager_ApplyCP_Params
{
	struct FString                                     CPName;                                                   // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.cplist
struct UOLCheatManager_cplist_Params
{
};

// Function OLGame.OLCheatManager.cp
struct UOLCheatManager_cp_Params
{
	struct FString                                     CPName;                                                   // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.Checkpoint
struct UOLCheatManager_Checkpoint_Params
{
	struct FString                                     CPName;                                                   // (Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.KillFade
struct UOLCheatManager_KillFade_Params
{
};

// Function OLGame.OLCheatManager.ToggleUnlimitedBatteries
struct UOLCheatManager_ToggleUnlimitedBatteries_Params
{
};

// Function OLGame.OLCheatManager.RechargeNightVision
struct UOLCheatManager_RechargeNightVision_Params
{
};

// Function OLGame.OLCheatManager.Ghost
struct UOLCheatManager_Ghost_Params
{
};

// Function OLGame.OLCheatManager.GhostPawn
struct UOLCheatManager_GhostPawn_Params
{
	bool                                               ghosting;                                                 // (Parm)
};

// Function OLGame.OLCheatManager.FasterGameSpeed
struct UOLCheatManager_FasterGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.SlowerGameSpeed
struct UOLCheatManager_SlowerGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.NormalGameSpeed
struct UOLCheatManager_NormalGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.UpdateGameSpeed
struct UOLCheatManager_UpdateGameSpeed_Params
{
};

// Function OLGame.OLCheatManager.SingleFrame
struct UOLCheatManager_SingleFrame_Params
{
};

// Function OLGame.OLCheatManager.TeleportToFreeCam
struct UOLCheatManager_TeleportToFreeCam_Params
{
};

// Function OLGame.OLCheatManager.ToggleFixedCam
struct UOLCheatManager_ToggleFixedCam_Params
{
};

// Function OLGame.OLCheatManager.ToggleFreeCamNoPause
struct UOLCheatManager_ToggleFreeCamNoPause_Params
{
};

// Function OLGame.OLCheatManager.ToggleFreeCam
struct UOLCheatManager_ToggleFreeCam_Params
{
};

// Function OLGame.OLCheatManager.AutoSpike
struct UOLCheatManager_AutoSpike_Params
{
	float                                              Spike;                                                    // (OptionalParm, Parm)
	float                                              Delay;                                                    // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.Spike
struct UOLCheatManager_Spike_Params
{
	float                                              Spike;                                                    // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.BadFPS
struct UOLCheatManager_BadFPS_Params
{
	float                                              slowdown;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLCheatManager.DebugAIPositions
struct UOLCheatManager_DebugAIPositions_Params
{
};

// Function OLGame.OLCheatManager.DebugAI
struct UOLCheatManager_DebugAI_Params
{
};

// Function OLGame.OLCheatManager.ShowHeroDebug
struct UOLCheatManager_ShowHeroDebug_Params
{
};

// Function OLGame.OLCheatManager.ShowPaths
struct UOLCheatManager_ShowPaths_Params
{
};

// Function OLGame.OLCheatManager.ShowStatLevels
struct UOLCheatManager_ShowStatLevels_Params
{
};

// Function OLGame.OLCheatManager.DebugWaitPoints
struct UOLCheatManager_DebugWaitPoints_Params
{
};

// Function OLGame.OLCheatManager.DebugTrajectory
struct UOLCheatManager_DebugTrajectory_Params
{
};

// Function OLGame.OLCheatManager.DebugCamera
struct UOLCheatManager_DebugCamera_Params
{
};

// Function OLGame.OLCheatManager.DebugSoundEnvironment
struct UOLCheatManager_DebugSoundEnvironment_Params
{
	struct FString                                     Filter;                                                   // (OptionalParm, Parm, NeedCtorLink)
};

// Function OLGame.OLCheatManager.DebugGameplay
struct UOLCheatManager_DebugGameplay_Params
{
};

// Function OLGame.OLCheatManager.SaveAllCheckpoints
struct UOLCheatManager_SaveAllCheckpoints_Params
{
};

// Function OLGame.OLCheatManager.DeleteAllSaves
struct UOLCheatManager_DeleteAllSaves_Params
{
};

// Function OLGame.OLCheatManager.KillAll
struct UOLCheatManager_KillAll_Params
{
	class UClass*                                      aClass;                                                   // (Parm)
};

// Function OLGame.OLCheatManager.ToggleCheats
struct UOLCheatManager_ToggleCheats_Params
{
};

// Function OLGame.OLCheatManager.GetCheatManager
struct UOLCheatManager_GetCheatManager_Params
{
	class UOLCheatManager*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLCheatManager.AddDebugTrajectoryPoint
struct UOLCheatManager_AddDebugTrajectoryPoint_Params
{
	struct FDebugTrajectoryPoint                       Point;                                                    // (Parm)
};

// Function OLGame.OLCheckpoint.OnToggle
struct AOLCheckpoint_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLCheckpoint.SetEnabled
struct AOLCheckpoint_SetEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function OLGame.OLCheckpoint.ResetCheckpointDeaths
struct AOLCheckpoint_ResetCheckpointDeaths_Params
{
};

// Function OLGame.OLCheckpoint.OnPlayerSpawn
struct AOLCheckpoint_OnPlayerSpawn_Params
{
};

// Function OLGame.OLCheckpointList.Script_IsUnreached
struct AOLCheckpointList_Script_IsUnreached_Params
{
	struct FName                                       TestCheckpoint;                                           // (Const, Parm, OutParm)
	struct FName                                       CurrentCheckpoint;                                        // (Const, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.UpdateProfileKeyBindingsFromSystem
struct UOLEngine_UpdateProfileKeyBindingsFromSystem_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.UpdateProfileFromSystemSettings
struct UOLEngine_UpdateProfileFromSystemSettings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.ApplyKeyBindings
struct UOLEngine_ApplyKeyBindings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.ApplySystemSettings
struct UOLEngine_ApplySystemSettings_Params
{
	class UOLProfileSettings*                          ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.LoadMostRecentSaveFile
struct UOLEngine_LoadMostRecentSaveFile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.LoadCurrentSaveFile
struct UOLEngine_LoadCurrentSaveFile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.RefreshSaveFiles
struct UOLEngine_RefreshSaveFiles_Params
{
};

// Function OLGame.OLEngine.DeleteSaveFile
struct UOLEngine_DeleteSaveFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLEngine.LoadSaveFile
struct UOLEngine_LoadSaveFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.DebugLoadGame
struct UOLEngine_DebugLoadGame_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLEngine.DebugSaveGame
struct UOLEngine_DebugSaveGame_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLEngine.HasValidSaveGame
struct UOLEngine_HasValidSaveGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.SaveAllCheckpoints
struct UOLEngine_SaveAllCheckpoints_Params
{
};

// Function OLGame.OLEngine.SaveCheckpointImmediate
struct UOLEngine_SaveCheckpointImmediate_Params
{
	struct FName                                       CheckpointName;                                           // (Parm)
};

// Function OLGame.OLEngine.SaveCheckpoint
struct UOLEngine_SaveCheckpoint_Params
{
	struct FName                                       CheckpointName;                                           // (Parm)
	bool                                               bSaveToDisk;                                              // (Parm)
};

// Function OLGame.OLEngine.StartCurrentCheckpoint
struct UOLEngine_StartCurrentCheckpoint_Params
{
};

// Function OLGame.OLEngine.SelectAndLoadGame
struct UOLEngine_SelectAndLoadGame_Params
{
	struct FScriptDelegate                             Callback;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLEngine.NativeSelectAndLoadGame
struct UOLEngine_NativeSelectAndLoadGame_Params
{
};

// Function OLGame.OLEngine.SelectSaveLocation
struct UOLEngine_SelectSaveLocation_Params
{
	struct FString                                     startCP;                                                  // (Parm, NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (Parm, NeedCtorLink)
};

// Function OLGame.OLEngine.NativeSelectSaveLocation
struct UOLEngine_NativeSelectSaveLocation_Params
{
	struct FString                                     startCP;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLEngine.FinishedSaveDataDialog
struct UOLEngine_FinishedSaveDataDialog_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLEngine.SaveDataDialogDoneCallback
struct UOLEngine_SaveDataDialogDoneCallback_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLEngine.UsingFixedSaveLocation
struct UOLEngine_UsingFixedSaveLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.TryStartDLCGame
struct UOLEngine_TryStartDLCGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.ShouldShowNewDLCGame
struct UOLEngine_ShouldShowNewDLCGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.RefreshDLC
struct UOLEngine_RefreshDLC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.CheckReloadForDLC
struct UOLEngine_CheckReloadForDLC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEngine.RestartPlayer
struct UOLEngine_RestartPlayer_Params
{
	class AOLPlayerController*                         OLPC;                                                     // (Parm)
};

// Function OLGame.OLCheckpointSave.CheckpointIsEmpty
struct UOLCheckpointSave_CheckpointIsEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLConsole.InputKey
struct UOLConsole_InputKey_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           Event;                                                    // (Parm)
	float                                              AmountDepressed;                                          // (OptionalParm, Parm)
	bool                                               bGamepad;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLConsole.AddCustomCommandsToAutoComplete
struct UOLConsole_AddCustomCommandsToAutoComplete_Params
{
};

// Function OLGame.OLDarknessVolume.OnToggle
struct AOLDarknessVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLDLCManager.FindAndInstallDLC
struct UOLDLCManager_FindAndInstallDLC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDoor.BreakDoor
struct AOLDoor_BreakDoor_Params
{
	class AOLPawn*                                     Breaker;                                                  // (Parm)
	bool                                               bReversed;                                                // (Parm)
};

// Function OLGame.OLDoor.BashDoor
struct AOLDoor_BashDoor_Params
{
	bool                                               bReversed;                                                // (Parm)
};

// Function OLGame.OLDoor.ShouldBreak
struct AOLDoor_ShouldBreak_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDoor.OnDestroy
struct AOLDoor_OnDestroy_Params
{
	class USeqAct_Destroy*                             Action;                                                   // (Parm)
};

// Function OLGame.OLDoor.SoftDestroy
struct AOLDoor_SoftDestroy_Params
{
};

// Function OLGame.OLDoor.NotifyHandlesToWait
struct AOLDoor_NotifyHandlesToWait_Params
{
};

// Function OLGame.OLDoor.NotifyHandlesToRepath
struct AOLDoor_NotifyHandlesToRepath_Params
{
};

// Function OLGame.OLDoor.GetOpenAngle
struct AOLDoor_GetOpenAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDoor.TriggerEvent
struct AOLDoor_TriggerEvent_Params
{
	TEnumAsByte<EDoorEventType>                        EventType;                                                // (Parm)
	class AOLPawn*                                     Triggerer;                                                // (Parm)
};

// Function OLGame.OLDoor.TriggerBreakDoorCameraShake
struct AOLDoor_TriggerBreakDoorCameraShake_Params
{
};

// Function OLGame.OLDoor.StopShaking
struct AOLDoor_StopShaking_Params
{
};

// Function OLGame.OLDoor.StartShaking
struct AOLDoor_StartShaking_Params
{
	struct FDoorShakeData                              ShakeParams;                                              // (Parm)
	bool                                               bSwitchToBreakingMesh;                                    // (OptionalParm, Parm)
	bool                                               bReversed;                                                // (OptionalParm, Parm)
	bool                                               bFromAI;                                                  // (OptionalParm, Parm)
};

// Function OLGame.OLDoor.IsBroken
struct AOLDoor_IsBroken_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLDoor.UnregisterNavmeshObstacle
struct AOLDoor_UnregisterNavmeshObstacle_Params
{
};

// Function OLGame.OLDoor.RegisterNavMeshObstacle
struct AOLDoor_RegisterNavMeshObstacle_Params
{
};

// Function OLGame.OLDoor.ScriptGetCenterLocation
struct AOLDoor_ScriptGetCenterLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLElectrifiedVolume.Touch
struct AOLElectrifiedVolume_Touch_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, EditInline)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLElectrifiedVolume.OnToggle
struct AOLElectrifiedVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLElectrifiedWaterVolume.OnToggle
struct AOLElectrifiedWaterVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLFloorMaterialVolume.OnToggle
struct AOLFloorMaterialVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLFXManager.SetFXForEnemyPawn
struct UOLFXManager_SetFXForEnemyPawn_Params
{
	class AOLEnemyPawn*                                EnemyPawn;                                                // (Parm)
};

// Function OLGame.OLFXManager.DeactivateNightVisionEffect
struct UOLFXManager_DeactivateNightVisionEffect_Params
{
};

// Function OLGame.OLFXManager.ActivateCamcorderEffect
struct UOLFXManager_ActivateCamcorderEffect_Params
{
};

// Function OLGame.OLFXManager.ActivateNightVisionEffect
struct UOLFXManager_ActivateNightVisionEffect_Params
{
	bool                                               bPowered;                                                 // (Parm)
};

// Function OLGame.OLFXManager.SetPPSFromScript
struct UOLFXManager_SetPPSFromScript_Params
{
	TEnumAsByte<EPPSMode>                              newPPS;                                                   // (Parm)
};

// Function OLGame.OLFXManager.GetFXManager
struct UOLFXManager_GetFXManager_Params
{
	class UOLFXManager*                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.ClearPause
struct AOLGame_ClearPause_Params
{
};

// Function OLGame.OLGame.SetPause
struct AOLGame_SetPause_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
	struct FScriptDelegate                             CanUnpauseDelegate;                                       // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.HandleUnpaused
struct AOLGame_HandleUnpaused_Params
{
};

// Function OLGame.OLGame.HandlePaused
struct AOLGame_HandlePaused_Params
{
};

// Function OLGame.OLGame.SetGameSpeed
struct AOLGame_SetGameSpeed_Params
{
	float                                              T;                                                        // (Parm)
};

// Function OLGame.OLGame.TravelToStartupMap
struct AOLGame_TravelToStartupMap_Params
{
};

// Function OLGame.OLGame.RestartPlayer
struct AOLGame_RestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                // (Parm)
};

// Function OLGame.OLGame.UpdateGameType
struct AOLGame_UpdateGameType_Params
{
};

// Function OLGame.OLGame.OnPlayerSpawned
struct AOLGame_OnPlayerSpawned_Params
{
	class AController*                                 NewPlayer;                                                // (Parm)
	class ANavigationPoint*                            StartPoint;                                               // (Parm)
};

// Function OLGame.OLGame.FindPlayerStart
struct AOLGame_FindPlayerStart_Params
{
	class AController*                                 Player;                                                   // (Parm)
	unsigned char                                      InTeam;                                                   // (OptionalParm, Parm)
	struct FString                                     IncomingName;                                             // (OptionalParm, Parm, NeedCtorLink)
	class ANavigationPoint*                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.MatchCheckpoint
struct AOLGame_MatchCheckpoint_Params
{
	struct FString                                     PortalName;                                               // (Parm, NeedCtorLink)
	class AOLCheckpoint*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.AllowCheats
struct AOLGame_AllowCheats_Params
{
	class APlayerController*                           P;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.IsDLCInstalled
struct AOLGame_IsDLCInstalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.IsPlayingDLC
struct AOLGame_IsPlayingDLC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.IsDemo
struct AOLGame_IsDemo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGame.SetGameType
struct AOLGame_SetGameType_Params
{
	struct FString                                     MapName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Portal;                                                   // (Parm, NeedCtorLink)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGameplayMarker.OnToggle
struct AOLGameplayMarker_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLScareMoment.OnToggle
struct AOLScareMoment_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLScareMoment.StopScare
struct AOLScareMoment_StopScare_Params
{
};

// Function OLGame.OLScareMoment.StartScare
struct AOLScareMoment_StartScare_Params
{
};

// Function OLGame.OLAIVisionObstructionVolume.OnToggle
struct AOLAIVisionObstructionVolume_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLSqueezeVolume.PostBeginPlay
struct AOLSqueezeVolume_PostBeginPlay_Params
{
};

// Function OLGame.OLGameStateList.OnPlayerDeath
struct AOLGameStateList_OnPlayerDeath_Params
{
};

// Function OLGame.OLGameStateList.ResetAllGameState
struct AOLGameStateList_ResetAllGameState_Params
{
};

// Function OLGame.OLGameStateList.DumpGameState
struct AOLGameStateList_DumpGameState_Params
{
};

// Function OLGame.OLGameViewportClient.DrawTransition
struct UOLGameViewportClient_DrawTransition_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
};

// Function OLGame.OLHUD.GamepadConfigChanged
struct AOLHUD_GamepadConfigChanged_Params
{
};

// Function OLGame.OLHUD.OnLostFocusPause
struct AOLHUD_OnLostFocusPause_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function OLGame.OLHUD.ShowHUDMessages
struct AOLHUD_ShowHUDMessages_Params
{
};

// Function OLGame.OLHUD.HideHUDMessages
struct AOLHUD_HideHUDMessages_Params
{
};

// Function OLGame.OLHUD.ShowingSubtitle
struct AOLHUD_ShowingSubtitle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.HideSubtitle
struct AOLHUD_HideSubtitle_Params
{
};

// Function OLGame.OLHUD.ShowSubtitle
struct AOLHUD_ShowSubtitle_Params
{
	struct FString                                     MessageText;                                              // (Parm, NeedCtorLink)
};

// Function OLGame.OLHUD.HideObjective
struct AOLHUD_HideObjective_Params
{
};

// Function OLGame.OLHUD.ShowObjective
struct AOLHUD_ShowObjective_Params
{
	struct FString                                     ObjectiveText;                                            // (Parm, NeedCtorLink)
};

// Function OLGame.OLHUD.HideMessage
struct AOLHUD_HideMessage_Params
{
};

// Function OLGame.OLHUD.ShowMessage
struct AOLHUD_ShowMessage_Params
{
	TEnumAsByte<EHUDMessageType>                       MessageType;                                              // (Parm)
	struct FString                                     MessageText;                                              // (Parm, NeedCtorLink)
};

// Function OLGame.OLHUD.HideMenu
struct AOLHUD_HideMenu_Params
{
};

// Function OLGame.OLHUD.ShowMenuType
struct AOLHUD_ShowMenuType_Params
{
	TEnumAsByte<EMenuType>                             MenuType;                                                 // (Parm)
};

// Function OLGame.OLHUD.PostSoundEventEnter
struct AOLHUD_PostSoundEventEnter_Params
{
};

// Function OLGame.OLHUD.PostSoundEventSelect
struct AOLHUD_PostSoundEventSelect_Params
{
};

// Function OLGame.OLHUD.MuteSelectSound
struct AOLHUD_MuteSelectSound_Params
{
	float                                              MuteTime;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLHUD.CanShowSubMenu
struct AOLHUD_CanShowSubMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.ShowEvidenceMenu
struct AOLHUD_ShowEvidenceMenu_Params
{
};

// Function OLGame.OLHUD.ShowRecordingMenu
struct AOLHUD_ShowRecordingMenu_Params
{
};

// Function OLGame.OLHUD.ShowTabMenu
struct AOLHUD_ShowTabMenu_Params
{
};

// Function OLGame.OLHUD.ShowMenu
struct AOLHUD_ShowMenu_Params
{
};

// Function OLGame.OLHUD.ShowMainMenu
struct AOLHUD_ShowMainMenu_Params
{
};

// Function OLGame.OLHUD.ReloadMenu
struct AOLHUD_ReloadMenu_Params
{
};

// Function OLGame.OLHUD.IsAMenuOpen
struct AOLHUD_IsAMenuOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.IsInCreditsMenu
struct AOLHUD_IsInCreditsMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.IsOnMainMenuScreen
struct AOLHUD_IsOnMainMenuScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.IsMainMenuOpen
struct AOLHUD_IsMainMenuOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.IsInPauseMenu
struct AOLHUD_IsInPauseMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.CanUnpauseInPauseMenu
struct AOLHUD_CanUnpauseInPauseMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.ShowDebugInfo
struct AOLHUD_ShowDebugInfo_Params
{
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLHUD.DebugNextAI
struct AOLHUD_DebugNextAI_Params
{
};

// Function OLGame.OLHUD.NotifyGameSaved
struct AOLHUD_NotifyGameSaved_Params
{
};

// Function OLGame.OLHUD.SetGammaCalibrationActive
struct AOLHUD_SetGammaCalibrationActive_Params
{
	bool                                               bActive;                                                  // (Parm)
};

// Function OLGame.OLHUD.ShowingFullScreenOverlay
struct AOLHUD_ShowingFullScreenOverlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHUD.Draw
struct AOLHUD_Draw_Params
{
};

// Function OLGame.OLInventoryManager.ClearGameplayItems
struct UOLInventoryManager_ClearGameplayItems_Params
{
};

// Function OLGame.OLInventoryManager.ClearUnsavedBatteries
struct UOLInventoryManager_ClearUnsavedBatteries_Params
{
};

// Function OLGame.OLMainHud.WidgetInitialized
struct UOLMainHud_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.DrawDebugAnimNode
struct AOLPawn_DrawDebugAnimNode_Params
{
	struct FName                                       NodeName;                                                 // (Parm)
	class UAnimNode*                                   aNode;                                                    // (Parm)
	TArray<class UAnimNode*>                           visitedNodes;                                             // (Parm, OutParm, NeedCtorLink)
	class UCanvas*                                     aCanvas;                                                  // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
	float                                              XL;                                                       // (Parm)
	float                                              XBasePos;                                                 // (Parm)
	float                                              XOffset;                                                  // (Parm)
};

// Function OLGame.OLPawn.DisplayDebug
struct AOLPawn_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLPawn.GetFutureDestination
struct AOLPawn_GetFutureDestination_Params
{
	class AOLPawn*                                     Agent;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.IsFirstPerson
struct AOLPawn_IsFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.PlayLanded
struct AOLPawn_PlayLanded_Params
{
	float                                              ImpactVel;                                                // (Parm)
};

// Function OLGame.OLPawn.Landed
struct AOLPawn_Landed_Params
{
	struct FVector                                     HitNormal;                                                // (Parm)
	class AActor*                                      FloorActor;                                               // (Parm)
};

// Function OLGame.OLPawn.Destroyed
struct AOLPawn_Destroyed_Params
{
};

// Function OLGame.OLPawn.MAT_BeginAIGroup
struct AOLPawn_MAT_BeginAIGroup_Params
{
	struct FVector                                     StartLoc;                                                 // (Parm)
	struct FRotator                                    StartRot;                                                 // (Parm)
	float                                              BlendTime;                                                // (Parm)
};

// Function OLGame.OLPawn.StartMatinee
struct AOLPawn_StartMatinee_Params
{
	struct FVector                                     StartLoc;                                                 // (Parm)
	struct FRotator                                    StartRot;                                                 // (Parm)
	float                                              BlendTime;                                                // (Parm)
};

// Function OLGame.OLPawn.PostInitAnimTree
struct AOLPawn_PostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function OLGame.OLPawn.PlayVOLine
struct AOLPawn_PlayVOLine_Params
{
	class UAkEvent*                                    LineToPlay;                                               // (Parm)
	struct FName                                       BoneName;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLPawn.PlayJumpingSound
struct AOLPawn_PlayJumpingSound_Params
{
};

// Function OLGame.OLPawn.PlayLandingSound
struct AOLPawn_PlayLandingSound_Params
{
};

// Function OLGame.OLPawn.GetMaterialBelowFeet
struct AOLPawn_GetMaterialBelowFeet_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.ClientRestart
struct AOLPawn_ClientRestart_Params
{
};

// Function OLGame.OLPawn.PlayFootStepSound
struct AOLPawn_PlayFootStepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
	class UAnimNotify_Footstep*                        footstepNotify;                                           // (Parm)
};

// Function OLGame.OLPawn.FaceRotation
struct AOLPawn_FaceRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm)
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLPawn.GetEyeHeight
struct AOLPawn_GetEyeHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.GetPawnAmbientSound
struct AOLPawn_GetPawnAmbientSound_Params
{
	class USoundCue*                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.SetPawnAmbientSound
struct AOLPawn_SetPawnAmbientSound_Params
{
	class USoundCue*                                   NewAmbientSound;                                          // (Parm)
};

// Function OLGame.OLPawn.Died
struct AOLPawn_Died_Params
{
	class AController*                                 Killer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPawn.EncroachedBy
struct AOLPawn_EncroachedBy_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function OLGame.OLPawn.SetPawnRBChannels
struct AOLPawn_SetPawnRBChannels_Params
{
	bool                                               bRagdollMode;                                             // (Parm)
};

// Function OLGame.OLPawn.OnAnimEnd
struct AOLPawn_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function OLGame.OLPawn.ReattachMesh
struct AOLPawn_ReattachMesh_Params
{
};

// Function OLGame.OLPawn.UpdateShadowSettings
struct AOLPawn_UpdateShadowSettings_Params
{
	bool                                               bWantShadow;                                              // (Parm)
};

// Function OLGame.OLPawn.PostBeginPlay
struct AOLPawn_PostBeginPlay_Params
{
};

// Function OLGame.OLPawn.ProceduralAdjustNotify
struct AOLPawn_ProceduralAdjustNotify_Params
{
	float                                              Duration;                                                 // (Parm)
};

// Function OLGame.OLPawn.RestoreCollisionSizeNotify
struct AOLPawn_RestoreCollisionSizeNotify_Params
{
};

// Function OLGame.OLPawn.ChangeCollisionSizeNotify
struct AOLPawn_ChangeCollisionSizeNotify_Params
{
};

// Function OLGame.OLPawn.MoveInterruptibleNotify
struct AOLPawn_MoveInterruptibleNotify_Params
{
};

// Function OLGame.OLPawn.NativePostBeginPlay
struct AOLPawn_NativePostBeginPlay_Params
{
};

// Function OLGame.OLPawn.NativeOnAnimEnd
struct AOLPawn_NativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function OLGame.OLPawn.StartSpecialMove
struct AOLPawn_StartSpecialMove_Params
{
	TEnumAsByte<ESpecialMoveType>                      moveType;                                                 // (Parm)
	struct FVector                                     targetPosition;                                           // (OptionalParm, Parm)
	struct FVector                                     TargetDirection;                                          // (OptionalParm, Parm)
	TEnumAsByte<EAdjustPositionTargetType>             TargetType;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLPawn.IsSpecialMoveCompleted
struct AOLPawn_IsSpecialMoveCompleted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.UpdateDifficultyBasedValues
struct AOLHero_UpdateDifficultyBasedValues_Params
{
};

// Function OLGame.OLHero.OutsideWorldBounds
struct AOLHero_OutsideWorldBounds_Params
{
};

// Function OLGame.OLHero.FellOutOfWorld
struct AOLHero_FellOutOfWorld_Params
{
	class UClass*                                      dmgType;                                                  // (Parm)
};

// Function OLGame.OLHero.RespawnHero
struct AOLHero_RespawnHero_Params
{
};

// Function OLGame.OLHero.PlayFootStepSound
struct AOLHero_PlayFootStepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
	class UAnimNotify_Footstep*                        footstepNotify;                                           // (Parm)
};

// Function OLGame.OLHero.IsInMainMenu
struct AOLHero_IsInMainMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.SpawnBloodFootstepDecal
struct AOLHero_SpawnBloodFootstepDecal_Params
{
	bool                                               bLeftFoot;                                                // (Parm)
	float                                              Alpha;                                                    // (Parm)
};

// Function OLGame.OLHero.GetFootstepDecalTransform
struct AOLHero_GetFootstepDecalTransform_Params
{
	bool                                               bLeftFoot;                                                // (Parm)
	struct FVector                                     DecalLocation;                                            // (Parm, OutParm)
	struct FRotator                                    DecalRotation;                                            // (Parm, OutParm)
};

// Function OLGame.OLHero.SetMeshVisibility
struct AOLHero_SetMeshVisibility_Params
{
	bool                                               bVisible;                                                 // (Parm)
};

// Function OLGame.OLHero.EndViewTarget
struct AOLHero_EndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function OLGame.OLHero.BecomeViewTarget
struct AOLHero_BecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (Parm)
};

// Function OLGame.OLHero.PhysicsVolumeChange
struct AOLHero_PhysicsVolumeChange_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
};

// Function OLGame.OLHero.OnEnterDeepWater
struct AOLHero_OnEnterDeepWater_Params
{
	class APhysicsVolume*                              NewVolume;                                                // (Parm)
};

// Function OLGame.OLHero.PlayLanded
struct AOLHero_PlayLanded_Params
{
	float                                              ImpactVel;                                                // (Parm)
};

// Function OLGame.OLHero.NativePlayLanded
struct AOLHero_NativePlayLanded_Params
{
	float                                              ImpactVel;                                                // (Parm)
};

// Function OLGame.OLHero.TakeFallingDamage
struct AOLHero_TakeFallingDamage_Params
{
};

// Function OLGame.OLHero.HealDamage
struct AOLHero_HealDamage_Params
{
	int                                                Amount;                                                   // (Parm)
	class AController*                                 Healer;                                                   // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TakeDamage
struct AOLHero_TakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	struct FVector                                     Momentum;                                                 // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (OptionalParm, Parm)
	class AActor*                                      DamageCauser;                                             // (OptionalParm, Parm)
};

// Function OLGame.OLHero.DisplayDebug
struct AOLHero_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLHero.PostInitAnimTree
struct AOLHero_PostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function OLGame.OLHero.PossessedBy
struct AOLHero_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function OLGame.OLHero.RemoveEnemyFromAIPositionPawns
struct AOLHero_RemoveEnemyFromAIPositionPawns_Params
{
	class AOLEnemyPawn*                                EnemyPawn;                                                // (Parm)
};

// Function OLGame.OLHero.GetGrabUnderDestination
struct AOLHero_GetGrabUnderDestination_Params
{
	class AOLEnemyPawn*                                Enemy;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.GetFutureDestination
struct AOLHero_GetFutureDestination_Params
{
	class AOLPawn*                                     Agent;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.QuickHeroTest
struct AOLHero_QuickHeroTest_Params
{
};

// Function OLGame.OLHero.CanBeGrabbedUnder
struct AOLHero_CanBeGrabbedUnder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.CanBeFatalitized
struct AOLHero_CanBeFatalitized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.CanBeAttacked
struct AOLHero_CanBeAttacked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.IsBarefeet
struct AOLHero_IsBarefeet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.IsInLocker
struct AOLHero_IsInLocker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.AttachCameraEffect
struct AOLHero_AttachCameraEffect_Params
{
	class UParticleSystem*                             ParticleEffectTemplate;                                   // (Parm)
	float                                              Duration;                                                 // (Parm)
	float                                              PlaneDist;                                                // (Parm)
};

// Function OLGame.OLHero.SetCamcorderVisibleNotify
struct AOLHero_SetCamcorderVisibleNotify_Params
{
};

// Function OLGame.OLHero.ResetNeckOffsetNotify
struct AOLHero_ResetNeckOffsetNotify_Params
{
};

// Function OLGame.OLHero.BloodOnScreenNotify
struct AOLHero_BloodOnScreenNotify_Params
{
};

// Function OLGame.OLHero.DecapitatedNotify
struct AOLHero_DecapitatedNotify_Params
{
};

// Function OLGame.OLHero.DieNotify
struct AOLHero_DieNotify_Params
{
};

// Function OLGame.OLHero.OverrideCameraSettingsNotify
struct AOLHero_OverrideCameraSettingsNotify_Params
{
	class UOLAnimNotify_OverrideCameraParams*          camParamsNotify;                                          // (Parm)
};

// Function OLGame.OLHero.BatteriesReloadedNotify
struct AOLHero_BatteriesReloadedNotify_Params
{
};

// Function OLGame.OLHero.CamcorderLoweredNotify
struct AOLHero_CamcorderLoweredNotify_Params
{
};

// Function OLGame.OLHero.CamcorderRaisedNotify
struct AOLHero_CamcorderRaisedNotify_Params
{
};

// Function OLGame.OLHero.CamcorderAvailableNotify
struct AOLHero_CamcorderAvailableNotify_Params
{
};

// Function OLGame.OLHero.DoorAnimNotify
struct AOLHero_DoorAnimNotify_Params
{
};

// Function OLGame.OLHero.PickupNotify
struct AOLHero_PickupNotify_Params
{
};

// Function OLGame.OLHero.ReactToHit
struct AOLHero_ReactToHit_Params
{
	float                                              hitStrength;                                              // (Parm)
	struct FVector                                     hitDirection;                                             // (Parm)
	bool                                               bForceFullPower;                                          // (OptionalParm, Parm)
};

// Function OLGame.OLHero.TryKillInLocker
struct AOLHero_TryKillInLocker_Params
{
	class AOLEnemyPawn*                                attacker;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryKillHero
struct AOLHero_TryKillHero_Params
{
	class AOLEnemyPawn*                                attacker;                                                 // (Parm)
	struct FVector                                     enemyStartLocation;                                       // (Parm)
	struct FVector                                     Direction;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryDecapitate
struct AOLHero_TryDecapitate_Params
{
	class AOLEnemyPawn*                                attacker;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromUnder
struct AOLHero_TryGrabFromUnder_Params
{
	class AOLEnemyPawn*                                attacker;                                                 // (Parm)
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     AttackStartLocation;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryThrowPlayer
struct AOLHero_TryThrowPlayer_Params
{
	class AOLEnemyPawn*                                attacker;                                                 // (Parm)
	float                                              ThrowRotation;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryGrabNormal
struct AOLHero_TryGrabNormal_Params
{
	class AOLEnemyPawn*                                attacker;                                                 // (Parm)
	struct FVector                                     StartLocation;                                            // (Parm)
	struct FVector                                     AttackStartLocation;                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromBed
struct AOLHero_TryGrabFromBed_Params
{
	class AOLEnemyPawn*                                attacker;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryExitBed
struct AOLHero_TryExitBed_Params
{
	struct FVector                                     playerIntentDirection;                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryExitLocker
struct AOLHero_TryExitLocker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromLocker
struct AOLHero_TryGrabFromLocker_Params
{
	class AOLEnemyPawn*                                attacker;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.CanGrabFromSqueeze
struct AOLHero_CanGrabFromSqueeze_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryGrabFromSqueeze
struct AOLHero_TryGrabFromSqueeze_Params
{
	class AOLEnemyPawn*                                attacker;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.HeroControlActivated
struct AOLHero_HeroControlActivated_Params
{
	class UOLSeqAct_HeroControl*                       heroControlAction;                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.ExitCinematicMode
struct AOLHero_ExitCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 seqAction;                                                // (Parm)
};

// Function OLGame.OLHero.EnterCinematicMode
struct AOLHero_EnterCinematicMode_Params
{
	class USeqAct_ToggleCinematicMode*                 seqAction;                                                // (Parm)
};

// Function OLGame.OLHero.StartSpecialMove
struct AOLHero_StartSpecialMove_Params
{
	TEnumAsByte<ESpecialMoveType>                      moveType;                                                 // (Parm)
	struct FVector                                     targetPosition;                                           // (OptionalParm, Parm)
	struct FVector                                     TargetDirection;                                          // (OptionalParm, Parm)
	TEnumAsByte<EAdjustPositionTargetType>             TargetType;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLHero.OnPossess
struct AOLHero_OnPossess_Params
{
};

// Function OLGame.OLHero.ActivateWaterFootstepParticles
struct AOLHero_ActivateWaterFootstepParticles_Params
{
	bool                                               bRightFoot;                                               // (Parm)
};

// Function OLGame.OLHero.TakeElectricDamage
struct AOLHero_TakeElectricDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	float                                              Knockback;                                                // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	class UAkEvent*                                    ElectricSoundEvent;                                       // (Parm)
};

// Function OLGame.OLHero.NativeTakeFallingDamage
struct AOLHero_NativeTakeFallingDamage_Params
{
};

// Function OLGame.OLHero.NativeTakeDamage
struct AOLHero_NativeTakeDamage_Params
{
	int                                                Damage;                                                   // (Parm)
	class AController*                                 InstigatedBy;                                             // (Parm)
	struct FVector                                     HitLocation;                                              // (Parm)
	class UClass*                                      DamageType;                                               // (Parm)
};

// Function OLGame.OLHero.NativeDisplayDebug
struct AOLHero_NativeDisplayDebug_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLHero.GetCamera
struct AOLHero_GetCamera_Params
{
	struct FVector                                     out_CamLoc;                                               // (Parm, OutParm)
	struct FRotator                                    out_CamRot;                                               // (Parm, OutParm)
	float                                              out_FOV;                                                  // (Parm, OutParm)
};

// Function OLGame.OLHero.NativePostBeginPlay
struct AOLHero_NativePostBeginPlay_Params
{
};

// Function OLGame.OLHero.ResetAfterTeleport
struct AOLHero_ResetAfterTeleport_Params
{
};

// Function OLGame.OLHero.IsRunning
struct AOLHero_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.TryRun
struct AOLHero_TryRun_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.Walk
struct AOLHero_Walk_Params
{
};

// Function OLGame.OLHero.GetViewRotation
struct AOLHero_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLHero.GetPawnViewLocation
struct AOLHero_GetPawnViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPickableObject.OnToggle
struct AOLPickableObject_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLCollectiblePickup.PostBeginPlay
struct AOLCollectiblePickup_PostBeginPlay_Params
{
};

// Function OLGame.OLCollectiblePickup.ShouldShowCollectible
struct AOLCollectiblePickup_ShouldShowCollectible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGameplayItemPickup.PostBeginPlay
struct AOLGameplayItemPickup_PostBeginPlay_Params
{
};

// Function OLGame.OLGameplayItemPickup.ShouldShowItem
struct AOLGameplayItemPickup_ShouldShowItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerInput.IsKeyPressed
struct UOLPlayerInput_IsKeyPressed_Params
{
	struct FName                                       Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPlayerInput.UnBindNoSave
struct UOLPlayerInput_UnBindNoSave_Params
{
	struct FString                                     Command;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLPlayerInput.PreProcessInput
struct UOLPlayerInput_PreProcessInput_Params
{
	float                                              DeltaTime;                                                // (Parm)
};

// Function OLGame.OLPlayerInput.StopLeanRight
struct UOLPlayerInput_StopLeanRight_Params
{
};

// Function OLGame.OLPlayerInput.StopLeanLeft
struct UOLPlayerInput_StopLeanLeft_Params
{
};

// Function OLGame.OLPlayerInput.StartLeanRight
struct UOLPlayerInput_StartLeanRight_Params
{
};

// Function OLGame.OLPlayerInput.StartLeanLeft
struct UOLPlayerInput_StartLeanLeft_Params
{
};

// Function OLGame.OLPlayerInput.ToggleDuck
struct UOLPlayerInput_ToggleDuck_Params
{
};

// Function OLGame.OLPlayerInput.UnDuck
struct UOLPlayerInput_UnDuck_Params
{
};

// Function OLGame.OLPlayerInput.Duck
struct UOLPlayerInput_Duck_Params
{
};

// Function OLGame.OLPlayerInput.ResetInput
struct UOLPlayerInput_ResetInput_Params
{
};

// Function OLGame.OLProfileSettings.AutoDetectPerformanceSettings
struct UOLProfileSettings_AutoDetectPerformanceSettings_Params
{
};

// Function OLGame.OLProfileSettings.MatchMonitorResolution
struct UOLProfileSettings_MatchMonitorResolution_Params
{
	bool                                               bLimitForPerformance;                                     // (Parm)
};

// Function OLGame.OLProfileSettings.SetLanguageFromSteam
struct UOLProfileSettings_SetLanguageFromSteam_Params
{
};

// Function OLGame.OLProfileSettings.SetToDefaults
struct UOLProfileSettings_SetToDefaults_Params
{
};

// Function OLGame.OLProfileSettings.GetProfileSettingValues
struct UOLProfileSettings_GetProfileSettingValues_Params
{
	int                                                ProfileSettingId;                                         // (Parm)
	TArray<struct FName>                               Values;                                                   // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLProfileSettings.GetGammaSetting
struct UOLProfileSettings_GetGammaSetting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLPushableObject.OnToggle
struct AOLPushableObject_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLSeqAct_Checkpoint.Activated
struct UOLSeqAct_Checkpoint_Activated_Params
{
};

// Function OLGame.OLSeqAct_Checkpoint.GetCheckpointFromName
struct UOLSeqAct_Checkpoint_GetCheckpointFromName_Params
{
	struct FName                                       CPName;                                                   // (Parm)
	class AOLCheckpoint*                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_Checkpoint.GetObjClassVersion
struct UOLSeqAct_Checkpoint_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSoundConnector.OnToggle
struct AOLSoundConnector_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLSoundEnvironmentManager.GetSoundEnvManager
struct UOLSoundEnvironmentManager_GetSoundEnvManager_Params
{
	class UOLSoundEnvironmentManager*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSoundEnvironmentManager.ExitAllTouchingVolumes
struct UOLSoundEnvironmentManager_ExitAllTouchingVolumes_Params
{
};

// Function OLGame.OLSoundEnvironmentManager.Cleanup
struct UOLSoundEnvironmentManager_Cleanup_Params
{
};

// Function OLGame.OLSoundEnvironmentVolume.PostBeginPlay
struct AOLSoundEnvironmentVolume_PostBeginPlay_Params
{
};

// Function OLGame.OLTutorialManager.Clear
struct UOLTutorialManager_Clear_Params
{
};

// Function OLGame.OLUtils.GetOLPC
struct UOLUtils_GetOLPC_Params
{
	class AOLPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsBindableKey
struct UOLUtils_IsBindableKey_Params
{
	struct FName                                       ButtonName;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsPlayingDLC
struct UOLUtils_IsPlayingDLC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsDLCInstalled
struct UOLUtils_IsDLCInstalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsConsole
struct UOLUtils_IsConsole_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUtils.IsPS4
struct UOLUtils_IsPS4_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLVoiceManager.DisplayDebug
struct UOLVoiceManager_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLWaitPointComponent.ReturnWaitPoint
struct UOLWaitPointComponent_ReturnWaitPoint_Params
{
	struct FWaitPoint                                  Point;                                                    // (Parm)
};

// Function OLGame.OLWaitPointComponent.GrabBestWaitPoint
struct UOLWaitPointComponent_GrabBestWaitPoint_Params
{
	bool                                               bReversed;                                                // (Parm)
	struct FWaitPoint                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLWaitPointComponent.GetWaitPointForwardVector
struct UOLWaitPointComponent_GetWaitPointForwardVector_Params
{
	struct FWaitPoint                                  Point;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEnemyPawn.PlayContextualVO
struct AOLEnemyPawn_PlayContextualVO_Params
{
	TEnumAsByte<EVOContext>                            VOContext;                                                // (Parm)
	float                                              DelayTime;                                                // (OptionalParm, Parm)
};

// Function OLGame.OLEnemyPawn.PlayFootStepSound
struct AOLEnemyPawn_PlayFootStepSound_Params
{
	int                                                FootDown;                                                 // (Parm)
	class UAnimNotify_Footstep*                        footstepNotify;                                           // (Parm)
};

// Function OLGame.OLEnemyPawn.FinishAIGroup
struct AOLEnemyPawn_FinishAIGroup_Params
{
};

// Function OLGame.OLEnemyPawn.BeginAIGroup
struct AOLEnemyPawn_BeginAIGroup_Params
{
};

// Function OLGame.OLEnemyPawn.StartMatinee
struct AOLEnemyPawn_StartMatinee_Params
{
	struct FVector                                     StartLoc;                                                 // (Parm)
	struct FRotator                                    StartRot;                                                 // (Parm)
	float                                              BlendTime;                                                // (Parm)
};

// Function OLGame.OLEnemyPawn.OnAnimEnd
struct AOLEnemyPawn_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function OLGame.OLEnemyPawn.StartDisturbed
struct AOLEnemyPawn_StartDisturbed_Params
{
};

// Function OLGame.OLEnemyPawn.StartNormalAttack
struct AOLEnemyPawn_StartNormalAttack_Params
{
};

// Function OLGame.OLEnemyPawn.StartDoorKnockback
struct AOLEnemyPawn_StartDoorKnockback_Params
{
	struct FVector                                     Direction;                                                // (Parm)
	bool                                               bLocker;                                                  // (Parm)
};

// Function OLGame.OLEnemyPawn.StartKnockback
struct AOLEnemyPawn_StartKnockback_Params
{
	class AOLHero*                                     Hero;                                                     // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
};

// Function OLGame.OLEnemyPawn.StartAvoid
struct AOLEnemyPawn_StartAvoid_Params
{
	class AOLEnemyPawn*                                OtherPawn;                                                // (Parm)
};

// Function OLGame.OLEnemyPawn.TurnOnSpot
struct AOLEnemyPawn_TurnOnSpot_Params
{
	struct FRotator                                    EndRotation;                                              // (Parm)
};

// Function OLGame.OLEnemyPawn.PlayFullBodyAnim
struct AOLEnemyPawn_PlayFullBodyAnim_Params
{
	struct FName                                       AnimName;                                                 // (Parm)
	float                                              Rate;                                                     // (Parm)
	float                                              BlendInTime;                                              // (OptionalParm, Parm)
	float                                              BlendOutTime;                                             // (OptionalParm, Parm)
	bool                                               bLooping;                                                 // (OptionalParm, Parm)
	float                                              StartTime;                                                // (OptionalParm, Parm)
	float                                              EndTime;                                                  // (OptionalParm, Parm)
};

// Function OLGame.OLEnemyPawn.DisableRootMotion
struct AOLEnemyPawn_DisableRootMotion_Params
{
};

// Function OLGame.OLEnemyPawn.EnableRootMotion
struct AOLEnemyPawn_EnableRootMotion_Params
{
};

// Function OLGame.OLEnemyPawn.StopIdleSound
struct AOLEnemyPawn_StopIdleSound_Params
{
};

// Function OLGame.OLEnemyPawn.StartIdleSound
struct AOLEnemyPawn_StartIdleSound_Params
{
};

// Function OLGame.OLEnemyPawn.HideWeaponMatinee
struct AOLEnemyPawn_HideWeaponMatinee_Params
{
};

// Function OLGame.OLEnemyPawn.ShowWeaponMatinee
struct AOLEnemyPawn_ShowWeaponMatinee_Params
{
};

// Function OLGame.OLEnemyPawn.HideWeapon
struct AOLEnemyPawn_HideWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.ShowWeapon
struct AOLEnemyPawn_ShowWeapon_Params
{
};

// Function OLGame.OLEnemyPawn.ResetAnimationMode
struct AOLEnemyPawn_ResetAnimationMode_Params
{
};

// Function OLGame.OLEnemyPawn.PushNotify
struct AOLEnemyPawn_PushNotify_Params
{
};

// Function OLGame.OLEnemyPawn.KnockbackTickNotify
struct AOLEnemyPawn_KnockbackTickNotify_Params
{
};

// Function OLGame.OLEnemyPawn.KnockbackStartNotify
struct AOLEnemyPawn_KnockbackStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.BreakDoorNotify
struct AOLEnemyPawn_BreakDoorNotify_Params
{
};

// Function OLGame.OLEnemyPawn.BashDoorNotify
struct AOLEnemyPawn_BashDoorNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTargetRangeTickNotify
struct AOLEnemyPawn_DamageTargetRangeTickNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTargetRangeStartNotify
struct AOLEnemyPawn_DamageTargetRangeStartNotify_Params
{
};

// Function OLGame.OLEnemyPawn.DamageTarget
struct AOLEnemyPawn_DamageTarget_Params
{
};

// Function OLGame.OLEnemyPawn.Destroyed
struct AOLEnemyPawn_Destroyed_Params
{
};

// Function OLGame.OLEnemyPawn.BuildScriptAnimSetList
struct AOLEnemyPawn_BuildScriptAnimSetList_Params
{
};

// Function OLGame.OLEnemyPawn.UpdateDifficultyBasedValues
struct AOLEnemyPawn_UpdateDifficultyBasedValues_Params
{
};

// Function OLGame.OLEnemyPawn.ApplyModifiers
struct AOLEnemyPawn_ApplyModifiers_Params
{
	struct FEnemyModifiers                             NewModifiers;                                             // (Parm)
};

// Function OLGame.OLEnemyPawn.PostInitAnimTree
struct AOLEnemyPawn_PostInitAnimTree_Params
{
	class USkeletalMeshComponent*                      SkelComp;                                                 // (Parm, EditInline)
};

// Function OLGame.OLEnemyPawn.PossessedBy
struct AOLEnemyPawn_PossessedBy_Params
{
	class AController*                                 C;                                                        // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function OLGame.OLEnemyPawn.ZeroMovementVariables
struct AOLEnemyPawn_ZeroMovementVariables_Params
{
};

// Function OLGame.OLEnemyPawn.PostBeginPlay
struct AOLEnemyPawn_PostBeginPlay_Params
{
};

// Function OLGame.OLEnemyPawn.AIStartingMove
struct AOLEnemyPawn_AIStartingMove_Params
{
};

// Function OLGame.OLEnemyPawn.HasRegisteredNavMeshRecently
struct AOLEnemyPawn_HasRegisteredNavMeshRecently_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEnemyPawn.UpdateNavMeshObstacle
struct AOLEnemyPawn_UpdateNavMeshObstacle_Params
{
};

// Function OLGame.OLEnemyPawn.CancelSpecialMove
struct AOLEnemyPawn_CancelSpecialMove_Params
{
};

// Function OLGame.OLEnemyPawn.StartSpecialMove
struct AOLEnemyPawn_StartSpecialMove_Params
{
	TEnumAsByte<ESpecialMoveType>                      moveType;                                                 // (Parm)
	struct FVector                                     targetPosition;                                           // (OptionalParm, Parm)
	struct FVector                                     TargetDirection;                                          // (OptionalParm, Parm)
	TEnumAsByte<EAdjustPositionTargetType>             TargetType;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLEnemyPawn.UnregisterNavmeshObstacle
struct AOLEnemyPawn_UnregisterNavmeshObstacle_Params
{
};

// Function OLGame.OLEnemyPawn.RegisterNavMeshObstacle
struct AOLEnemyPawn_RegisterNavMeshObstacle_Params
{
};

// Function OLGame.OLBot.OnAIMoveToActor
struct AOLBot_OnAIMoveToActor_Params
{
	class USeqAct_AIMoveToActor*                       Action;                                                   // (Parm)
};

// Function OLGame.OLBot.FinishMatinee
struct AOLBot_FinishMatinee_Params
{
};

// Function OLGame.OLBot.BeginMatinee
struct AOLBot_BeginMatinee_Params
{
};

// Function OLGame.OLBot.OnAIInvestigatePoint
struct AOLBot_OnAIInvestigatePoint_Params
{
	class UOLSeqAct_AIInvestigatePoint*                Action;                                                   // (Parm)
};

// Function OLGame.OLBot.ToggleAIAttackOnProximity
struct AOLBot_ToggleAIAttackOnProximity_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function OLGame.OLBot.OnToggleAIAttackOnProximity
struct AOLBot_OnToggleAIAttackOnProximity_Params
{
	class UOLSeqAct_ToggleAIAttackOnProximity*         Action;                                                   // (Parm)
};

// Function OLGame.OLBot.ToggleAIAlwaysSeePlayer
struct AOLBot_ToggleAIAlwaysSeePlayer_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function OLGame.OLBot.OnToggleAIAlwaysSeePlayer
struct AOLBot_OnToggleAIAlwaysSeePlayer_Params
{
	class UOLSeqAct_ToggleAIAlwaysSeePlayer*           Action;                                                   // (Parm)
};

// Function OLGame.OLBot.IgnoreTarget
struct AOLBot_IgnoreTarget_Params
{
	float                                              Time;                                                     // (Parm)
};

// Function OLGame.OLBot.ToggleAIIgnorePlayer
struct AOLBot_ToggleAIIgnorePlayer_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function OLGame.OLBot.OnToggleAIIgnorePlayer
struct AOLBot_OnToggleAIIgnorePlayer_Params
{
	class UOLSeqAct_ToggleAIIgnorePlayer*              Action;                                                   // (Parm)
};

// Function OLGame.OLBot.OnAIAbortPatrol
struct AOLBot_OnAIAbortPatrol_Params
{
	class UOLSeqAct_AIAbortPatrol*                     Action;                                                   // (Parm)
};

// Function OLGame.OLBot.StopPatrol
struct AOLBot_StopPatrol_Params
{
	bool                                               bAbort;                                                   // (OptionalParm, Parm)
};

// Function OLGame.OLBot.OnAIStartPatrol
struct AOLBot_OnAIStartPatrol_Params
{
	class UOLSeqAct_AIStartPatrol*                     Action;                                                   // (Parm)
};

// Function OLGame.OLBot.DisplayDebug
struct AOLBot_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLBot.DrawDebugStates
struct AOLBot_DrawDebugStates_Params
{
	class UObject*                                     anObject;                                                 // (Parm)
	class UCanvas*                                     aCanvas;                                                  // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              XPos;                                                     // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLBot.DebugMessagePlayer
struct AOLBot_DebugMessagePlayer_Params
{
	struct FString                                     msg;                                                      // (Parm, CoerceParm, NeedCtorLink)
};

// Function OLGame.OLBot.ClearDestination
struct AOLBot_ClearDestination_Params
{
};

// Function OLGame.OLBot.ClearDisturbance
struct AOLBot_ClearDisturbance_Params
{
};

// Function OLGame.OLBot.ClearInvestigation
struct AOLBot_ClearInvestigation_Params
{
};

// Function OLGame.OLBot.TriggerVisualDisturbance
struct AOLBot_TriggerVisualDisturbance_Params
{
	struct FVector                                     DisturbanceLocation;                                      // (Parm)
	bool                                               bFromGroup;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLBot.TriggerAudioDisturbance
struct AOLBot_TriggerAudioDisturbance_Params
{
	struct FVector                                     DisturbanceLocation;                                      // (Parm)
	bool                                               bFromGroup;                                               // (OptionalParm, Parm)
	bool                                               bNewInvestigate;                                          // (OptionalParm, Parm)
	bool                                               bNoTrim;                                                  // (OptionalParm, Parm)
	bool                                               bIgnoreDisturbs;                                          // (OptionalParm, Parm)
};

// Function OLGame.OLBot.LostTarget
struct AOLBot_LostTarget_Params
{
	bool                                               bAfterChase;                                              // (Parm)
};

// Function OLGame.OLBot.IsAtTrimmedDoor
struct AOLBot_IsAtTrimmedDoor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GetDoorApproachPoint
struct AOLBot_GetDoorApproachPoint_Params
{
	class AOLDoor*                                     aDoor;                                                    // (Parm)
	struct FVector                                     ApproachPoint;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.EndDoorTraversal
struct AOLBot_EndDoorTraversal_Params
{
};

// Function OLGame.OLBot.StartDoorTraversal
struct AOLBot_StartDoorTraversal_Params
{
	bool                                               bReversed;                                                // (Parm)
};

// Function OLGame.OLBot.GetSqueezePoint
struct AOLBot_GetSqueezePoint_Params
{
	class AOLSqueezeVolume*                            Squeeze;                                                  // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GetClosestPointOnNavMesh
struct AOLBot_GetClosestPointOnNavMesh_Params
{
	struct FVector                                     out_NewPoint;                                             // (Parm, OutParm)
	struct FVector                                     PointToCheck;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.MoveAlongPath
struct AOLBot_MoveAlongPath_Params
{
	TArray<struct FVector>                             PathPoints;                                               // (Parm, NeedCtorLink)
	class AActor*                                      FocusTarget;                                              // (OptionalParm, Parm)
};

// Function OLGame.OLBot.ClearNextMove
struct AOLBot_ClearNextMove_Params
{
};

// Function OLGame.OLBot.ClearCurrentMove
struct AOLBot_ClearCurrentMove_Params
{
};

// Function OLGame.OLBot.StartWaitForDoor
struct AOLBot_StartWaitForDoor_Params
{
};

// Function OLGame.OLBot.StopMoving
struct AOLBot_StopMoving_Params
{
	bool                                               bAborted;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLBot.TargetReachable
struct AOLBot_TargetReachable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GetClosestPointToActor
struct AOLBot_GetClosestPointToActor_Params
{
	struct FVector                                     NewPoint;                                                 // (Parm, OutParm)
	class AActor*                                      ActorToCheck;                                             // (Parm)
	float                                              NewBuffer;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.StartMove
struct AOLBot_StartMove_Params
{
	struct FMovementData                               aData;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsAlreadyAtDestination
struct AOLBot_IsAlreadyAtDestination_Params
{
	struct FMovementData                               aData;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.CompareMoves
struct AOLBot_CompareMoves_Params
{
	struct FMovementData                               Data1;                                                    // (Parm)
	struct FMovementData                               Data2;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GetCurrentWaypoint
struct AOLBot_GetCurrentWaypoint_Params
{
	class AOLWaypoint*                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.ChooseClosestPatrolWaypoint
struct AOLBot_ChooseClosestPatrolWaypoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.ChooseNextPatrolWaypoint
struct AOLBot_ChooseNextPatrolWaypoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.NotifyBump
struct AOLBot_NotifyBump_Params
{
	class AActor*                                      Other;                                                    // (Parm)
	struct FVector                                     HitNormal;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.RegeneratePath
struct AOLBot_RegeneratePath_Params
{
};

// Function OLGame.OLBot.NotifyPathChanged
struct AOLBot_NotifyPathChanged_Params
{
};

// Function OLGame.OLBot.GeneratePathToLocation
struct AOLBot_GeneratePathToLocation_Params
{
	struct FVector                                     Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	bool                                               bAllowPartialPath;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.GeneratePathToActor
struct AOLBot_GeneratePathToActor_Params
{
	class AActor*                                      Goal;                                                     // (Parm)
	float                                              WithinDistance;                                           // (OptionalParm, Parm)
	bool                                               bAllowPartialPath;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.AddBasePathContraints
struct AOLBot_AddBasePathContraints_Params
{
};

// Function OLGame.OLBot.Recalculate
struct AOLBot_Recalculate_Params
{
	bool                                               bForce;                                                   // (OptionalParm, Parm)
};

// Function OLGame.OLBot.PushNotify
struct AOLBot_PushNotify_Params
{
};

// Function OLGame.OLBot.KnockbackTickNotify
struct AOLBot_KnockbackTickNotify_Params
{
};

// Function OLGame.OLBot.IsPlayerOnVaultingPath
struct AOLBot_IsPlayerOnVaultingPath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsPlayerOnBrokenSideOfDoor
struct AOLBot_IsPlayerOnBrokenSideOfDoor_Params
{
	class AOLDoor*                                     door;                                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.KnockbackStartNotify
struct AOLBot_KnockbackStartNotify_Params
{
};

// Function OLGame.OLBot.BreakDoorNotify
struct AOLBot_BreakDoorNotify_Params
{
};

// Function OLGame.OLBot.BashDoorNotify
struct AOLBot_BashDoorNotify_Params
{
};

// Function OLGame.OLBot.DamageTargetRangeTickNotify
struct AOLBot_DamageTargetRangeTickNotify_Params
{
};

// Function OLGame.OLBot.DamageTargetRangeStartNotify
struct AOLBot_DamageTargetRangeStartNotify_Params
{
};

// Function OLGame.OLBot.DamageTarget
struct AOLBot_DamageTarget_Params
{
};

// Function OLGame.OLBot.IsInDamageRange
struct AOLBot_IsInDamageRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsInFinalAttackRange
struct AOLBot_IsInFinalAttackRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsInApproachAttackRange
struct AOLBot_IsInApproachAttackRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsInAttackRange
struct AOLBot_IsInAttackRange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.InvestigateObject
struct AOLBot_InvestigateObject_Params
{
	class AActor*                                      anActor;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.TryGrabUnder
struct AOLBot_TryGrabUnder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.TryGrabNormal
struct AOLBot_TryGrabNormal_Params
{
	bool                                               bCrouched;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.AttackCycleEnd
struct AOLBot_AttackCycleEnd_Params
{
};

// Function OLGame.OLBot.AttackTarget
struct AOLBot_AttackTarget_Params
{
	TEnumAsByte<EAIAttackType>                         aType;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.UpdateAnimationMode
struct AOLBot_UpdateAnimationMode_Params
{
};

// Function OLGame.OLBot.TriggerDisturbed
struct AOLBot_TriggerDisturbed_Params
{
};

// Function OLGame.OLBot.StartAnimating
struct AOLBot_StartAnimating_Params
{
	struct FAnimationData                              aAnim;                                                    // (Parm)
	struct FRotator                                    Direction;                                                // (Parm)
};

// Function OLGame.OLBot.ClearAnimation
struct AOLBot_ClearAnimation_Params
{
};

// Function OLGame.OLBot.CompareAnimations
struct AOLBot_CompareAnimations_Params
{
	struct FAnimationData                              AnimDataOne;                                              // (Parm)
	struct FAnimationData                              AnimDataTwo;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.TurnTo
struct AOLBot_TurnTo_Params
{
	struct FRotator                                    Direction;                                                // (Parm)
};

// Function OLGame.OLBot.PerformAttackCheck
struct AOLBot_PerformAttackCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.PerformGrabCheck
struct AOLBot_PerformGrabCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.IsPerformingMoveAbility
struct AOLBot_IsPerformingMoveAbility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.WaitForSpecialMove
struct AOLBot_WaitForSpecialMove_Params
{
	bool                                               bNoDelay;                                                 // (OptionalParm, Parm)
};

// Function OLGame.OLBot.WaitForFullBodyAnim
struct AOLBot_WaitForFullBodyAnim_Params
{
};

// Function OLGame.OLBot.PlayFullBodyAnim
struct AOLBot_PlayFullBodyAnim_Params
{
	struct FName                                       AnimName;                                                 // (Parm)
	float                                              Rate;                                                     // (Parm)
	float                                              BlendInTime;                                              // (OptionalParm, Parm)
	float                                              BlendOutTime;                                             // (OptionalParm, Parm)
	bool                                               bLooping;                                                 // (OptionalParm, Parm)
	float                                              StartTime;                                                // (OptionalParm, Parm)
	float                                              EndTime;                                                  // (OptionalParm, Parm)
};

// Function OLGame.OLBot.PushQueuedCommand
struct AOLBot_PushQueuedCommand_Params
{
};

// Function OLGame.OLBot.QueueAICommand
struct AOLBot_QueueAICommand_Params
{
	class UGameAICommand*                              Cmd;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBot.UnPossess
struct AOLBot_UnPossess_Params
{
};

// Function OLGame.OLBot.AddToAIGroup
struct AOLBot_AddToAIGroup_Params
{
};

// Function OLGame.OLBot.Possess
struct AOLBot_Possess_Params
{
	class APawn*                                       aPawn;                                                    // (Parm)
	bool                                               bVehicleTransition;                                       // (Parm)
};

// Function OLGame.OLBot.Destroyed
struct AOLBot_Destroyed_Params
{
};

// Function OLGame.OLBot.FindPlayer
struct AOLBot_FindPlayer_Params
{
};

// Function OLGame.OLBot.InitNavigationHandle
struct AOLBot_InitNavigationHandle_Params
{
};

// Function OLGame.OLBot.PostBeginPlay
struct AOLBot_PostBeginPlay_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.AtPoint
struct UOLAICmd_MoveAbility_AtPoint_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.SetActiveOnObject
struct UOLAICmd_MoveAbility_SetActiveOnObject_Params
{
	class AOLBot*                                      NewActiveBot;                                             // (Parm)
};

// Function OLGame.OLAICmd_MoveAbility.GetActiveOnObject
struct UOLAICmd_MoveAbility_GetActiveOnObject_Params
{
	class AOLBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.GetClosestToObject
struct UOLAICmd_MoveAbility_GetClosestToObject_Params
{
	class AOLBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.UnregisterWithObject
struct UOLAICmd_MoveAbility_UnregisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.RegisterWithObject
struct UOLAICmd_MoveAbility_RegisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.IsObjectInUse
struct UOLAICmd_MoveAbility_IsObjectInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.ContinueFromWaiting
struct UOLAICmd_MoveAbility_ContinueFromWaiting_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.MoveToWaiting
struct UOLAICmd_MoveAbility_MoveToWaiting_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.GetWaitIndex
struct UOLAICmd_MoveAbility_GetWaitIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.GetBotsOnObject
struct UOLAICmd_MoveAbility_GetBotsOnObject_Params
{
	TArray<class AOLBot*>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility.GetWaitPointForwardDirection
struct UOLAICmd_MoveAbility_GetWaitPointForwardDirection_Params
{
	struct FWaitPoint                                  Point;                                                    // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.ReturnWaitPoint
struct UOLAICmd_MoveAbility_ReturnWaitPoint_Params
{
	struct FWaitPoint                                  Point;                                                    // (Parm)
};

// Function OLGame.OLAICmd_MoveAbility.GrabBestWaitPoint
struct UOLAICmd_MoveAbility_GrabBestWaitPoint_Params
{
	struct FWaitPoint                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.ModifyPath
struct UOLAICmd_MoveAbility_ModifyPath_Params
{
	struct FVector                                     NewDestination;                                           // (Parm)
	TArray<struct FVector>                             NewPath;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility.ModifyApproach
struct UOLAICmd_MoveAbility_ModifyApproach_Params
{
	struct FVector                                     NewDestination;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility.Completed
struct UOLAICmd_MoveAbility_Completed_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.Popped
struct UOLAICmd_MoveAbility_Popped_Params
{
};

// Function OLGame.OLAICmd_MoveAbility.Pushed
struct UOLAICmd_MoveAbility_Pushed_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Bash.MoveThruBashable
struct UOLAICmd_MoveAbility_Bash_MoveThruBashable_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLBashableObject*                           InBashable;                                               // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	bool                                               bInReversed;                                              // (Parm)
	class UOLAICmd_MoveAbility_Bash*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetBotsOnObject
struct UOLAICmd_MoveAbility_Door_GetBotsOnObject_Params
{
	TArray<class AOLBot*>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility_Door.SetActiveOnObject
struct UOLAICmd_MoveAbility_Door_SetActiveOnObject_Params
{
	class AOLBot*                                      NewActiveBot;                                             // (Parm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetActiveOnObject
struct UOLAICmd_MoveAbility_Door_GetActiveOnObject_Params
{
	class AOLBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.GetClosestToObject
struct UOLAICmd_MoveAbility_Door_GetClosestToObject_Params
{
	class AOLBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.UnregisterWithObject
struct UOLAICmd_MoveAbility_Door_UnregisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.RegisterWithObject
struct UOLAICmd_MoveAbility_Door_RegisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.IsObjectInUse
struct UOLAICmd_MoveAbility_Door_IsObjectInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.Cancel
struct UOLAICmd_MoveAbility_Door_Cancel_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.Popped
struct UOLAICmd_MoveAbility_Door_Popped_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Door.ModifyApproach
struct UOLAICmd_MoveAbility_Door_ModifyApproach_Params
{
	struct FVector                                     NewDestination;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.IsDoorOpen
struct UOLAICmd_MoveAbility_Door_IsDoorOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Door.MoveThruDoor
struct UOLAICmd_MoveAbility_Door_MoveThruDoor_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLDoor*                                     InDoor;                                                   // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	bool                                               bInReversed;                                              // (Parm)
	class UOLAICmd_MoveAbility_Door*                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.GetBotsOnObject
struct UOLAICmd_MoveAbility_Ledge_GetBotsOnObject_Params
{
	TArray<class AOLBot*>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.SetActiveOnObject
struct UOLAICmd_MoveAbility_Ledge_SetActiveOnObject_Params
{
	class AOLBot*                                      NewActiveBot;                                             // (Parm)
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.GetActiveOnObject
struct UOLAICmd_MoveAbility_Ledge_GetActiveOnObject_Params
{
	class AOLBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.GetClosestToObject
struct UOLAICmd_MoveAbility_Ledge_GetClosestToObject_Params
{
	class AOLBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.UnregisterWithObject
struct UOLAICmd_MoveAbility_Ledge_UnregisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.RegisterWithObject
struct UOLAICmd_MoveAbility_Ledge_RegisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.IsObjectInUse
struct UOLAICmd_MoveAbility_Ledge_IsObjectInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Ledge.MoveThruLedge
struct UOLAICmd_MoveAbility_Ledge_MoveThruLedge_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLLedgeMarker*                              InLedge;                                                  // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	bool                                               bInReversed;                                              // (Parm)
	class UOLAICmd_MoveAbility_Ledge*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Vault.GetBotsOnObject
struct UOLAICmd_MoveAbility_Vault_GetBotsOnObject_Params
{
	TArray<class AOLBot*>                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLAICmd_MoveAbility_Vault.SetActiveOnObject
struct UOLAICmd_MoveAbility_Vault_SetActiveOnObject_Params
{
	class AOLBot*                                      NewActiveBot;                                             // (Parm)
};

// Function OLGame.OLAICmd_MoveAbility_Vault.GetActiveOnObject
struct UOLAICmd_MoveAbility_Vault_GetActiveOnObject_Params
{
	class AOLBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Vault.GetClosestToObject
struct UOLAICmd_MoveAbility_Vault_GetClosestToObject_Params
{
	class AOLBot*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Vault.UnregisterWithObject
struct UOLAICmd_MoveAbility_Vault_UnregisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Vault.RegisterWithObject
struct UOLAICmd_MoveAbility_Vault_RegisterWithObject_Params
{
};

// Function OLGame.OLAICmd_MoveAbility_Vault.IsObjectInUse
struct UOLAICmd_MoveAbility_Vault_IsObjectInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAICmd_MoveAbility_Vault.MoveThruLedge
struct UOLAICmd_MoveAbility_Vault_MoveThruLedge_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
	class AOLAIVaultMarker*                            InMarker;                                                 // (Parm)
	struct FVector                                     InitialDestination;                                       // (Parm)
	bool                                               bInReversed;                                              // (Parm)
	class UOLAICmd_MoveAbility_Vault*                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAIGroup.NotifyOthersPathChanged
struct AOLAIGroup_NotifyOthersPathChanged_Params
{
	class AOLBot*                                      Notifier;                                                 // (Parm)
};

// Function OLGame.OLAIGroup.ReturnAttackToken
struct AOLAIGroup_ReturnAttackToken_Params
{
	class AOLBot*                                      attacker;                                                 // (Parm)
};

// Function OLGame.OLAIGroup.TakeAttackToken
struct AOLAIGroup_TakeAttackToken_Params
{
	class AOLBot*                                      attacker;                                                 // (Parm)
};

// Function OLGame.OLAIGroup.CanAttack
struct AOLAIGroup_CanAttack_Params
{
	class AOLBot*                                      attacker;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAIGroup.Recalculate
struct AOLAIGroup_Recalculate_Params
{
};

// Function OLGame.OLAIGroup.DidAnyoneSeePlayerInBed
struct AOLAIGroup_DidAnyoneSeePlayerInBed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAIGroup.DidAnyoneSeePlayerinLocker
struct AOLAIGroup_DidAnyoneSeePlayerinLocker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAIGroup.CanAnyoneSeeTarget
struct AOLAIGroup_CanAnyoneSeeTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLAIGroup.ToggleAIAlwaysSeePlayer
struct AOLAIGroup_ToggleAIAlwaysSeePlayer_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function OLGame.OLAIGroup.ToggleAIIgnorePlayer
struct AOLAIGroup_ToggleAIIgnorePlayer_Params
{
	bool                                               bEnable;                                                  // (Parm)
};

// Function OLGame.OLAIGroup.TriggerVisualDisturbance
struct AOLAIGroup_TriggerVisualDisturbance_Params
{
	class AOLBot*                                      Triggerer;                                                // (Parm)
	struct FVector                                     DisturbanceLocation;                                      // (Parm)
};

// Function OLGame.OLAIGroup.TriggerAudioDisturbance
struct AOLAIGroup_TriggerAudioDisturbance_Params
{
	class AOLBot*                                      Triggerer;                                                // (Parm)
	struct FVector                                     DisturbanceLocation;                                      // (Parm)
	bool                                               bNewInvestigate;                                          // (OptionalParm, Parm)
	bool                                               bNoTrim;                                                  // (OptionalParm, Parm)
};

// Function OLGame.OLAIGroup.RemoveBot
struct AOLAIGroup_RemoveBot_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
};

// Function OLGame.OLAIGroup.AddBot
struct AOLAIGroup_AddBot_Params
{
	class AOLBot*                                      Bot;                                                      // (Parm)
};

// Function OLGame.OLAIInvestigationVolume.ProcessActorSetVolume
struct AOLAIInvestigationVolume_ProcessActorSetVolume_Params
{
	class AActor*                                      Other;                                                    // (Parm)
};

// Function OLGame.OLAISightComponent.DisplayDebug
struct UOLAISightComponent_DisplayDebug_Params
{
	class AHUD*                                        HUD;                                                      // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLBTTask.DisplayDebug
struct UOLBTTask_DisplayDebug_Params
{
	class UCanvas*                                     aCanvas;                                                  // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              XPos;                                                     // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLBTCompositeTask.DisplayDebug
struct UOLBTCompositeTask_DisplayDebug_Params
{
	class UCanvas*                                     aCanvas;                                                  // (Parm)
	float                                              XL;                                                       // (Parm)
	float                                              XPos;                                                     // (Parm)
	float                                              out_YL;                                                   // (Parm, OutParm)
	float                                              out_YPos;                                                 // (Parm, OutParm)
};

// Function OLGame.OLBTIfTask.Condition
struct UOLBTIfTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.PointReachable
struct UOLNavigationHandle_PointReachable_Params
{
	struct FVector                                     Point;                                                    // (Parm)
	struct FVector                                     OverrideStartPoint;                                       // (OptionalParm, Parm)
	bool                                               bAllowHitsInEndCollisionBox;                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.TrimPathByDistance
struct UOLNavigationHandle_TrimPathByDistance_Params
{
	float                                              DistanceToTrim;                                           // (Parm)
	struct FVector                                     out_NewDestination;                                       // (Parm, OutParm)
	bool                                               bStopAtMeshObject;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.TrimPathToLastDoor
struct UOLNavigationHandle_TrimPathToLastDoor_Params
{
	struct FVector                                     out_NewDestination;                                       // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.ClearPath
struct UOLNavigationHandle_ClearPath_Params
{
};

// Function OLGame.OLNavigationHandle.PopMoveLocation
struct UOLNavigationHandle_PopMoveLocation_Params
{
};

// Function OLGame.OLNavigationHandle.GetNextMovePath
struct UOLNavigationHandle_GetNextMovePath_Params
{
	TArray<struct FVector>                             out_MovePath;                                             // (Parm, OutParm, NeedCtorLink)
	float                                              ArrivalDistance;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.GetNextMoveLocation
struct UOLNavigationHandle_GetNextMoveLocation_Params
{
	struct FVector                                     out_MoveDest;                                             // (Parm, OutParm)
	float                                              ArrivalDistance;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavigationHandle.FindPath
struct UOLNavigationHandle_FindPath_Params
{
	class AActor*                                      out_DestActor;                                            // (OptionalParm, Parm, OutParm)
	int                                                out_DestItem;                                             // (OptionalParm, Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLNavMeshPath_SimilarToLastPath.Recycle
struct UOLNavMeshPath_SimilarToLastPath_Recycle_Params
{
};

// Function OLGame.OLNavMeshPath_SimilarToLastPath.SimilarToLastPath
struct UOLNavMeshPath_SimilarToLastPath_SimilarToLastPath_Params
{
	class UNavigationHandle*                           NavHandle;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEnemyCannibal.NativeOnAnimEnd
struct AOLEnemyCannibal_NativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function OLGame.OLEnemyCannibal.NativeHideWeapon
struct AOLEnemyCannibal_NativeHideWeapon_Params
{
};

// Function OLGame.OLEnemyCannibal.HideWeapon
struct AOLEnemyCannibal_HideWeapon_Params
{
};

// Function OLGame.OLEnemyCannibal.BuildScriptAnimSetList
struct AOLEnemyCannibal_BuildScriptAnimSetList_Params
{
};

// Function OLGame.OLEnemySurgeon.NativeOnAnimEnd
struct AOLEnemySurgeon_NativeOnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (Parm)
	float                                              PlayedTime;                                               // (Parm)
	float                                              ExcessTime;                                               // (Parm)
};

// Function OLGame.OLEnemySurgeon.BuildScriptAnimSetList
struct AOLEnemySurgeon_BuildScriptAnimSetList_Params
{
};

// Function OLGame.OLEnemyNanoCloud.OnSetNanoCloudVisibility
struct AOLEnemyNanoCloud_OnSetNanoCloudVisibility_Params
{
	class UOLSeqAct_SetNanoCloudVisibility*            Action;                                                   // (Parm)
};

// Function OLGame.OLEnemyNanoCloud.OnMorphNanoCloud
struct AOLEnemyNanoCloud_OnMorphNanoCloud_Params
{
	class UOLSeqAct_MorphNanoCloud*                    Action;                                                   // (Parm)
};

// Function OLGame.OLEnemyNanoCloud.PostBeginPlay
struct AOLEnemyNanoCloud_PostBeginPlay_Params
{
};

// Function OLGame.OLEnemyNanoCloud.SwitchToBloodyMaterialNotify
struct AOLEnemyNanoCloud_SwitchToBloodyMaterialNotify_Params
{
};

// Function OLGame.OLEnemyNanoCloud.SetHumanForm
struct AOLEnemyNanoCloud_SetHumanForm_Params
{
};

// Function OLGame.OLEnemyNanoCloud.SetSwarmForm
struct AOLEnemyNanoCloud_SetSwarmForm_Params
{
};

// Function OLGame.OLEnemyNanoCloud.MorphToHuman
struct AOLEnemyNanoCloud_MorphToHuman_Params
{
	float                                              TimeScale;                                                // (OptionalParm, Parm)
};

// Function OLGame.OLEnemyNanoCloud.MorphToSwarm
struct AOLEnemyNanoCloud_MorphToSwarm_Params
{
	float                                              TimeScale;                                                // (OptionalParm, Parm)
};

// Function OLGame.OLEnemyNanoCloud.NativePostBeginPlay
struct AOLEnemyNanoCloud_NativePostBeginPlay_Params
{
};

// Function OLGame.OLEnemySoldier.PlayLanded
struct AOLEnemySoldier_PlayLanded_Params
{
	float                                              ImpactVel;                                                // (Parm)
};

// Function OLGame.OLEnemyGroom.PlayLanded
struct AOLEnemyGroom_PlayLanded_Params
{
	float                                              ImpactVel;                                                // (Parm)
};

// Function OLGame.OLWaypoint.AnimStartedEvent
struct AOLWaypoint_AnimStartedEvent_Params
{
	class AActor*                                      InInstigator;                                             // (Parm)
};

// Function OLGame.OLWaypoint.WaypointReachedEvent
struct AOLWaypoint_WaypointReachedEvent_Params
{
	class AActor*                                      InInstigator;                                             // (Parm)
};

// Function OLGame.OLSeqAct_AIStartPatrol.GetObjClassVersion
struct UOLSeqAct_AIStartPatrol_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_Door.GetObjClassVersion
struct UOLSeqAct_Door_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqAct_Struggle.GetObjClassVersion
struct UOLSeqAct_Struggle_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqCond_AIState.GetObjClassVersion
struct UOLSeqCond_AIState_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqCond_Checkpoint.GetObjClassVersion
struct UOLSeqCond_Checkpoint_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqCond_CompareDeaths.GetObjClassVersion
struct UOLSeqCond_CompareDeaths_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqCond_IsTouching.GetObjClassVersion
struct UOLSeqCond_IsTouching_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqEvent_ApplyCheckpointState.GetObjClassVersion
struct UOLSeqEvent_ApplyCheckpointState_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLSeqEvent_Door.GetObjClassVersion
struct UOLSeqEvent_Door_GetObjClassVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTCanAttackTask.Condition
struct UOLBTCanAttackTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTDistanceToPlayerTask.Condition
struct UOLBTDistanceToPlayerTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTHasDisturbanceTask.Condition
struct UOLBTHasDisturbanceTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTHasFollowPatrolTask.Condition
struct UOLBTHasFollowPatrolTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTHasInvestigationPointTask.Condition
struct UOLBTHasInvestigationPointTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTHasNewDisturbanceTask.Condition
struct UOLBTHasNewDisturbanceTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTHasPatrolTask.Condition
struct UOLBTHasPatrolTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTHasValidTargetTask.Condition
struct UOLBTHasValidTargetTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTHasVisibleTargetTask.Condition
struct UOLBTHasVisibleTargetTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTIsInBehaviorStateTask.Condition
struct UOLBTIsInBehaviorStateTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTIsInMatineeTask.Condition
struct UOLBTIsInMatineeTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTIsInvestigatingTask.Condition
struct UOLBTIsInvestigatingTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTIsTargetReachableTask.Condition
struct UOLBTIsTargetReachableTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTSawPlayerInBedTask.Condition
struct UOLBTSawPlayerInBedTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTSawPlayerInLockerTask.Condition
struct UOLBTSawPlayerInLockerTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTSawPlayerInSqueezeTask.Condition
struct UOLBTSawPlayerInSqueezeTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTShouldAttackOnProximityTask.Condition
struct UOLBTShouldAttackOnProximityTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTShouldAttackTask.Condition
struct UOLBTShouldAttackTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTTargetNotMovingTask.Condition
struct UOLBTTargetNotMovingTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLBTWasLastMoveFailedReasonTask.Condition
struct UOLBTWasLastMoveFailedReasonTask_Condition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLEmailScreen.WidgetInitialized
struct UOLEmailScreen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLFlashBackScreen.WidgetInitialized
struct UOLFlashBackScreen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLFlashForwardScreen.WidgetInitialized
struct UOLFlashForwardScreen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLFlashLight.OnToggle
struct AOLFlashLight_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (Parm)
};

// Function OLGame.OLGFxMoviePlayer.OnProfileWriteComplete
struct UOLGFxMoviePlayer_OnProfileWriteComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OLGame.OLGFxMoviePlayer.SaveProfile
struct UOLGFxMoviePlayer_SaveProfile_Params
{
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (OptionalParm, Parm, NeedCtorLink)
	class AOLPlayerController*                         PlayerToSave;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGFxMoviePlayer.GetOnlinePlayerInterface
struct UOLGFxMoviePlayer_GetOnlinePlayerInterface_Params
{
	TScriptInterface<class UOnlinePlayerInterface>     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGFxMoviePlayer.MuteSoundThemes
struct UOLGFxMoviePlayer_MuteSoundThemes_Params
{
	bool                                               bMute;                                                    // (Parm)
};

// Function OLGame.OLGFxMoviePlayer.GetGame
struct UOLGFxMoviePlayer_GetGame_Params
{
	class AOLGame*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLGFxMoviePlayer.GetOLPC
struct UOLGFxMoviePlayer_GetOLPC_Params
{
	class AOLPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.GetLocalizedString
struct UOLUIFrontEnd_GetLocalizedString_Params
{
	struct FString                                     Category;                                                 // (Parm, NeedCtorLink)
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     File;                                                     // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.GetGamepadActionBoundToKey
struct UOLUIFrontEnd_GetGamepadActionBoundToKey_Params
{
	struct FString                                     KeyNameString;                                            // (Parm, NeedCtorLink)
	int                                                ConfigType;                                               // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.HasInitializedGamma
struct UOLUIFrontEnd_HasInitializedGamma_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.GetFriendlyKeyBindingName
struct UOLUIFrontEnd_GetFriendlyKeyBindingName_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.StartKeyBindingCapture
struct UOLUIFrontEnd_StartKeyBindingCapture_Params
{
};

// Function OLGame.OLUIFrontEnd.FilterButtonInput
struct UOLUIFrontEnd_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.WidgetInitialized
struct UOLUIFrontEnd_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.ConfigureTargetView
struct UOLUIFrontEnd_ConfigureTargetView_Params
{
	class UOLUIFrontEnd_View*                          targetView;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd.ConfigureView
struct UOLUIFrontEnd_ConfigureView_Params
{
	class UOLUIFrontEnd_View*                          InView;                                                   // (Parm)
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd.PopViewStub
struct UOLUIFrontEnd_PopViewStub_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.PopView
struct UOLUIFrontEnd_PopView_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd.PushViewByName
struct UOLUIFrontEnd_PushViewByName_Params
{
	struct FName                                       TargetViewName;                                           // (Parm)
	class UOLUIFrontEnd_Screen*                        ParentView;                                               // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd.PushView
struct UOLUIFrontEnd_PushView_Params
{
	class UOLUIFrontEnd_View*                          targetView;                                               // (Parm, CoerceParm)
};

// Function OLGame.OLUIFrontEnd.LoadView
struct UOLUIFrontEnd_LoadView_Params
{
	struct FViewInfo                                   InViewInfo;                                               // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd.LoadViews
struct UOLUIFrontEnd_LoadViews_Params
{
};

// Function OLGame.OLUIFrontEnd.ConfigFrontEnd
struct UOLUIFrontEnd_ConfigFrontEnd_Params
{
};

// Function OLGame.OLUIFrontEnd.OnKeyBindingsChanged
struct UOLUIFrontEnd_OnKeyBindingsChanged_Params
{
};

// Function OLGame.OLUIFrontEnd.AddCaptureKeys
struct UOLUIFrontEnd_AddCaptureKeys_Params
{
};

// Function OLGame.OLUIFrontEnd.OnClose
struct UOLUIFrontEnd_OnClose_Params
{
};

// Function OLGame.OLUIFrontEnd.Start
struct UOLUIFrontEnd_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.OnKeyBindingCaptured
struct UOLUIFrontEnd_View_OnKeyBindingCaptured_Params
{
	struct FName                                       KeyName;                                                  // (Parm)
};

// Function OLGame.OLUIFrontEnd_View.FilterButtonInput
struct UOLUIFrontEnd_View_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.WidgetInitialized
struct UOLUIFrontEnd_View_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.back
struct UOLUIFrontEnd_View_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_View.OnViewDeactivated
struct UOLUIFrontEnd_View_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnViewActivated
struct UOLUIFrontEnd_View_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_View.OnTopMostView
struct UOLUIFrontEnd_View_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_View.OnViewLoaded
struct UOLUIFrontEnd_View_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Screen.WidgetInitialized
struct UOLUIFrontEnd_Screen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Screen.LocalizeNarrative
struct UOLUIFrontEnd_Screen_LocalizeNarrative_Params
{
	struct FString                                     SectionName;                                              // (Parm, NeedCtorLink)
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Screen.IsDLCInstalled
struct UOLUIFrontEnd_Screen_IsDLCInstalled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Screen.IsDemo
struct UOLUIFrontEnd_Screen_IsDemo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Screen.IsTopMostView
struct UOLUIFrontEnd_Screen_IsTopMostView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.ASShowNewGameIntroText
struct UOLUIFrontEnd_MainMenu_ASShowNewGameIntroText_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.WidgetInitialized
struct UOLUIFrontEnd_MainMenu_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnButtonClick
struct UOLUIFrontEnd_MainMenu_OnButtonClick_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.PopulateButtons
struct UOLUIFrontEnd_MainMenu_PopulateButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.back
struct UOLUIFrontEnd_MainMenu_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnExitButtonPress
struct UOLUIFrontEnd_MainMenu_OnExitButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnCreditsButtonPress
struct UOLUIFrontEnd_MainMenu_OnCreditsButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOptionsButtonPress
struct UOLUIFrontEnd_MainMenu_OnOptionsButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.Select_Options
struct UOLUIFrontEnd_MainMenu_Select_Options_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnLoadButtonPress
struct UOLUIFrontEnd_MainMenu_OnLoadButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnOKButtonClick
struct UOLUIFrontEnd_MainMenu_OnOKButtonClick_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnChaptersButtonPress
struct UOLUIFrontEnd_MainMenu_OnChaptersButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnStartDLCButtonPress
struct UOLUIFrontEnd_MainMenu_OnStartDLCButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnStartButtonPress
struct UOLUIFrontEnd_MainMenu_OnStartButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.GameLoadedCallback
struct UOLUIFrontEnd_MainMenu_GameLoadedCallback_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.StartNewGame
struct UOLUIFrontEnd_MainMenu_StartNewGame_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.DifficultySelected
struct UOLUIFrontEnd_MainMenu_DifficultySelected_Params
{
};

// Function OLGame.OLUIFrontEnd_MainMenu.SaveLocationSelected
struct UOLUIFrontEnd_MainMenu_SaveLocationSelected_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnContinueButtonPress
struct UOLUIFrontEnd_MainMenu_OnContinueButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnTopMostView
struct UOLUIFrontEnd_MainMenu_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_MainMenu.OnViewLoaded
struct UOLUIFrontEnd_MainMenu_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.WidgetInitialized
struct UOLUIFrontEnd_Credits_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Credits.Press_Back
struct UOLUIFrontEnd_Credits_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Credits.OnViewDeactivated
struct UOLUIFrontEnd_Credits_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.OnTopMostView
struct UOLUIFrontEnd_Credits_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_Credits.OnCreditsFinished
struct UOLUIFrontEnd_Credits_OnCreditsFinished_Params
{
};

// Function OLGame.OLUIFrontEnd_Credits.back
struct UOLUIFrontEnd_Credits_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Console.WidgetInitialized
struct UOLUIFrontEnd_Console_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIMessage.WidgetInitialized
struct UOLUIMessage_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIMessage.SetMessage
struct UOLUIMessage_SetMessage_Params
{
	TEnumAsByte<EHUDMessageType>                       MessageType;                                              // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIMessage.SetVisible
struct UOLUIMessage_SetVisible_Params
{
	bool                                               bVisible;                                                 // (Parm)
};

// Function OLGame.OLUIMessage.OnClose
struct UOLUIMessage_OnClose_Params
{
};

// Function OLGame.OLUIMessage.Start
struct UOLUIMessage_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceList.FilterButtonInput
struct UOLUIFrontEnd_EvidenceList_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceList.WidgetInitialized
struct UOLUIFrontEnd_EvidenceList_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceList.OnItemClick
struct UOLUIFrontEnd_EvidenceList_OnItemClick_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceList.PopulateItemList
struct UOLUIFrontEnd_EvidenceList_PopulateItemList_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceList.OnTopMostView
struct UOLUIFrontEnd_EvidenceList_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_EvidenceList.Press_Back
struct UOLUIFrontEnd_EvidenceList_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingList.FilterButtonInput
struct UOLUIFrontEnd_RecordingList_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingList.WidgetInitialized
struct UOLUIFrontEnd_RecordingList_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingList.OnItemClick
struct UOLUIFrontEnd_RecordingList_OnItemClick_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingList.PopulateItemList
struct UOLUIFrontEnd_RecordingList_PopulateItemList_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingList.OnTopMostView
struct UOLUIFrontEnd_RecordingList_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_RecordingList.Press_Back
struct UOLUIFrontEnd_RecordingList_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.FilterButtonInput
struct UOLUIFrontEnd_TabMenu_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_TabMenu.GetInventoryText
struct UOLUIFrontEnd_TabMenu_GetInventoryText_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.WidgetInitialized
struct UOLUIFrontEnd_TabMenu_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnCloseButtonPress
struct UOLUIFrontEnd_TabMenu_OnCloseButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnEvidenceButtonPress
struct UOLUIFrontEnd_TabMenu_OnEvidenceButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnRecordingButtonPress
struct UOLUIFrontEnd_TabMenu_OnRecordingButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnButtonClick
struct UOLUIFrontEnd_TabMenu_OnButtonClick_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_TabMenu.PopulateButtons
struct UOLUIFrontEnd_TabMenu_PopulateButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnViewActivated
struct UOLUIFrontEnd_TabMenu_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_TabMenu.OnViewLoaded
struct UOLUIFrontEnd_TabMenu_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.WidgetInitialized
struct UOLUIFrontEnd_ChapterSelection_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.FilterButtonInput
struct UOLUIFrontEnd_ChapterSelection_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Back
struct UOLUIFrontEnd_ChapterSelection_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Load
struct UOLUIFrontEnd_ChapterSelection_Press_Load_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.LoadSelectedChapter
struct UOLUIFrontEnd_ChapterSelection_LoadSelectedChapter_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.SetSelectedIndex
struct UOLUIFrontEnd_ChapterSelection_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.ChapterListChanged
struct UOLUIFrontEnd_ChapterSelection_ChapterListChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.PopulateChapterList
struct UOLUIFrontEnd_ChapterSelection_PopulateChapterList_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.Pop
struct UOLUIFrontEnd_ChapterSelection_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewDeactivated
struct UOLUIFrontEnd_ChapterSelection_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_ChapterSelection.OnTopMostView
struct UOLUIFrontEnd_ChapterSelection_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.WidgetInitialized
struct UOLUIFrontEnd_DifficultySelectionScreen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ASShowConfirmInsaneDialog
struct UOLUIFrontEnd_DifficultySelectionScreen_ASShowConfirmInsaneDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.FilterButtonInput
struct UOLUIFrontEnd_DifficultySelectionScreen_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Back
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Pop
struct UOLUIFrontEnd_DifficultySelectionScreen_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewDeactivated
struct UOLUIFrontEnd_DifficultySelectionScreen_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ProceedToStartGame
struct UOLUIFrontEnd_DifficultySelectionScreen_ProceedToStartGame_Params
{
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnConfirmedInsane
struct UOLUIFrontEnd_DifficultySelectionScreen_OnConfirmedInsane_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Insane
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Insane_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Nightmare
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Nightmare_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Hard
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Hard_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Normal
struct UOLUIFrontEnd_DifficultySelectionScreen_Press_Normal_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnTopMostView
struct UOLUIFrontEnd_DifficultySelectionScreen_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewLoaded
struct UOLUIFrontEnd_DifficultySelectionScreen_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCaptured
struct UOLUIFrontEnd_Options_ASOnKeyBindingCaptured_Params
{
	struct FString                                     KeyName;                                                  // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowMessageDialog
struct UOLUIFrontEnd_Options_ShowMessageDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowKeyBindingConflictDialog
struct UOLUIFrontEnd_Options_ShowKeyBindingConflictDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowChangeConfirmationDialog
struct UOLUIFrontEnd_Options_ShowChangeConfirmationDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.ShowResolutionConfirmationDialogAfterDelay
struct UOLUIFrontEnd_Options_ShowResolutionConfirmationDialogAfterDelay_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetCurrentGammaSetting
struct UOLUIFrontEnd_Options_GetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.OnSliderChanged
struct UOLUIFrontEnd_Options_OnSliderChanged_Params
{
	int                                                ProfileSettingId;                                         // (Parm)
	float                                              SliderValue;                                              // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.GetKeyBindingConflicts
struct UOLUIFrontEnd_Options_GetKeyBindingConflicts_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetCurrentGFxList
struct UOLUIFrontEnd_Options_GetCurrentGFxList_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SetGammaExternally
struct UOLUIFrontEnd_Options_SetGammaExternally_Params
{
	float                                              Gamma;                                                    // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.SetGamepadConfigExternally
struct UOLUIFrontEnd_Options_SetGamepadConfigExternally_Params
{
	int                                                ConfigIndex;                                              // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.GetGamepadConfig
struct UOLUIFrontEnd_Options_GetGamepadConfig_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCaptured
struct UOLUIFrontEnd_Options_OnKeyBindingCaptured_Params
{
	struct FName                                       KeyName;                                                  // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.GetDisplayedResolutionIndexFromOriginalIndex
struct UOLUIFrontEnd_Options_GetDisplayedResolutionIndexFromOriginalIndex_Params
{
	int                                                OriginalIndex;                                            // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.GetOriginalResolutionIndexFromDisplayedIndex
struct UOLUIFrontEnd_Options_GetOriginalResolutionIndexFromDisplayedIndex_Params
{
	int                                                DisplayedIndex;                                           // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.RemoveUnsupportedResolutionsFromList
struct UOLUIFrontEnd_Options_RemoveUnsupportedResolutionsFromList_Params
{
	TArray<struct FName>                               OriginalList;                                             // (Parm, NeedCtorLink)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetFullscreenOptionIndex
struct UOLUIFrontEnd_Options_GetFullscreenOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.GetResolutionOptionIndex
struct UOLUIFrontEnd_Options_GetResolutionOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.HasResolutionChanged
struct UOLUIFrontEnd_Options_HasResolutionChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.WidgetInitialized
struct UOLUIFrontEnd_Options_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.GetOLProfile
struct UOLUIFrontEnd_Options_GetOLProfile_Params
{
	class UOLProfileSettings*                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SaveSettingsToProfile
struct UOLUIFrontEnd_Options_SaveSettingsToProfile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.HasAnyPropertyChanged
struct UOLUIFrontEnd_Options_HasAnyPropertyChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.HasPropertyChangedInList
struct UOLUIFrontEnd_Options_HasPropertyChangedInList_Params
{
	class UGFxObject*                                  OptionsList;                                              // (Parm)
	TArray<struct FOptionInfo>                         OptionInfos;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SaveSettingsForList
struct UOLUIFrontEnd_Options_SaveSettingsForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.TabChanged
struct UOLUIFrontEnd_Options_TabChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.StoreOptionValuesForList
struct UOLUIFrontEnd_Options_StoreOptionValuesForList_Params
{
	class UGFxObject*                                  OptionsList;                                              // (Parm)
	TArray<struct FOptionInfo>                         OptionInfos;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetOptionValueStringAt
struct UOLUIFrontEnd_Options_GetOptionValueStringAt_Params
{
	class UGFxObject*                                  OptionsList;                                              // (Parm)
	int                                                Index;                                                    // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.GetOptionValueAt
struct UOLUIFrontEnd_Options_GetOptionValueAt_Params
{
	class UGFxObject*                                  OptionsList;                                              // (Parm)
	int                                                Index;                                                    // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.SetDefaultOptionValuesForList
struct UOLUIFrontEnd_Options_SetDefaultOptionValuesForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesForList
struct UOLUIFrontEnd_Options_FillOptionValuesForList_Params
{
	TArray<struct FOptionInfo>                         OptionInfos;                                              // (Parm, OutParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesFromProfile
struct UOLUIFrontEnd_Options_FillOptionValuesFromProfile_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.PopulateControlsOptions
struct UOLUIFrontEnd_Options_PopulateControlsOptions_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.PopulateGraphicsOptions
struct UOLUIFrontEnd_Options_PopulateGraphicsOptions_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.PopulateGeneralOptions
struct UOLUIFrontEnd_Options_PopulateGeneralOptions_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.GetObjectFromOption
struct UOLUIFrontEnd_Options_GetObjectFromOption_Params
{
	struct FOptionInfo                                 CurrentOptionInfo;                                        // (Parm, NeedCtorLink)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.PopulateTabButtons
struct UOLUIFrontEnd_Options_PopulateTabButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.UseGeneralOptionsWithDifficulty
struct UOLUIFrontEnd_Options_UseGeneralOptionsWithDifficulty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.Press_OptionItemButton
struct UOLUIFrontEnd_Options_Press_OptionItemButton_Params
{
	int                                                PSID;                                                     // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Reset
struct UOLUIFrontEnd_Options_Press_Reset_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Gamma
struct UOLUIFrontEnd_Options_Press_Gamma_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Back
struct UOLUIFrontEnd_Options_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.OnConfirmChanges
struct UOLUIFrontEnd_Options_OnConfirmChanges_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.RevertToPreviousResolution
struct UOLUIFrontEnd_Options_RevertToPreviousResolution_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnConfirmResolution
struct UOLUIFrontEnd_Options_OnConfirmResolution_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.OnDismissKeyBindingConflictDialog
struct UOLUIFrontEnd_Options_OnDismissKeyBindingConflictDialog_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options.Press_Apply
struct UOLUIFrontEnd_Options_Press_Apply_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options.OnMustRestartAccepted
struct UOLUIFrontEnd_Options_OnMustRestartAccepted_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.ExitOptionsScreen
struct UOLUIFrontEnd_Options_ExitOptionsScreen_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.back
struct UOLUIFrontEnd_Options_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options.OnViewActivated
struct UOLUIFrontEnd_Options_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options.OnViewLoaded
struct UOLUIFrontEnd_Options_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_LoadGame.WidgetInitialized
struct UOLUIFrontEnd_LoadGame_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_LoadGame.GetCheckpointTag
struct UOLUIFrontEnd_LoadGame_GetCheckpointTag_Params
{
	struct FName                                       CheckpointName;                                           // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_LoadGame.GetSaveFileDisplayName
struct UOLUIFrontEnd_LoadGame_GetSaveFileDisplayName_Params
{
	struct FSaveFileInfo                               SaveFile;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_LoadGame.SetSelectedIndex
struct UOLUIFrontEnd_LoadGame_SetSelectedIndex_Params
{
	int                                                Index;                                                    // (Parm)
};

// Function OLGame.OLUIFrontEnd_LoadGame.SaveListChanged
struct UOLUIFrontEnd_LoadGame_SaveListChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_LoadGame.PopulateSaveList
struct UOLUIFrontEnd_LoadGame_PopulateSaveList_Params
{
};

// Function OLGame.OLUIFrontEnd_LoadGame.Press_Delete
struct UOLUIFrontEnd_LoadGame_Press_Delete_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_LoadGame.Press_Load
struct UOLUIFrontEnd_LoadGame_Press_Load_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_LoadGame.Press_Back
struct UOLUIFrontEnd_LoadGame_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_LoadGame.OnTopMostView
struct UOLUIFrontEnd_LoadGame_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.FilterButtonInput
struct UOLUIFrontEnd_PauseMenu_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.WidgetInitialized
struct UOLUIFrontEnd_PauseMenu_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.ASShowConfirmExitDialog
struct UOLUIFrontEnd_PauseMenu_ASShowConfirmExitDialog_Params
{
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	struct FString                                     okButtonLabel;                                            // (Parm, NeedCtorLink)
	struct FString                                     cancelButtonLabel;                                        // (Parm, NeedCtorLink)
	struct FString                                     callbackName;                                             // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitConfirmed
struct UOLUIFrontEnd_PauseMenu_OnExitConfirmed_Params
{
	bool                                               bOk;                                                      // (Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitToMenuButtonPress
struct UOLUIFrontEnd_PauseMenu_OnExitToMenuButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveCompleted
struct UOLUIFrontEnd_PauseMenu_OnSaveCompleted_Params
{
	bool                                               bSuccess;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveButtonPress
struct UOLUIFrontEnd_PauseMenu_OnSaveButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnOptionsButtonPress
struct UOLUIFrontEnd_PauseMenu_OnOptionsButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnReturnButtonPress
struct UOLUIFrontEnd_PauseMenu_OnReturnButtonPress_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnButtonClick
struct UOLUIFrontEnd_PauseMenu_OnButtonClick_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.PopulateButtons
struct UOLUIFrontEnd_PauseMenu_PopulateButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnTopMostView
struct UOLUIFrontEnd_PauseMenu_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_PauseMenu.OnViewLoaded
struct UOLUIFrontEnd_PauseMenu_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.ASPreviousPage
struct UOLUIFrontEnd_RecordingView_ASPreviousPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.ASNextPage
struct UOLUIFrontEnd_RecordingView_ASNextPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.ASPaginateText
struct UOLUIFrontEnd_RecordingView_ASPaginateText_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.FilterButtonInput
struct UOLUIFrontEnd_RecordingView_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingView.WidgetInitialized
struct UOLUIFrontEnd_RecordingView_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingView.GoAfterLastPage
struct UOLUIFrontEnd_RecordingView_GoAfterLastPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.GoBeforeFirstPage
struct UOLUIFrontEnd_RecordingView_GoBeforeFirstPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Close
struct UOLUIFrontEnd_RecordingView_Press_Close_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Back
struct UOLUIFrontEnd_RecordingView_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Next
struct UOLUIFrontEnd_RecordingView_Press_Next_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingView.Press_Previous
struct UOLUIFrontEnd_RecordingView_Press_Previous_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_RecordingView.OnViewActivated
struct UOLUIFrontEnd_RecordingView_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView.OnViewLoaded
struct UOLUIFrontEnd_RecordingView_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.ASPreviousPage
struct UOLUIFrontEnd_EvidenceView_ASPreviousPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.ASNextPage
struct UOLUIFrontEnd_EvidenceView_ASNextPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.ASPaginateText
struct UOLUIFrontEnd_EvidenceView_ASPaginateText_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.FilterButtonInput
struct UOLUIFrontEnd_EvidenceView_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.WidgetInitialized
struct UOLUIFrontEnd_EvidenceView_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.GoAfterLastPage
struct UOLUIFrontEnd_EvidenceView_GoAfterLastPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.GoBeforeFirstPage
struct UOLUIFrontEnd_EvidenceView_GoBeforeFirstPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Close
struct UOLUIFrontEnd_EvidenceView_Press_Close_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Back
struct UOLUIFrontEnd_EvidenceView_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Next
struct UOLUIFrontEnd_EvidenceView_Press_Next_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Previous
struct UOLUIFrontEnd_EvidenceView_Press_Previous_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_EvidenceView.OnViewActivated
struct UOLUIFrontEnd_EvidenceView_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView.OnViewLoaded
struct UOLUIFrontEnd_EvidenceView_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.GetCurrentGammaSetting
struct UOLUIFrontEnd_GammaScreen_GetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.IsGammaInitialized
struct UOLUIFrontEnd_GammaScreen_IsGammaInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.WidgetInitialized
struct UOLUIFrontEnd_GammaScreen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.FilterButtonInput
struct UOLUIFrontEnd_GammaScreen_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Change_Slider
struct UOLUIFrontEnd_GammaScreen_Change_Slider_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Pop
struct UOLUIFrontEnd_GammaScreen_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewDeactivated
struct UOLUIFrontEnd_GammaScreen_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.back
struct UOLUIFrontEnd_GammaScreen_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Back
struct UOLUIFrontEnd_GammaScreen_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnAccept
struct UOLUIFrontEnd_GammaScreen_OnAccept_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Accept
struct UOLUIFrontEnd_GammaScreen_Press_Accept_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnTopMostView
struct UOLUIFrontEnd_GammaScreen_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewLoaded
struct UOLUIFrontEnd_GammaScreen_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.ASUpdateGamepadLabels
struct UOLUIFrontEnd_GamepadScreen_ASUpdateGamepadLabels_Params
{
	int                                                ConfigType;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.TabChanged
struct UOLUIFrontEnd_GamepadScreen_TabChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.WidgetInitialized
struct UOLUIFrontEnd_GamepadScreen_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.PopulateTabButtons
struct UOLUIFrontEnd_GamepadScreen_PopulateTabButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Pop
struct UOLUIFrontEnd_GamepadScreen_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewDeactivated
struct UOLUIFrontEnd_GamepadScreen_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Back
struct UOLUIFrontEnd_GamepadScreen_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Accept
struct UOLUIFrontEnd_GamepadScreen_Press_Accept_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnTopMostView
struct UOLUIFrontEnd_GamepadScreen_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewLoaded
struct UOLUIFrontEnd_GamepadScreen_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.WidgetInitialized
struct UOLUIFrontEnd_Options_Console_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.FilterButtonInput
struct UOLUIFrontEnd_Options_Console_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetFullscreenOptionIndex
struct UOLUIFrontEnd_Options_Console_GetFullscreenOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetResolutionOptionIndex
struct UOLUIFrontEnd_Options_Console_GetResolutionOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.HasResolutionChanged
struct UOLUIFrontEnd_Options_Console_HasResolutionChanged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.TabChanged
struct UOLUIFrontEnd_Options_Console_TabChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.SetGammaExternally
struct UOLUIFrontEnd_Options_Console_SetGammaExternally_Params
{
	float                                              Gamma;                                                    // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.GetCurrentGammaSetting
struct UOLUIFrontEnd_Options_Console_GetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.ResetPS4Options
struct UOLUIFrontEnd_Options_Console_ResetPS4Options_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Reset
struct UOLUIFrontEnd_Options_Console_Press_Reset_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.FillOptionValuesFromProfile
struct UOLUIFrontEnd_Options_Console_FillOptionValuesFromProfile_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.PopulateControlsOptions
struct UOLUIFrontEnd_Options_Console_PopulateControlsOptions_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.PopulateTabButtons
struct UOLUIFrontEnd_Options_Console_PopulateTabButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Apply
struct UOLUIFrontEnd_Options_Console_Press_Apply_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_OptionItemButton
struct UOLUIFrontEnd_Options_Console_Press_OptionItemButton_Params
{
	int                                                PSID;                                                     // (Parm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.Press_Gamma
struct UOLUIFrontEnd_Options_Console_Press_Gamma_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_Options_Console.back
struct UOLUIFrontEnd_Options_Console_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnTopMostView
struct UOLUIFrontEnd_Options_Console_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewActivated
struct UOLUIFrontEnd_Options_Console_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_Options_Console.OnViewLoaded
struct UOLUIFrontEnd_Options_Console_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPreviousPage
struct UOLUIFrontEnd_RecordingView_Console_ASPreviousPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASNextPage
struct UOLUIFrontEnd_RecordingView_Console_ASNextPage_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPaginateText
struct UOLUIFrontEnd_RecordingView_Console_ASPaginateText_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.GetNumPages
struct UOLUIFrontEnd_RecordingView_Console_GetNumPages_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.GetCurrentPage
struct UOLUIFrontEnd_RecordingView_Console_GetCurrentPage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.FilterButtonInput
struct UOLUIFrontEnd_RecordingView_Console_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.WidgetInitialized
struct UOLUIFrontEnd_RecordingView_Console_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewActivated
struct UOLUIFrontEnd_RecordingView_Console_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewLoaded
struct UOLUIFrontEnd_RecordingView_Console_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPreviousPage
struct UOLUIFrontEnd_EvidenceView_Console_ASPreviousPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASNextPage
struct UOLUIFrontEnd_EvidenceView_Console_ASNextPage_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPaginateText
struct UOLUIFrontEnd_EvidenceView_Console_ASPaginateText_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetNumPages
struct UOLUIFrontEnd_EvidenceView_Console_GetNumPages_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetCurrentPage
struct UOLUIFrontEnd_EvidenceView_Console_GetCurrentPage_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.FilterButtonInput
struct UOLUIFrontEnd_EvidenceView_Console_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.WidgetInitialized
struct UOLUIFrontEnd_EvidenceView_Console_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewActivated
struct UOLUIFrontEnd_EvidenceView_Console_OnViewActivated_Params
{
};

// Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewLoaded
struct UOLUIFrontEnd_EvidenceView_Console_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.ASDisableBackButton
struct UOLUIFrontEnd_GammaScreen_Console_ASDisableBackButton_Params
{
	bool                                               bDisable;                                                 // (Parm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.GetCurrentGammaSetting
struct UOLUIFrontEnd_GammaScreen_Console_GetCurrentGammaSetting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.IsGammaInitialized
struct UOLUIFrontEnd_GammaScreen_Console_IsGammaInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.WidgetInitialized
struct UOLUIFrontEnd_GammaScreen_Console_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.FilterButtonInput
struct UOLUIFrontEnd_GammaScreen_Console_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Change_Slider
struct UOLUIFrontEnd_GammaScreen_Console_Change_Slider_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Pop
struct UOLUIFrontEnd_GammaScreen_Console_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewDeactivated
struct UOLUIFrontEnd_GammaScreen_Console_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.back
struct UOLUIFrontEnd_GammaScreen_Console_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Back
struct UOLUIFrontEnd_GammaScreen_Console_Press_Back_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnAccept
struct UOLUIFrontEnd_GammaScreen_Console_OnAccept_Params
{
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Accept
struct UOLUIFrontEnd_GammaScreen_Console_Press_Accept_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnTopMostView
struct UOLUIFrontEnd_GammaScreen_Console_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewLoaded
struct UOLUIFrontEnd_GammaScreen_Console_OnViewLoaded_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.ASUpdateGamepadLabels
struct UOLUIFrontEnd_GamepadScreen_Console_ASUpdateGamepadLabels_Params
{
	int                                                ConfigType;                                               // (Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.TabChanged
struct UOLUIFrontEnd_GamepadScreen_Console_TabChanged_Params
{
	struct FEventData                                  ev;                                                       // (Parm, NeedCtorLink)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.WidgetInitialized
struct UOLUIFrontEnd_GamepadScreen_Console_WidgetInitialized_Params
{
	struct FName                                       WidgetName;                                               // (Parm)
	struct FName                                       WidgetPath;                                               // (Parm)
	class UGFxObject*                                  Widget;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.FilterButtonInput
struct UOLUIFrontEnd_GamepadScreen_Console_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.PopulateTabButtons
struct UOLUIFrontEnd_GamepadScreen_Console_PopulateTabButtons_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.Pop
struct UOLUIFrontEnd_GamepadScreen_Console_Pop_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewDeactivated
struct UOLUIFrontEnd_GamepadScreen_Console_OnViewDeactivated_Params
{
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.back
struct UOLUIFrontEnd_GamepadScreen_Console_back_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnTopMostView
struct UOLUIFrontEnd_GamepadScreen_Console_OnTopMostView_Params
{
	bool                                               bPlayOpenAnimation;                                       // (OptionalParm, Parm)
};

// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewLoaded
struct UOLUIFrontEnd_GamepadScreen_Console_OnViewLoaded_Params
{
};

// Function OLGame.OLUIPopupScreen.FilterButtonInput
struct UOLUIPopupScreen_FilterButtonInput_Params
{
	int                                                ControllerId;                                             // (Parm)
	struct FName                                       ButtonName;                                               // (Parm)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OLGame.OLUIPopupScreen.OnClose
struct UOLUIPopupScreen_OnClose_Params
{
};

// Function OLGame.OLUIPopupScreen.Start
struct UOLUIPopupScreen_Start_Params
{
	bool                                               StartPaused;                                              // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
