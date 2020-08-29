// Outlast (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OLGame.OLBashableObject.OnToggle
// (Defined, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLBashableObject::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBashableObject.OnToggle");

	AOLBashableObject_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBashableObject.ClearBreakTimer
// (Defined, Public)

void AOLBashableObject::ClearBreakTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBashableObject.ClearBreakTimer");

	AOLBashableObject_ClearBreakTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBashableObject.TriggerBreakTimer
// (Defined, Public)
// Parameters:
// float                          Time                           (Parm)

void AOLBashableObject::TriggerBreakTimer(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBashableObject.TriggerBreakTimer");

	AOLBashableObject_TriggerBreakTimer_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBashableObject.Break
// (Defined, Public)

void AOLBashableObject::Break()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBashableObject.Break");

	AOLBashableObject_Break_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderHud.UpdateRecordingTime
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UOLCamcorderHud::UpdateRecordingTime(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderHud.UpdateRecordingTime");

	UOLCamcorderHud_UpdateRecordingTime_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCamcorderHud.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCamcorderHud::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderHud.WidgetInitialized");

	UOLCamcorderHud_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCamcorderHud.SetVisible
// (Defined, Event, Public)
// Parameters:
// bool                           bShow                          (Parm)

void UOLCamcorderHud::SetVisible(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCamcorderHud.SetVisible");

	UOLCamcorderHud_SetVisible_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCameraActor.GetCameraView
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)

void AOLCameraActor::GetCameraView(float DeltaTime, struct FTPOV* OutPOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCameraActor.GetCameraView");

	AOLCameraActor_GetCameraView_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function OLGame.OLCameraActor.NativeGetCameraView
// (Native, Public, HasOutParms)
// Parameters:
// struct FTPOV                   OutPOV                         (Parm, OutParm)

void AOLCameraActor::NativeGetCameraView(struct FTPOV* OutPOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCameraActor.NativeGetCameraView");

	AOLCameraActor_NativeGetCameraView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function OLGame.OLPlayerController.UnlockAchievement
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EOutlastAchievement> achievement                    (Parm)

void AOLPlayerController::UnlockAchievement(TEnumAsByte<EOutlastAchievement> achievement)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UnlockAchievement");

	AOLPlayerController_UnlockAchievement_Params params;
	params.achievement = achievement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.NotifyDifficultyChanged
// (Defined, Public)

void AOLPlayerController::NotifyDifficultyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NotifyDifficultyChanged");

	AOLPlayerController_NotifyDifficultyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.UpdateDifficultyBasedValues
// (Defined, Public)

void AOLPlayerController::UpdateDifficultyBasedValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UpdateDifficultyBasedValues");

	AOLPlayerController_UpdateDifficultyBasedValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.CheckForProfileUpdate
// (Defined, Event, Public)

void AOLPlayerController::CheckForProfileUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.CheckForProfileUpdate");

	AOLPlayerController_CheckForProfileUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.UpdateLocalCacheOfProfileSettings
// (Defined, Event, Public)
// Parameters:
// class UOLProfileSettings*      EffectiveProfileSettings       (Parm)

void AOLPlayerController::UpdateLocalCacheOfProfileSettings(class UOLProfileSettings* EffectiveProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UpdateLocalCacheOfProfileSettings");

	AOLPlayerController_UpdateLocalCacheOfProfileSettings_Params params;
	params.EffectiveProfileSettings = EffectiveProfileSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientSaveAllPlayerData
// (Defined, Net, NetReliable, Simulated, HasOptionalParms, Public, NetClient)
// Parameters:
// bool                           bShouldForce                   (OptionalParm, Parm)
// bool                           bSkipCacheUpdate               (OptionalParm, Parm)

void AOLPlayerController::ClientSaveAllPlayerData(bool bShouldForce, bool bSkipCacheUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientSaveAllPlayerData");

	AOLPlayerController_ClientSaveAllPlayerData_Params params;
	params.bShouldForce = bShouldForce;
	params.bSkipCacheUpdate = bSkipCacheUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.OnProfileWriteComplete
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void AOLPlayerController::OnProfileWriteComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.OnProfileWriteComplete");

	AOLPlayerController_OnProfileWriteComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClearSaveProfileDelegate
// (Defined, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void AOLPlayerController::ClearSaveProfileDelegate(int ControllerId, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClearSaveProfileDelegate");

	AOLPlayerController_ClearSaveProfileDelegate_Params params;
	params.ControllerId = ControllerId;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SaveProfile
// (Final, Defined, Event, Private)

void AOLPlayerController::SaveProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SaveProfile");

	AOLPlayerController_SaveProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.UnregisterPlayerDataStores
// (Defined, Simulated, Public)

void AOLPlayerController::UnregisterPlayerDataStores()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UnregisterPlayerDataStores");

	AOLPlayerController_UnregisterPlayerDataStores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.RegisterCustomPlayerDataStores
// (Defined, Simulated, Protected)

void AOLPlayerController::RegisterCustomPlayerDataStores()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.RegisterCustomPlayerDataStores");

	AOLPlayerController_RegisterCustomPlayerDataStores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ShippingCheat_GiveAllCheckpoints
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::ShippingCheat_GiveAllCheckpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ShippingCheat_GiveAllCheckpoints");

	AOLPlayerController_ShippingCheat_GiveAllCheckpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.ClearAllProgress
// (Native, Public)

void AOLPlayerController::ClearAllProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClearAllProgress");

	AOLPlayerController_ClearAllProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SaveBeforeQuitting
// (Native, Public)

void AOLPlayerController::SaveBeforeQuitting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SaveBeforeQuitting");

	AOLPlayerController_SaveBeforeQuitting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientCommitMapChange
// (Defined, Net, NetReliable, Simulated, Event, Public, NetClient)

void AOLPlayerController::ClientCommitMapChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientCommitMapChange");

	AOLPlayerController_ClientCommitMapChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.StartNewGameAtCheckpoint
// (Defined, Event, Public)
// Parameters:
// struct FString                 CheckpointStr                  (Parm, NeedCtorLink)
// bool                           bSaveToDisk                    (Parm)

void AOLPlayerController::StartNewGameAtCheckpoint(const struct FString& CheckpointStr, bool bSaveToDisk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.StartNewGameAtCheckpoint");

	AOLPlayerController_StartNewGameAtCheckpoint_Params params;
	params.CheckpointStr = CheckpointStr;
	params.bSaveToDisk = bSaveToDisk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ApplyDeprecatedCheckpointRecord
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FDeprecatedCheckpointRecord OldRecord                      (Const, Parm, OutParm, NeedCtorLink)

void AOLPlayerController::ApplyDeprecatedCheckpointRecord(struct FDeprecatedCheckpointRecord* OldRecord)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ApplyDeprecatedCheckpointRecord");

	AOLPlayerController_ApplyDeprecatedCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OldRecord != nullptr)
		*OldRecord = params.OldRecord;
}


// Function OLGame.OLPlayerController.ApplyCheckpointRecord
// (Defined, Public, HasOutParms)
// Parameters:
// struct AOLPlayerController_FCheckpointRecord Record                         (Const, Parm, OutParm, NeedCtorLink)

void AOLPlayerController::ApplyCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ApplyCheckpointRecord");

	AOLPlayerController_ApplyCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function OLGame.OLPlayerController.CreateCheckpointRecord
// (Defined, Public, HasOutParms)
// Parameters:
// struct AOLPlayerController_FCheckpointRecord Record                         (Parm, OutParm, NeedCtorLink)

void AOLPlayerController::CreateCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.CreateCheckpointRecord");

	AOLPlayerController_CreateCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function OLGame.OLPlayerController.NativeApplyCheckpointRecord
// (Native, Public, HasOutParms)
// Parameters:
// struct AOLPlayerController_FCheckpointRecord Record                         (Const, Parm, OutParm, NeedCtorLink)

void AOLPlayerController::NativeApplyCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NativeApplyCheckpointRecord");

	AOLPlayerController_NativeApplyCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function OLGame.OLPlayerController.NativeCreateCheckpointRecord
// (Native, Public, HasOutParms)
// Parameters:
// struct AOLPlayerController_FCheckpointRecord Record                         (Parm, OutParm, NeedCtorLink)

void AOLPlayerController::NativeCreateCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NativeCreateCheckpointRecord");

	AOLPlayerController_NativeCreateCheckpointRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Record != nullptr)
		*Record = params.Record;
}


// Function OLGame.OLPlayerController.SavePersistentState
// (Native, Public)

void AOLPlayerController::SavePersistentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SavePersistentState");

	AOLPlayerController_SavePersistentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.OnOverrideAIMusic
// (Defined, Public)
// Parameters:
// class UOLSeqAct_OverrideAIMusic* Action                         (Parm)

void AOLPlayerController::OnOverrideAIMusic(class UOLSeqAct_OverrideAIMusic* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.OnOverrideAIMusic");

	AOLPlayerController_OnOverrideAIMusic_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.StopAllSounds
// (Native, Public)

void AOLPlayerController::StopAllSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.StopAllSounds");

	AOLPlayerController_StopAllSounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    H                              (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLPlayerController::DisplayDebug(class AHUD* H, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.DisplayDebug");

	AOLPlayerController_DisplayDebug_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLPlayerController.DrawHUD
// (Defined, Public)
// Parameters:
// class AHUD*                    H                              (Parm)

void AOLPlayerController::DrawHUD(class AHUD* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.DrawHUD");

	AOLPlayerController_DrawHUD_Params params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.FullScreenOverlayChanged
// (Defined, Event, Public)

void AOLPlayerController::FullScreenOverlayChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.FullScreenOverlayChanged");

	AOLPlayerController_FullScreenOverlayChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ForcePause
// (Defined, Event, Public)
// Parameters:
// bool                           bPause                         (Parm)

void AOLPlayerController::ForcePause(bool bPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ForcePause");

	AOLPlayerController_ForcePause_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientSetHUD
// (Defined, Net, NetReliable, Simulated, Public, NetClient)
// Parameters:
// class UClass*                  newHUDType                     (Parm)

void AOLPlayerController::ClientSetHUD(class UClass* newHUDType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientSetHUD");

	AOLPlayerController_ClientSetHUD_Params params;
	params.newHUDType = newHUDType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.OnSetMesh
// (Defined, Event, Public)
// Parameters:
// class USeqAct_SetMesh*         Action                         (Parm)

void AOLPlayerController::OnSetMesh(class USeqAct_SetMesh* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.OnSetMesh");

	AOLPlayerController_OnSetMesh_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientSetCameraFade
// (Defined, Net, NetReliable, Simulated, Event, HasOptionalParms, Public, NetClient)
// Parameters:
// bool                           _enableFading                  (Parm)
// struct FColor                  _FadeColor                     (OptionalParm, Parm)
// struct FVector2D               _FadeAlpha                     (OptionalParm, Parm)
// float                          _FadeTime                      (OptionalParm, Parm)
// bool                           _fadeAudio                     (OptionalParm, Parm)

void AOLPlayerController::ClientSetCameraFade(bool _enableFading, const struct FColor& _FadeColor, const struct FVector2D& _FadeAlpha, float _FadeTime, bool _fadeAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientSetCameraFade");

	AOLPlayerController_ClientSetCameraFade_Params params;
	params._enableFading = _enableFading;
	params._FadeColor = _FadeColor;
	params._FadeAlpha = _FadeAlpha;
	params._FadeTime = _FadeTime;
	params._fadeAudio = _fadeAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SetCinematicMode
// (Defined, Public)
// Parameters:
// class USeqAct_ToggleCinematicMode* Action                         (Parm)
// bool                           bInCinematicMode               (Parm)
// bool                           bHidePlayer                    (Parm)
// bool                           bAffectsHUD                    (Parm)
// bool                           bAffectsMovement               (Parm)
// bool                           bAffectsTurning                (Parm)
// bool                           bAffectsButtons                (Parm)

void AOLPlayerController::SetCinematicMode(class USeqAct_ToggleCinematicMode* Action, bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetCinematicMode");

	AOLPlayerController_SetCinematicMode_Params params;
	params.Action = Action;
	params.bInCinematicMode = bInCinematicMode;
	params.bHidePlayer = bHidePlayer;
	params.bAffectsHUD = bAffectsHUD;
	params.bAffectsMovement = bAffectsMovement;
	params.bAffectsTurning = bAffectsTurning;
	params.bAffectsButtons = bAffectsButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.GetPlayerViewPoint
// (Defined, Simulated, Event, Public, HasOutParms)
// Parameters:
// struct FVector                 POVLocation                    (Parm, OutParm)
// struct FRotator                POVRotation                    (Parm, OutParm)

void AOLPlayerController::GetPlayerViewPoint(struct FVector* POVLocation, struct FRotator* POVRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GetPlayerViewPoint");

	AOLPlayerController_GetPlayerViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (POVLocation != nullptr)
		*POVLocation = params.POVLocation;
	if (POVRotation != nullptr)
		*POVRotation = params.POVRotation;
}


// Function OLGame.OLPlayerController.GetFOVAngle
// (Defined, Event, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AOLPlayerController::GetFOVAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GetFOVAngle");

	AOLPlayerController_GetFOVAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.SpawnCamera
// (Defined, Public)

void AOLPlayerController::SpawnCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SpawnCamera");

	AOLPlayerController_SpawnCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SetCameraMode
// (Defined, Public)
// Parameters:
// struct FName                   NewCamMode                     (Parm)

void AOLPlayerController::SetCameraMode(const struct FName& NewCamMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetCameraMode");

	AOLPlayerController_SetCameraMode_Params params;
	params.NewCamMode = NewCamMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.UsingFirstPersonCamera
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::UsingFirstPersonCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UsingFirstPersonCamera");

	AOLPlayerController_UsingFirstPersonCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.SetBehindView
// (Defined, Public)
// Parameters:
// bool                           bNewBehindView                 (Parm)

void AOLPlayerController::SetBehindView(bool bNewBehindView)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetBehindView");

	AOLPlayerController_SetBehindView_Params params;
	params.bNewBehindView = bNewBehindView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.BehindView
// (Defined, Exec, Public)

void AOLPlayerController::BehindView()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.BehindView");

	AOLPlayerController_BehindView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.GammaCalibration
// (Defined, Exec, Public)

void AOLPlayerController::GammaCalibration()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GammaCalibration");

	AOLPlayerController_GammaCalibration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PressedJump
// (Defined, Exec, Public)

void AOLPlayerController::PressedJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PressedJump");

	AOLPlayerController_PressedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PressedReloadBatteries
// (Defined, Exec, Public)

void AOLPlayerController::PressedReloadBatteries()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PressedReloadBatteries");

	AOLPlayerController_PressedReloadBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.StopZoom
// (Defined, Simulated, Exec, Public)

void AOLPlayerController::StopZoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.StopZoom");

	AOLPlayerController_StopZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.StartZoomOut
// (Defined, Simulated, Exec, Public)

void AOLPlayerController::StartZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.StartZoomOut");

	AOLPlayerController_StartZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.StartZoomIn
// (Defined, Simulated, Exec, Public)

void AOLPlayerController::StartZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.StartZoomIn");

	AOLPlayerController_StartZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ZoomOut
// (Defined, Exec, Public)

void AOLPlayerController::ZoomOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ZoomOut");

	AOLPlayerController_ZoomOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ZoomIn
// (Defined, Exec, Public)

void AOLPlayerController::ZoomIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ZoomIn");

	AOLPlayerController_ZoomIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ToggleCamcorder
// (Defined, Exec, Public)

void AOLPlayerController::ToggleCamcorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ToggleCamcorder");

	AOLPlayerController_ToggleCamcorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ToggleNightVision
// (Defined, Exec, Public)

void AOLPlayerController::ToggleNightVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ToggleNightVision");

	AOLPlayerController_ToggleNightVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ReleasedUseButton
// (Defined, Exec, Public)

void AOLPlayerController::ReleasedUseButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ReleasedUseButton");

	AOLPlayerController_ReleasedUseButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PressedUseButton
// (Defined, Exec, Public)

void AOLPlayerController::PressedUseButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PressedUseButton");

	AOLPlayerController_PressedUseButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PerformedUseAction
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::PerformedUseAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PerformedUseAction");

	AOLPlayerController_PerformedUseAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.SetPlayerFoundWhileHidden
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            SearchingEnemy                 (Parm)

void AOLPlayerController::SetPlayerFoundWhileHidden(class AOLEnemyPawn* SearchingEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetPlayerFoundWhileHidden");

	AOLPlayerController_SetPlayerFoundWhileHidden_Params params;
	params.SearchingEnemy = SearchingEnemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.IsPlayerFindableWhileHidden
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            SearchingEnemy                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPlayerController::IsPlayerFindableWhileHidden(class AOLEnemyPawn* SearchingEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.IsPlayerFindableWhileHidden");

	AOLPlayerController_IsPlayerFindableWhileHidden_Params params;
	params.SearchingEnemy = SearchingEnemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.PlayerDied
// (Defined, Public)

void AOLPlayerController::PlayerDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PlayerDied");

	AOLPlayerController_PlayerDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.Destroyed
// (Defined, Event, Public)

void AOLPlayerController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.Destroyed");

	AOLPlayerController_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ClientRestart
// (Defined, Net, NetReliable, Simulated, Public, NetClient)
// Parameters:
// class APawn*                   NewPawn                        (Parm)

void AOLPlayerController::ClientRestart(class APawn* NewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ClientRestart");

	AOLPlayerController_ClientRestart_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.Reset
// (Defined, Public)

void AOLPlayerController::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.Reset");

	AOLPlayerController_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.UnPossess
// (Defined, Event, Public)

void AOLPlayerController::UnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.UnPossess");

	AOLPlayerController_UnPossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.Possess
// (Defined, Event, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)
// bool                           bVehicleTransition             (Parm)

void AOLPlayerController::Possess(class APawn* inPawn, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.Possess");

	AOLPlayerController_Possess_Params params;
	params.inPawn = inPawn;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AOLPlayerController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.PostBeginPlay");

	AOLPlayerController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.HideLoadingOverlay
// (Native, Public)

void AOLPlayerController::HideLoadingOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.HideLoadingOverlay");

	AOLPlayerController_HideLoadingOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.ShowLoadingOverlay
// (Native, Public)

void AOLPlayerController::ShowLoadingOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.ShowLoadingOverlay");

	AOLPlayerController_ShowLoadingOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SetVolume
// (Native, Public)
// Parameters:
// float                          VolumeLevel                    (Parm)

void AOLPlayerController::SetVolume(float VolumeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetVolume");

	AOLPlayerController_SetVolume_Params params;
	params.VolumeLevel = VolumeLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.SetGamma
// (Native, Public)
// Parameters:
// float                          GammaValue                     (Parm)

void AOLPlayerController::SetGamma(float GammaValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.SetGamma");

	AOLPlayerController_SetGamma_Params params;
	params.GammaValue = GammaValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerController.GetGamma
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AOLPlayerController::GetGamma()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.GetGamma");

	AOLPlayerController_GetGamma_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerController.NativePlayerMove
// (Native, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AOLPlayerController::NativePlayerMove(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerController.NativePlayerMove");

	AOLPlayerController_NativePlayerMove_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetLanguage
// (Exec, Native, Public)
// Parameters:
// struct FString                 LanguageCode                   (Parm, NeedCtorLink)

void UOLCheatManager::SetLanguage(const struct FString& LanguageCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetLanguage");

	UOLCheatManager_SetLanguage_Params params;
	params.LanguageCode = LanguageCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ReloadSoundBanks
// (Exec, Native, Public)
// Parameters:
// bool                           bDLC                           (Parm)

void UOLCheatManager::ReloadSoundBanks(bool bDLC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ReloadSoundBanks");

	UOLCheatManager_ReloadSoundBanks_Params params;
	params.bDLC = bDLC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ProcessCheatInput
// (Defined, Event, Public)
// Parameters:
// class UOLPlayerInput*          InputMgr                       (Parm)
// struct FName                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCheatManager::ProcessCheatInput(class UOLPlayerInput* InputMgr, const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ProcessCheatInput");

	UOLCheatManager_ProcessCheatInput_Params params;
	params.InputMgr = InputMgr;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCheatManager.IsViewModeUnlit
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCheatManager::IsViewModeUnlit()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.IsViewModeUnlit");

	UOLCheatManager_IsViewModeUnlit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCheatManager.SetFinishedGame
// (Defined, Exec, Public)
// Parameters:
// bool                           hasFinishedGame                (Parm)
// bool                           hasFinishedDLC                 (Parm)

void UOLCheatManager::SetFinishedGame(bool hasFinishedGame, bool hasFinishedDLC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetFinishedGame");

	UOLCheatManager_SetFinishedGame_Params params;
	params.hasFinishedGame = hasFinishedGame;
	params.hasFinishedDLC = hasFinishedDLC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.OutlastPause
// (Defined, Exec, Public)

void UOLCheatManager::OutlastPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.OutlastPause");

	UOLCheatManager_OutlastPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetGS
// (Exec, Native, Public)

void UOLCheatManager::ResetGS()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetGS");

	UOLCheatManager_ResetGS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ActivateGS
// (Exec, Native, Public)
// Parameters:
// struct FName                   gsName                         (Parm)

void UOLCheatManager::ActivateGS(const struct FName& gsName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ActivateGS");

	UOLCheatManager_ActivateGS_Params params;
	params.gsName = gsName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DumpGS
// (Defined, Exec, Public)

void UOLCheatManager::DumpGS()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DumpGS");

	UOLCheatManager_DumpGS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugGameState
// (Defined, Exec, Public)

void UOLCheatManager::DebugGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugGameState");

	UOLCheatManager_DebugGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SuppressAllMessages
// (Defined, Exec, Public)

void UOLCheatManager::SuppressAllMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SuppressAllMessages");

	UOLCheatManager_SuppressAllMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DrawDebug
// (Native, Public)

void UOLCheatManager::DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DrawDebug");

	UOLCheatManager_DrawDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleMute
// (Exec, Native, Public)

void UOLCheatManager::ToggleMute()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleMute");

	UOLCheatManager_ToggleMute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.InflictDamage
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          Amount                         (OptionalParm, Parm)

void UOLCheatManager::InflictDamage(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.InflictDamage");

	UOLCheatManager_InflictDamage_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetWorldState
// (Exec, Native, Public)

void UOLCheatManager::ResetWorldState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetWorldState");

	UOLCheatManager_ResetWorldState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetPushables
// (Exec, Native, Public)

void UOLCheatManager::ResetPushables()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetPushables");

	UOLCheatManager_ResetPushables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ResetDoors
// (Exec, Native, Public)

void UOLCheatManager::ResetDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ResetDoors");

	UOLCheatManager_ResetDoors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SetGamma
// (Exec, Native, Public)
// Parameters:
// float                          newGamma                       (Parm)

void UOLCheatManager::SetGamma(float newGamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SetGamma");

	UOLCheatManager_SetGamma_Params params;
	params.newGamma = newGamma;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DemoMode
// (Defined, Exec, Public)

void UOLCheatManager::DemoMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DemoMode");

	UOLCheatManager_DemoMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.LoadGame
// (Defined, Exec, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOLCheatManager::LoadGame(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.LoadGame");

	UOLCheatManager_LoadGame_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SaveGame
// (Defined, Exec, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOLCheatManager::SaveGame(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SaveGame");

	UOLCheatManager_SaveGame_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.GiveItem
// (Exec, Native, Public)
// Parameters:
// struct FString                 ItemName                       (Parm, NeedCtorLink)

void UOLCheatManager::GiveItem(const struct FString& ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.GiveItem");

	UOLCheatManager_GiveItem_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ApplyCP
// (Exec, Native, Public)
// Parameters:
// struct FString                 CPName                         (Parm, NeedCtorLink)

void UOLCheatManager::ApplyCP(const struct FString& CPName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ApplyCP");

	UOLCheatManager_ApplyCP_Params params;
	params.CPName = CPName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.cplist
// (Exec, Native, Public)

void UOLCheatManager::cplist()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.cplist");

	UOLCheatManager_cplist_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.cp
// (Defined, Exec, Public)
// Parameters:
// struct FString                 CPName                         (Parm, NeedCtorLink)

void UOLCheatManager::cp(const struct FString& CPName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.cp");

	UOLCheatManager_cp_Params params;
	params.CPName = CPName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.Checkpoint
// (Defined, Exec, Public)
// Parameters:
// struct FString                 CPName                         (Parm, NeedCtorLink)

void UOLCheatManager::Checkpoint(const struct FString& CPName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.Checkpoint");

	UOLCheatManager_Checkpoint_Params params;
	params.CPName = CPName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.KillFade
// (Defined, Exec, Public)

void UOLCheatManager::KillFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.KillFade");

	UOLCheatManager_KillFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleUnlimitedBatteries
// (Defined, Exec, Public)

void UOLCheatManager::ToggleUnlimitedBatteries()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleUnlimitedBatteries");

	UOLCheatManager_ToggleUnlimitedBatteries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.RechargeNightVision
// (Defined, Exec, Public)

void UOLCheatManager::RechargeNightVision()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.RechargeNightVision");

	UOLCheatManager_RechargeNightVision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.Ghost
// (Defined, Exec, Public)

void UOLCheatManager::Ghost()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.Ghost");

	UOLCheatManager_Ghost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.GhostPawn
// (Native, Public)
// Parameters:
// bool                           ghosting                       (Parm)

void UOLCheatManager::GhostPawn(bool ghosting)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.GhostPawn");

	UOLCheatManager_GhostPawn_Params params;
	params.ghosting = ghosting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.FasterGameSpeed
// (Defined, Exec, Public)

void UOLCheatManager::FasterGameSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.FasterGameSpeed");

	UOLCheatManager_FasterGameSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SlowerGameSpeed
// (Defined, Exec, Public)

void UOLCheatManager::SlowerGameSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SlowerGameSpeed");

	UOLCheatManager_SlowerGameSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.NormalGameSpeed
// (Defined, Exec, Public)

void UOLCheatManager::NormalGameSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.NormalGameSpeed");

	UOLCheatManager_NormalGameSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.UpdateGameSpeed
// (Defined, Public)

void UOLCheatManager::UpdateGameSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.UpdateGameSpeed");

	UOLCheatManager_UpdateGameSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SingleFrame
// (Exec, Native, Public)

void UOLCheatManager::SingleFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SingleFrame");

	UOLCheatManager_SingleFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.TeleportToFreeCam
// (Defined, Exec, Public)

void UOLCheatManager::TeleportToFreeCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.TeleportToFreeCam");

	UOLCheatManager_TeleportToFreeCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleFixedCam
// (Defined, Exec, Public)

void UOLCheatManager::ToggleFixedCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleFixedCam");

	UOLCheatManager_ToggleFixedCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleFreeCamNoPause
// (Defined, Exec, Public)

void UOLCheatManager::ToggleFreeCamNoPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleFreeCamNoPause");

	UOLCheatManager_ToggleFreeCamNoPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleFreeCam
// (Defined, Exec, Public)

void UOLCheatManager::ToggleFreeCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleFreeCam");

	UOLCheatManager_ToggleFreeCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.AutoSpike
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          Spike                          (OptionalParm, Parm)
// float                          Delay                          (OptionalParm, Parm)

void UOLCheatManager::AutoSpike(float Spike, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.AutoSpike");

	UOLCheatManager_AutoSpike_Params params;
	params.Spike = Spike;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.Spike
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          Spike                          (OptionalParm, Parm)

void UOLCheatManager::Spike(float Spike)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.Spike");

	UOLCheatManager_Spike_Params params;
	params.Spike = Spike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.BadFPS
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// float                          slowdown                       (OptionalParm, Parm)

void UOLCheatManager::BadFPS(float slowdown)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.BadFPS");

	UOLCheatManager_BadFPS_Params params;
	params.slowdown = slowdown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugAIPositions
// (Defined, Exec, Public)

void UOLCheatManager::DebugAIPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugAIPositions");

	UOLCheatManager_DebugAIPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugAI
// (Defined, Exec, Public)

void UOLCheatManager::DebugAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugAI");

	UOLCheatManager_DebugAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ShowHeroDebug
// (Defined, Exec, Public)

void UOLCheatManager::ShowHeroDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ShowHeroDebug");

	UOLCheatManager_ShowHeroDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ShowPaths
// (Defined, Exec, Public)

void UOLCheatManager::ShowPaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ShowPaths");

	UOLCheatManager_ShowPaths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ShowStatLevels
// (Defined, Exec, Public)

void UOLCheatManager::ShowStatLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ShowStatLevels");

	UOLCheatManager_ShowStatLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugWaitPoints
// (Defined, Exec, Public)

void UOLCheatManager::DebugWaitPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugWaitPoints");

	UOLCheatManager_DebugWaitPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugTrajectory
// (Defined, Exec, Public)

void UOLCheatManager::DebugTrajectory()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugTrajectory");

	UOLCheatManager_DebugTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugCamera
// (Defined, Exec, Public)

void UOLCheatManager::DebugCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugCamera");

	UOLCheatManager_DebugCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugSoundEnvironment
// (Exec, Native, HasOptionalParms, Public)
// Parameters:
// struct FString                 Filter                         (OptionalParm, Parm, NeedCtorLink)

void UOLCheatManager::DebugSoundEnvironment(const struct FString& Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugSoundEnvironment");

	UOLCheatManager_DebugSoundEnvironment_Params params;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DebugGameplay
// (Exec, Native, Public)

void UOLCheatManager::DebugGameplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DebugGameplay");

	UOLCheatManager_DebugGameplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.SaveAllCheckpoints
// (Exec, Native, Public)

void UOLCheatManager::SaveAllCheckpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.SaveAllCheckpoints");

	UOLCheatManager_SaveAllCheckpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.DeleteAllSaves
// (Exec, Native, Public)

void UOLCheatManager::DeleteAllSaves()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.DeleteAllSaves");

	UOLCheatManager_DeleteAllSaves_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.KillAll
// (Defined, Exec, Public)
// Parameters:
// class UClass*                  aClass                         (Parm)

void UOLCheatManager::KillAll(class UClass* aClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.KillAll");

	UOLCheatManager_KillAll_Params params;
	params.aClass = aClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.ToggleCheats
// (Defined, Exec, Public)

void UOLCheatManager::ToggleCheats()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.ToggleCheats");

	UOLCheatManager_ToggleCheats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheatManager.GetCheatManager
// (Native, Static, Public)
// Parameters:
// class UOLCheatManager*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLCheatManager* UOLCheatManager::STATIC_GetCheatManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.GetCheatManager");

	UOLCheatManager_GetCheatManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLCheatManager.AddDebugTrajectoryPoint
// (Native, Public)
// Parameters:
// struct FDebugTrajectoryPoint   Point                          (Parm)

void UOLCheatManager::AddDebugTrajectoryPoint(const struct FDebugTrajectoryPoint& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheatManager.AddDebugTrajectoryPoint");

	UOLCheatManager_AddDebugTrajectoryPoint_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheckpoint.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLCheckpoint::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheckpoint.OnToggle");

	AOLCheckpoint_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheckpoint.SetEnabled
// (Defined, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void AOLCheckpoint::SetEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheckpoint.SetEnabled");

	AOLCheckpoint_SetEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheckpoint.ResetCheckpointDeaths
// (Native, Public)

void AOLCheckpoint::ResetCheckpointDeaths()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheckpoint.ResetCheckpointDeaths");

	AOLCheckpoint_ResetCheckpointDeaths_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheckpoint.OnPlayerSpawn
// (Native, Public)

void AOLCheckpoint::OnPlayerSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheckpoint.OnPlayerSpawn");

	AOLCheckpoint_OnPlayerSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheckpointList.Script_IsUnreached
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FName                   TestCheckpoint                 (Const, Parm, OutParm)
// struct FName                   CurrentCheckpoint              (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLCheckpointList::STATIC_Script_IsUnreached(struct FName* TestCheckpoint, struct FName* CurrentCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheckpointList.Script_IsUnreached");

	AOLCheckpointList_Script_IsUnreached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TestCheckpoint != nullptr)
		*TestCheckpoint = params.TestCheckpoint;
	if (CurrentCheckpoint != nullptr)
		*CurrentCheckpoint = params.CurrentCheckpoint;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.UpdateProfileKeyBindingsFromSystem
// (Native, Public)
// Parameters:
// class UOLProfileSettings*      ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::UpdateProfileKeyBindingsFromSystem(class UOLProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.UpdateProfileKeyBindingsFromSystem");

	UOLEngine_UpdateProfileKeyBindingsFromSystem_Params params;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.UpdateProfileFromSystemSettings
// (Native, Public)
// Parameters:
// class UOLProfileSettings*      ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::UpdateProfileFromSystemSettings(class UOLProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.UpdateProfileFromSystemSettings");

	UOLEngine_UpdateProfileFromSystemSettings_Params params;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.ApplyKeyBindings
// (Native, Public)
// Parameters:
// class UOLProfileSettings*      ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::ApplyKeyBindings(class UOLProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.ApplyKeyBindings");

	UOLEngine_ApplyKeyBindings_Params params;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.ApplySystemSettings
// (Native, Public)
// Parameters:
// class UOLProfileSettings*      ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::ApplySystemSettings(class UOLProfileSettings* ProfileSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.ApplySystemSettings");

	UOLEngine_ApplySystemSettings_Params params;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.LoadMostRecentSaveFile
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::LoadMostRecentSaveFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.LoadMostRecentSaveFile");

	UOLEngine_LoadMostRecentSaveFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.LoadCurrentSaveFile
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::LoadCurrentSaveFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.LoadCurrentSaveFile");

	UOLEngine_LoadCurrentSaveFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.RefreshSaveFiles
// (Native, Public)

void UOLEngine::RefreshSaveFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.RefreshSaveFiles");

	UOLEngine_RefreshSaveFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.DeleteSaveFile
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOLEngine::DeleteSaveFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.DeleteSaveFile");

	UOLEngine_DeleteSaveFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.LoadSaveFile
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::LoadSaveFile(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.LoadSaveFile");

	UOLEngine_LoadSaveFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.DebugLoadGame
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOLEngine::DebugLoadGame(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.DebugLoadGame");

	UOLEngine_DebugLoadGame_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.DebugSaveGame
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOLEngine::DebugSaveGame(const struct FString& Filename)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.DebugSaveGame");

	UOLEngine_DebugSaveGame_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.HasValidSaveGame
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::HasValidSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.HasValidSaveGame");

	UOLEngine_HasValidSaveGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.SaveAllCheckpoints
// (Native, Public)

void UOLEngine::SaveAllCheckpoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.SaveAllCheckpoints");

	UOLEngine_SaveAllCheckpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.SaveCheckpointImmediate
// (Native, Public)
// Parameters:
// struct FName                   CheckpointName                 (Parm)

void UOLEngine::SaveCheckpointImmediate(const struct FName& CheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.SaveCheckpointImmediate");

	UOLEngine_SaveCheckpointImmediate_Params params;
	params.CheckpointName = CheckpointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.SaveCheckpoint
// (Native, Public)
// Parameters:
// struct FName                   CheckpointName                 (Parm)
// bool                           bSaveToDisk                    (Parm)

void UOLEngine::SaveCheckpoint(const struct FName& CheckpointName, bool bSaveToDisk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.SaveCheckpoint");

	UOLEngine_SaveCheckpoint_Params params;
	params.CheckpointName = CheckpointName;
	params.bSaveToDisk = bSaveToDisk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.StartCurrentCheckpoint
// (Native, Public)

void UOLEngine::StartCurrentCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.StartCurrentCheckpoint");

	UOLEngine_StartCurrentCheckpoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.SelectAndLoadGame
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)

void UOLEngine::SelectAndLoadGame(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.SelectAndLoadGame");

	UOLEngine_SelectAndLoadGame_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.NativeSelectAndLoadGame
// (Native, Public)

void UOLEngine::NativeSelectAndLoadGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.NativeSelectAndLoadGame");

	UOLEngine_NativeSelectAndLoadGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.SelectSaveLocation
// (Defined, Public)
// Parameters:
// struct FString                 startCP                        (Parm, NeedCtorLink)
// struct FScriptDelegate         Callback                       (Parm, NeedCtorLink)

void UOLEngine::SelectSaveLocation(const struct FString& startCP, const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.SelectSaveLocation");

	UOLEngine_SelectSaveLocation_Params params;
	params.startCP = startCP;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.NativeSelectSaveLocation
// (Native, Public)
// Parameters:
// struct FString                 startCP                        (Parm, NeedCtorLink)

void UOLEngine::NativeSelectSaveLocation(const struct FString& startCP)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.NativeSelectSaveLocation");

	UOLEngine_NativeSelectSaveLocation_Params params;
	params.startCP = startCP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.FinishedSaveDataDialog
// (Defined, Event, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLEngine::FinishedSaveDataDialog(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.FinishedSaveDataDialog");

	UOLEngine_FinishedSaveDataDialog_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.SaveDataDialogDoneCallback
// (Public, Delegate)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLEngine::SaveDataDialogDoneCallback(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.SaveDataDialogDoneCallback");

	UOLEngine_SaveDataDialogDoneCallback_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEngine.UsingFixedSaveLocation
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::UsingFixedSaveLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.UsingFixedSaveLocation");

	UOLEngine_UsingFixedSaveLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.TryStartDLCGame
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::TryStartDLCGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.TryStartDLCGame");

	UOLEngine_TryStartDLCGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.ShouldShowNewDLCGame
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::ShouldShowNewDLCGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.ShouldShowNewDLCGame");

	UOLEngine_ShouldShowNewDLCGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.RefreshDLC
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::RefreshDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.RefreshDLC");

	UOLEngine_RefreshDLC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.CheckReloadForDLC
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEngine::CheckReloadForDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.CheckReloadForDLC");

	UOLEngine_CheckReloadForDLC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEngine.RestartPlayer
// (Defined, Event, Public)
// Parameters:
// class AOLPlayerController*     OLPC                           (Parm)

void UOLEngine::RestartPlayer(class AOLPlayerController* OLPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEngine.RestartPlayer");

	UOLEngine_RestartPlayer_Params params;
	params.OLPC = OLPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCheckpointSave.CheckpointIsEmpty
// (Final, Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLCheckpointSave::CheckpointIsEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCheckpointSave.CheckpointIsEmpty");

	UOLCheckpointSave_CheckpointIsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLConsole.InputKey
// (Defined, HasOptionalParms, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   Key                            (Parm)
// TEnumAsByte<EInputEvent>       Event                          (Parm)
// float                          AmountDepressed                (OptionalParm, Parm)
// bool                           bGamepad                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLConsole::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLConsole.InputKey");

	UOLConsole_InputKey_Params params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLConsole.AddCustomCommandsToAutoComplete
// (Native, Public)

void UOLConsole::AddCustomCommandsToAutoComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLConsole.AddCustomCommandsToAutoComplete");

	UOLConsole_AddCustomCommandsToAutoComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDarknessVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLDarknessVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDarknessVolume.OnToggle");

	AOLDarknessVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDLCManager.FindAndInstallDLC
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLDLCManager::FindAndInstallDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDLCManager.FindAndInstallDLC");

	UOLDLCManager_FindAndInstallDLC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDoor.BreakDoor
// (Defined, Event, Public)
// Parameters:
// class AOLPawn*                 Breaker                        (Parm)
// bool                           bReversed                      (Parm)

void AOLDoor::BreakDoor(class AOLPawn* Breaker, bool bReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.BreakDoor");

	AOLDoor_BreakDoor_Params params;
	params.Breaker = Breaker;
	params.bReversed = bReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.BashDoor
// (Defined, Event, Public)
// Parameters:
// bool                           bReversed                      (Parm)

void AOLDoor::BashDoor(bool bReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.BashDoor");

	AOLDoor_BashDoor_Params params;
	params.bReversed = bReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.ShouldBreak
// (Defined, Event, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLDoor::ShouldBreak(class AOLBot* Bot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.ShouldBreak");

	AOLDoor_ShouldBreak_Params params;
	params.Bot = Bot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDoor.OnDestroy
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Destroy*         Action                         (Parm)

void AOLDoor::OnDestroy(class USeqAct_Destroy* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.OnDestroy");

	AOLDoor_OnDestroy_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.SoftDestroy
// (Native, Public)

void AOLDoor::SoftDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.SoftDestroy");

	AOLDoor_SoftDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.NotifyHandlesToWait
// (Native, Public)

void AOLDoor::NotifyHandlesToWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.NotifyHandlesToWait");

	AOLDoor_NotifyHandlesToWait_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.NotifyHandlesToRepath
// (Native, Public)

void AOLDoor::NotifyHandlesToRepath()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.NotifyHandlesToRepath");

	AOLDoor_NotifyHandlesToRepath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.GetOpenAngle
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AOLDoor::GetOpenAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.GetOpenAngle");

	AOLDoor_GetOpenAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDoor.TriggerEvent
// (Native, Public)
// Parameters:
// TEnumAsByte<EDoorEventType>    EventType                      (Parm)
// class AOLPawn*                 Triggerer                      (Parm)

void AOLDoor::TriggerEvent(TEnumAsByte<EDoorEventType> EventType, class AOLPawn* Triggerer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.TriggerEvent");

	AOLDoor_TriggerEvent_Params params;
	params.EventType = EventType;
	params.Triggerer = Triggerer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.TriggerBreakDoorCameraShake
// (Native, Public)

void AOLDoor::TriggerBreakDoorCameraShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.TriggerBreakDoorCameraShake");

	AOLDoor_TriggerBreakDoorCameraShake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.StopShaking
// (Native, Public)

void AOLDoor::StopShaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.StopShaking");

	AOLDoor_StopShaking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.StartShaking
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FDoorShakeData          ShakeParams                    (Parm)
// bool                           bSwitchToBreakingMesh          (OptionalParm, Parm)
// bool                           bReversed                      (OptionalParm, Parm)
// bool                           bFromAI                        (OptionalParm, Parm)

void AOLDoor::StartShaking(const struct FDoorShakeData& ShakeParams, bool bSwitchToBreakingMesh, bool bReversed, bool bFromAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.StartShaking");

	AOLDoor_StartShaking_Params params;
	params.ShakeParams = ShakeParams;
	params.bSwitchToBreakingMesh = bSwitchToBreakingMesh;
	params.bReversed = bReversed;
	params.bFromAI = bFromAI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.IsBroken
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLDoor::IsBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.IsBroken");

	AOLDoor_IsBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLDoor.UnregisterNavmeshObstacle
// (Final, Native, Public)

void AOLDoor::UnregisterNavmeshObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.UnregisterNavmeshObstacle");

	AOLDoor_UnregisterNavmeshObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.RegisterNavMeshObstacle
// (Final, Native, Public)

void AOLDoor::RegisterNavMeshObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.RegisterNavMeshObstacle");

	AOLDoor_RegisterNavMeshObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLDoor.ScriptGetCenterLocation
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AOLDoor::ScriptGetCenterLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLDoor.ScriptGetCenterLocation");

	AOLDoor_ScriptGetCenterLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLElectrifiedVolume.Touch
// (Defined, Simulated, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// class UPrimitiveComponent*     OtherComp                      (Parm, EditInline)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLElectrifiedVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLElectrifiedVolume.Touch");

	AOLElectrifiedVolume_Touch_Params params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLElectrifiedVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLElectrifiedVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLElectrifiedVolume.OnToggle");

	AOLElectrifiedVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLElectrifiedWaterVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLElectrifiedWaterVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLElectrifiedWaterVolume.OnToggle");

	AOLElectrifiedWaterVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFloorMaterialVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLFloorMaterialVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFloorMaterialVolume.OnToggle");

	AOLFloorMaterialVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.SetFXForEnemyPawn
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            EnemyPawn                      (Parm)

void UOLFXManager::SetFXForEnemyPawn(class AOLEnemyPawn* EnemyPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.SetFXForEnemyPawn");

	UOLFXManager_SetFXForEnemyPawn_Params params;
	params.EnemyPawn = EnemyPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.DeactivateNightVisionEffect
// (Native, Public)

void UOLFXManager::DeactivateNightVisionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.DeactivateNightVisionEffect");

	UOLFXManager_DeactivateNightVisionEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.ActivateCamcorderEffect
// (Native, Public)

void UOLFXManager::ActivateCamcorderEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.ActivateCamcorderEffect");

	UOLFXManager_ActivateCamcorderEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.ActivateNightVisionEffect
// (Native, Public)
// Parameters:
// bool                           bPowered                       (Parm)

void UOLFXManager::ActivateNightVisionEffect(bool bPowered)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.ActivateNightVisionEffect");

	UOLFXManager_ActivateNightVisionEffect_Params params;
	params.bPowered = bPowered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.SetPPSFromScript
// (Native, Public)
// Parameters:
// TEnumAsByte<EPPSMode>          newPPS                         (Parm)

void UOLFXManager::SetPPSFromScript(TEnumAsByte<EPPSMode> newPPS)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.SetPPSFromScript");

	UOLFXManager_SetPPSFromScript_Params params;
	params.newPPS = newPPS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLFXManager.GetFXManager
// (Native, Static, Public)
// Parameters:
// class UOLFXManager*            ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLFXManager* UOLFXManager::STATIC_GetFXManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFXManager.GetFXManager");

	UOLFXManager_GetFXManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.ClearPause
// (Defined, Event, Public)

void AOLGame::ClearPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.ClearPause");

	AOLGame_ClearPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.SetPause
// (Defined, HasOptionalParms, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// struct FScriptDelegate         CanUnpauseDelegate             (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::SetPause(class APlayerController* PC, const struct FScriptDelegate& CanUnpauseDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.SetPause");

	AOLGame_SetPause_Params params;
	params.PC = PC;
	params.CanUnpauseDelegate = CanUnpauseDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.HandleUnpaused
// (Native, Public)

void AOLGame::HandleUnpaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.HandleUnpaused");

	AOLGame_HandleUnpaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.HandlePaused
// (Native, Public)

void AOLGame::HandlePaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.HandlePaused");

	AOLGame_HandlePaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.SetGameSpeed
// (Defined, Public)
// Parameters:
// float                          T                              (Parm)

void AOLGame::SetGameSpeed(float T)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.SetGameSpeed");

	AOLGame_SetGameSpeed_Params params;
	params.T = T;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.TravelToStartupMap
// (Defined, Event, Public)

void AOLGame::TravelToStartupMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.TravelToStartupMap");

	AOLGame_TravelToStartupMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.RestartPlayer
// (Defined, Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)

void AOLGame::RestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.RestartPlayer");

	AOLGame_RestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.UpdateGameType
// (Native, Public)

void AOLGame::UpdateGameType()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.UpdateGameType");

	AOLGame_UpdateGameType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.OnPlayerSpawned
// (Defined, Event, Public)
// Parameters:
// class AController*             NewPlayer                      (Parm)
// class ANavigationPoint*        StartPoint                     (Parm)

void AOLGame::OnPlayerSpawned(class AController* NewPlayer, class ANavigationPoint* StartPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.OnPlayerSpawned");

	AOLGame_OnPlayerSpawned_Params params;
	params.NewPlayer = NewPlayer;
	params.StartPoint = StartPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGame.FindPlayerStart
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AController*             Player                         (Parm)
// unsigned char                  InTeam                         (OptionalParm, Parm)
// struct FString                 IncomingName                   (OptionalParm, Parm, NeedCtorLink)
// class ANavigationPoint*        ReturnValue                    (Parm, OutParm, ReturnParm)

class ANavigationPoint* AOLGame::FindPlayerStart(class AController* Player, unsigned char InTeam, const struct FString& IncomingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.FindPlayerStart");

	AOLGame_FindPlayerStart_Params params;
	params.Player = Player;
	params.InTeam = InTeam;
	params.IncomingName = IncomingName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.MatchCheckpoint
// (Native, Public)
// Parameters:
// struct FString                 PortalName                     (Parm, NeedCtorLink)
// class AOLCheckpoint*           ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLCheckpoint* AOLGame::MatchCheckpoint(const struct FString& PortalName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.MatchCheckpoint");

	AOLGame_MatchCheckpoint_Params params;
	params.PortalName = PortalName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.AllowCheats
// (Defined, Public)
// Parameters:
// class APlayerController*       P                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::AllowCheats(class APlayerController* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.AllowCheats");

	AOLGame_AllowCheats_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.IsDLCInstalled
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::STATIC_IsDLCInstalled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.IsDLCInstalled");

	AOLGame_IsDLCInstalled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.IsPlayingDLC
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::STATIC_IsPlayingDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.IsPlayingDLC");

	AOLGame_IsPlayingDLC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.IsDemo
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGame::STATIC_IsDemo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.IsDemo");

	AOLGame_IsDemo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGame.SetGameType
// (Defined, Event, Static, Public)
// Parameters:
// struct FString                 MapName                        (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FString                 Portal                         (Parm, NeedCtorLink)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* AOLGame::STATIC_SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGame.SetGameType");

	AOLGame_SetGameType_Params params;
	params.MapName = MapName;
	params.Options = Options;
	params.Portal = Portal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGameplayMarker.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLGameplayMarker::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameplayMarker.OnToggle");

	AOLGameplayMarker_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLScareMoment.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLScareMoment::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLScareMoment.OnToggle");

	AOLScareMoment_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLScareMoment.StopScare
// (Defined, Event, Public)

void AOLScareMoment::StopScare()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLScareMoment.StopScare");

	AOLScareMoment_StopScare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLScareMoment.StartScare
// (Defined, Event, Public)

void AOLScareMoment::StartScare()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLScareMoment.StartScare");

	AOLScareMoment_StartScare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIVisionObstructionVolume.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLAIVisionObstructionVolume::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIVisionObstructionVolume.OnToggle");

	AOLAIVisionObstructionVolume_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSqueezeVolume.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AOLSqueezeVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSqueezeVolume.PostBeginPlay");

	AOLSqueezeVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameStateList.OnPlayerDeath
// (Native, Static, Public)

void AOLGameStateList::STATIC_OnPlayerDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameStateList.OnPlayerDeath");

	AOLGameStateList_OnPlayerDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameStateList.ResetAllGameState
// (Native, Static, Public)

void AOLGameStateList::STATIC_ResetAllGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameStateList.ResetAllGameState");

	AOLGameStateList_ResetAllGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameStateList.DumpGameState
// (Native, Static, Public)

void AOLGameStateList::STATIC_DumpGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameStateList.DumpGameState");

	AOLGameStateList_DumpGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameViewportClient.DrawTransition
// (Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UOLGameViewportClient::DrawTransition(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameViewportClient.DrawTransition");

	UOLGameViewportClient_DrawTransition_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.GamepadConfigChanged
// (Defined, Public)

void AOLHUD::GamepadConfigChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.GamepadConfigChanged");

	AOLHUD_GamepadConfigChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.OnLostFocusPause
// (Defined, Event, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void AOLHUD::OnLostFocusPause(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.OnLostFocusPause");

	AOLHUD_OnLostFocusPause_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowHUDMessages
// (Defined, Public)

void AOLHUD::ShowHUDMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowHUDMessages");

	AOLHUD_ShowHUDMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.HideHUDMessages
// (Defined, Public)

void AOLHUD::HideHUDMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.HideHUDMessages");

	AOLHUD_HideHUDMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowingSubtitle
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::ShowingSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowingSubtitle");

	AOLHUD_ShowingSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.HideSubtitle
// (Defined, Event, Public)

void AOLHUD::HideSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.HideSubtitle");

	AOLHUD_HideSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowSubtitle
// (Defined, Event, Public)
// Parameters:
// struct FString                 MessageText                    (Parm, NeedCtorLink)

void AOLHUD::ShowSubtitle(const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowSubtitle");

	AOLHUD_ShowSubtitle_Params params;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.HideObjective
// (Defined, Event, Public)

void AOLHUD::HideObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.HideObjective");

	AOLHUD_HideObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowObjective
// (Defined, Event, Public)
// Parameters:
// struct FString                 ObjectiveText                  (Parm, NeedCtorLink)

void AOLHUD::ShowObjective(const struct FString& ObjectiveText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowObjective");

	AOLHUD_ShowObjective_Params params;
	params.ObjectiveText = ObjectiveText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.HideMessage
// (Defined, Event, Public)

void AOLHUD::HideMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.HideMessage");

	AOLHUD_HideMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowMessage
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EHUDMessageType>   MessageType                    (Parm)
// struct FString                 MessageText                    (Parm, NeedCtorLink)

void AOLHUD::ShowMessage(TEnumAsByte<EHUDMessageType> MessageType, const struct FString& MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowMessage");

	AOLHUD_ShowMessage_Params params;
	params.MessageType = MessageType;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.HideMenu
// (Defined, Exec, Public)

void AOLHUD::HideMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.HideMenu");

	AOLHUD_HideMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowMenuType
// (Defined, Event, Public)
// Parameters:
// TEnumAsByte<EMenuType>         MenuType                       (Parm)

void AOLHUD::ShowMenuType(TEnumAsByte<EMenuType> MenuType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowMenuType");

	AOLHUD_ShowMenuType_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.PostSoundEventEnter
// (Native, Public)

void AOLHUD::PostSoundEventEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.PostSoundEventEnter");

	AOLHUD_PostSoundEventEnter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.PostSoundEventSelect
// (Native, Public)

void AOLHUD::PostSoundEventSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.PostSoundEventSelect");

	AOLHUD_PostSoundEventSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.MuteSelectSound
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          MuteTime                       (OptionalParm, Parm)

void AOLHUD::MuteSelectSound(float MuteTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.MuteSelectSound");

	AOLHUD_MuteSelectSound_Params params;
	params.MuteTime = MuteTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.CanShowSubMenu
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::CanShowSubMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.CanShowSubMenu");

	AOLHUD_CanShowSubMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.ShowEvidenceMenu
// (Defined, Exec, Public)

void AOLHUD::ShowEvidenceMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowEvidenceMenu");

	AOLHUD_ShowEvidenceMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowRecordingMenu
// (Defined, Exec, Public)

void AOLHUD::ShowRecordingMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowRecordingMenu");

	AOLHUD_ShowRecordingMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowTabMenu
// (Defined, Exec, Public)

void AOLHUD::ShowTabMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowTabMenu");

	AOLHUD_ShowTabMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowMenu
// (Defined, Exec, Public)

void AOLHUD::ShowMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowMenu");

	AOLHUD_ShowMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowMainMenu
// (Defined, Exec, Public)

void AOLHUD::ShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowMainMenu");

	AOLHUD_ShowMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ReloadMenu
// (Defined, Exec, Public)

void AOLHUD::ReloadMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ReloadMenu");

	AOLHUD_ReloadMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.IsAMenuOpen
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsAMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsAMenuOpen");

	AOLHUD_IsAMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.IsInCreditsMenu
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsInCreditsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsInCreditsMenu");

	AOLHUD_IsInCreditsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.IsOnMainMenuScreen
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsOnMainMenuScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsOnMainMenuScreen");

	AOLHUD_IsOnMainMenuScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.IsMainMenuOpen
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsMainMenuOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsMainMenuOpen");

	AOLHUD_IsMainMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.IsInPauseMenu
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::IsInPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.IsInPauseMenu");

	AOLHUD_IsInPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.CanUnpauseInPauseMenu
// (Defined, Public, Delegate)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::CanUnpauseInPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.CanUnpauseInPauseMenu");

	AOLHUD_CanUnpauseInPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.ShowDebugInfo
// (Defined, Public, HasOutParms)
// Parameters:
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLHUD::ShowDebugInfo(float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowDebugInfo");

	AOLHUD_ShowDebugInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLHUD.DebugNextAI
// (Defined, Exec, Public)

void AOLHUD::DebugNextAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.DebugNextAI");

	AOLHUD_DebugNextAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.NotifyGameSaved
// (Native, Public)

void AOLHUD::NotifyGameSaved()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.NotifyGameSaved");

	AOLHUD_NotifyGameSaved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.SetGammaCalibrationActive
// (Native, Public)
// Parameters:
// bool                           bActive                        (Parm)

void AOLHUD::SetGammaCalibrationActive(bool bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.SetGammaCalibrationActive");

	AOLHUD_SetGammaCalibrationActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHUD.ShowingFullScreenOverlay
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHUD::ShowingFullScreenOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.ShowingFullScreenOverlay");

	AOLHUD_ShowingFullScreenOverlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHUD.Draw
// (Native, Public)

void AOLHUD::Draw()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHUD.Draw");

	AOLHUD_Draw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLInventoryManager.ClearGameplayItems
// (Native, Public)

void UOLInventoryManager::ClearGameplayItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLInventoryManager.ClearGameplayItems");

	UOLInventoryManager_ClearGameplayItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLInventoryManager.ClearUnsavedBatteries
// (Native, Public)

void UOLInventoryManager::ClearUnsavedBatteries()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLInventoryManager.ClearUnsavedBatteries");

	UOLInventoryManager_ClearUnsavedBatteries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLMainHud.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLMainHud::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLMainHud.WidgetInitialized");

	UOLMainHud_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.DrawDebugAnimNode
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FName                   NodeName                       (Parm)
// class UAnimNode*               aNode                          (Parm)
// TArray<class UAnimNode*>       visitedNodes                   (Parm, OutParm, NeedCtorLink)
// class UCanvas*                 aCanvas                        (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)
// float                          XL                             (Parm)
// float                          XBasePos                       (Parm)
// float                          XOffset                        (Parm)

void AOLPawn::STATIC_DrawDebugAnimNode(const struct FName& NodeName, class UAnimNode* aNode, class UCanvas* aCanvas, float XL, float XBasePos, float XOffset, TArray<class UAnimNode*>* visitedNodes, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.DrawDebugAnimNode");

	AOLPawn_DrawDebugAnimNode_Params params;
	params.NodeName = NodeName;
	params.aNode = aNode;
	params.aCanvas = aCanvas;
	params.XL = XL;
	params.XBasePos = XBasePos;
	params.XOffset = XOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (visitedNodes != nullptr)
		*visitedNodes = params.visitedNodes;
	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLPawn.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLPawn::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.DisplayDebug");

	AOLPawn_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLPawn.GetFutureDestination
// (Native, Public)
// Parameters:
// class AOLPawn*                 Agent                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AOLPawn::GetFutureDestination(class AOLPawn* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.GetFutureDestination");

	AOLPawn_GetFutureDestination_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.IsFirstPerson
// (Defined, Simulated, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPawn::IsFirstPerson()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.IsFirstPerson");

	AOLPawn_IsFirstPerson_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.PlayLanded
// (Defined, Public)
// Parameters:
// float                          ImpactVel                      (Parm)

void AOLPawn::PlayLanded(float ImpactVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PlayLanded");

	AOLPawn_PlayLanded_Params params;
	params.ImpactVel = ImpactVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.Landed
// (Defined, Event, Public, HasDefaults)
// Parameters:
// struct FVector                 HitNormal                      (Parm)
// class AActor*                  FloorActor                     (Parm)

void AOLPawn::Landed(const struct FVector& HitNormal, class AActor* FloorActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.Landed");

	AOLPawn_Landed_Params params;
	params.HitNormal = HitNormal;
	params.FloorActor = FloorActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.Destroyed
// (Defined, Simulated, Event, Public)

void AOLPawn::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.Destroyed");

	AOLPawn_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.MAT_BeginAIGroup
// (Defined, Event, Public)
// Parameters:
// struct FVector                 StartLoc                       (Parm)
// struct FRotator                StartRot                       (Parm)
// float                          BlendTime                      (Parm)

void AOLPawn::MAT_BeginAIGroup(const struct FVector& StartLoc, const struct FRotator& StartRot, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.MAT_BeginAIGroup");

	AOLPawn_MAT_BeginAIGroup_Params params;
	params.StartLoc = StartLoc;
	params.StartRot = StartRot;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.StartMatinee
// (Native, Public)
// Parameters:
// struct FVector                 StartLoc                       (Parm)
// struct FRotator                StartRot                       (Parm)
// float                          BlendTime                      (Parm)

void AOLPawn::StartMatinee(const struct FVector& StartLoc, const struct FRotator& StartRot, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.StartMatinee");

	AOLPawn_StartMatinee_Params params;
	params.StartLoc = StartLoc;
	params.StartRot = StartRot;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.PostInitAnimTree
// (Defined, Simulated, Event, Public)
// Parameters:
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)

void AOLPawn::PostInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PostInitAnimTree");

	AOLPawn_PostInitAnimTree_Params params;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.PlayVOLine
// (Native, HasOptionalParms, Public)
// Parameters:
// class UAkEvent*                LineToPlay                     (Parm)
// struct FName                   BoneName                       (OptionalParm, Parm)

void AOLPawn::PlayVOLine(class UAkEvent* LineToPlay, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PlayVOLine");

	AOLPawn_PlayVOLine_Params params;
	params.LineToPlay = LineToPlay;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.PlayJumpingSound
// (Public)

void AOLPawn::PlayJumpingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PlayJumpingSound");

	AOLPawn_PlayJumpingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.PlayLandingSound
// (Public)

void AOLPawn::PlayLandingSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PlayLandingSound");

	AOLPawn_PlayLandingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.GetMaterialBelowFeet
// (Native, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName AOLPawn::GetMaterialBelowFeet()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.GetMaterialBelowFeet");

	AOLPawn_GetMaterialBelowFeet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.ClientRestart
// (Defined, Simulated, Public, HasDefaults)

void AOLPawn::ClientRestart()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.ClientRestart");

	AOLPawn_ClientRestart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.PlayFootStepSound
// (Defined, Simulated, Event, Public)
// Parameters:
// int                            FootDown                       (Parm)
// class UAnimNotify_Footstep*    footstepNotify                 (Parm)

void AOLPawn::PlayFootStepSound(int FootDown, class UAnimNotify_Footstep* footstepNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PlayFootStepSound");

	AOLPawn_PlayFootStepSound_Params params;
	params.FootDown = FootDown;
	params.footstepNotify = footstepNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.FaceRotation
// (Defined, Simulated, Public)
// Parameters:
// struct FRotator                NewRotation                    (Parm)
// float                          DeltaTime                      (Parm)

void AOLPawn::FaceRotation(const struct FRotator& NewRotation, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.FaceRotation");

	AOLPawn_FaceRotation_Params params;
	params.NewRotation = NewRotation;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.GetEyeHeight
// (Defined, Simulated, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AOLPawn::GetEyeHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.GetEyeHeight");

	AOLPawn_GetEyeHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.GetPawnAmbientSound
// (Defined, Simulated, Public)
// Parameters:
// class USoundCue*               ReturnValue                    (Parm, OutParm, ReturnParm)

class USoundCue* AOLPawn::GetPawnAmbientSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.GetPawnAmbientSound");

	AOLPawn_GetPawnAmbientSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.SetPawnAmbientSound
// (Defined, Simulated, Public)
// Parameters:
// class USoundCue*               NewAmbientSound                (Parm)

void AOLPawn::SetPawnAmbientSound(class USoundCue* NewAmbientSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.SetPawnAmbientSound");

	AOLPawn_SetPawnAmbientSound_Params params;
	params.NewAmbientSound = NewAmbientSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.Died
// (Defined, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPawn::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.Died");

	AOLPawn_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPawn.EncroachedBy
// (Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AOLPawn::EncroachedBy(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.EncroachedBy");

	AOLPawn_EncroachedBy_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.SetPawnRBChannels
// (Defined, Simulated, Public)
// Parameters:
// bool                           bRagdollMode                   (Parm)

void AOLPawn::SetPawnRBChannels(bool bRagdollMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.SetPawnRBChannels");

	AOLPawn_SetPawnRBChannels_Params params;
	params.bRagdollMode = bRagdollMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.OnAnimEnd
// (Defined, Simulated, Event, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AOLPawn::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.OnAnimEnd");

	AOLPawn_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.ReattachMesh
// (Defined, Simulated, Public)

void AOLPawn::ReattachMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.ReattachMesh");

	AOLPawn_ReattachMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.UpdateShadowSettings
// (Defined, Simulated, Public)
// Parameters:
// bool                           bWantShadow                    (Parm)

void AOLPawn::UpdateShadowSettings(bool bWantShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.UpdateShadowSettings");

	AOLPawn_UpdateShadowSettings_Params params;
	params.bWantShadow = bWantShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.PostBeginPlay
// (Defined, Simulated, Public, HasDefaults)

void AOLPawn::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.PostBeginPlay");

	AOLPawn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.ProceduralAdjustNotify
// (Native, Public)
// Parameters:
// float                          Duration                       (Parm)

void AOLPawn::ProceduralAdjustNotify(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.ProceduralAdjustNotify");

	AOLPawn_ProceduralAdjustNotify_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.RestoreCollisionSizeNotify
// (Native, Public)

void AOLPawn::RestoreCollisionSizeNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.RestoreCollisionSizeNotify");

	AOLPawn_RestoreCollisionSizeNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.ChangeCollisionSizeNotify
// (Native, Public)

void AOLPawn::ChangeCollisionSizeNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.ChangeCollisionSizeNotify");

	AOLPawn_ChangeCollisionSizeNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.MoveInterruptibleNotify
// (Native, Public)

void AOLPawn::MoveInterruptibleNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.MoveInterruptibleNotify");

	AOLPawn_MoveInterruptibleNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.NativePostBeginPlay
// (Native, Public)

void AOLPawn::NativePostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.NativePostBeginPlay");

	AOLPawn_NativePostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.NativeOnAnimEnd
// (Native, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AOLPawn::NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.NativeOnAnimEnd");

	AOLPawn_NativeOnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.StartSpecialMove
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<ESpecialMoveType>  moveType                       (Parm)
// struct FVector                 targetPosition                 (OptionalParm, Parm)
// struct FVector                 TargetDirection                (OptionalParm, Parm)
// TEnumAsByte<EAdjustPositionTargetType> TargetType                     (OptionalParm, Parm)

void AOLPawn::StartSpecialMove(TEnumAsByte<ESpecialMoveType> moveType, const struct FVector& targetPosition, const struct FVector& TargetDirection, TEnumAsByte<EAdjustPositionTargetType> TargetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.StartSpecialMove");

	AOLPawn_StartSpecialMove_Params params;
	params.moveType = moveType;
	params.targetPosition = targetPosition;
	params.TargetDirection = TargetDirection;
	params.TargetType = TargetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPawn.IsSpecialMoveCompleted
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLPawn::IsSpecialMoveCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPawn.IsSpecialMoveCompleted");

	AOLPawn_IsSpecialMoveCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.UpdateDifficultyBasedValues
// (Defined, Public)

void AOLHero::UpdateDifficultyBasedValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.UpdateDifficultyBasedValues");

	AOLHero_UpdateDifficultyBasedValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.OutsideWorldBounds
// (Defined, Singular, Simulated, Event, Public)

void AOLHero::OutsideWorldBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.OutsideWorldBounds");

	AOLHero_OutsideWorldBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.FellOutOfWorld
// (Defined, Simulated, Event, Public)
// Parameters:
// class UClass*                  dmgType                        (Parm)

void AOLHero::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.FellOutOfWorld");

	AOLHero_FellOutOfWorld_Params params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.RespawnHero
// (Defined, Event, Public)

void AOLHero::RespawnHero()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.RespawnHero");

	AOLHero_RespawnHero_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.PlayFootStepSound
// (Defined, Simulated, Event, Public)
// Parameters:
// int                            FootDown                       (Parm)
// class UAnimNotify_Footstep*    footstepNotify                 (Parm)

void AOLHero::PlayFootStepSound(int FootDown, class UAnimNotify_Footstep* footstepNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PlayFootStepSound");

	AOLHero_PlayFootStepSound_Params params;
	params.FootDown = FootDown;
	params.footstepNotify = footstepNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.IsInMainMenu
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::IsInMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.IsInMainMenu");

	AOLHero_IsInMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.SpawnBloodFootstepDecal
// (Defined, Public, HasDefaults)
// Parameters:
// bool                           bLeftFoot                      (Parm)
// float                          Alpha                          (Parm)

void AOLHero::SpawnBloodFootstepDecal(bool bLeftFoot, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.SpawnBloodFootstepDecal");

	AOLHero_SpawnBloodFootstepDecal_Params params;
	params.bLeftFoot = bLeftFoot;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.GetFootstepDecalTransform
// (Native, Public, HasOutParms)
// Parameters:
// bool                           bLeftFoot                      (Parm)
// struct FVector                 DecalLocation                  (Parm, OutParm)
// struct FRotator                DecalRotation                  (Parm, OutParm)

void AOLHero::GetFootstepDecalTransform(bool bLeftFoot, struct FVector* DecalLocation, struct FRotator* DecalRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GetFootstepDecalTransform");

	AOLHero_GetFootstepDecalTransform_Params params;
	params.bLeftFoot = bLeftFoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DecalLocation != nullptr)
		*DecalLocation = params.DecalLocation;
	if (DecalRotation != nullptr)
		*DecalRotation = params.DecalRotation;
}


// Function OLGame.OLHero.SetMeshVisibility
// (Defined, Simulated, Public)
// Parameters:
// bool                           bVisible                       (Parm)

void AOLHero::SetMeshVisibility(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.SetMeshVisibility");

	AOLHero_SetMeshVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.EndViewTarget
// (Defined, Simulated, Event, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AOLHero::EndViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.EndViewTarget");

	AOLHero_EndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BecomeViewTarget
// (Defined, Simulated, Event, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)

void AOLHero::BecomeViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BecomeViewTarget");

	AOLHero_BecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.PhysicsVolumeChange
// (Defined, Event, Public)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm)

void AOLHero::PhysicsVolumeChange(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PhysicsVolumeChange");

	AOLHero_PhysicsVolumeChange_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.OnEnterDeepWater
// (Native, Public)
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm)

void AOLHero::OnEnterDeepWater(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.OnEnterDeepWater");

	AOLHero_OnEnterDeepWater_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.PlayLanded
// (Defined, Public)
// Parameters:
// float                          ImpactVel                      (Parm)

void AOLHero::PlayLanded(float ImpactVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PlayLanded");

	AOLHero_PlayLanded_Params params;
	params.ImpactVel = ImpactVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativePlayLanded
// (Native, Public)
// Parameters:
// float                          ImpactVel                      (Parm)

void AOLHero::NativePlayLanded(float ImpactVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativePlayLanded");

	AOLHero_NativePlayLanded_Params params;
	params.ImpactVel = ImpactVel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.TakeFallingDamage
// (Defined, Public)

void AOLHero::TakeFallingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TakeFallingDamage");

	AOLHero_TakeFallingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.HealDamage
// (Defined, Event, Public)
// Parameters:
// int                            Amount                         (Parm)
// class AController*             Healer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::HealDamage(int Amount, class AController* Healer, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.HealDamage");

	AOLHero_HealDamage_Params params;
	params.Amount = Amount;
	params.Healer = Healer;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TakeDamage
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            Damage                         (Parm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// struct FVector                 Momentum                       (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FTraceHitInfo           HitInfo                        (OptionalParm, Parm)
// class AActor*                  DamageCauser                   (OptionalParm, Parm)

void AOLHero::TakeDamage(int Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TakeDamage");

	AOLHero_TakeDamage_Params params;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLHero::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.DisplayDebug");

	AOLHero_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLHero.PostInitAnimTree
// (Defined, Simulated, Event, Public)
// Parameters:
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)

void AOLHero::PostInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PostInitAnimTree");

	AOLHero_PostInitAnimTree_Params params;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.PossessedBy
// (Defined, Public)
// Parameters:
// class AController*             C                              (Parm)
// bool                           bVehicleTransition             (Parm)

void AOLHero::PossessedBy(class AController* C, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PossessedBy");

	AOLHero_PossessedBy_Params params;
	params.C = C;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.RemoveEnemyFromAIPositionPawns
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            EnemyPawn                      (Parm)

void AOLHero::RemoveEnemyFromAIPositionPawns(class AOLEnemyPawn* EnemyPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.RemoveEnemyFromAIPositionPawns");

	AOLHero_RemoveEnemyFromAIPositionPawns_Params params;
	params.EnemyPawn = EnemyPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.GetGrabUnderDestination
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            Enemy                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AOLHero::GetGrabUnderDestination(class AOLEnemyPawn* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GetGrabUnderDestination");

	AOLHero_GetGrabUnderDestination_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.GetFutureDestination
// (Native, Public)
// Parameters:
// class AOLPawn*                 Agent                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AOLHero::GetFutureDestination(class AOLPawn* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GetFutureDestination");

	AOLHero_GetFutureDestination_Params params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.QuickHeroTest
// (Exec, Native, Public)

void AOLHero::QuickHeroTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.QuickHeroTest");

	AOLHero_QuickHeroTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.CanBeGrabbedUnder
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::CanBeGrabbedUnder()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CanBeGrabbedUnder");

	AOLHero_CanBeGrabbedUnder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.CanBeFatalitized
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::CanBeFatalitized()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CanBeFatalitized");

	AOLHero_CanBeFatalitized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.CanBeAttacked
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::CanBeAttacked()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CanBeAttacked");

	AOLHero_CanBeAttacked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.IsBarefeet
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::IsBarefeet()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.IsBarefeet");

	AOLHero_IsBarefeet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.IsInLocker
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::IsInLocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.IsInLocker");

	AOLHero_IsInLocker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.AttachCameraEffect
// (Native, Public)
// Parameters:
// class UParticleSystem*         ParticleEffectTemplate         (Parm)
// float                          Duration                       (Parm)
// float                          PlaneDist                      (Parm)

void AOLHero::AttachCameraEffect(class UParticleSystem* ParticleEffectTemplate, float Duration, float PlaneDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.AttachCameraEffect");

	AOLHero_AttachCameraEffect_Params params;
	params.ParticleEffectTemplate = ParticleEffectTemplate;
	params.Duration = Duration;
	params.PlaneDist = PlaneDist;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.SetCamcorderVisibleNotify
// (Native, Public)

void AOLHero::SetCamcorderVisibleNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.SetCamcorderVisibleNotify");

	AOLHero_SetCamcorderVisibleNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.ResetNeckOffsetNotify
// (Native, Public)

void AOLHero::ResetNeckOffsetNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ResetNeckOffsetNotify");

	AOLHero_ResetNeckOffsetNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BloodOnScreenNotify
// (Native, Public)

void AOLHero::BloodOnScreenNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BloodOnScreenNotify");

	AOLHero_BloodOnScreenNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.DecapitatedNotify
// (Native, Public)

void AOLHero::DecapitatedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.DecapitatedNotify");

	AOLHero_DecapitatedNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.DieNotify
// (Native, Public)

void AOLHero::DieNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.DieNotify");

	AOLHero_DieNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.OverrideCameraSettingsNotify
// (Native, Public)
// Parameters:
// class UOLAnimNotify_OverrideCameraParams* camParamsNotify                (Parm)

void AOLHero::OverrideCameraSettingsNotify(class UOLAnimNotify_OverrideCameraParams* camParamsNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.OverrideCameraSettingsNotify");

	AOLHero_OverrideCameraSettingsNotify_Params params;
	params.camParamsNotify = camParamsNotify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.BatteriesReloadedNotify
// (Native, Public)

void AOLHero::BatteriesReloadedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.BatteriesReloadedNotify");

	AOLHero_BatteriesReloadedNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.CamcorderLoweredNotify
// (Native, Public)

void AOLHero::CamcorderLoweredNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CamcorderLoweredNotify");

	AOLHero_CamcorderLoweredNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.CamcorderRaisedNotify
// (Native, Public)

void AOLHero::CamcorderRaisedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CamcorderRaisedNotify");

	AOLHero_CamcorderRaisedNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.CamcorderAvailableNotify
// (Native, Public)

void AOLHero::CamcorderAvailableNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CamcorderAvailableNotify");

	AOLHero_CamcorderAvailableNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.DoorAnimNotify
// (Native, Public)

void AOLHero::DoorAnimNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.DoorAnimNotify");

	AOLHero_DoorAnimNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.PickupNotify
// (Native, Public)

void AOLHero::PickupNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.PickupNotify");

	AOLHero_PickupNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.ReactToHit
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          hitStrength                    (Parm)
// struct FVector                 hitDirection                   (Parm)
// bool                           bForceFullPower                (OptionalParm, Parm)

void AOLHero::ReactToHit(float hitStrength, const struct FVector& hitDirection, bool bForceFullPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ReactToHit");

	AOLHero_ReactToHit_Params params;
	params.hitStrength = hitStrength;
	params.hitDirection = hitDirection;
	params.bForceFullPower = bForceFullPower;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.TryKillInLocker
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            attacker                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryKillInLocker(class AOLEnemyPawn* attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryKillInLocker");

	AOLHero_TryKillInLocker_Params params;
	params.attacker = attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryKillHero
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            attacker                       (Parm)
// struct FVector                 enemyStartLocation             (Parm)
// struct FVector                 Direction                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryKillHero(class AOLEnemyPawn* attacker, const struct FVector& enemyStartLocation, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryKillHero");

	AOLHero_TryKillHero_Params params;
	params.attacker = attacker;
	params.enemyStartLocation = enemyStartLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryDecapitate
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            attacker                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryDecapitate(class AOLEnemyPawn* attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryDecapitate");

	AOLHero_TryDecapitate_Params params;
	params.attacker = attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryGrabFromUnder
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            attacker                       (Parm)
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 AttackStartLocation            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryGrabFromUnder(class AOLEnemyPawn* attacker, const struct FVector& StartLocation, const struct FVector& AttackStartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryGrabFromUnder");

	AOLHero_TryGrabFromUnder_Params params;
	params.attacker = attacker;
	params.StartLocation = StartLocation;
	params.AttackStartLocation = AttackStartLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryThrowPlayer
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            attacker                       (Parm)
// float                          ThrowRotation                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryThrowPlayer(class AOLEnemyPawn* attacker, float ThrowRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryThrowPlayer");

	AOLHero_TryThrowPlayer_Params params;
	params.attacker = attacker;
	params.ThrowRotation = ThrowRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryGrabNormal
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            attacker                       (Parm)
// struct FVector                 StartLocation                  (Parm)
// struct FVector                 AttackStartLocation            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryGrabNormal(class AOLEnemyPawn* attacker, const struct FVector& StartLocation, const struct FVector& AttackStartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryGrabNormal");

	AOLHero_TryGrabNormal_Params params;
	params.attacker = attacker;
	params.StartLocation = StartLocation;
	params.AttackStartLocation = AttackStartLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryGrabFromBed
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            attacker                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryGrabFromBed(class AOLEnemyPawn* attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryGrabFromBed");

	AOLHero_TryGrabFromBed_Params params;
	params.attacker = attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryExitBed
// (Native, Public)
// Parameters:
// struct FVector                 playerIntentDirection          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryExitBed(const struct FVector& playerIntentDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryExitBed");

	AOLHero_TryExitBed_Params params;
	params.playerIntentDirection = playerIntentDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryExitLocker
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryExitLocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryExitLocker");

	AOLHero_TryExitLocker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryGrabFromLocker
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            attacker                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryGrabFromLocker(class AOLEnemyPawn* attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryGrabFromLocker");

	AOLHero_TryGrabFromLocker_Params params;
	params.attacker = attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.CanGrabFromSqueeze
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::CanGrabFromSqueeze()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.CanGrabFromSqueeze");

	AOLHero_CanGrabFromSqueeze_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryGrabFromSqueeze
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            attacker                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryGrabFromSqueeze(class AOLEnemyPawn* attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryGrabFromSqueeze");

	AOLHero_TryGrabFromSqueeze_Params params;
	params.attacker = attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.HeroControlActivated
// (Native, Public)
// Parameters:
// class UOLSeqAct_HeroControl*   heroControlAction              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::HeroControlActivated(class UOLSeqAct_HeroControl* heroControlAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.HeroControlActivated");

	AOLHero_HeroControlActivated_Params params;
	params.heroControlAction = heroControlAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.ExitCinematicMode
// (Native, Public)
// Parameters:
// class USeqAct_ToggleCinematicMode* seqAction                      (Parm)

void AOLHero::ExitCinematicMode(class USeqAct_ToggleCinematicMode* seqAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ExitCinematicMode");

	AOLHero_ExitCinematicMode_Params params;
	params.seqAction = seqAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.EnterCinematicMode
// (Native, Public)
// Parameters:
// class USeqAct_ToggleCinematicMode* seqAction                      (Parm)

void AOLHero::EnterCinematicMode(class USeqAct_ToggleCinematicMode* seqAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.EnterCinematicMode");

	AOLHero_EnterCinematicMode_Params params;
	params.seqAction = seqAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.StartSpecialMove
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<ESpecialMoveType>  moveType                       (Parm)
// struct FVector                 targetPosition                 (OptionalParm, Parm)
// struct FVector                 TargetDirection                (OptionalParm, Parm)
// TEnumAsByte<EAdjustPositionTargetType> TargetType                     (OptionalParm, Parm)

void AOLHero::StartSpecialMove(TEnumAsByte<ESpecialMoveType> moveType, const struct FVector& targetPosition, const struct FVector& TargetDirection, TEnumAsByte<EAdjustPositionTargetType> TargetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.StartSpecialMove");

	AOLHero_StartSpecialMove_Params params;
	params.moveType = moveType;
	params.targetPosition = targetPosition;
	params.TargetDirection = TargetDirection;
	params.TargetType = TargetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.OnPossess
// (Native, Public)

void AOLHero::OnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.OnPossess");

	AOLHero_OnPossess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.ActivateWaterFootstepParticles
// (Native, Public)
// Parameters:
// bool                           bRightFoot                     (Parm)

void AOLHero::ActivateWaterFootstepParticles(bool bRightFoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ActivateWaterFootstepParticles");

	AOLHero_ActivateWaterFootstepParticles_Params params;
	params.bRightFoot = bRightFoot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.TakeElectricDamage
// (Native, Public)
// Parameters:
// int                            Damage                         (Parm)
// float                          Knockback                      (Parm)
// struct FVector                 HitNormal                      (Parm)
// class UAkEvent*                ElectricSoundEvent             (Parm)

void AOLHero::TakeElectricDamage(int Damage, float Knockback, const struct FVector& HitNormal, class UAkEvent* ElectricSoundEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TakeElectricDamage");

	AOLHero_TakeElectricDamage_Params params;
	params.Damage = Damage;
	params.Knockback = Knockback;
	params.HitNormal = HitNormal;
	params.ElectricSoundEvent = ElectricSoundEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativeTakeFallingDamage
// (Native, Public)

void AOLHero::NativeTakeFallingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeTakeFallingDamage");

	AOLHero_NativeTakeFallingDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativeTakeDamage
// (Native, Public)
// Parameters:
// int                            Damage                         (Parm)
// class AController*             InstigatedBy                   (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)

void AOLHero::NativeTakeDamage(int Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeTakeDamage");

	AOLHero_NativeTakeDamage_Params params;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.NativeDisplayDebug
// (Native, Public, HasOutParms)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLHero::NativeDisplayDebug(class UCanvas* Canvas, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativeDisplayDebug");

	AOLHero_NativeDisplayDebug_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLHero.GetCamera
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 out_CamLoc                     (Parm, OutParm)
// struct FRotator                out_CamRot                     (Parm, OutParm)
// float                          out_FOV                        (Parm, OutParm)

void AOLHero::GetCamera(struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GetCamera");

	AOLHero_GetCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;
}


// Function OLGame.OLHero.NativePostBeginPlay
// (Native, Public)

void AOLHero::NativePostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.NativePostBeginPlay");

	AOLHero_NativePostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.ResetAfterTeleport
// (Native, Public)

void AOLHero::ResetAfterTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.ResetAfterTeleport");

	AOLHero_ResetAfterTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.IsRunning
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::IsRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.IsRunning");

	AOLHero_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.TryRun
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLHero::TryRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.TryRun");

	AOLHero_TryRun_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.Walk
// (Native, Public)

void AOLHero::Walk()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.Walk");

	AOLHero_Walk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLHero.GetViewRotation
// (Simulated, Native, Event, Public)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator AOLHero::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GetViewRotation");

	AOLHero_GetViewRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLHero.GetPawnViewLocation
// (Simulated, Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AOLHero::GetPawnViewLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLHero.GetPawnViewLocation");

	AOLHero_GetPawnViewLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPickableObject.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLPickableObject::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPickableObject.OnToggle");

	AOLPickableObject_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCollectiblePickup.PostBeginPlay
// (Defined, Public)

void AOLCollectiblePickup::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCollectiblePickup.PostBeginPlay");

	AOLCollectiblePickup_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLCollectiblePickup.ShouldShowCollectible
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLCollectiblePickup::ShouldShowCollectible()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLCollectiblePickup.ShouldShowCollectible");

	AOLCollectiblePickup_ShouldShowCollectible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGameplayItemPickup.PostBeginPlay
// (Defined, Public)

void AOLGameplayItemPickup::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameplayItemPickup.PostBeginPlay");

	AOLGameplayItemPickup_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGameplayItemPickup.ShouldShowItem
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLGameplayItemPickup::ShouldShowItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGameplayItemPickup.ShouldShowItem");

	AOLGameplayItemPickup_ShouldShowItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerInput.IsKeyPressed
// (Native, Public)
// Parameters:
// struct FName                   Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLPlayerInput::IsKeyPressed(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.IsKeyPressed");

	UOLPlayerInput_IsKeyPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPlayerInput.UnBindNoSave
// (Defined, Event, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)

void UOLPlayerInput::UnBindNoSave(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.UnBindNoSave");

	UOLPlayerInput_UnBindNoSave_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.PreProcessInput
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UOLPlayerInput::PreProcessInput(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.PreProcessInput");

	UOLPlayerInput_PreProcessInput_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StopLeanRight
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::StopLeanRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StopLeanRight");

	UOLPlayerInput_StopLeanRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StopLeanLeft
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::StopLeanLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StopLeanLeft");

	UOLPlayerInput_StopLeanLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StartLeanRight
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::StartLeanRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StartLeanRight");

	UOLPlayerInput_StartLeanRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.StartLeanLeft
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::StartLeanLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.StartLeanLeft");

	UOLPlayerInput_StartLeanLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.ToggleDuck
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::ToggleDuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.ToggleDuck");

	UOLPlayerInput_ToggleDuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.UnDuck
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::UnDuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.UnDuck");

	UOLPlayerInput_UnDuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.Duck
// (Defined, Simulated, Exec, Public)

void UOLPlayerInput::Duck()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.Duck");

	UOLPlayerInput_Duck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLPlayerInput.ResetInput
// (Native, Public)

void UOLPlayerInput::ResetInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPlayerInput.ResetInput");

	UOLPlayerInput_ResetInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLProfileSettings.AutoDetectPerformanceSettings
// (Native, Public)

void UOLProfileSettings::AutoDetectPerformanceSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.AutoDetectPerformanceSettings");

	UOLProfileSettings_AutoDetectPerformanceSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLProfileSettings.MatchMonitorResolution
// (Native, Public)
// Parameters:
// bool                           bLimitForPerformance           (Parm)

void UOLProfileSettings::MatchMonitorResolution(bool bLimitForPerformance)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.MatchMonitorResolution");

	UOLProfileSettings_MatchMonitorResolution_Params params;
	params.bLimitForPerformance = bLimitForPerformance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLProfileSettings.SetLanguageFromSteam
// (Native, Public)

void UOLProfileSettings::SetLanguageFromSteam()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.SetLanguageFromSteam");

	UOLProfileSettings_SetLanguageFromSteam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLProfileSettings.SetToDefaults
// (Native, Event, Public)

void UOLProfileSettings::SetToDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.SetToDefaults");

	UOLProfileSettings_SetToDefaults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLProfileSettings.GetProfileSettingValues
// (Native, Public, HasOutParms)
// Parameters:
// int                            ProfileSettingId               (Parm)
// TArray<struct FName>           Values                         (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLProfileSettings::GetProfileSettingValues(int ProfileSettingId, TArray<struct FName>* Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.GetProfileSettingValues");

	UOLProfileSettings_GetProfileSettingValues_Params params;
	params.ProfileSettingId = ProfileSettingId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;

	return params.ReturnValue;
}


// Function OLGame.OLProfileSettings.GetGammaSetting
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLProfileSettings::GetGammaSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLProfileSettings.GetGammaSetting");

	UOLProfileSettings_GetGammaSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLPushableObject.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLPushableObject::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLPushableObject.OnToggle");

	AOLPushableObject_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSeqAct_Checkpoint.Activated
// (Defined, Event, Public)

void UOLSeqAct_Checkpoint::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Checkpoint.Activated");

	UOLSeqAct_Checkpoint_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSeqAct_Checkpoint.GetCheckpointFromName
// (Native, Public)
// Parameters:
// struct FName                   CPName                         (Parm)
// class AOLCheckpoint*           ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLCheckpoint* UOLSeqAct_Checkpoint::GetCheckpointFromName(const struct FName& CPName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Checkpoint.GetCheckpointFromName");

	UOLSeqAct_Checkpoint_GetCheckpointFromName_Params params;
	params.CPName = CPName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_Checkpoint.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_Checkpoint::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Checkpoint.GetObjClassVersion");

	UOLSeqAct_Checkpoint_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSoundConnector.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLSoundConnector::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSoundConnector.OnToggle");

	AOLSoundConnector_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSoundEnvironmentManager.GetSoundEnvManager
// (Native, Static, Public)
// Parameters:
// class UOLSoundEnvironmentManager* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLSoundEnvironmentManager* UOLSoundEnvironmentManager::STATIC_GetSoundEnvManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSoundEnvironmentManager.GetSoundEnvManager");

	UOLSoundEnvironmentManager_GetSoundEnvManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSoundEnvironmentManager.ExitAllTouchingVolumes
// (Native, Public)

void UOLSoundEnvironmentManager::ExitAllTouchingVolumes()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSoundEnvironmentManager.ExitAllTouchingVolumes");

	UOLSoundEnvironmentManager_ExitAllTouchingVolumes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSoundEnvironmentManager.Cleanup
// (Native, Public)

void UOLSoundEnvironmentManager::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSoundEnvironmentManager.Cleanup");

	UOLSoundEnvironmentManager_Cleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSoundEnvironmentVolume.PostBeginPlay
// (Defined, Event, Public)

void AOLSoundEnvironmentVolume::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSoundEnvironmentVolume.PostBeginPlay");

	AOLSoundEnvironmentVolume_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLTutorialManager.Clear
// (Native, Public)

void UOLTutorialManager::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLTutorialManager.Clear");

	UOLTutorialManager_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUtils.GetOLPC
// (Native, Static, Public)
// Parameters:
// class AOLPlayerController*     ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLPlayerController* UOLUtils::STATIC_GetOLPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.GetOLPC");

	UOLUtils_GetOLPC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsBindableKey
// (Native, Static, Public)
// Parameters:
// struct FName                   ButtonName                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsBindableKey(const struct FName& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsBindableKey");

	UOLUtils_IsBindableKey_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsPlayingDLC
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsPlayingDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsPlayingDLC");

	UOLUtils_IsPlayingDLC_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsDLCInstalled
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsDLCInstalled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsDLCInstalled");

	UOLUtils_IsDLCInstalled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsConsole
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsConsole()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsConsole");

	UOLUtils_IsConsole_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUtils.IsPS4
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUtils::STATIC_IsPS4()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUtils.IsPS4");

	UOLUtils_IsPS4_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLVoiceManager.DisplayDebug
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void UOLVoiceManager::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLVoiceManager.DisplayDebug");

	UOLVoiceManager_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLWaitPointComponent.ReturnWaitPoint
// (Native, Public)
// Parameters:
// struct FWaitPoint              Point                          (Parm)

void UOLWaitPointComponent::ReturnWaitPoint(const struct FWaitPoint& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWaitPointComponent.ReturnWaitPoint");

	UOLWaitPointComponent_ReturnWaitPoint_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWaitPointComponent.GrabBestWaitPoint
// (Native, Public)
// Parameters:
// bool                           bReversed                      (Parm)
// struct FWaitPoint              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWaitPoint UOLWaitPointComponent::GrabBestWaitPoint(bool bReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWaitPointComponent.GrabBestWaitPoint");

	UOLWaitPointComponent_GrabBestWaitPoint_Params params;
	params.bReversed = bReversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLWaitPointComponent.GetWaitPointForwardVector
// (Native, Public)
// Parameters:
// struct FWaitPoint              Point                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UOLWaitPointComponent::GetWaitPointForwardVector(const struct FWaitPoint& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWaitPointComponent.GetWaitPointForwardVector");

	UOLWaitPointComponent_GetWaitPointForwardVector_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEnemyPawn.PlayContextualVO
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<EVOContext>        VOContext                      (Parm)
// float                          DelayTime                      (OptionalParm, Parm)

void AOLEnemyPawn::PlayContextualVO(TEnumAsByte<EVOContext> VOContext, float DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PlayContextualVO");

	AOLEnemyPawn_PlayContextualVO_Params params;
	params.VOContext = VOContext;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PlayFootStepSound
// (Defined, Simulated, Event, Public)
// Parameters:
// int                            FootDown                       (Parm)
// class UAnimNotify_Footstep*    footstepNotify                 (Parm)

void AOLEnemyPawn::PlayFootStepSound(int FootDown, class UAnimNotify_Footstep* footstepNotify)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PlayFootStepSound");

	AOLEnemyPawn_PlayFootStepSound_Params params;
	params.FootDown = FootDown;
	params.footstepNotify = footstepNotify;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.FinishAIGroup
// (Defined, Simulated, Public)

void AOLEnemyPawn::FinishAIGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.FinishAIGroup");

	AOLEnemyPawn_FinishAIGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.BeginAIGroup
// (Defined, Simulated, Public)

void AOLEnemyPawn::BeginAIGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.BeginAIGroup");

	AOLEnemyPawn_BeginAIGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartMatinee
// (Native, Public)
// Parameters:
// struct FVector                 StartLoc                       (Parm)
// struct FRotator                StartRot                       (Parm)
// float                          BlendTime                      (Parm)

void AOLEnemyPawn::StartMatinee(const struct FVector& StartLoc, const struct FRotator& StartRot, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartMatinee");

	AOLEnemyPawn_StartMatinee_Params params;
	params.StartLoc = StartLoc;
	params.StartRot = StartRot;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.OnAnimEnd
// (Defined, Simulated, Event, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AOLEnemyPawn::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.OnAnimEnd");

	AOLEnemyPawn_OnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartDisturbed
// (Native, Public)

void AOLEnemyPawn::StartDisturbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartDisturbed");

	AOLEnemyPawn_StartDisturbed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartNormalAttack
// (Native, Public)

void AOLEnemyPawn::StartNormalAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartNormalAttack");

	AOLEnemyPawn_StartNormalAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartDoorKnockback
// (Native, Public)
// Parameters:
// struct FVector                 Direction                      (Parm)
// bool                           bLocker                        (Parm)

void AOLEnemyPawn::StartDoorKnockback(const struct FVector& Direction, bool bLocker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartDoorKnockback");

	AOLEnemyPawn_StartDoorKnockback_Params params;
	params.Direction = Direction;
	params.bLocker = bLocker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartKnockback
// (Native, Public)
// Parameters:
// class AOLHero*                 Hero                           (Parm)
// struct FVector                 HitNormal                      (Parm)

void AOLEnemyPawn::StartKnockback(class AOLHero* Hero, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartKnockback");

	AOLEnemyPawn_StartKnockback_Params params;
	params.Hero = Hero;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartAvoid
// (Native, Public)
// Parameters:
// class AOLEnemyPawn*            OtherPawn                      (Parm)

void AOLEnemyPawn::StartAvoid(class AOLEnemyPawn* OtherPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartAvoid");

	AOLEnemyPawn_StartAvoid_Params params;
	params.OtherPawn = OtherPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.TurnOnSpot
// (Native, Public)
// Parameters:
// struct FRotator                EndRotation                    (Parm)

void AOLEnemyPawn::TurnOnSpot(const struct FRotator& EndRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.TurnOnSpot");

	AOLEnemyPawn_TurnOnSpot_Params params;
	params.EndRotation = EndRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PlayFullBodyAnim
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   AnimName                       (Parm)
// float                          Rate                           (Parm)
// float                          BlendInTime                    (OptionalParm, Parm)
// float                          BlendOutTime                   (OptionalParm, Parm)
// bool                           bLooping                       (OptionalParm, Parm)
// float                          StartTime                      (OptionalParm, Parm)
// float                          EndTime                        (OptionalParm, Parm)

void AOLEnemyPawn::PlayFullBodyAnim(const struct FName& AnimName, float Rate, float BlendInTime, float BlendOutTime, bool bLooping, float StartTime, float EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PlayFullBodyAnim");

	AOLEnemyPawn_PlayFullBodyAnim_Params params;
	params.AnimName = AnimName;
	params.Rate = Rate;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.bLooping = bLooping;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.DisableRootMotion
// (Native, Public)

void AOLEnemyPawn::DisableRootMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.DisableRootMotion");

	AOLEnemyPawn_DisableRootMotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.EnableRootMotion
// (Native, Public)

void AOLEnemyPawn::EnableRootMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.EnableRootMotion");

	AOLEnemyPawn_EnableRootMotion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StopIdleSound
// (Defined, Event, Public)

void AOLEnemyPawn::StopIdleSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StopIdleSound");

	AOLEnemyPawn_StopIdleSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartIdleSound
// (Defined, Event, Public)

void AOLEnemyPawn::StartIdleSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartIdleSound");

	AOLEnemyPawn_StartIdleSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.HideWeaponMatinee
// (Defined, Event, Public)

void AOLEnemyPawn::HideWeaponMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.HideWeaponMatinee");

	AOLEnemyPawn_HideWeaponMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.ShowWeaponMatinee
// (Defined, Event, Public)

void AOLEnemyPawn::ShowWeaponMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.ShowWeaponMatinee");

	AOLEnemyPawn_ShowWeaponMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.HideWeapon
// (Defined, Event, Public)

void AOLEnemyPawn::HideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.HideWeapon");

	AOLEnemyPawn_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.ShowWeapon
// (Defined, Event, Public)

void AOLEnemyPawn::ShowWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.ShowWeapon");

	AOLEnemyPawn_ShowWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.ResetAnimationMode
// (Defined, Event, Public)

void AOLEnemyPawn::ResetAnimationMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.ResetAnimationMode");

	AOLEnemyPawn_ResetAnimationMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PushNotify
// (Defined, Event, Public)

void AOLEnemyPawn::PushNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PushNotify");

	AOLEnemyPawn_PushNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.KnockbackTickNotify
// (Defined, Event, Public)

void AOLEnemyPawn::KnockbackTickNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.KnockbackTickNotify");

	AOLEnemyPawn_KnockbackTickNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.KnockbackStartNotify
// (Defined, Event, Public)

void AOLEnemyPawn::KnockbackStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.KnockbackStartNotify");

	AOLEnemyPawn_KnockbackStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.BreakDoorNotify
// (Defined, Event, Public)

void AOLEnemyPawn::BreakDoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.BreakDoorNotify");

	AOLEnemyPawn_BreakDoorNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.BashDoorNotify
// (Defined, Event, Public)

void AOLEnemyPawn::BashDoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.BashDoorNotify");

	AOLEnemyPawn_BashDoorNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.DamageTargetRangeTickNotify
// (Defined, Event, Public)

void AOLEnemyPawn::DamageTargetRangeTickNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.DamageTargetRangeTickNotify");

	AOLEnemyPawn_DamageTargetRangeTickNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.DamageTargetRangeStartNotify
// (Defined, Event, Public)

void AOLEnemyPawn::DamageTargetRangeStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.DamageTargetRangeStartNotify");

	AOLEnemyPawn_DamageTargetRangeStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.DamageTarget
// (Defined, Event, Public)

void AOLEnemyPawn::DamageTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.DamageTarget");

	AOLEnemyPawn_DamageTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.Destroyed
// (Defined, Simulated, Event, Public)

void AOLEnemyPawn::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.Destroyed");

	AOLEnemyPawn_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.BuildScriptAnimSetList
// (Defined, Simulated, Event, Public)

void AOLEnemyPawn::BuildScriptAnimSetList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.BuildScriptAnimSetList");

	AOLEnemyPawn_BuildScriptAnimSetList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.UpdateDifficultyBasedValues
// (Defined, Public)

void AOLEnemyPawn::UpdateDifficultyBasedValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.UpdateDifficultyBasedValues");

	AOLEnemyPawn_UpdateDifficultyBasedValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.ApplyModifiers
// (Defined, Event, Public)
// Parameters:
// struct FEnemyModifiers         NewModifiers                   (Parm)

void AOLEnemyPawn::ApplyModifiers(const struct FEnemyModifiers& NewModifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.ApplyModifiers");

	AOLEnemyPawn_ApplyModifiers_Params params;
	params.NewModifiers = NewModifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PostInitAnimTree
// (Defined, Simulated, Event, Public)
// Parameters:
// class USkeletalMeshComponent*  SkelComp                       (Parm, EditInline)

void AOLEnemyPawn::PostInitAnimTree(class USkeletalMeshComponent* SkelComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PostInitAnimTree");

	AOLEnemyPawn_PostInitAnimTree_Params params;
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PossessedBy
// (Defined, Public)
// Parameters:
// class AController*             C                              (Parm)
// bool                           bVehicleTransition             (Parm)

void AOLEnemyPawn::PossessedBy(class AController* C, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PossessedBy");

	AOLEnemyPawn_PossessedBy_Params params;
	params.C = C;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.ZeroMovementVariables
// (Defined, Simulated, Public)

void AOLEnemyPawn::ZeroMovementVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.ZeroMovementVariables");

	AOLEnemyPawn_ZeroMovementVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AOLEnemyPawn::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.PostBeginPlay");

	AOLEnemyPawn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.AIStartingMove
// (Defined, Public)

void AOLEnemyPawn::AIStartingMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.AIStartingMove");

	AOLEnemyPawn_AIStartingMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.HasRegisteredNavMeshRecently
// (Final, Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLEnemyPawn::HasRegisteredNavMeshRecently()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.HasRegisteredNavMeshRecently");

	AOLEnemyPawn_HasRegisteredNavMeshRecently_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEnemyPawn.UpdateNavMeshObstacle
// (Final, Defined, Public)

void AOLEnemyPawn::UpdateNavMeshObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.UpdateNavMeshObstacle");

	AOLEnemyPawn_UpdateNavMeshObstacle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.CancelSpecialMove
// (Native, Public)

void AOLEnemyPawn::CancelSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.CancelSpecialMove");

	AOLEnemyPawn_CancelSpecialMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.StartSpecialMove
// (Native, HasOptionalParms, Public)
// Parameters:
// TEnumAsByte<ESpecialMoveType>  moveType                       (Parm)
// struct FVector                 targetPosition                 (OptionalParm, Parm)
// struct FVector                 TargetDirection                (OptionalParm, Parm)
// TEnumAsByte<EAdjustPositionTargetType> TargetType                     (OptionalParm, Parm)

void AOLEnemyPawn::StartSpecialMove(TEnumAsByte<ESpecialMoveType> moveType, const struct FVector& targetPosition, const struct FVector& TargetDirection, TEnumAsByte<EAdjustPositionTargetType> TargetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.StartSpecialMove");

	AOLEnemyPawn_StartSpecialMove_Params params;
	params.moveType = moveType;
	params.targetPosition = targetPosition;
	params.TargetDirection = TargetDirection;
	params.TargetType = TargetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.UnregisterNavmeshObstacle
// (Final, Native, Public)

void AOLEnemyPawn::UnregisterNavmeshObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.UnregisterNavmeshObstacle");

	AOLEnemyPawn_UnregisterNavmeshObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyPawn.RegisterNavMeshObstacle
// (Final, Native, Public)

void AOLEnemyPawn::RegisterNavMeshObstacle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyPawn.RegisterNavMeshObstacle");

	AOLEnemyPawn_RegisterNavMeshObstacle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.OnAIMoveToActor
// (Defined, Public)
// Parameters:
// class USeqAct_AIMoveToActor*   Action                         (Parm)

void AOLBot::OnAIMoveToActor(class USeqAct_AIMoveToActor* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.OnAIMoveToActor");

	AOLBot_OnAIMoveToActor_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.FinishMatinee
// (Defined, Simulated, Public)

void AOLBot::FinishMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.FinishMatinee");

	AOLBot_FinishMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.BeginMatinee
// (Defined, Simulated, Public)

void AOLBot::BeginMatinee()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.BeginMatinee");

	AOLBot_BeginMatinee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.OnAIInvestigatePoint
// (Defined, Public)
// Parameters:
// class UOLSeqAct_AIInvestigatePoint* Action                         (Parm)

void AOLBot::OnAIInvestigatePoint(class UOLSeqAct_AIInvestigatePoint* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.OnAIInvestigatePoint");

	AOLBot_OnAIInvestigatePoint_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ToggleAIAttackOnProximity
// (Defined, Event, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void AOLBot::ToggleAIAttackOnProximity(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ToggleAIAttackOnProximity");

	AOLBot_ToggleAIAttackOnProximity_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.OnToggleAIAttackOnProximity
// (Defined, Public)
// Parameters:
// class UOLSeqAct_ToggleAIAttackOnProximity* Action                         (Parm)

void AOLBot::OnToggleAIAttackOnProximity(class UOLSeqAct_ToggleAIAttackOnProximity* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.OnToggleAIAttackOnProximity");

	AOLBot_OnToggleAIAttackOnProximity_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ToggleAIAlwaysSeePlayer
// (Defined, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void AOLBot::ToggleAIAlwaysSeePlayer(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ToggleAIAlwaysSeePlayer");

	AOLBot_ToggleAIAlwaysSeePlayer_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.OnToggleAIAlwaysSeePlayer
// (Defined, Public)
// Parameters:
// class UOLSeqAct_ToggleAIAlwaysSeePlayer* Action                         (Parm)

void AOLBot::OnToggleAIAlwaysSeePlayer(class UOLSeqAct_ToggleAIAlwaysSeePlayer* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.OnToggleAIAlwaysSeePlayer");

	AOLBot_OnToggleAIAlwaysSeePlayer_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.IgnoreTarget
// (Defined, Event, Public)
// Parameters:
// float                          Time                           (Parm)

void AOLBot::IgnoreTarget(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IgnoreTarget");

	AOLBot_IgnoreTarget_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ToggleAIIgnorePlayer
// (Defined, Event, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void AOLBot::ToggleAIIgnorePlayer(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ToggleAIIgnorePlayer");

	AOLBot_ToggleAIIgnorePlayer_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.OnToggleAIIgnorePlayer
// (Defined, Public)
// Parameters:
// class UOLSeqAct_ToggleAIIgnorePlayer* Action                         (Parm)

void AOLBot::OnToggleAIIgnorePlayer(class UOLSeqAct_ToggleAIIgnorePlayer* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.OnToggleAIIgnorePlayer");

	AOLBot_OnToggleAIIgnorePlayer_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.OnAIAbortPatrol
// (Defined, Public)
// Parameters:
// class UOLSeqAct_AIAbortPatrol* Action                         (Parm)

void AOLBot::OnAIAbortPatrol(class UOLSeqAct_AIAbortPatrol* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.OnAIAbortPatrol");

	AOLBot_OnAIAbortPatrol_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.StopPatrol
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// bool                           bAbort                         (OptionalParm, Parm)

void AOLBot::StopPatrol(bool bAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StopPatrol");

	AOLBot_StopPatrol_Params params;
	params.bAbort = bAbort;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.OnAIStartPatrol
// (Defined, Public)
// Parameters:
// class UOLSeqAct_AIStartPatrol* Action                         (Parm)

void AOLBot::OnAIStartPatrol(class UOLSeqAct_AIStartPatrol* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.OnAIStartPatrol");

	AOLBot_OnAIStartPatrol_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLBot::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.DisplayDebug");

	AOLBot_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLBot.DrawDebugStates
// (Native, Static, Public, HasOutParms)
// Parameters:
// class UObject*                 anObject                       (Parm)
// class UCanvas*                 aCanvas                        (Parm)
// float                          XL                             (Parm)
// float                          XPos                           (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AOLBot::STATIC_DrawDebugStates(class UObject* anObject, class UCanvas* aCanvas, float XL, float XPos, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.DrawDebugStates");

	AOLBot_DrawDebugStates_Params params;
	params.anObject = anObject;
	params.aCanvas = aCanvas;
	params.XL = XL;
	params.XPos = XPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLBot.DebugMessagePlayer
// (Event, Public)
// Parameters:
// struct FString                 msg                            (Parm, CoerceParm, NeedCtorLink)

void AOLBot::DebugMessagePlayer(const struct FString& msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.DebugMessagePlayer");

	AOLBot_DebugMessagePlayer_Params params;
	params.msg = msg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearDestination
// (Defined, Public)

void AOLBot::ClearDestination()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearDestination");

	AOLBot_ClearDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearDisturbance
// (Defined, Event, Public)

void AOLBot::ClearDisturbance()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearDisturbance");

	AOLBot_ClearDisturbance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearInvestigation
// (Native, Public)

void AOLBot::ClearInvestigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearInvestigation");

	AOLBot_ClearInvestigation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.TriggerVisualDisturbance
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FVector                 DisturbanceLocation            (Parm)
// bool                           bFromGroup                     (OptionalParm, Parm)

void AOLBot::TriggerVisualDisturbance(const struct FVector& DisturbanceLocation, bool bFromGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TriggerVisualDisturbance");

	AOLBot_TriggerVisualDisturbance_Params params;
	params.DisturbanceLocation = DisturbanceLocation;
	params.bFromGroup = bFromGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.TriggerAudioDisturbance
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FVector                 DisturbanceLocation            (Parm)
// bool                           bFromGroup                     (OptionalParm, Parm)
// bool                           bNewInvestigate                (OptionalParm, Parm)
// bool                           bNoTrim                        (OptionalParm, Parm)
// bool                           bIgnoreDisturbs                (OptionalParm, Parm)

void AOLBot::TriggerAudioDisturbance(const struct FVector& DisturbanceLocation, bool bFromGroup, bool bNewInvestigate, bool bNoTrim, bool bIgnoreDisturbs)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TriggerAudioDisturbance");

	AOLBot_TriggerAudioDisturbance_Params params;
	params.DisturbanceLocation = DisturbanceLocation;
	params.bFromGroup = bFromGroup;
	params.bNewInvestigate = bNewInvestigate;
	params.bNoTrim = bNoTrim;
	params.bIgnoreDisturbs = bIgnoreDisturbs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.LostTarget
// (Native, Public)
// Parameters:
// bool                           bAfterChase                    (Parm)

void AOLBot::LostTarget(bool bAfterChase)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.LostTarget");

	AOLBot_LostTarget_Params params;
	params.bAfterChase = bAfterChase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.IsAtTrimmedDoor
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsAtTrimmedDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsAtTrimmedDoor");

	AOLBot_IsAtTrimmedDoor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GetDoorApproachPoint
// (Native, Public, HasOutParms)
// Parameters:
// class AOLDoor*                 aDoor                          (Parm)
// struct FVector                 ApproachPoint                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GetDoorApproachPoint(class AOLDoor* aDoor, struct FVector* ApproachPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GetDoorApproachPoint");

	AOLBot_GetDoorApproachPoint_Params params;
	params.aDoor = aDoor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ApproachPoint != nullptr)
		*ApproachPoint = params.ApproachPoint;

	return params.ReturnValue;
}


// Function OLGame.OLBot.EndDoorTraversal
// (Native, Public)

void AOLBot::EndDoorTraversal()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.EndDoorTraversal");

	AOLBot_EndDoorTraversal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.StartDoorTraversal
// (Native, Public)
// Parameters:
// bool                           bReversed                      (Parm)

void AOLBot::StartDoorTraversal(bool bReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StartDoorTraversal");

	AOLBot_StartDoorTraversal_Params params;
	params.bReversed = bReversed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.GetSqueezePoint
// (Native, Public)
// Parameters:
// class AOLSqueezeVolume*        Squeeze                        (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AOLBot::GetSqueezePoint(class AOLSqueezeVolume* Squeeze)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GetSqueezePoint");

	AOLBot_GetSqueezePoint_Params params;
	params.Squeeze = Squeeze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GetClosestPointOnNavMesh
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 out_NewPoint                   (Parm, OutParm)
// struct FVector                 PointToCheck                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GetClosestPointOnNavMesh(const struct FVector& PointToCheck, struct FVector* out_NewPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GetClosestPointOnNavMesh");

	AOLBot_GetClosestPointOnNavMesh_Params params;
	params.PointToCheck = PointToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_NewPoint != nullptr)
		*out_NewPoint = params.out_NewPoint;

	return params.ReturnValue;
}


// Function OLGame.OLBot.MoveAlongPath
// (Latent, Native, HasOptionalParms, Public)
// Parameters:
// TArray<struct FVector>         PathPoints                     (Parm, NeedCtorLink)
// class AActor*                  FocusTarget                    (OptionalParm, Parm)

void AOLBot::MoveAlongPath(TArray<struct FVector> PathPoints, class AActor* FocusTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.MoveAlongPath");

	AOLBot_MoveAlongPath_Params params;
	params.PathPoints = PathPoints;
	params.FocusTarget = FocusTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearNextMove
// (Defined, Public)

void AOLBot::ClearNextMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearNextMove");

	AOLBot_ClearNextMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearCurrentMove
// (Defined, Event, Public)

void AOLBot::ClearCurrentMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearCurrentMove");

	AOLBot_ClearCurrentMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.StartWaitForDoor
// (Defined, Event, Public)

void AOLBot::StartWaitForDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StartWaitForDoor");

	AOLBot_StartWaitForDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.StopMoving
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bAborted                       (OptionalParm, Parm)

void AOLBot::StopMoving(bool bAborted)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StopMoving");

	AOLBot_StopMoving_Params params;
	params.bAborted = bAborted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.TargetReachable
// (Defined, Public, HasDefaults)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::TargetReachable()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TargetReachable");

	AOLBot_TargetReachable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GetClosestPointToActor
// (Defined, Public, HasOutParms)
// Parameters:
// struct FVector                 NewPoint                       (Parm, OutParm)
// class AActor*                  ActorToCheck                   (Parm)
// float                          NewBuffer                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GetClosestPointToActor(class AActor* ActorToCheck, struct FVector* NewPoint, float* NewBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GetClosestPointToActor");

	AOLBot_GetClosestPointToActor_Params params;
	params.ActorToCheck = ActorToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPoint != nullptr)
		*NewPoint = params.NewPoint;
	if (NewBuffer != nullptr)
		*NewBuffer = params.NewBuffer;

	return params.ReturnValue;
}


// Function OLGame.OLBot.StartMove
// (Defined, Event, Public)
// Parameters:
// struct FMovementData           aData                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::StartMove(const struct FMovementData& aData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StartMove");

	AOLBot_StartMove_Params params;
	params.aData = aData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsAlreadyAtDestination
// (Defined, Public, HasDefaults)
// Parameters:
// struct FMovementData           aData                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsAlreadyAtDestination(const struct FMovementData& aData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsAlreadyAtDestination");

	AOLBot_IsAlreadyAtDestination_Params params;
	params.aData = aData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.CompareMoves
// (Defined, Event, Public)
// Parameters:
// struct FMovementData           Data1                          (Parm)
// struct FMovementData           Data2                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::CompareMoves(const struct FMovementData& Data1, const struct FMovementData& Data2)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.CompareMoves");

	AOLBot_CompareMoves_Params params;
	params.Data1 = Data1;
	params.Data2 = Data2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GetCurrentWaypoint
// (Native, Public)
// Parameters:
// class AOLWaypoint*             ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLWaypoint* AOLBot::GetCurrentWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GetCurrentWaypoint");

	AOLBot_GetCurrentWaypoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.ChooseClosestPatrolWaypoint
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::ChooseClosestPatrolWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ChooseClosestPatrolWaypoint");

	AOLBot_ChooseClosestPatrolWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.ChooseNextPatrolWaypoint
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::ChooseNextPatrolWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ChooseNextPatrolWaypoint");

	AOLBot_ChooseNextPatrolWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.NotifyBump
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)
// struct FVector                 HitNormal                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::NotifyBump(class AActor* Other, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.NotifyBump");

	AOLBot_NotifyBump_Params params;
	params.Other = Other;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.RegeneratePath
// (Native, Public)

void AOLBot::RegeneratePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.RegeneratePath");

	AOLBot_RegeneratePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.NotifyPathChanged
// (Defined, Event, Public)

void AOLBot::NotifyPathChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.NotifyPathChanged");

	AOLBot_NotifyPathChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.GeneratePathToLocation
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GeneratePathToLocation(const struct FVector& Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GeneratePathToLocation");

	AOLBot_GeneratePathToLocation_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.GeneratePathToActor
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class AActor*                  Goal                           (Parm)
// float                          WithinDistance                 (OptionalParm, Parm)
// bool                           bAllowPartialPath              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.GeneratePathToActor");

	AOLBot_GeneratePathToActor_Params params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.AddBasePathContraints
// (Defined, Public)

void AOLBot::AddBasePathContraints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.AddBasePathContraints");

	AOLBot_AddBasePathContraints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.Recalculate
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// bool                           bForce                         (OptionalParm, Parm)

void AOLBot::Recalculate(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.Recalculate");

	AOLBot_Recalculate_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.PushNotify
// (Defined, Event, Public)

void AOLBot::PushNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PushNotify");

	AOLBot_PushNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.KnockbackTickNotify
// (Defined, Event, Public)

void AOLBot::KnockbackTickNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.KnockbackTickNotify");

	AOLBot_KnockbackTickNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.IsPlayerOnVaultingPath
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsPlayerOnVaultingPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsPlayerOnVaultingPath");

	AOLBot_IsPlayerOnVaultingPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsPlayerOnBrokenSideOfDoor
// (Native, Public)
// Parameters:
// class AOLDoor*                 door                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsPlayerOnBrokenSideOfDoor(class AOLDoor* door)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsPlayerOnBrokenSideOfDoor");

	AOLBot_IsPlayerOnBrokenSideOfDoor_Params params;
	params.door = door;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.KnockbackStartNotify
// (Defined, Event, Public)

void AOLBot::KnockbackStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.KnockbackStartNotify");

	AOLBot_KnockbackStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.BreakDoorNotify
// (Defined, Event, Public)

void AOLBot::BreakDoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.BreakDoorNotify");

	AOLBot_BreakDoorNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.BashDoorNotify
// (Defined, Event, Public)

void AOLBot::BashDoorNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.BashDoorNotify");

	AOLBot_BashDoorNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.DamageTargetRangeTickNotify
// (Defined, Event, Public)

void AOLBot::DamageTargetRangeTickNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.DamageTargetRangeTickNotify");

	AOLBot_DamageTargetRangeTickNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.DamageTargetRangeStartNotify
// (Defined, Event, Public)

void AOLBot::DamageTargetRangeStartNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.DamageTargetRangeStartNotify");

	AOLBot_DamageTargetRangeStartNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.DamageTarget
// (Defined, Event, Public)

void AOLBot::DamageTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.DamageTarget");

	AOLBot_DamageTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.IsInDamageRange
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInDamageRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInDamageRange");

	AOLBot_IsInDamageRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsInFinalAttackRange
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInFinalAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInFinalAttackRange");

	AOLBot_IsInFinalAttackRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsInApproachAttackRange
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInApproachAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInApproachAttackRange");

	AOLBot_IsInApproachAttackRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsInAttackRange
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsInAttackRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsInAttackRange");

	AOLBot_IsInAttackRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.InvestigateObject
// (Native, Public)
// Parameters:
// class AActor*                  anActor                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::InvestigateObject(class AActor* anActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.InvestigateObject");

	AOLBot_InvestigateObject_Params params;
	params.anActor = anActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.TryGrabUnder
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::TryGrabUnder()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TryGrabUnder");

	AOLBot_TryGrabUnder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.TryGrabNormal
// (Native, Public)
// Parameters:
// bool                           bCrouched                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::TryGrabNormal(bool bCrouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TryGrabNormal");

	AOLBot_TryGrabNormal_Params params;
	params.bCrouched = bCrouched;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.AttackCycleEnd
// (Defined, Public)

void AOLBot::AttackCycleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.AttackCycleEnd");

	AOLBot_AttackCycleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.AttackTarget
// (Native, Public)
// Parameters:
// TEnumAsByte<EAIAttackType>     aType                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::AttackTarget(TEnumAsByte<EAIAttackType> aType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.AttackTarget");

	AOLBot_AttackTarget_Params params;
	params.aType = aType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.UpdateAnimationMode
// (Native, Public)

void AOLBot::UpdateAnimationMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.UpdateAnimationMode");

	AOLBot_UpdateAnimationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.TriggerDisturbed
// (Defined, Event, Public)

void AOLBot::TriggerDisturbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TriggerDisturbed");

	AOLBot_TriggerDisturbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.StartAnimating
// (Defined, Event, Public)
// Parameters:
// struct FAnimationData          aAnim                          (Parm)
// struct FRotator                Direction                      (Parm)

void AOLBot::StartAnimating(const struct FAnimationData& aAnim, const struct FRotator& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.StartAnimating");

	AOLBot_StartAnimating_Params params;
	params.aAnim = aAnim;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.ClearAnimation
// (Defined, Public)

void AOLBot::ClearAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.ClearAnimation");

	AOLBot_ClearAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.CompareAnimations
// (Defined, Public)
// Parameters:
// struct FAnimationData          AnimDataOne                    (Parm)
// struct FAnimationData          AnimDataTwo                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::CompareAnimations(const struct FAnimationData& AnimDataOne, const struct FAnimationData& AnimDataTwo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.CompareAnimations");

	AOLBot_CompareAnimations_Params params;
	params.AnimDataOne = AnimDataOne;
	params.AnimDataTwo = AnimDataTwo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.TurnTo
// (Defined, Event, Public)
// Parameters:
// struct FRotator                Direction                      (Parm)

void AOLBot::TurnTo(const struct FRotator& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.TurnTo");

	AOLBot_TurnTo_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.PerformAttackCheck
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::PerformAttackCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PerformAttackCheck");

	AOLBot_PerformAttackCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.PerformGrabCheck
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::PerformGrabCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PerformGrabCheck");

	AOLBot_PerformGrabCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.IsPerformingMoveAbility
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::IsPerformingMoveAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.IsPerformingMoveAbility");

	AOLBot_IsPerformingMoveAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.WaitForSpecialMove
// (Final, Latent, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bNoDelay                       (OptionalParm, Parm)

void AOLBot::WaitForSpecialMove(bool bNoDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.WaitForSpecialMove");

	AOLBot_WaitForSpecialMove_Params params;
	params.bNoDelay = bNoDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.WaitForFullBodyAnim
// (Final, Latent, Native, Public)

void AOLBot::WaitForFullBodyAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.WaitForFullBodyAnim");

	AOLBot_WaitForFullBodyAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.PlayFullBodyAnim
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   AnimName                       (Parm)
// float                          Rate                           (Parm)
// float                          BlendInTime                    (OptionalParm, Parm)
// float                          BlendOutTime                   (OptionalParm, Parm)
// bool                           bLooping                       (OptionalParm, Parm)
// float                          StartTime                      (OptionalParm, Parm)
// float                          EndTime                        (OptionalParm, Parm)

void AOLBot::PlayFullBodyAnim(const struct FName& AnimName, float Rate, float BlendInTime, float BlendOutTime, bool bLooping, float StartTime, float EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PlayFullBodyAnim");

	AOLBot_PlayFullBodyAnim_Params params;
	params.AnimName = AnimName;
	params.Rate = Rate;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.bLooping = bLooping;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.PushQueuedCommand
// (Defined, Public)

void AOLBot::PushQueuedCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PushQueuedCommand");

	AOLBot_PushQueuedCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.QueueAICommand
// (Defined, Event, Public)
// Parameters:
// class UGameAICommand*          Cmd                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLBot::QueueAICommand(class UGameAICommand* Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.QueueAICommand");

	AOLBot_QueueAICommand_Params params;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBot.UnPossess
// (Defined, Public)

void AOLBot::UnPossess()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.UnPossess");

	AOLBot_UnPossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.AddToAIGroup
// (Defined, Simulated, Public)

void AOLBot::AddToAIGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.AddToAIGroup");

	AOLBot_AddToAIGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.Possess
// (Defined, Public)
// Parameters:
// class APawn*                   aPawn                          (Parm)
// bool                           bVehicleTransition             (Parm)

void AOLBot::Possess(class APawn* aPawn, bool bVehicleTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.Possess");

	AOLBot_Possess_Params params;
	params.aPawn = aPawn;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.Destroyed
// (Defined, Event, Public)

void AOLBot::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.Destroyed");

	AOLBot_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.FindPlayer
// (Defined, Event, Public)

void AOLBot::FindPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.FindPlayer");

	AOLBot_FindPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.InitNavigationHandle
// (Defined, Simulated, Public)

void AOLBot::InitNavigationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.InitNavigationHandle");

	AOLBot_InitNavigationHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLBot.PostBeginPlay
// (Defined, Simulated, Public)

void AOLBot::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBot.PostBeginPlay");

	AOLBot_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.AtPoint
// (Defined, Public)
// Parameters:
// struct FVector                 Point                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility::AtPoint(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.AtPoint");

	UOLAICmd_MoveAbility_AtPoint_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.SetActiveOnObject
// (Public)
// Parameters:
// class AOLBot*                  NewActiveBot                   (Parm)

void UOLAICmd_MoveAbility::SetActiveOnObject(class AOLBot* NewActiveBot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.SetActiveOnObject");

	UOLAICmd_MoveAbility_SetActiveOnObject_Params params;
	params.NewActiveBot = NewActiveBot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.GetActiveOnObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLBot* UOLAICmd_MoveAbility::GetActiveOnObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.GetActiveOnObject");

	UOLAICmd_MoveAbility_GetActiveOnObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.GetClosestToObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLBot* UOLAICmd_MoveAbility::GetClosestToObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.GetClosestToObject");

	UOLAICmd_MoveAbility_GetClosestToObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.UnregisterWithObject
// (Public)

void UOLAICmd_MoveAbility::UnregisterWithObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.UnregisterWithObject");

	UOLAICmd_MoveAbility_UnregisterWithObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.RegisterWithObject
// (Public)

void UOLAICmd_MoveAbility::RegisterWithObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.RegisterWithObject");

	UOLAICmd_MoveAbility_RegisterWithObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.IsObjectInUse
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility::IsObjectInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.IsObjectInUse");

	UOLAICmd_MoveAbility_IsObjectInUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.ContinueFromWaiting
// (Defined, Public)

void UOLAICmd_MoveAbility::ContinueFromWaiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.ContinueFromWaiting");

	UOLAICmd_MoveAbility_ContinueFromWaiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.MoveToWaiting
// (Defined, Public)

void UOLAICmd_MoveAbility::MoveToWaiting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.MoveToWaiting");

	UOLAICmd_MoveAbility_MoveToWaiting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.GetWaitIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLAICmd_MoveAbility::GetWaitIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.GetWaitIndex");

	UOLAICmd_MoveAbility_GetWaitIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.GetBotsOnObject
// (Defined, Public)
// Parameters:
// TArray<class AOLBot*>          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class AOLBot*> UOLAICmd_MoveAbility::GetBotsOnObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.GetBotsOnObject");

	UOLAICmd_MoveAbility_GetBotsOnObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.GetWaitPointForwardDirection
// (Defined, Public)
// Parameters:
// struct FWaitPoint              Point                          (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UOLAICmd_MoveAbility::GetWaitPointForwardDirection(const struct FWaitPoint& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.GetWaitPointForwardDirection");

	UOLAICmd_MoveAbility_GetWaitPointForwardDirection_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.ReturnWaitPoint
// (Defined, Public)
// Parameters:
// struct FWaitPoint              Point                          (Parm)

void UOLAICmd_MoveAbility::ReturnWaitPoint(const struct FWaitPoint& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.ReturnWaitPoint");

	UOLAICmd_MoveAbility_ReturnWaitPoint_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.GrabBestWaitPoint
// (Defined, Public, HasDefaults)
// Parameters:
// struct FWaitPoint              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWaitPoint UOLAICmd_MoveAbility::GrabBestWaitPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.GrabBestWaitPoint");

	UOLAICmd_MoveAbility_GrabBestWaitPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.ModifyPath
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 NewDestination                 (Parm)
// TArray<struct FVector>         NewPath                        (Parm, OutParm, NeedCtorLink)

void UOLAICmd_MoveAbility::ModifyPath(const struct FVector& NewDestination, TArray<struct FVector>* NewPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.ModifyPath");

	UOLAICmd_MoveAbility_ModifyPath_Params params;
	params.NewDestination = NewDestination;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewPath != nullptr)
		*NewPath = params.NewPath;
}


// Function OLGame.OLAICmd_MoveAbility.ModifyApproach
// (Defined, Public, HasOutParms)
// Parameters:
// struct FVector                 NewDestination                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility::ModifyApproach(struct FVector* NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.ModifyApproach");

	UOLAICmd_MoveAbility_ModifyApproach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDestination != nullptr)
		*NewDestination = params.NewDestination;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility.Completed
// (Defined, Public)

void UOLAICmd_MoveAbility::Completed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.Completed");

	UOLAICmd_MoveAbility_Completed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.Popped
// (Defined, Public)

void UOLAICmd_MoveAbility::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.Popped");

	UOLAICmd_MoveAbility_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility.Pushed
// (Defined, Public)

void UOLAICmd_MoveAbility::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility.Pushed");

	UOLAICmd_MoveAbility_Pushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Bash.MoveThruBashable
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLBashableObject*       InBashable                     (Parm)
// struct FVector                 InitialDestination             (Parm)
// bool                           bInReversed                    (Parm)
// class UOLAICmd_MoveAbility_Bash* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_Bash* UOLAICmd_MoveAbility_Bash::STATIC_MoveThruBashable(class AOLBot* Bot, class AOLBashableObject* InBashable, const struct FVector& InitialDestination, bool bInReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Bash.MoveThruBashable");

	UOLAICmd_MoveAbility_Bash_MoveThruBashable_Params params;
	params.Bot = Bot;
	params.InBashable = InBashable;
	params.InitialDestination = InitialDestination;
	params.bInReversed = bInReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.GetBotsOnObject
// (Defined, Public)
// Parameters:
// TArray<class AOLBot*>          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class AOLBot*> UOLAICmd_MoveAbility_Door::GetBotsOnObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.GetBotsOnObject");

	UOLAICmd_MoveAbility_Door_GetBotsOnObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.SetActiveOnObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  NewActiveBot                   (Parm)

void UOLAICmd_MoveAbility_Door::SetActiveOnObject(class AOLBot* NewActiveBot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.SetActiveOnObject");

	UOLAICmd_MoveAbility_Door_SetActiveOnObject_Params params;
	params.NewActiveBot = NewActiveBot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Door.GetActiveOnObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Door::GetActiveOnObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.GetActiveOnObject");

	UOLAICmd_MoveAbility_Door_GetActiveOnObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.GetClosestToObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Door::GetClosestToObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.GetClosestToObject");

	UOLAICmd_MoveAbility_Door_GetClosestToObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.UnregisterWithObject
// (Defined, Public)

void UOLAICmd_MoveAbility_Door::UnregisterWithObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.UnregisterWithObject");

	UOLAICmd_MoveAbility_Door_UnregisterWithObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Door.RegisterWithObject
// (Defined, Public)

void UOLAICmd_MoveAbility_Door::RegisterWithObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.RegisterWithObject");

	UOLAICmd_MoveAbility_Door_RegisterWithObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Door.IsObjectInUse
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Door::IsObjectInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.IsObjectInUse");

	UOLAICmd_MoveAbility_Door_IsObjectInUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.Cancel
// (Defined, Public)

void UOLAICmd_MoveAbility_Door::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.Cancel");

	UOLAICmd_MoveAbility_Door_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Door.Popped
// (Defined, Public)

void UOLAICmd_MoveAbility_Door::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.Popped");

	UOLAICmd_MoveAbility_Door_Popped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Door.ModifyApproach
// (Defined, Public, HasOutParms)
// Parameters:
// struct FVector                 NewDestination                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Door::ModifyApproach(struct FVector* NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.ModifyApproach");

	UOLAICmd_MoveAbility_Door_ModifyApproach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDestination != nullptr)
		*NewDestination = params.NewDestination;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.IsDoorOpen
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Door::IsDoorOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.IsDoorOpen");

	UOLAICmd_MoveAbility_Door_IsDoorOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Door.MoveThruDoor
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLDoor*                 InDoor                         (Parm)
// struct FVector                 InitialDestination             (Parm)
// bool                           bInReversed                    (Parm)
// class UOLAICmd_MoveAbility_Door* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_Door* UOLAICmd_MoveAbility_Door::STATIC_MoveThruDoor(class AOLBot* Bot, class AOLDoor* InDoor, const struct FVector& InitialDestination, bool bInReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Door.MoveThruDoor");

	UOLAICmd_MoveAbility_Door_MoveThruDoor_Params params;
	params.Bot = Bot;
	params.InDoor = InDoor;
	params.InitialDestination = InitialDestination;
	params.bInReversed = bInReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Ledge.GetBotsOnObject
// (Defined, Public)
// Parameters:
// TArray<class AOLBot*>          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class AOLBot*> UOLAICmd_MoveAbility_Ledge::GetBotsOnObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Ledge.GetBotsOnObject");

	UOLAICmd_MoveAbility_Ledge_GetBotsOnObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Ledge.SetActiveOnObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  NewActiveBot                   (Parm)

void UOLAICmd_MoveAbility_Ledge::SetActiveOnObject(class AOLBot* NewActiveBot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Ledge.SetActiveOnObject");

	UOLAICmd_MoveAbility_Ledge_SetActiveOnObject_Params params;
	params.NewActiveBot = NewActiveBot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Ledge.GetActiveOnObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Ledge::GetActiveOnObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Ledge.GetActiveOnObject");

	UOLAICmd_MoveAbility_Ledge_GetActiveOnObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Ledge.GetClosestToObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Ledge::GetClosestToObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Ledge.GetClosestToObject");

	UOLAICmd_MoveAbility_Ledge_GetClosestToObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Ledge.UnregisterWithObject
// (Defined, Public)

void UOLAICmd_MoveAbility_Ledge::UnregisterWithObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Ledge.UnregisterWithObject");

	UOLAICmd_MoveAbility_Ledge_UnregisterWithObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Ledge.RegisterWithObject
// (Defined, Public)

void UOLAICmd_MoveAbility_Ledge::RegisterWithObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Ledge.RegisterWithObject");

	UOLAICmd_MoveAbility_Ledge_RegisterWithObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Ledge.IsObjectInUse
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Ledge::IsObjectInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Ledge.IsObjectInUse");

	UOLAICmd_MoveAbility_Ledge_IsObjectInUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Ledge.MoveThruLedge
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLLedgeMarker*          InLedge                        (Parm)
// struct FVector                 InitialDestination             (Parm)
// bool                           bInReversed                    (Parm)
// class UOLAICmd_MoveAbility_Ledge* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_Ledge* UOLAICmd_MoveAbility_Ledge::STATIC_MoveThruLedge(class AOLBot* Bot, class AOLLedgeMarker* InLedge, const struct FVector& InitialDestination, bool bInReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Ledge.MoveThruLedge");

	UOLAICmd_MoveAbility_Ledge_MoveThruLedge_Params params;
	params.Bot = Bot;
	params.InLedge = InLedge;
	params.InitialDestination = InitialDestination;
	params.bInReversed = bInReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Vault.GetBotsOnObject
// (Defined, Public)
// Parameters:
// TArray<class AOLBot*>          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class AOLBot*> UOLAICmd_MoveAbility_Vault::GetBotsOnObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Vault.GetBotsOnObject");

	UOLAICmd_MoveAbility_Vault_GetBotsOnObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Vault.SetActiveOnObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  NewActiveBot                   (Parm)

void UOLAICmd_MoveAbility_Vault::SetActiveOnObject(class AOLBot* NewActiveBot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Vault.SetActiveOnObject");

	UOLAICmd_MoveAbility_Vault_SetActiveOnObject_Params params;
	params.NewActiveBot = NewActiveBot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Vault.GetActiveOnObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Vault::GetActiveOnObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Vault.GetActiveOnObject");

	UOLAICmd_MoveAbility_Vault_GetActiveOnObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Vault.GetClosestToObject
// (Defined, Public)
// Parameters:
// class AOLBot*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLBot* UOLAICmd_MoveAbility_Vault::GetClosestToObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Vault.GetClosestToObject");

	UOLAICmd_MoveAbility_Vault_GetClosestToObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Vault.UnregisterWithObject
// (Defined, Public)

void UOLAICmd_MoveAbility_Vault::UnregisterWithObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Vault.UnregisterWithObject");

	UOLAICmd_MoveAbility_Vault_UnregisterWithObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Vault.RegisterWithObject
// (Defined, Public)

void UOLAICmd_MoveAbility_Vault::RegisterWithObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Vault.RegisterWithObject");

	UOLAICmd_MoveAbility_Vault_RegisterWithObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAICmd_MoveAbility_Vault.IsObjectInUse
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLAICmd_MoveAbility_Vault::IsObjectInUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Vault.IsObjectInUse");

	UOLAICmd_MoveAbility_Vault_IsObjectInUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAICmd_MoveAbility_Vault.MoveThruLedge
// (Defined, Event, Static, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)
// class AOLAIVaultMarker*        InMarker                       (Parm)
// struct FVector                 InitialDestination             (Parm)
// bool                           bInReversed                    (Parm)
// class UOLAICmd_MoveAbility_Vault* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLAICmd_MoveAbility_Vault* UOLAICmd_MoveAbility_Vault::STATIC_MoveThruLedge(class AOLBot* Bot, class AOLAIVaultMarker* InMarker, const struct FVector& InitialDestination, bool bInReversed)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAICmd_MoveAbility_Vault.MoveThruLedge");

	UOLAICmd_MoveAbility_Vault_MoveThruLedge_Params params;
	params.Bot = Bot;
	params.InMarker = InMarker;
	params.InitialDestination = InitialDestination;
	params.bInReversed = bInReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAIGroup.NotifyOthersPathChanged
// (Defined, Public)
// Parameters:
// class AOLBot*                  Notifier                       (Parm)

void AOLAIGroup::NotifyOthersPathChanged(class AOLBot* Notifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.NotifyOthersPathChanged");

	AOLAIGroup_NotifyOthersPathChanged_Params params;
	params.Notifier = Notifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIGroup.ReturnAttackToken
// (Native, Public)
// Parameters:
// class AOLBot*                  attacker                       (Parm)

void AOLAIGroup::ReturnAttackToken(class AOLBot* attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.ReturnAttackToken");

	AOLAIGroup_ReturnAttackToken_Params params;
	params.attacker = attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIGroup.TakeAttackToken
// (Native, Public)
// Parameters:
// class AOLBot*                  attacker                       (Parm)

void AOLAIGroup::TakeAttackToken(class AOLBot* attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.TakeAttackToken");

	AOLAIGroup_TakeAttackToken_Params params;
	params.attacker = attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIGroup.CanAttack
// (Native, Public)
// Parameters:
// class AOLBot*                  attacker                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLAIGroup::CanAttack(class AOLBot* attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.CanAttack");

	AOLAIGroup_CanAttack_Params params;
	params.attacker = attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAIGroup.Recalculate
// (Defined, Event, Public)

void AOLAIGroup::Recalculate()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.Recalculate");

	AOLAIGroup_Recalculate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIGroup.DidAnyoneSeePlayerInBed
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLAIGroup::DidAnyoneSeePlayerInBed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.DidAnyoneSeePlayerInBed");

	AOLAIGroup_DidAnyoneSeePlayerInBed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAIGroup.DidAnyoneSeePlayerinLocker
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLAIGroup::DidAnyoneSeePlayerinLocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.DidAnyoneSeePlayerinLocker");

	AOLAIGroup_DidAnyoneSeePlayerinLocker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAIGroup.CanAnyoneSeeTarget
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AOLAIGroup::CanAnyoneSeeTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.CanAnyoneSeeTarget");

	AOLAIGroup_CanAnyoneSeeTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLAIGroup.ToggleAIAlwaysSeePlayer
// (Defined, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void AOLAIGroup::ToggleAIAlwaysSeePlayer(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.ToggleAIAlwaysSeePlayer");

	AOLAIGroup_ToggleAIAlwaysSeePlayer_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIGroup.ToggleAIIgnorePlayer
// (Defined, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void AOLAIGroup::ToggleAIIgnorePlayer(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.ToggleAIIgnorePlayer");

	AOLAIGroup_ToggleAIIgnorePlayer_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIGroup.TriggerVisualDisturbance
// (Defined, Event, Public)
// Parameters:
// class AOLBot*                  Triggerer                      (Parm)
// struct FVector                 DisturbanceLocation            (Parm)

void AOLAIGroup::TriggerVisualDisturbance(class AOLBot* Triggerer, const struct FVector& DisturbanceLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.TriggerVisualDisturbance");

	AOLAIGroup_TriggerVisualDisturbance_Params params;
	params.Triggerer = Triggerer;
	params.DisturbanceLocation = DisturbanceLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIGroup.TriggerAudioDisturbance
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// class AOLBot*                  Triggerer                      (Parm)
// struct FVector                 DisturbanceLocation            (Parm)
// bool                           bNewInvestigate                (OptionalParm, Parm)
// bool                           bNoTrim                        (OptionalParm, Parm)

void AOLAIGroup::TriggerAudioDisturbance(class AOLBot* Triggerer, const struct FVector& DisturbanceLocation, bool bNewInvestigate, bool bNoTrim)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.TriggerAudioDisturbance");

	AOLAIGroup_TriggerAudioDisturbance_Params params;
	params.Triggerer = Triggerer;
	params.DisturbanceLocation = DisturbanceLocation;
	params.bNewInvestigate = bNewInvestigate;
	params.bNoTrim = bNoTrim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIGroup.RemoveBot
// (Defined, Event, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)

void AOLAIGroup::RemoveBot(class AOLBot* Bot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.RemoveBot");

	AOLAIGroup_RemoveBot_Params params;
	params.Bot = Bot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIGroup.AddBot
// (Defined, Event, Public)
// Parameters:
// class AOLBot*                  Bot                            (Parm)

void AOLAIGroup::AddBot(class AOLBot* Bot)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIGroup.AddBot");

	AOLAIGroup_AddBot_Params params;
	params.Bot = Bot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAIInvestigationVolume.ProcessActorSetVolume
// (Defined, Event, Public)
// Parameters:
// class AActor*                  Other                          (Parm)

void AOLAIInvestigationVolume::ProcessActorSetVolume(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAIInvestigationVolume.ProcessActorSetVolume");

	AOLAIInvestigationVolume_ProcessActorSetVolume_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLAISightComponent.DisplayDebug
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void UOLAISightComponent::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLAISightComponent.DisplayDebug");

	UOLAISightComponent_DisplayDebug_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLBTTask.DisplayDebug
// (Defined, Public, HasOutParms)
// Parameters:
// class UCanvas*                 aCanvas                        (Parm)
// float                          XL                             (Parm)
// float                          XPos                           (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void UOLBTTask::DisplayDebug(class UCanvas* aCanvas, float XL, float XPos, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTTask.DisplayDebug");

	UOLBTTask_DisplayDebug_Params params;
	params.aCanvas = aCanvas;
	params.XL = XL;
	params.XPos = XPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLBTCompositeTask.DisplayDebug
// (Defined, Public, HasOutParms)
// Parameters:
// class UCanvas*                 aCanvas                        (Parm)
// float                          XL                             (Parm)
// float                          XPos                           (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void UOLBTCompositeTask::DisplayDebug(class UCanvas* aCanvas, float XL, float XPos, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTCompositeTask.DisplayDebug");

	UOLBTCompositeTask_DisplayDebug_Params params;
	params.aCanvas = aCanvas;
	params.XL = XL;
	params.XPos = XPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function OLGame.OLBTIfTask.Condition
// (Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTIfTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTIfTask.Condition");

	UOLBTIfTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.PointReachable
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FVector                 OverrideStartPoint             (OptionalParm, Parm)
// bool                           bAllowHitsInEndCollisionBox    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::PointReachable(const struct FVector& Point, const struct FVector& OverrideStartPoint, bool bAllowHitsInEndCollisionBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.PointReachable");

	UOLNavigationHandle_PointReachable_Params params;
	params.Point = Point;
	params.OverrideStartPoint = OverrideStartPoint;
	params.bAllowHitsInEndCollisionBox = bAllowHitsInEndCollisionBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.TrimPathByDistance
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// float                          DistanceToTrim                 (Parm)
// struct FVector                 out_NewDestination             (Parm, OutParm)
// bool                           bStopAtMeshObject              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::TrimPathByDistance(float DistanceToTrim, bool bStopAtMeshObject, struct FVector* out_NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.TrimPathByDistance");

	UOLNavigationHandle_TrimPathByDistance_Params params;
	params.DistanceToTrim = DistanceToTrim;
	params.bStopAtMeshObject = bStopAtMeshObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_NewDestination != nullptr)
		*out_NewDestination = params.out_NewDestination;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.TrimPathToLastDoor
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 out_NewDestination             (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::TrimPathToLastDoor(struct FVector* out_NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.TrimPathToLastDoor");

	UOLNavigationHandle_TrimPathToLastDoor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_NewDestination != nullptr)
		*out_NewDestination = params.out_NewDestination;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.ClearPath
// (Native, Public)

void UOLNavigationHandle::ClearPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.ClearPath");

	UOLNavigationHandle_ClearPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLNavigationHandle.PopMoveLocation
// (Native, Public)

void UOLNavigationHandle::PopMoveLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.PopMoveLocation");

	UOLNavigationHandle_PopMoveLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLNavigationHandle.GetNextMovePath
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FVector>         out_MovePath                   (Parm, OutParm, NeedCtorLink)
// float                          ArrivalDistance                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::GetNextMovePath(float ArrivalDistance, TArray<struct FVector>* out_MovePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.GetNextMovePath");

	UOLNavigationHandle_GetNextMovePath_Params params;
	params.ArrivalDistance = ArrivalDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_MovePath != nullptr)
		*out_MovePath = params.out_MovePath;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.GetNextMoveLocation
// (Native, Public, HasOutParms)
// Parameters:
// struct FVector                 out_MoveDest                   (Parm, OutParm)
// float                          ArrivalDistance                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::GetNextMoveLocation(float ArrivalDistance, struct FVector* out_MoveDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.GetNextMoveLocation");

	UOLNavigationHandle_GetNextMoveLocation_Params params;
	params.ArrivalDistance = ArrivalDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_MoveDest != nullptr)
		*out_MoveDest = params.out_MoveDest;

	return params.ReturnValue;
}


// Function OLGame.OLNavigationHandle.FindPath
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class AActor*                  out_DestActor                  (OptionalParm, Parm, OutParm)
// int                            out_DestItem                   (OptionalParm, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavigationHandle::FindPath(class AActor** out_DestActor, int* out_DestItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavigationHandle.FindPath");

	UOLNavigationHandle_FindPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_DestActor != nullptr)
		*out_DestActor = params.out_DestActor;
	if (out_DestItem != nullptr)
		*out_DestItem = params.out_DestItem;

	return params.ReturnValue;
}


// Function OLGame.OLNavMeshPath_SimilarToLastPath.Recycle
// (Defined, Event, Public)

void UOLNavMeshPath_SimilarToLastPath::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavMeshPath_SimilarToLastPath.Recycle");

	UOLNavMeshPath_SimilarToLastPath_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLNavMeshPath_SimilarToLastPath.SimilarToLastPath
// (Defined, Static, Public)
// Parameters:
// class UNavigationHandle*       NavHandle                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLNavMeshPath_SimilarToLastPath::STATIC_SimilarToLastPath(class UNavigationHandle* NavHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLNavMeshPath_SimilarToLastPath.SimilarToLastPath");

	UOLNavMeshPath_SimilarToLastPath_SimilarToLastPath_Params params;
	params.NavHandle = NavHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEnemyCannibal.NativeOnAnimEnd
// (Native, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AOLEnemyCannibal::NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyCannibal.NativeOnAnimEnd");

	AOLEnemyCannibal_NativeOnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyCannibal.NativeHideWeapon
// (Native, Public)

void AOLEnemyCannibal::NativeHideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyCannibal.NativeHideWeapon");

	AOLEnemyCannibal_NativeHideWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyCannibal.HideWeapon
// (Defined, Event, Public)

void AOLEnemyCannibal::HideWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyCannibal.HideWeapon");

	AOLEnemyCannibal_HideWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyCannibal.BuildScriptAnimSetList
// (Defined, Simulated, Event, Public)

void AOLEnemyCannibal::BuildScriptAnimSetList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyCannibal.BuildScriptAnimSetList");

	AOLEnemyCannibal_BuildScriptAnimSetList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemySurgeon.NativeOnAnimEnd
// (Native, Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (Parm)
// float                          PlayedTime                     (Parm)
// float                          ExcessTime                     (Parm)

void AOLEnemySurgeon::NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemySurgeon.NativeOnAnimEnd");

	AOLEnemySurgeon_NativeOnAnimEnd_Params params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemySurgeon.BuildScriptAnimSetList
// (Defined, Simulated, Event, Public)

void AOLEnemySurgeon::BuildScriptAnimSetList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemySurgeon.BuildScriptAnimSetList");

	AOLEnemySurgeon_BuildScriptAnimSetList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNanoCloud.OnSetNanoCloudVisibility
// (Defined, Public)
// Parameters:
// class UOLSeqAct_SetNanoCloudVisibility* Action                         (Parm)

void AOLEnemyNanoCloud::OnSetNanoCloudVisibility(class UOLSeqAct_SetNanoCloudVisibility* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNanoCloud.OnSetNanoCloudVisibility");

	AOLEnemyNanoCloud_OnSetNanoCloudVisibility_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNanoCloud.OnMorphNanoCloud
// (Defined, Public)
// Parameters:
// class UOLSeqAct_MorphNanoCloud* Action                         (Parm)

void AOLEnemyNanoCloud::OnMorphNanoCloud(class UOLSeqAct_MorphNanoCloud* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNanoCloud.OnMorphNanoCloud");

	AOLEnemyNanoCloud_OnMorphNanoCloud_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNanoCloud.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AOLEnemyNanoCloud::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNanoCloud.PostBeginPlay");

	AOLEnemyNanoCloud_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNanoCloud.SwitchToBloodyMaterialNotify
// (Native, Public)

void AOLEnemyNanoCloud::SwitchToBloodyMaterialNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNanoCloud.SwitchToBloodyMaterialNotify");

	AOLEnemyNanoCloud_SwitchToBloodyMaterialNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNanoCloud.SetHumanForm
// (Native, Public)

void AOLEnemyNanoCloud::SetHumanForm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNanoCloud.SetHumanForm");

	AOLEnemyNanoCloud_SetHumanForm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNanoCloud.SetSwarmForm
// (Native, Public)

void AOLEnemyNanoCloud::SetSwarmForm()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNanoCloud.SetSwarmForm");

	AOLEnemyNanoCloud_SetSwarmForm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNanoCloud.MorphToHuman
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          TimeScale                      (OptionalParm, Parm)

void AOLEnemyNanoCloud::MorphToHuman(float TimeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNanoCloud.MorphToHuman");

	AOLEnemyNanoCloud_MorphToHuman_Params params;
	params.TimeScale = TimeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNanoCloud.MorphToSwarm
// (Native, HasOptionalParms, Public)
// Parameters:
// float                          TimeScale                      (OptionalParm, Parm)

void AOLEnemyNanoCloud::MorphToSwarm(float TimeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNanoCloud.MorphToSwarm");

	AOLEnemyNanoCloud_MorphToSwarm_Params params;
	params.TimeScale = TimeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyNanoCloud.NativePostBeginPlay
// (Native, Public)

void AOLEnemyNanoCloud::NativePostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyNanoCloud.NativePostBeginPlay");

	AOLEnemyNanoCloud_NativePostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemySoldier.PlayLanded
// (Defined, Public)
// Parameters:
// float                          ImpactVel                      (Parm)

void AOLEnemySoldier::PlayLanded(float ImpactVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemySoldier.PlayLanded");

	AOLEnemySoldier_PlayLanded_Params params;
	params.ImpactVel = ImpactVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLEnemyGroom.PlayLanded
// (Defined, Public)
// Parameters:
// float                          ImpactVel                      (Parm)

void AOLEnemyGroom::PlayLanded(float ImpactVel)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEnemyGroom.PlayLanded");

	AOLEnemyGroom_PlayLanded_Params params;
	params.ImpactVel = ImpactVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWaypoint.AnimStartedEvent
// (Native, Public)
// Parameters:
// class AActor*                  InInstigator                   (Parm)

void AOLWaypoint::AnimStartedEvent(class AActor* InInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWaypoint.AnimStartedEvent");

	AOLWaypoint_AnimStartedEvent_Params params;
	params.InInstigator = InInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLWaypoint.WaypointReachedEvent
// (Native, Public)
// Parameters:
// class AActor*                  InInstigator                   (Parm)

void AOLWaypoint::WaypointReachedEvent(class AActor* InInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLWaypoint.WaypointReachedEvent");

	AOLWaypoint_WaypointReachedEvent_Params params;
	params.InInstigator = InInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLSeqAct_AIStartPatrol.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_AIStartPatrol::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_AIStartPatrol.GetObjClassVersion");

	UOLSeqAct_AIStartPatrol_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_Door.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_Door::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Door.GetObjClassVersion");

	UOLSeqAct_Door_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqAct_Struggle.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqAct_Struggle::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqAct_Struggle.GetObjClassVersion");

	UOLSeqAct_Struggle_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqCond_AIState.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqCond_AIState::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqCond_AIState.GetObjClassVersion");

	UOLSeqCond_AIState_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqCond_Checkpoint.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqCond_Checkpoint::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqCond_Checkpoint.GetObjClassVersion");

	UOLSeqCond_Checkpoint_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqCond_CompareDeaths.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqCond_CompareDeaths::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqCond_CompareDeaths.GetObjClassVersion");

	UOLSeqCond_CompareDeaths_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqCond_IsTouching.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqCond_IsTouching::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqCond_IsTouching.GetObjClassVersion");

	UOLSeqCond_IsTouching_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqEvent_ApplyCheckpointState.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqEvent_ApplyCheckpointState::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqEvent_ApplyCheckpointState.GetObjClassVersion");

	UOLSeqEvent_ApplyCheckpointState_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLSeqEvent_Door.GetObjClassVersion
// (Defined, Event, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLSeqEvent_Door::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLSeqEvent_Door.GetObjClassVersion");

	UOLSeqEvent_Door_GetObjClassVersion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTCanAttackTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTCanAttackTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTCanAttackTask.Condition");

	UOLBTCanAttackTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTDistanceToPlayerTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTDistanceToPlayerTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTDistanceToPlayerTask.Condition");

	UOLBTDistanceToPlayerTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTHasDisturbanceTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTHasDisturbanceTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTHasDisturbanceTask.Condition");

	UOLBTHasDisturbanceTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTHasFollowPatrolTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTHasFollowPatrolTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTHasFollowPatrolTask.Condition");

	UOLBTHasFollowPatrolTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTHasInvestigationPointTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTHasInvestigationPointTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTHasInvestigationPointTask.Condition");

	UOLBTHasInvestigationPointTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTHasNewDisturbanceTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTHasNewDisturbanceTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTHasNewDisturbanceTask.Condition");

	UOLBTHasNewDisturbanceTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTHasPatrolTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTHasPatrolTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTHasPatrolTask.Condition");

	UOLBTHasPatrolTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTHasValidTargetTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTHasValidTargetTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTHasValidTargetTask.Condition");

	UOLBTHasValidTargetTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTHasVisibleTargetTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTHasVisibleTargetTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTHasVisibleTargetTask.Condition");

	UOLBTHasVisibleTargetTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTIsInBehaviorStateTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTIsInBehaviorStateTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTIsInBehaviorStateTask.Condition");

	UOLBTIsInBehaviorStateTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTIsInMatineeTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTIsInMatineeTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTIsInMatineeTask.Condition");

	UOLBTIsInMatineeTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTIsInvestigatingTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTIsInvestigatingTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTIsInvestigatingTask.Condition");

	UOLBTIsInvestigatingTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTIsTargetReachableTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTIsTargetReachableTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTIsTargetReachableTask.Condition");

	UOLBTIsTargetReachableTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTSawPlayerInBedTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTSawPlayerInBedTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTSawPlayerInBedTask.Condition");

	UOLBTSawPlayerInBedTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTSawPlayerInLockerTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTSawPlayerInLockerTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTSawPlayerInLockerTask.Condition");

	UOLBTSawPlayerInLockerTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTSawPlayerInSqueezeTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTSawPlayerInSqueezeTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTSawPlayerInSqueezeTask.Condition");

	UOLBTSawPlayerInSqueezeTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTShouldAttackOnProximityTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTShouldAttackOnProximityTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTShouldAttackOnProximityTask.Condition");

	UOLBTShouldAttackOnProximityTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTShouldAttackTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTShouldAttackTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTShouldAttackTask.Condition");

	UOLBTShouldAttackTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTTargetNotMovingTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTTargetNotMovingTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTTargetNotMovingTask.Condition");

	UOLBTTargetNotMovingTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLBTWasLastMoveFailedReasonTask.Condition
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLBTWasLastMoveFailedReasonTask::Condition()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLBTWasLastMoveFailedReasonTask.Condition");

	UOLBTWasLastMoveFailedReasonTask_Condition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLEmailScreen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLEmailScreen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLEmailScreen.WidgetInitialized");

	UOLEmailScreen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLFlashBackScreen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLFlashBackScreen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFlashBackScreen.WidgetInitialized");

	UOLFlashBackScreen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLFlashForwardScreen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLFlashForwardScreen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFlashForwardScreen.WidgetInitialized");

	UOLFlashForwardScreen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLFlashLight.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AOLFlashLight::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLFlashLight.OnToggle");

	AOLFlashLight_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGFxMoviePlayer.OnProfileWriteComplete
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOLGFxMoviePlayer::OnProfileWriteComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.OnProfileWriteComplete");

	UOLGFxMoviePlayer_OnProfileWriteComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGFxMoviePlayer.SaveProfile
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (OptionalParm, Parm, NeedCtorLink)
// class AOLPlayerController*     PlayerToSave                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLGFxMoviePlayer::SaveProfile(const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate, class AOLPlayerController* PlayerToSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.SaveProfile");

	UOLGFxMoviePlayer_SaveProfile_Params params;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;
	params.PlayerToSave = PlayerToSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGFxMoviePlayer.GetOnlinePlayerInterface
// (Final, Defined, Static, Public)
// Parameters:
// TScriptInterface<class UOnlinePlayerInterface> ReturnValue                    (Parm, OutParm, ReturnParm)

TScriptInterface<class UOnlinePlayerInterface> UOLGFxMoviePlayer::STATIC_GetOnlinePlayerInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.GetOnlinePlayerInterface");

	UOLGFxMoviePlayer_GetOnlinePlayerInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGFxMoviePlayer.MuteSoundThemes
// (Defined, Public, HasDefaults)
// Parameters:
// bool                           bMute                          (Parm)

void UOLGFxMoviePlayer::MuteSoundThemes(bool bMute)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.MuteSoundThemes");

	UOLGFxMoviePlayer_MuteSoundThemes_Params params;
	params.bMute = bMute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLGFxMoviePlayer.GetGame
// (Defined, Static, Public)
// Parameters:
// class AOLGame*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLGame* UOLGFxMoviePlayer::STATIC_GetGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.GetGame");

	UOLGFxMoviePlayer_GetGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLGFxMoviePlayer.GetOLPC
// (Defined, Public)
// Parameters:
// class AOLPlayerController*     ReturnValue                    (Parm, OutParm, ReturnParm)

class AOLPlayerController* UOLGFxMoviePlayer::GetOLPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLGFxMoviePlayer.GetOLPC");

	UOLGFxMoviePlayer_GetOLPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.GetLocalizedString
// (Defined, Public)
// Parameters:
// struct FString                 Category                       (Parm, NeedCtorLink)
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 File                           (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd::GetLocalizedString(const struct FString& Category, const struct FString& KeyName, const struct FString& File)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.GetLocalizedString");

	UOLUIFrontEnd_GetLocalizedString_Params params;
	params.Category = Category;
	params.KeyName = KeyName;
	params.File = File;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.GetGamepadActionBoundToKey
// (Defined, Public)
// Parameters:
// struct FString                 KeyNameString                  (Parm, NeedCtorLink)
// int                            ConfigType                     (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd::GetGamepadActionBoundToKey(const struct FString& KeyNameString, int ConfigType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.GetGamepadActionBoundToKey");

	UOLUIFrontEnd_GetGamepadActionBoundToKey_Params params;
	params.KeyNameString = KeyNameString;
	params.ConfigType = ConfigType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.HasInitializedGamma
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd::HasInitializedGamma()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.HasInitializedGamma");

	UOLUIFrontEnd_HasInitializedGamma_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.GetFriendlyKeyBindingName
// (Defined, Public)
// Parameters:
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd::GetFriendlyKeyBindingName(const struct FString& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.GetFriendlyKeyBindingName");

	UOLUIFrontEnd_GetFriendlyKeyBindingName_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.StartKeyBindingCapture
// (Defined, Public)

void UOLUIFrontEnd::StartKeyBindingCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.StartKeyBindingCapture");

	UOLUIFrontEnd_StartKeyBindingCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.FilterButtonInput");

	UOLUIFrontEnd_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.WidgetInitialized");

	UOLUIFrontEnd_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.ConfigureTargetView
// (Defined, Public)
// Parameters:
// class UOLUIFrontEnd_View*      targetView                     (Parm)

void UOLUIFrontEnd::ConfigureTargetView(class UOLUIFrontEnd_View* targetView)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.ConfigureTargetView");

	UOLUIFrontEnd_ConfigureTargetView_Params params;
	params.targetView = targetView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.ConfigureView
// (Final, Defined, Public)
// Parameters:
// class UOLUIFrontEnd_View*      InView                         (Parm)
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)

void UOLUIFrontEnd::ConfigureView(class UOLUIFrontEnd_View* InView, const struct FName& WidgetName, const struct FName& WidgetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.ConfigureView");

	UOLUIFrontEnd_ConfigureView_Params params;
	params.InView = InView;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.PopViewStub
// (Final, Defined, Public)
// Parameters:
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UOLUIFrontEnd::PopViewStub()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.PopViewStub");

	UOLUIFrontEnd_PopViewStub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.PopView
// (Defined, Public)
// Parameters:
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UOLUIFrontEnd::PopView()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.PopView");

	UOLUIFrontEnd_PopView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd.PushViewByName
// (Final, Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   TargetViewName                 (Parm)
// class UOLUIFrontEnd_Screen*    ParentView                     (OptionalParm, Parm)

void UOLUIFrontEnd::PushViewByName(const struct FName& TargetViewName, class UOLUIFrontEnd_Screen* ParentView)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.PushViewByName");

	UOLUIFrontEnd_PushViewByName_Params params;
	params.TargetViewName = TargetViewName;
	params.ParentView = ParentView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.PushView
// (Defined, Public)
// Parameters:
// class UOLUIFrontEnd_View*      targetView                     (Parm, CoerceParm)

void UOLUIFrontEnd::PushView(class UOLUIFrontEnd_View* targetView)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.PushView");

	UOLUIFrontEnd_PushView_Params params;
	params.targetView = targetView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.LoadView
// (Final, Defined, Public, HasDefaults)
// Parameters:
// struct FViewInfo               InViewInfo                     (Parm, NeedCtorLink)

void UOLUIFrontEnd::LoadView(const struct FViewInfo& InViewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.LoadView");

	UOLUIFrontEnd_LoadView_Params params;
	params.InViewInfo = InViewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.LoadViews
// (Final, Defined, Public)

void UOLUIFrontEnd::LoadViews()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.LoadViews");

	UOLUIFrontEnd_LoadViews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.ConfigFrontEnd
// (Final, Defined, Public)

void UOLUIFrontEnd::ConfigFrontEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.ConfigFrontEnd");

	UOLUIFrontEnd_ConfigFrontEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.OnKeyBindingsChanged
// (Defined, Public)

void UOLUIFrontEnd::OnKeyBindingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.OnKeyBindingsChanged");

	UOLUIFrontEnd_OnKeyBindingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.AddCaptureKeys
// (Defined, Public)

void UOLUIFrontEnd::AddCaptureKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.AddCaptureKeys");

	UOLUIFrontEnd_AddCaptureKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.OnClose
// (Defined, Event, Public)

void UOLUIFrontEnd::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.OnClose");

	UOLUIFrontEnd_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd.Start
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd.Start");

	UOLUIFrontEnd_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_View.OnKeyBindingCaptured
// (Public)
// Parameters:
// struct FName                   KeyName                        (Parm)

void UOLUIFrontEnd_View::OnKeyBindingCaptured(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnKeyBindingCaptured");

	UOLUIFrontEnd_View_OnKeyBindingCaptured_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_View::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.FilterButtonInput");

	UOLUIFrontEnd_View_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_View.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_View::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.WidgetInitialized");

	UOLUIFrontEnd_View_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_View.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_View::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.back");

	UOLUIFrontEnd_View_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_View.OnViewDeactivated
// (Public)

void UOLUIFrontEnd_View::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnViewDeactivated");

	UOLUIFrontEnd_View_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.OnViewActivated
// (Public)

void UOLUIFrontEnd_View::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnViewActivated");

	UOLUIFrontEnd_View_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.OnTopMostView
// (HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_View::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnTopMostView");

	UOLUIFrontEnd_View_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_View.OnViewLoaded
// (Public)

void UOLUIFrontEnd_View::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_View.OnViewLoaded");

	UOLUIFrontEnd_View_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Screen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Screen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.WidgetInitialized");

	UOLUIFrontEnd_Screen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Screen.LocalizeNarrative
// (Defined, Public)
// Parameters:
// struct FString                 SectionName                    (Parm, NeedCtorLink)
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_Screen::LocalizeNarrative(const struct FString& SectionName, const struct FString& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.LocalizeNarrative");

	UOLUIFrontEnd_Screen_LocalizeNarrative_Params params;
	params.SectionName = SectionName;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Screen.IsDLCInstalled
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Screen::IsDLCInstalled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.IsDLCInstalled");

	UOLUIFrontEnd_Screen_IsDLCInstalled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Screen.IsDemo
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Screen::IsDemo()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.IsDemo");

	UOLUIFrontEnd_Screen_IsDemo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Screen.IsTopMostView
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Screen::IsTopMostView()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Screen.IsTopMostView");

	UOLUIFrontEnd_Screen_IsTopMostView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_MainMenu.ASShowNewGameIntroText
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::ASShowNewGameIntroText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.ASShowNewGameIntroText");

	UOLUIFrontEnd_MainMenu_ASShowNewGameIntroText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_MainMenu::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.WidgetInitialized");

	UOLUIFrontEnd_MainMenu_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnButtonClick
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnButtonClick(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnButtonClick");

	UOLUIFrontEnd_MainMenu_OnButtonClick_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.PopulateButtons
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::PopulateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.PopulateButtons");

	UOLUIFrontEnd_MainMenu_PopulateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_MainMenu::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.back");

	UOLUIFrontEnd_MainMenu_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnExitButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnExitButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnExitButtonPress");

	UOLUIFrontEnd_MainMenu_OnExitButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnCreditsButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnCreditsButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnCreditsButtonPress");

	UOLUIFrontEnd_MainMenu_OnCreditsButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnOptionsButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnOptionsButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnOptionsButtonPress");

	UOLUIFrontEnd_MainMenu_OnOptionsButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.Select_Options
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::Select_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.Select_Options");

	UOLUIFrontEnd_MainMenu_Select_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnLoadButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnLoadButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnLoadButtonPress");

	UOLUIFrontEnd_MainMenu_OnLoadButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnOKButtonClick
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnOKButtonClick(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnOKButtonClick");

	UOLUIFrontEnd_MainMenu_OnOKButtonClick_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnChaptersButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnChaptersButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnChaptersButtonPress");

	UOLUIFrontEnd_MainMenu_OnChaptersButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnStartDLCButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnStartDLCButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnStartDLCButtonPress");

	UOLUIFrontEnd_MainMenu_OnStartDLCButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnStartButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnStartButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnStartButtonPress");

	UOLUIFrontEnd_MainMenu_OnStartButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.GameLoadedCallback
// (Defined, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLUIFrontEnd_MainMenu::GameLoadedCallback(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.GameLoadedCallback");

	UOLUIFrontEnd_MainMenu_GameLoadedCallback_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.StartNewGame
// (Final, Defined, Private)

void UOLUIFrontEnd_MainMenu::StartNewGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.StartNewGame");

	UOLUIFrontEnd_MainMenu_StartNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.DifficultySelected
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::DifficultySelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.DifficultySelected");

	UOLUIFrontEnd_MainMenu_DifficultySelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.SaveLocationSelected
// (Defined, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLUIFrontEnd_MainMenu::SaveLocationSelected(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.SaveLocationSelected");

	UOLUIFrontEnd_MainMenu_SaveLocationSelected_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnContinueButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_MainMenu::OnContinueButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnContinueButtonPress");

	UOLUIFrontEnd_MainMenu_OnContinueButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_MainMenu::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnTopMostView");

	UOLUIFrontEnd_MainMenu_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_MainMenu.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_MainMenu::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_MainMenu.OnViewLoaded");

	UOLUIFrontEnd_MainMenu_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Credits::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.WidgetInitialized");

	UOLUIFrontEnd_Credits_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Credits.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Credits::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.Press_Back");

	UOLUIFrontEnd_Credits_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.OnViewDeactivated
// (Defined, Public)

void UOLUIFrontEnd_Credits::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.OnViewDeactivated");

	UOLUIFrontEnd_Credits_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_Credits::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.OnTopMostView");

	UOLUIFrontEnd_Credits_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.OnCreditsFinished
// (Defined, Public)

void UOLUIFrontEnd_Credits::OnCreditsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.OnCreditsFinished");

	UOLUIFrontEnd_Credits_OnCreditsFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Credits.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Credits::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Credits.back");

	UOLUIFrontEnd_Credits_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Console.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Console::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Console.WidgetInitialized");

	UOLUIFrontEnd_Console_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIMessage.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIMessage::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.WidgetInitialized");

	UOLUIMessage_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIMessage.SetMessage
// (Defined, Public)
// Parameters:
// TEnumAsByte<EHUDMessageType>   MessageType                    (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOLUIMessage::SetMessage(TEnumAsByte<EHUDMessageType> MessageType, const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.SetMessage");

	UOLUIMessage_SetMessage_Params params;
	params.MessageType = MessageType;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIMessage.SetVisible
// (Defined, Public)
// Parameters:
// bool                           bVisible                       (Parm)

void UOLUIMessage::SetVisible(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.SetVisible");

	UOLUIMessage_SetVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIMessage.OnClose
// (Public)

void UOLUIMessage::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.OnClose");

	UOLUIMessage_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIMessage.Start
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIMessage::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIMessage.Start");

	UOLUIMessage_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_EvidenceList.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_EvidenceList::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceList.FilterButtonInput");

	UOLUIFrontEnd_EvidenceList_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_EvidenceList.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_EvidenceList::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceList.WidgetInitialized");

	UOLUIFrontEnd_EvidenceList_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_EvidenceList.OnItemClick
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_EvidenceList::OnItemClick(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceList.OnItemClick");

	UOLUIFrontEnd_EvidenceList_OnItemClick_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceList.PopulateItemList
// (Defined, Public)

void UOLUIFrontEnd_EvidenceList::PopulateItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceList.PopulateItemList");

	UOLUIFrontEnd_EvidenceList_PopulateItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceList.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_EvidenceList::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceList.OnTopMostView");

	UOLUIFrontEnd_EvidenceList_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceList.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_EvidenceList::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceList.Press_Back");

	UOLUIFrontEnd_EvidenceList_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingList.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_RecordingList::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingList.FilterButtonInput");

	UOLUIFrontEnd_RecordingList_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingList.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_RecordingList::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingList.WidgetInitialized");

	UOLUIFrontEnd_RecordingList_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingList.OnItemClick
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingList::OnItemClick(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingList.OnItemClick");

	UOLUIFrontEnd_RecordingList_OnItemClick_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingList.PopulateItemList
// (Defined, Public)

void UOLUIFrontEnd_RecordingList::PopulateItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingList.PopulateItemList");

	UOLUIFrontEnd_RecordingList_PopulateItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingList.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_RecordingList::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingList.OnTopMostView");

	UOLUIFrontEnd_RecordingList_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingList.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingList::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingList.Press_Back");

	UOLUIFrontEnd_RecordingList_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_TabMenu.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_TabMenu::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_TabMenu.FilterButtonInput");

	UOLUIFrontEnd_TabMenu_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_TabMenu.GetInventoryText
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_TabMenu::GetInventoryText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_TabMenu.GetInventoryText");

	UOLUIFrontEnd_TabMenu_GetInventoryText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_TabMenu.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_TabMenu::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_TabMenu.WidgetInitialized");

	UOLUIFrontEnd_TabMenu_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_TabMenu.OnCloseButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_TabMenu::OnCloseButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_TabMenu.OnCloseButtonPress");

	UOLUIFrontEnd_TabMenu_OnCloseButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_TabMenu.OnEvidenceButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_TabMenu::OnEvidenceButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_TabMenu.OnEvidenceButtonPress");

	UOLUIFrontEnd_TabMenu_OnEvidenceButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_TabMenu.OnRecordingButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_TabMenu::OnRecordingButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_TabMenu.OnRecordingButtonPress");

	UOLUIFrontEnd_TabMenu_OnRecordingButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_TabMenu.OnButtonClick
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_TabMenu::OnButtonClick(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_TabMenu.OnButtonClick");

	UOLUIFrontEnd_TabMenu_OnButtonClick_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_TabMenu.PopulateButtons
// (Defined, Public)

void UOLUIFrontEnd_TabMenu::PopulateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_TabMenu.PopulateButtons");

	UOLUIFrontEnd_TabMenu_PopulateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_TabMenu.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_TabMenu::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_TabMenu.OnViewActivated");

	UOLUIFrontEnd_TabMenu_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_TabMenu.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_TabMenu::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_TabMenu.OnViewLoaded");

	UOLUIFrontEnd_TabMenu_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_ChapterSelection::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.WidgetInitialized");

	UOLUIFrontEnd_ChapterSelection_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_ChapterSelection::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.FilterButtonInput");

	UOLUIFrontEnd_ChapterSelection_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_ChapterSelection::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Back");

	UOLUIFrontEnd_ChapterSelection_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Load
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_ChapterSelection::Press_Load(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.Press_Load");

	UOLUIFrontEnd_ChapterSelection_Press_Load_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.LoadSelectedChapter
// (Defined, Public)

void UOLUIFrontEnd_ChapterSelection::LoadSelectedChapter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.LoadSelectedChapter");

	UOLUIFrontEnd_ChapterSelection_LoadSelectedChapter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.SetSelectedIndex
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UOLUIFrontEnd_ChapterSelection::SetSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.SetSelectedIndex");

	UOLUIFrontEnd_ChapterSelection_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.ChapterListChanged
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_ChapterSelection::ChapterListChanged(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.ChapterListChanged");

	UOLUIFrontEnd_ChapterSelection_ChapterListChanged_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.PopulateChapterList
// (Defined, Public)

void UOLUIFrontEnd_ChapterSelection::PopulateChapterList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.PopulateChapterList");

	UOLUIFrontEnd_ChapterSelection_PopulateChapterList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.Pop
// (Defined, Public)

void UOLUIFrontEnd_ChapterSelection::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.Pop");

	UOLUIFrontEnd_ChapterSelection_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewDeactivated
// (Public)

void UOLUIFrontEnd_ChapterSelection::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.OnViewDeactivated");

	UOLUIFrontEnd_ChapterSelection_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_ChapterSelection.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_ChapterSelection::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_ChapterSelection.OnTopMostView");

	UOLUIFrontEnd_ChapterSelection_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_DifficultySelectionScreen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.WidgetInitialized");

	UOLUIFrontEnd_DifficultySelectionScreen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ASShowConfirmInsaneDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::ASShowConfirmInsaneDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ASShowConfirmInsaneDialog");

	UOLUIFrontEnd_DifficultySelectionScreen_ASShowConfirmInsaneDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_DifficultySelectionScreen::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.FilterButtonInput");

	UOLUIFrontEnd_DifficultySelectionScreen_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Back");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Pop
// (Defined, Public)

void UOLUIFrontEnd_DifficultySelectionScreen::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Pop");

	UOLUIFrontEnd_DifficultySelectionScreen_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewDeactivated
// (Public)

void UOLUIFrontEnd_DifficultySelectionScreen::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewDeactivated");

	UOLUIFrontEnd_DifficultySelectionScreen_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ProceedToStartGame
// (Defined, Public)

void UOLUIFrontEnd_DifficultySelectionScreen::ProceedToStartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.ProceedToStartGame");

	UOLUIFrontEnd_DifficultySelectionScreen_ProceedToStartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnConfirmedInsane
// (Defined, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UOLUIFrontEnd_DifficultySelectionScreen::OnConfirmedInsane(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnConfirmedInsane");

	UOLUIFrontEnd_DifficultySelectionScreen_OnConfirmedInsane_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Insane
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Insane(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Insane");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Insane_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Nightmare
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Nightmare(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Nightmare");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Nightmare_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Hard
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Hard(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Hard");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Hard_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Normal
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_DifficultySelectionScreen::Press_Normal(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.Press_Normal");

	UOLUIFrontEnd_DifficultySelectionScreen_Press_Normal_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_DifficultySelectionScreen::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnTopMostView");

	UOLUIFrontEnd_DifficultySelectionScreen_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_DifficultySelectionScreen::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_DifficultySelectionScreen.OnViewLoaded");

	UOLUIFrontEnd_DifficultySelectionScreen_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCaptured
// (Final, Defined, Private)
// Parameters:
// struct FString                 KeyName                        (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::ASOnKeyBindingCaptured(const struct FString& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ASOnKeyBindingCaptured");

	UOLUIFrontEnd_Options_ASOnKeyBindingCaptured_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ShowMessageDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::ShowMessageDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ShowMessageDialog");

	UOLUIFrontEnd_Options_ShowMessageDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ShowKeyBindingConflictDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::ShowKeyBindingConflictDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ShowKeyBindingConflictDialog");

	UOLUIFrontEnd_Options_ShowKeyBindingConflictDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ShowChangeConfirmationDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::ShowChangeConfirmationDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ShowChangeConfirmationDialog");

	UOLUIFrontEnd_Options_ShowChangeConfirmationDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ShowResolutionConfirmationDialogAfterDelay
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::ShowResolutionConfirmationDialogAfterDelay(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ShowResolutionConfirmationDialogAfterDelay");

	UOLUIFrontEnd_Options_ShowResolutionConfirmationDialogAfterDelay_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.GetCurrentGammaSetting
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUIFrontEnd_Options::GetCurrentGammaSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetCurrentGammaSetting");

	UOLUIFrontEnd_Options_GetCurrentGammaSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.OnSliderChanged
// (Defined, Public)
// Parameters:
// int                            ProfileSettingId               (Parm)
// float                          SliderValue                    (Parm)

void UOLUIFrontEnd_Options::OnSliderChanged(int ProfileSettingId, float SliderValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnSliderChanged");

	UOLUIFrontEnd_Options_OnSliderChanged_Params params;
	params.ProfileSettingId = ProfileSettingId;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.GetKeyBindingConflicts
// (Defined, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UOLUIFrontEnd_Options::GetKeyBindingConflicts()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetKeyBindingConflicts");

	UOLUIFrontEnd_Options_GetKeyBindingConflicts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetCurrentGFxList
// (Defined, Public)
// Parameters:
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UOLUIFrontEnd_Options::GetCurrentGFxList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetCurrentGFxList");

	UOLUIFrontEnd_Options_GetCurrentGFxList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.SetGammaExternally
// (Defined, Public)
// Parameters:
// float                          Gamma                          (Parm)

void UOLUIFrontEnd_Options::SetGammaExternally(float Gamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.SetGammaExternally");

	UOLUIFrontEnd_Options_SetGammaExternally_Params params;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.SetGamepadConfigExternally
// (Defined, Public)
// Parameters:
// int                            ConfigIndex                    (Parm)

void UOLUIFrontEnd_Options::SetGamepadConfigExternally(int ConfigIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.SetGamepadConfigExternally");

	UOLUIFrontEnd_Options_SetGamepadConfigExternally_Params params;
	params.ConfigIndex = ConfigIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.GetGamepadConfig
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options::GetGamepadConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetGamepadConfig");

	UOLUIFrontEnd_Options_GetGamepadConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCaptured
// (Defined, Public)
// Parameters:
// struct FName                   KeyName                        (Parm)

void UOLUIFrontEnd_Options::OnKeyBindingCaptured(const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnKeyBindingCaptured");

	UOLUIFrontEnd_Options_OnKeyBindingCaptured_Params params;
	params.KeyName = KeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.GetDisplayedResolutionIndexFromOriginalIndex
// (Defined, Public)
// Parameters:
// int                            OriginalIndex                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options::GetDisplayedResolutionIndexFromOriginalIndex(int OriginalIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetDisplayedResolutionIndexFromOriginalIndex");

	UOLUIFrontEnd_Options_GetDisplayedResolutionIndexFromOriginalIndex_Params params;
	params.OriginalIndex = OriginalIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetOriginalResolutionIndexFromDisplayedIndex
// (Defined, Public)
// Parameters:
// int                            DisplayedIndex                 (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options::GetOriginalResolutionIndexFromDisplayedIndex(int DisplayedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetOriginalResolutionIndexFromDisplayedIndex");

	UOLUIFrontEnd_Options_GetOriginalResolutionIndexFromDisplayedIndex_Params params;
	params.DisplayedIndex = DisplayedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.RemoveUnsupportedResolutionsFromList
// (Defined, Public)
// Parameters:
// TArray<struct FName>           OriginalList                   (Parm, NeedCtorLink)
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FName> UOLUIFrontEnd_Options::RemoveUnsupportedResolutionsFromList(TArray<struct FName> OriginalList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.RemoveUnsupportedResolutionsFromList");

	UOLUIFrontEnd_Options_RemoveUnsupportedResolutionsFromList_Params params;
	params.OriginalList = OriginalList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetFullscreenOptionIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options::GetFullscreenOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetFullscreenOptionIndex");

	UOLUIFrontEnd_Options_GetFullscreenOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetResolutionOptionIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options::GetResolutionOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetResolutionOptionIndex");

	UOLUIFrontEnd_Options_GetResolutionOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.HasResolutionChanged
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::HasResolutionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.HasResolutionChanged");

	UOLUIFrontEnd_Options_HasResolutionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.WidgetInitialized");

	UOLUIFrontEnd_Options_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetOLProfile
// (Defined, Public)
// Parameters:
// class UOLProfileSettings*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UOLProfileSettings* UOLUIFrontEnd_Options::GetOLProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetOLProfile");

	UOLUIFrontEnd_Options_GetOLProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.SaveSettingsToProfile
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::SaveSettingsToProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.SaveSettingsToProfile");

	UOLUIFrontEnd_Options_SaveSettingsToProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.HasAnyPropertyChanged
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::HasAnyPropertyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.HasAnyPropertyChanged");

	UOLUIFrontEnd_Options_HasAnyPropertyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.HasPropertyChangedInList
// (Defined, Public, HasDefaults)
// Parameters:
// class UGFxObject*              OptionsList                    (Parm)
// TArray<struct FOptionInfo>     OptionInfos                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::HasPropertyChangedInList(class UGFxObject* OptionsList, TArray<struct FOptionInfo> OptionInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.HasPropertyChangedInList");

	UOLUIFrontEnd_Options_HasPropertyChangedInList_Params params;
	params.OptionsList = OptionsList;
	params.OptionInfos = OptionInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.SaveSettingsForList
// (Defined, Public, HasDefaults)
// Parameters:
// TArray<struct FOptionInfo>     OptionInfos                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::SaveSettingsForList(TArray<struct FOptionInfo> OptionInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.SaveSettingsForList");

	UOLUIFrontEnd_Options_SaveSettingsForList_Params params;
	params.OptionInfos = OptionInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.TabChanged
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::TabChanged(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.TabChanged");

	UOLUIFrontEnd_Options_TabChanged_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.StoreOptionValuesForList
// (Defined, Public, HasOutParms)
// Parameters:
// class UGFxObject*              OptionsList                    (Parm)
// TArray<struct FOptionInfo>     OptionInfos                    (Parm, OutParm, NeedCtorLink)

void UOLUIFrontEnd_Options::StoreOptionValuesForList(class UGFxObject* OptionsList, TArray<struct FOptionInfo>* OptionInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.StoreOptionValuesForList");

	UOLUIFrontEnd_Options_StoreOptionValuesForList_Params params;
	params.OptionsList = OptionsList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionInfos != nullptr)
		*OptionInfos = params.OptionInfos;
}


// Function OLGame.OLUIFrontEnd_Options.GetOptionValueStringAt
// (Defined, Public, HasDefaults)
// Parameters:
// class UGFxObject*              OptionsList                    (Parm)
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_Options::GetOptionValueStringAt(class UGFxObject* OptionsList, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetOptionValueStringAt");

	UOLUIFrontEnd_Options_GetOptionValueStringAt_Params params;
	params.OptionsList = OptionsList;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.GetOptionValueAt
// (Defined, Public, HasDefaults)
// Parameters:
// class UGFxObject*              OptionsList                    (Parm)
// int                            Index                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUIFrontEnd_Options::GetOptionValueAt(class UGFxObject* OptionsList, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetOptionValueAt");

	UOLUIFrontEnd_Options_GetOptionValueAt_Params params;
	params.OptionsList = OptionsList;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.SetDefaultOptionValuesForList
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<struct FOptionInfo>     OptionInfos                    (Parm, OutParm, NeedCtorLink)

void UOLUIFrontEnd_Options::SetDefaultOptionValuesForList(TArray<struct FOptionInfo>* OptionInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.SetDefaultOptionValuesForList");

	UOLUIFrontEnd_Options_SetDefaultOptionValuesForList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionInfos != nullptr)
		*OptionInfos = params.OptionInfos;
}


// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesForList
// (Defined, Public, HasOutParms)
// Parameters:
// TArray<struct FOptionInfo>     OptionInfos                    (Parm, OutParm, NeedCtorLink)

void UOLUIFrontEnd_Options::FillOptionValuesForList(TArray<struct FOptionInfo>* OptionInfos)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.FillOptionValuesForList");

	UOLUIFrontEnd_Options_FillOptionValuesForList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionInfos != nullptr)
		*OptionInfos = params.OptionInfos;
}


// Function OLGame.OLUIFrontEnd_Options.FillOptionValuesFromProfile
// (Defined, Public)

void UOLUIFrontEnd_Options::FillOptionValuesFromProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.FillOptionValuesFromProfile");

	UOLUIFrontEnd_Options_FillOptionValuesFromProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.PopulateControlsOptions
// (Defined, Public)

void UOLUIFrontEnd_Options::PopulateControlsOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.PopulateControlsOptions");

	UOLUIFrontEnd_Options_PopulateControlsOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.PopulateGraphicsOptions
// (Defined, Public)

void UOLUIFrontEnd_Options::PopulateGraphicsOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.PopulateGraphicsOptions");

	UOLUIFrontEnd_Options_PopulateGraphicsOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.PopulateGeneralOptions
// (Defined, Public)

void UOLUIFrontEnd_Options::PopulateGeneralOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.PopulateGeneralOptions");

	UOLUIFrontEnd_Options_PopulateGeneralOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.GetObjectFromOption
// (Defined, Public)
// Parameters:
// struct FOptionInfo             CurrentOptionInfo              (Parm, NeedCtorLink)
// class UGFxObject*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxObject* UOLUIFrontEnd_Options::GetObjectFromOption(const struct FOptionInfo& CurrentOptionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.GetObjectFromOption");

	UOLUIFrontEnd_Options_GetObjectFromOption_Params params;
	params.CurrentOptionInfo = CurrentOptionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.PopulateTabButtons
// (Defined, Public)

void UOLUIFrontEnd_Options::PopulateTabButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.PopulateTabButtons");

	UOLUIFrontEnd_Options_PopulateTabButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.UseGeneralOptionsWithDifficulty
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::UseGeneralOptionsWithDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.UseGeneralOptionsWithDifficulty");

	UOLUIFrontEnd_Options_UseGeneralOptionsWithDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.Press_OptionItemButton
// (Defined, Public)
// Parameters:
// int                            PSID                           (Parm)

void UOLUIFrontEnd_Options::Press_OptionItemButton(int PSID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Press_OptionItemButton");

	UOLUIFrontEnd_Options_Press_OptionItemButton_Params params;
	params.PSID = PSID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.Press_Reset
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Reset(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Press_Reset");

	UOLUIFrontEnd_Options_Press_Reset_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.Press_Gamma
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Gamma(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Press_Gamma");

	UOLUIFrontEnd_Options_Press_Gamma_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Press_Back");

	UOLUIFrontEnd_Options_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnConfirmChanges
// (Defined, Public, HasDefaults)
// Parameters:
// bool                           bOk                            (Parm)

void UOLUIFrontEnd_Options::OnConfirmChanges(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnConfirmChanges");

	UOLUIFrontEnd_Options_OnConfirmChanges_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.RevertToPreviousResolution
// (Defined, Public)

void UOLUIFrontEnd_Options::RevertToPreviousResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.RevertToPreviousResolution");

	UOLUIFrontEnd_Options_RevertToPreviousResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnConfirmResolution
// (Defined, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UOLUIFrontEnd_Options::OnConfirmResolution(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnConfirmResolution");

	UOLUIFrontEnd_Options_OnConfirmResolution_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnDismissKeyBindingConflictDialog
// (Defined, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UOLUIFrontEnd_Options::OnDismissKeyBindingConflictDialog(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnDismissKeyBindingConflictDialog");

	UOLUIFrontEnd_Options_OnDismissKeyBindingConflictDialog_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.Press_Apply
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options::Press_Apply(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.Press_Apply");

	UOLUIFrontEnd_Options_Press_Apply_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnMustRestartAccepted
// (Defined, Public)

void UOLUIFrontEnd_Options::OnMustRestartAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnMustRestartAccepted");

	UOLUIFrontEnd_Options_OnMustRestartAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.ExitOptionsScreen
// (Defined, Public)

void UOLUIFrontEnd_Options::ExitOptionsScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.ExitOptionsScreen");

	UOLUIFrontEnd_Options_ExitOptionsScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.back");

	UOLUIFrontEnd_Options_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_Options::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnViewActivated");

	UOLUIFrontEnd_Options_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_Options::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options.OnViewLoaded");

	UOLUIFrontEnd_Options_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_LoadGame.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_LoadGame::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_LoadGame.WidgetInitialized");

	UOLUIFrontEnd_LoadGame_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_LoadGame.GetCheckpointTag
// (Defined, Public)
// Parameters:
// struct FName                   CheckpointName                 (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UOLUIFrontEnd_LoadGame::GetCheckpointTag(const struct FName& CheckpointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_LoadGame.GetCheckpointTag");

	UOLUIFrontEnd_LoadGame_GetCheckpointTag_Params params;
	params.CheckpointName = CheckpointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_LoadGame.GetSaveFileDisplayName
// (Defined, Public, HasDefaults)
// Parameters:
// struct FSaveFileInfo           SaveFile                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOLUIFrontEnd_LoadGame::GetSaveFileDisplayName(const struct FSaveFileInfo& SaveFile)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_LoadGame.GetSaveFileDisplayName");

	UOLUIFrontEnd_LoadGame_GetSaveFileDisplayName_Params params;
	params.SaveFile = SaveFile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_LoadGame.SetSelectedIndex
// (Defined, Public)
// Parameters:
// int                            Index                          (Parm)

void UOLUIFrontEnd_LoadGame::SetSelectedIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_LoadGame.SetSelectedIndex");

	UOLUIFrontEnd_LoadGame_SetSelectedIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_LoadGame.SaveListChanged
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_LoadGame::SaveListChanged(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_LoadGame.SaveListChanged");

	UOLUIFrontEnd_LoadGame_SaveListChanged_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_LoadGame.PopulateSaveList
// (Defined, Public)

void UOLUIFrontEnd_LoadGame::PopulateSaveList()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_LoadGame.PopulateSaveList");

	UOLUIFrontEnd_LoadGame_PopulateSaveList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_LoadGame.Press_Delete
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_LoadGame::Press_Delete(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_LoadGame.Press_Delete");

	UOLUIFrontEnd_LoadGame_Press_Delete_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_LoadGame.Press_Load
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_LoadGame::Press_Load(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_LoadGame.Press_Load");

	UOLUIFrontEnd_LoadGame_Press_Load_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_LoadGame.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_LoadGame::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_LoadGame.Press_Back");

	UOLUIFrontEnd_LoadGame_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_LoadGame.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_LoadGame::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_LoadGame.OnTopMostView");

	UOLUIFrontEnd_LoadGame_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_PauseMenu::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.FilterButtonInput");

	UOLUIFrontEnd_PauseMenu_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_PauseMenu::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.WidgetInitialized");

	UOLUIFrontEnd_PauseMenu_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.ASShowConfirmExitDialog
// (Final, Defined, Private)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)
// struct FString                 okButtonLabel                  (Parm, NeedCtorLink)
// struct FString                 cancelButtonLabel              (Parm, NeedCtorLink)
// struct FString                 callbackName                   (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::ASShowConfirmExitDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.ASShowConfirmExitDialog");

	UOLUIFrontEnd_PauseMenu_ASShowConfirmExitDialog_Params params;
	params.Title = Title;
	params.Message = Message;
	params.okButtonLabel = okButtonLabel;
	params.cancelButtonLabel = cancelButtonLabel;
	params.callbackName = callbackName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitConfirmed
// (Defined, Public)
// Parameters:
// bool                           bOk                            (Parm)

void UOLUIFrontEnd_PauseMenu::OnExitConfirmed(bool bOk)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnExitConfirmed");

	UOLUIFrontEnd_PauseMenu_OnExitConfirmed_Params params;
	params.bOk = bOk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnExitToMenuButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnExitToMenuButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnExitToMenuButtonPress");

	UOLUIFrontEnd_PauseMenu_OnExitToMenuButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveCompleted
// (Defined, Public)
// Parameters:
// bool                           bSuccess                       (Parm)

void UOLUIFrontEnd_PauseMenu::OnSaveCompleted(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveCompleted");

	UOLUIFrontEnd_PauseMenu_OnSaveCompleted_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnSaveButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnSaveButtonPress");

	UOLUIFrontEnd_PauseMenu_OnSaveButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnOptionsButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnOptionsButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnOptionsButtonPress");

	UOLUIFrontEnd_PauseMenu_OnOptionsButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnReturnButtonPress
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnReturnButtonPress(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnReturnButtonPress");

	UOLUIFrontEnd_PauseMenu_OnReturnButtonPress_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnButtonClick
// (Final, Defined, Private)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_PauseMenu::OnButtonClick(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnButtonClick");

	UOLUIFrontEnd_PauseMenu_OnButtonClick_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.PopulateButtons
// (Defined, Public)

void UOLUIFrontEnd_PauseMenu::PopulateButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.PopulateButtons");

	UOLUIFrontEnd_PauseMenu_PopulateButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_PauseMenu::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnTopMostView");

	UOLUIFrontEnd_PauseMenu_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_PauseMenu.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_PauseMenu::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_PauseMenu.OnViewLoaded");

	UOLUIFrontEnd_PauseMenu_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.ASPreviousPage
// (Defined, Public)

void UOLUIFrontEnd_RecordingView::ASPreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.ASPreviousPage");

	UOLUIFrontEnd_RecordingView_ASPreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.ASNextPage
// (Defined, Public)

void UOLUIFrontEnd_RecordingView::ASNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.ASNextPage");

	UOLUIFrontEnd_RecordingView_ASNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.ASPaginateText
// (Defined, Public)

void UOLUIFrontEnd_RecordingView::ASPaginateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.ASPaginateText");

	UOLUIFrontEnd_RecordingView_ASPaginateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_RecordingView::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.FilterButtonInput");

	UOLUIFrontEnd_RecordingView_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingView.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_RecordingView::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.WidgetInitialized");

	UOLUIFrontEnd_RecordingView_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingView.GoAfterLastPage
// (Public)

void UOLUIFrontEnd_RecordingView::GoAfterLastPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.GoAfterLastPage");

	UOLUIFrontEnd_RecordingView_GoAfterLastPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.GoBeforeFirstPage
// (Public)

void UOLUIFrontEnd_RecordingView::GoBeforeFirstPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.GoBeforeFirstPage");

	UOLUIFrontEnd_RecordingView_GoBeforeFirstPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.Press_Close
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingView::Press_Close(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.Press_Close");

	UOLUIFrontEnd_RecordingView_Press_Close_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingView::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.Press_Back");

	UOLUIFrontEnd_RecordingView_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.Press_Next
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingView::Press_Next(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.Press_Next");

	UOLUIFrontEnd_RecordingView_Press_Next_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.Press_Previous
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_RecordingView::Press_Previous(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.Press_Previous");

	UOLUIFrontEnd_RecordingView_Press_Previous_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_RecordingView::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.OnViewActivated");

	UOLUIFrontEnd_RecordingView_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_RecordingView::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView.OnViewLoaded");

	UOLUIFrontEnd_RecordingView_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.ASPreviousPage
// (Defined, Public)

void UOLUIFrontEnd_EvidenceView::ASPreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.ASPreviousPage");

	UOLUIFrontEnd_EvidenceView_ASPreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.ASNextPage
// (Defined, Public)

void UOLUIFrontEnd_EvidenceView::ASNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.ASNextPage");

	UOLUIFrontEnd_EvidenceView_ASNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.ASPaginateText
// (Defined, Public)

void UOLUIFrontEnd_EvidenceView::ASPaginateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.ASPaginateText");

	UOLUIFrontEnd_EvidenceView_ASPaginateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_EvidenceView::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.FilterButtonInput");

	UOLUIFrontEnd_EvidenceView_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_EvidenceView::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.WidgetInitialized");

	UOLUIFrontEnd_EvidenceView_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.GoAfterLastPage
// (Public)

void UOLUIFrontEnd_EvidenceView::GoAfterLastPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.GoAfterLastPage");

	UOLUIFrontEnd_EvidenceView_GoAfterLastPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.GoBeforeFirstPage
// (Public)

void UOLUIFrontEnd_EvidenceView::GoBeforeFirstPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.GoBeforeFirstPage");

	UOLUIFrontEnd_EvidenceView_GoBeforeFirstPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Close
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_EvidenceView::Press_Close(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.Press_Close");

	UOLUIFrontEnd_EvidenceView_Press_Close_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_EvidenceView::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.Press_Back");

	UOLUIFrontEnd_EvidenceView_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Next
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_EvidenceView::Press_Next(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.Press_Next");

	UOLUIFrontEnd_EvidenceView_Press_Next_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.Press_Previous
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_EvidenceView::Press_Previous(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.Press_Previous");

	UOLUIFrontEnd_EvidenceView_Press_Previous_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_EvidenceView::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.OnViewActivated");

	UOLUIFrontEnd_EvidenceView_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_EvidenceView::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView.OnViewLoaded");

	UOLUIFrontEnd_EvidenceView_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.GetCurrentGammaSetting
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUIFrontEnd_GammaScreen::GetCurrentGammaSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.GetCurrentGammaSetting");

	UOLUIFrontEnd_GammaScreen_GetCurrentGammaSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.IsGammaInitialized
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen::IsGammaInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.IsGammaInitialized");

	UOLUIFrontEnd_GammaScreen_IsGammaInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.WidgetInitialized");

	UOLUIFrontEnd_GammaScreen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.FilterButtonInput");

	UOLUIFrontEnd_GammaScreen_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.Change_Slider
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen::Change_Slider(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.Change_Slider");

	UOLUIFrontEnd_GammaScreen_Change_Slider_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.Pop
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.Pop");

	UOLUIFrontEnd_GammaScreen_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewDeactivated
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.OnViewDeactivated");

	UOLUIFrontEnd_GammaScreen_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.back");

	UOLUIFrontEnd_GammaScreen_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.Press_Back");

	UOLUIFrontEnd_GammaScreen_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.OnAccept
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen::OnAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.OnAccept");

	UOLUIFrontEnd_GammaScreen_OnAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.Press_Accept
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen::Press_Accept(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.Press_Accept");

	UOLUIFrontEnd_GammaScreen_Press_Accept_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_GammaScreen::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.OnTopMostView");

	UOLUIFrontEnd_GammaScreen_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen.OnViewLoaded");

	UOLUIFrontEnd_GammaScreen_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.ASUpdateGamepadLabels
// (Final, Defined, Private)
// Parameters:
// int                            ConfigType                     (Parm)

void UOLUIFrontEnd_GamepadScreen::ASUpdateGamepadLabels(int ConfigType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.ASUpdateGamepadLabels");

	UOLUIFrontEnd_GamepadScreen_ASUpdateGamepadLabels_Params params;
	params.ConfigType = ConfigType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.TabChanged
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen::TabChanged(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.TabChanged");

	UOLUIFrontEnd_GamepadScreen_TabChanged_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GamepadScreen::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.WidgetInitialized");

	UOLUIFrontEnd_GamepadScreen_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.PopulateTabButtons
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen::PopulateTabButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.PopulateTabButtons");

	UOLUIFrontEnd_GamepadScreen_PopulateTabButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.Pop
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.Pop");

	UOLUIFrontEnd_GamepadScreen_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewDeactivated
// (Public)

void UOLUIFrontEnd_GamepadScreen::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewDeactivated");

	UOLUIFrontEnd_GamepadScreen_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Back");

	UOLUIFrontEnd_GamepadScreen_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Accept
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen::Press_Accept(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.Press_Accept");

	UOLUIFrontEnd_GamepadScreen_Press_Accept_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_GamepadScreen::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.OnTopMostView");

	UOLUIFrontEnd_GamepadScreen_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen.OnViewLoaded");

	UOLUIFrontEnd_GamepadScreen_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options_Console::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.WidgetInitialized");

	UOLUIFrontEnd_Options_Console_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options_Console::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.FilterButtonInput");

	UOLUIFrontEnd_Options_Console_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.GetFullscreenOptionIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options_Console::GetFullscreenOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.GetFullscreenOptionIndex");

	UOLUIFrontEnd_Options_Console_GetFullscreenOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.GetResolutionOptionIndex
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_Options_Console::GetResolutionOptionIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.GetResolutionOptionIndex");

	UOLUIFrontEnd_Options_Console_GetResolutionOptionIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.HasResolutionChanged
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options_Console::HasResolutionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.HasResolutionChanged");

	UOLUIFrontEnd_Options_Console_HasResolutionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.TabChanged
// (Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options_Console::TabChanged(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.TabChanged");

	UOLUIFrontEnd_Options_Console_TabChanged_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.SetGammaExternally
// (Defined, Public)
// Parameters:
// float                          Gamma                          (Parm)

void UOLUIFrontEnd_Options_Console::SetGammaExternally(float Gamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.SetGammaExternally");

	UOLUIFrontEnd_Options_Console_SetGammaExternally_Params params;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.GetCurrentGammaSetting
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUIFrontEnd_Options_Console::GetCurrentGammaSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.GetCurrentGammaSetting");

	UOLUIFrontEnd_Options_Console_GetCurrentGammaSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.ResetPS4Options
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::ResetPS4Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.ResetPS4Options");

	UOLUIFrontEnd_Options_Console_ResetPS4Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.Press_Reset
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options_Console::Press_Reset(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.Press_Reset");

	UOLUIFrontEnd_Options_Console_Press_Reset_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.FillOptionValuesFromProfile
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::FillOptionValuesFromProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.FillOptionValuesFromProfile");

	UOLUIFrontEnd_Options_Console_FillOptionValuesFromProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.PopulateControlsOptions
// (Public)

void UOLUIFrontEnd_Options_Console::PopulateControlsOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.PopulateControlsOptions");

	UOLUIFrontEnd_Options_Console_PopulateControlsOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.PopulateTabButtons
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::PopulateTabButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.PopulateTabButtons");

	UOLUIFrontEnd_Options_Console_PopulateTabButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.Press_Apply
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options_Console::Press_Apply(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.Press_Apply");

	UOLUIFrontEnd_Options_Console_Press_Apply_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.Press_OptionItemButton
// (Defined, Public)
// Parameters:
// int                            PSID                           (Parm)

void UOLUIFrontEnd_Options_Console::Press_OptionItemButton(int PSID)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.Press_OptionItemButton");

	UOLUIFrontEnd_Options_Console_Press_OptionItemButton_Params params;
	params.PSID = PSID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.Press_Gamma
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_Options_Console::Press_Gamma(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.Press_Gamma");

	UOLUIFrontEnd_Options_Console_Press_Gamma_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_Options_Console::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.back");

	UOLUIFrontEnd_Options_Console_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_Options_Console.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_Options_Console::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.OnTopMostView");

	UOLUIFrontEnd_Options_Console_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.OnViewActivated");

	UOLUIFrontEnd_Options_Console_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_Options_Console.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_Options_Console::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_Options_Console.OnViewLoaded");

	UOLUIFrontEnd_Options_Console_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPreviousPage
// (Defined, Public)

void UOLUIFrontEnd_RecordingView_Console::ASPreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPreviousPage");

	UOLUIFrontEnd_RecordingView_Console_ASPreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASNextPage
// (Defined, Public)

void UOLUIFrontEnd_RecordingView_Console::ASNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView_Console.ASNextPage");

	UOLUIFrontEnd_RecordingView_Console_ASNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPaginateText
// (Defined, Public)

void UOLUIFrontEnd_RecordingView_Console::ASPaginateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView_Console.ASPaginateText");

	UOLUIFrontEnd_RecordingView_Console_ASPaginateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView_Console.GetNumPages
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_RecordingView_Console::GetNumPages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView_Console.GetNumPages");

	UOLUIFrontEnd_RecordingView_Console_GetNumPages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingView_Console.GetCurrentPage
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_RecordingView_Console::GetCurrentPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView_Console.GetCurrentPage");

	UOLUIFrontEnd_RecordingView_Console_GetCurrentPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingView_Console.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_RecordingView_Console::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView_Console.FilterButtonInput");

	UOLUIFrontEnd_RecordingView_Console_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingView_Console.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_RecordingView_Console::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView_Console.WidgetInitialized");

	UOLUIFrontEnd_RecordingView_Console_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_RecordingView_Console::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewActivated");

	UOLUIFrontEnd_RecordingView_Console_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_RecordingView_Console::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_RecordingView_Console.OnViewLoaded");

	UOLUIFrontEnd_RecordingView_Console_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPreviousPage
// (Defined, Public)

void UOLUIFrontEnd_EvidenceView_Console::ASPreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPreviousPage");

	UOLUIFrontEnd_EvidenceView_Console_ASPreviousPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASNextPage
// (Defined, Public)

void UOLUIFrontEnd_EvidenceView_Console::ASNextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASNextPage");

	UOLUIFrontEnd_EvidenceView_Console_ASNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPaginateText
// (Defined, Public)

void UOLUIFrontEnd_EvidenceView_Console::ASPaginateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView_Console.ASPaginateText");

	UOLUIFrontEnd_EvidenceView_Console_ASPaginateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetNumPages
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_EvidenceView_Console::GetNumPages()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetNumPages");

	UOLUIFrontEnd_EvidenceView_Console_GetNumPages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetCurrentPage
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOLUIFrontEnd_EvidenceView_Console::GetCurrentPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView_Console.GetCurrentPage");

	UOLUIFrontEnd_EvidenceView_Console_GetCurrentPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_EvidenceView_Console.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_EvidenceView_Console::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView_Console.FilterButtonInput");

	UOLUIFrontEnd_EvidenceView_Console_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_EvidenceView_Console.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_EvidenceView_Console::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView_Console.WidgetInitialized");

	UOLUIFrontEnd_EvidenceView_Console_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewActivated
// (Defined, Public)

void UOLUIFrontEnd_EvidenceView_Console::OnViewActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewActivated");

	UOLUIFrontEnd_EvidenceView_Console_OnViewActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_EvidenceView_Console::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_EvidenceView_Console.OnViewLoaded");

	UOLUIFrontEnd_EvidenceView_Console_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.ASDisableBackButton
// (Final, Defined, Private)
// Parameters:
// bool                           bDisable                       (Parm)

void UOLUIFrontEnd_GammaScreen_Console::ASDisableBackButton(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.ASDisableBackButton");

	UOLUIFrontEnd_GammaScreen_Console_ASDisableBackButton_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.GetCurrentGammaSetting
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UOLUIFrontEnd_GammaScreen_Console::GetCurrentGammaSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.GetCurrentGammaSetting");

	UOLUIFrontEnd_GammaScreen_Console_GetCurrentGammaSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.IsGammaInitialized
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen_Console::IsGammaInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.IsGammaInitialized");

	UOLUIFrontEnd_GammaScreen_Console_IsGammaInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen_Console::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.WidgetInitialized");

	UOLUIFrontEnd_GammaScreen_Console_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen_Console::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.FilterButtonInput");

	UOLUIFrontEnd_GammaScreen_Console_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Change_Slider
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen_Console::Change_Slider(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Change_Slider");

	UOLUIFrontEnd_GammaScreen_Console_Change_Slider_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Pop
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen_Console::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Pop");

	UOLUIFrontEnd_GammaScreen_Console_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewDeactivated
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen_Console::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewDeactivated");

	UOLUIFrontEnd_GammaScreen_Console_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GammaScreen_Console::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.back");

	UOLUIFrontEnd_GammaScreen_Console_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Back
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen_Console::Press_Back(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Back");

	UOLUIFrontEnd_GammaScreen_Console_Press_Back_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnAccept
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen_Console::OnAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnAccept");

	UOLUIFrontEnd_GammaScreen_Console_OnAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Accept
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GammaScreen_Console::Press_Accept(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.Press_Accept");

	UOLUIFrontEnd_GammaScreen_Console_Press_Accept_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_GammaScreen_Console::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnTopMostView");

	UOLUIFrontEnd_GammaScreen_Console_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_GammaScreen_Console::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GammaScreen_Console.OnViewLoaded");

	UOLUIFrontEnd_GammaScreen_Console_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.ASUpdateGamepadLabels
// (Final, Defined, Private)
// Parameters:
// int                            ConfigType                     (Parm)

void UOLUIFrontEnd_GamepadScreen_Console::ASUpdateGamepadLabels(int ConfigType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.ASUpdateGamepadLabels");

	UOLUIFrontEnd_GamepadScreen_Console_ASUpdateGamepadLabels_Params params;
	params.ConfigType = ConfigType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.TabChanged
// (Defined, Public)
// Parameters:
// struct FEventData              ev                             (Parm, NeedCtorLink)

void UOLUIFrontEnd_GamepadScreen_Console::TabChanged(const struct FEventData& ev)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.TabChanged");

	UOLUIFrontEnd_GamepadScreen_Console_TabChanged_Params params;
	params.ev = ev;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.WidgetInitialized
// (Defined, Event, Public)
// Parameters:
// struct FName                   WidgetName                     (Parm)
// struct FName                   WidgetPath                     (Parm)
// class UGFxObject*              Widget                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GamepadScreen_Console::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.WidgetInitialized");

	UOLUIFrontEnd_GamepadScreen_Console_WidgetInitialized_Params params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GamepadScreen_Console::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.FilterButtonInput");

	UOLUIFrontEnd_GamepadScreen_Console_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.PopulateTabButtons
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen_Console::PopulateTabButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.PopulateTabButtons");

	UOLUIFrontEnd_GamepadScreen_Console_PopulateTabButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.Pop
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen_Console::Pop()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.Pop");

	UOLUIFrontEnd_GamepadScreen_Console_Pop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewDeactivated
// (Public)

void UOLUIFrontEnd_GamepadScreen_Console::OnViewDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewDeactivated");

	UOLUIFrontEnd_GamepadScreen_Console_OnViewDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.back
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIFrontEnd_GamepadScreen_Console::back()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.back");

	UOLUIFrontEnd_GamepadScreen_Console_back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnTopMostView
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bPlayOpenAnimation             (OptionalParm, Parm)

void UOLUIFrontEnd_GamepadScreen_Console::OnTopMostView(bool bPlayOpenAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnTopMostView");

	UOLUIFrontEnd_GamepadScreen_Console_OnTopMostView_Params params;
	params.bPlayOpenAnimation = bPlayOpenAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewLoaded
// (Defined, Public)

void UOLUIFrontEnd_GamepadScreen_Console::OnViewLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIFrontEnd_GamepadScreen_Console.OnViewLoaded");

	UOLUIFrontEnd_GamepadScreen_Console_OnViewLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIPopupScreen.FilterButtonInput
// (Defined, Event, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ButtonName                     (Parm)
// TEnumAsByte<EInputEvent>       InputEvent                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIPopupScreen::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIPopupScreen.FilterButtonInput");

	UOLUIPopupScreen_FilterButtonInput_Params params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OLGame.OLUIPopupScreen.OnClose
// (Public)

void UOLUIPopupScreen::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIPopupScreen.OnClose");

	UOLUIPopupScreen_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OLGame.OLUIPopupScreen.Start
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOLUIPopupScreen::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function OLGame.OLUIPopupScreen.Start");

	UOLUIPopupScreen_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
