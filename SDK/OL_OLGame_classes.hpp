#pragma once

// Outlast (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OLGame.ActorFactoryOLAmbientSound
// 0x0000 (0x00A4 - 0x00A4)
class UActorFactoryOLAmbientSound : public UActorFactoryAkAmbientSound
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.ActorFactoryOLAmbientSound");
		return ptr;
	}

};


// Class OLGame.ActorFactoryOLSoundEmittingMeshActor
// 0x0010 (0x00C0 - 0x00B0)
class UActorFactoryOLSoundEmittingMeshActor : public UActorFactoryStaticMesh
{
public:
	class UAkEvent*                                    StartEvent;                                               // 0x00B0(0x0008) (Edit)
	class UAkEvent*                                    StopEvent;                                                // 0x00B8(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.ActorFactoryOLSoundEmittingMeshActor");
		return ptr;
	}

};


// Class OLGame.OLAmbientSound
// 0x0014 (0x0268 - 0x0254)
class AOLAmbientSound : public AAkAmbientSound
{
public:
	unsigned long                                      bAllowVirtualization : 1;                                 // 0x0254(0x0004) (Edit)
	TArray<class AOLAmbientSoundClone*>                Clones;                                                   // 0x0258(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAmbientSound");
		return ptr;
	}

};


// Class OLGame.OLAmbientSoundClone
// 0x0014 (0x0254 - 0x0240)
class AOLAmbientSoundClone : public AActor
{
public:
	class USpriteComponent*                            SpriteComp;                                               // 0x0240(0x0008) (ExportObject, Component, EditInline)
	class AOLAmbientSound*                             Master;                                                   // 0x0248(0x0008) (Edit, EditConst)
	unsigned long                                      bAllowVirtualization : 1;                                 // 0x0250(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAmbientSoundClone");
		return ptr;
	}

};


// Class OLGame.OLBashableObject
// 0x0058 (0x0298 - 0x0240)
class AOLBashableObject : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;                     // 0x0240(0x0008) (Const, Native, NoExport)
	TEnumAsByte<EOLBashableType>                       BashableType;                                             // 0x0248(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        PreBashCollision;                                         // 0x024C(0x0008) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        PostBashCollision;                                        // 0x0254(0x0008) (Edit, ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x025C(0x0008) (Edit, ExportObject, Component, EditInline)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0264(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FName                                       BashAnimation;                                            // 0x026C(0x0008) (Edit)
	float                                              PathPointOffset;                                          // 0x0274(0x0004) (Edit)
	float                                              BashYOffset;                                              // 0x0278(0x0004) (Edit)
	unsigned long                                      bEnabled : 1;                                             // 0x027C(0x0004) (Edit)
	unsigned long                                      bBroken : 1;                                              // 0x027C(0x0004)
	unsigned long                                      bInitiallyEnabled : 1;                                    // 0x027C(0x0004) (Transient)
	struct FVector                                     Edge0Dest;                                                // 0x0280(0x000C)
	struct FVector                                     Edge1Dest;                                                // 0x028C(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBashableObject");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
	void ClearBreakTimer();
	void TriggerBreakTimer(float Time);
	void Break();
};


// Class OLGame.OLCamcorderHud
// 0x0060 (0x0244 - 0x01E4)
class UOLCamcorderHud : public UGFxMoviePlayer
{
public:
	class AOLHUD*                                      HUD;                                                      // 0x01E4(0x0008)
	unsigned long                                      bVisible : 1;                                             // 0x01EC(0x0004)
	float                                              RecordingTimeSeconds;                                     // 0x01F0(0x0004)
	struct FCamcorderHudObjects                        Objects;                                                  // 0x01F4(0x0038) (Transient)
	struct FCamcorderHudState                          HudState;                                                 // 0x022C(0x0018) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLCamcorderHud");
		return ptr;
	}


	void UpdateRecordingTime(float DeltaTime);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void SetVisible(bool bShow);
};


// Class OLGame.OLCameraActor
// 0x0000 (0x03C8 - 0x03C8)
class AOLCameraActor : public ACameraActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLCameraActor");
		return ptr;
	}


	void GetCameraView(float DeltaTime, struct FTPOV* OutPOV);
	void NativeGetCameraView(struct FTPOV* OutPOV);
};


// Class OLGame.OLTypes
// 0x0000 (0x0060 - 0x0060)
class UOLTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLTypes");
		return ptr;
	}

};


// Class OLGame.OLPlayerController
// 0x031C (0x0D68 - 0x0A4C)
class AOLPlayerController : public AUDKPlayerController
{
public:
	class AOLHero*                                     HeroPawn;                                                 // 0x0A4C(0x0008)
	class AOLHUD*                                      HUD;                                                      // 0x0A54(0x0008)
	class UOLInventoryManager*                         InventoryManager;                                         // 0x0A5C(0x0008)
	class UOLTutorialManager*                          TutorialManager;                                          // 0x0A64(0x0008)
	class UOLSoundEnvironmentManager*                  SoundEnvManager;                                          // 0x0A6C(0x0008)
	class UOLFXManager*                                FXManager;                                                // 0x0A74(0x0008)
	class UOLSeqAct_SplashScreen*                      ActiveSplashScreen;                                       // 0x0A7C(0x0008)
	unsigned long                                      bFlushingStreaming : 1;                                   // 0x0A84(0x0004)
	unsigned long                                      bHasCamcorder : 1;                                        // 0x0A84(0x0004)
	unsigned long                                      bBlockedOnLoading : 1;                                    // 0x0A84(0x0004)
	unsigned long                                      bShowingKismetControlledLoadingScreen : 1;                // 0x0A84(0x0004)
	unsigned long                                      bShowingLoadingOverlay : 1;                               // 0x0A84(0x0004)
	unsigned long                                      bProfileSettingsUpdated : 1;                              // 0x0A84(0x0004)
	unsigned long                                      bValidDoorHold : 1;                                       // 0x0A84(0x0004)
	unsigned long                                      bInvalidateLeanInput : 1;                                 // 0x0A84(0x0004)
	unsigned long                                      bInvalidateReleasedUse : 1;                               // 0x0A84(0x0004)
	unsigned long                                      bToggleCrouch : 1;                                        // 0x0A84(0x0004)
	unsigned long                                      bOverriddenMusic : 1;                                     // 0x0A84(0x0004)
	unsigned long                                      bTravellingToCheckpoint : 1;                              // 0x0A84(0x0004)
	unsigned long                                      bTravelCheckPersistent : 1;                               // 0x0A84(0x0004)
	unsigned long                                      bForceLevelReset : 1;                                     // 0x0A84(0x0004)
	unsigned long                                      bFoundBySoldierWhileHidden : 1;                           // 0x0A84(0x0004)
	unsigned long                                      bFoundBySurgeonWhileHidden : 1;                           // 0x0A84(0x0004)
	unsigned long                                      bEnableShadowOptimisation : 1;                            // 0x0A84(0x0004) (Config)
	unsigned long                                      bEnableLightOptimisation : 1;                             // 0x0A84(0x0004) (Config)
	unsigned long                                      bBehindView : 1;                                          // 0x0A84(0x0004)
	unsigned long                                      bDebugFixedCam : 1;                                       // 0x0A84(0x0004)
	unsigned long                                      bDebugFreeCam : 1;                                        // 0x0A84(0x0004)
	unsigned long                                      bDebugGhost : 1;                                          // 0x0A84(0x0004)
	unsigned long                                      bSlowDownFPS : 1;                                         // 0x0A84(0x0004)
	struct FName                                       CurrentObjective;                                         // 0x0A88(0x0008)
	TArray<struct FName>                               CompletedObjectives;                                      // 0x0A90(0x0010) (NeedCtorLink)
	int                                                NumBatteries;                                             // 0x0AA0(0x0004)
	int                                                MaxNumBatteries;                                          // 0x0AA4(0x0004)
	int                                                NrmMaxNumBatteries;                                       // 0x0AA8(0x0004) (Config)
	int                                                HardMaxNumBatteries;                                      // 0x0AAC(0x0004) (Config)
	int                                                NightmareMaxNumBatteries;                                 // 0x0AB0(0x0004) (Config)
	int                                                DefaultNumBatteries;                                      // 0x0AB4(0x0004) (Config)
	float                                              GameOverActivatedTimestamp;                               // 0x0AB8(0x0004)
	TArray<TEnumAsByte<EPlayerInteractionType>>        AvailableInteractions;                                    // 0x0ABC(0x0010) (NeedCtorLink)
	struct FString                                     CSAPrompt;                                                // 0x0ACC(0x0010) (NeedCtorLink)
	struct FString                                     PickupTargetName;                                         // 0x0ADC(0x0010) (NeedCtorLink)
	class UOLProfileSettings*                          ProfileSettings;                                          // 0x0AEC(0x0008)
	struct FDigitalInputs                              Inputs;                                                   // 0x0AF4(0x0004)
	unsigned char                                      bLeanInputLeft;                                           // 0x0AF8(0x0001) (Input)
	unsigned char                                      bLeanInputRight;                                          // 0x0AF9(0x0001) (Input)
	unsigned char                                      bRunInput;                                                // 0x0AFA(0x0001) (Input)
	unsigned char                                      bUseButtonDown;                                           // 0x0AFB(0x0001) (Input)
	TEnumAsByte<EAIMusicState>                         AIMusic;                                                  // 0x0AFC(0x0001)
	TEnumAsByte<EAIMusicState>                         OverriddenMusicState;                                     // 0x0AFD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0AFE(0x0002) MISSED OFFSET
	float                                              PureMouseX;                                               // 0x0B00(0x0004) (Input)
	float                                              AnalogLeanInputLeft;                                      // 0x0B04(0x0004) (Input)
	float                                              AnalogLeanInputRight;                                     // 0x0B08(0x0004) (Input)
	int                                                ZoomInput;                                                // 0x0B0C(0x0004)
	float                                              UsePressedTime;                                           // 0x0B10(0x0004)
	struct FVector                                     LastPlayerInputIntent;                                    // 0x0B14(0x000C)
	struct FTouchZoomData                              TouchZoom;                                                // 0x0B20(0x0014)
	struct FLinearColor                                LightBarColor;                                            // 0x0B34(0x0010)
	float                                              LightBarPulsePhase;                                       // 0x0B44(0x0004)
	TArray<struct FName>                               CompletedRecordingMoments;                                // 0x0B48(0x0010) (NeedCtorLink)
	TArray<struct FName>                               UnreadRecordingMoments;                                   // 0x0B58(0x0010) (NeedCtorLink)
	class AOLRecordingMarker*                          PendingRecordingMarker;                                   // 0x0B68(0x0008)
	float                                              RecordingCompletedTime;                                   // 0x0B70(0x0004)
	struct FStruggleData                               Struggle;                                                 // 0x0B74(0x00CC) (Transient, NeedCtorLink)
	float                                              StruggleInputThresholdForWin;                             // 0x0C40(0x0004) (Config)
	float                                              StruggleShakesThresholdForWin;                            // 0x0C44(0x0004) (Config)
	float                                              StruggleInputThresholdForWinNoFail;                       // 0x0C48(0x0004) (Config)
	float                                              StruggleShakesThresholdForWinNoFail;                      // 0x0C4C(0x0004) (Config)
	float                                              AIDistance;                                               // 0x0C50(0x0004)
	float                                              OverriddenMusicDistance;                                  // 0x0C54(0x0004)
	float                                              AIChaseMusicTimer;                                        // 0x0C58(0x0004)
	float                                              AIChaseMusicTimeDelay;                                    // 0x0C5C(0x0004) (Config)
	struct FName                                       MusicAIStateGroup;                                        // 0x0C60(0x0008) (Const)
	struct FName                                       MusicAIStateNone;                                         // 0x0C68(0x0008) (Const)
	struct FName                                       MusicAIStatePatrol;                                       // 0x0C70(0x0008) (Const)
	struct FName                                       MusicAIStateInvestigate;                                  // 0x0C78(0x0008) (Const)
	struct FName                                       MusicAIStateChase;                                        // 0x0C80(0x0008) (Const)
	struct FName                                       LoadingStateGroup;                                        // 0x0C88(0x0008) (Const)
	struct FName                                       LoadingStateOn;                                           // 0x0C90(0x0008) (Const)
	struct FName                                       LoadingStateOff;                                          // 0x0C98(0x0008) (Const)
	struct FName                                       AIDistanceRTPC;                                           // 0x0CA0(0x0008) (Const)
	class UAkEvent*                                    SndResetMixStates;                                        // 0x0CA8(0x0008) (Const)
	int                                                NumDeathsSinceLastCheckpoint;                             // 0x0CB0(0x0004)
	float                                              StableLevelsTimestamp;                                    // 0x0CB4(0x0004)
	int                                                NumBatteriesAtLastCheckpoint;                             // 0x0CB8(0x0004)
	float                                              BatteryEnergyAtLastCheckpoint;                            // 0x0CBC(0x0004)
	struct FName                                       FirstSoldierFindableCheckpoint;                           // 0x0CC0(0x0008) (Config)
	struct FName                                       FirstSurgeonFindableCheckpoint;                           // 0x0CC8(0x0008) (Config)
	int                                                FindHiddenPlayerSkipCount;                                // 0x0CD0(0x0004)
	struct FVector                                     LastLightOptimCamPos;                                     // 0x0CD4(0x000C)
	TArray<struct FName>                               LevelsResetAfterPlayerDeath;                              // 0x0CE0(0x0010) (NeedCtorLink)
	struct FVector                                     DesiredLocation;                                          // 0x0CF0(0x000C)
	float                                              LastCameraTimeStamp;                                      // 0x0CFC(0x0004)
	class UClass*                                      MatineeCameraClass;                                       // 0x0D00(0x0008)
	class AActor*                                      CalcViewActor;                                            // 0x0D08(0x0008)
	struct FVector                                     CalcViewActorLocation;                                    // 0x0D10(0x000C)
	struct FRotator                                    CalcViewActorRotation;                                    // 0x0D1C(0x000C)
	struct FVector                                     CalcViewLocation;                                         // 0x0D28(0x000C)
	struct FRotator                                    CalcViewRotation;                                         // 0x0D34(0x000C)
	float                                              OnFootDefaultFOV;                                         // 0x0D40(0x0004) (Config, GlobalConfig)
	struct FRotator                                    DebugCamRot;                                              // 0x0D44(0x000C)
	struct FVector                                     DebugCamPos;                                              // 0x0D50(0x000C)
	float                                              DebugFreeCamSpeed;                                        // 0x0D5C(0x0004)
	float                                              DebugFreeCamFOV;                                          // 0x0D60(0x0004)
	float                                              SlowDownFactor;                                           // 0x0D64(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLPlayerController");
		return ptr;
	}


	void UnlockAchievement(TEnumAsByte<EOutlastAchievement> achievement);
	void NotifyDifficultyChanged();
	void UpdateDifficultyBasedValues();
	void CheckForProfileUpdate();
	void UpdateLocalCacheOfProfileSettings(class UOLProfileSettings* EffectiveProfileSettings);
	void ClientSaveAllPlayerData(bool bShouldForce, bool bSkipCacheUpdate);
	void OnProfileWriteComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	void ClearSaveProfileDelegate(int ControllerId, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate);
	void SaveProfile();
	void UnregisterPlayerDataStores();
	void RegisterCustomPlayerDataStores();
	bool ShippingCheat_GiveAllCheckpoints();
	void ClearAllProgress();
	void SaveBeforeQuitting();
	void ClientCommitMapChange();
	void StartNewGameAtCheckpoint(const struct FString& CheckpointStr, bool bSaveToDisk);
	void ApplyDeprecatedCheckpointRecord(struct FDeprecatedCheckpointRecord* OldRecord);
	void ApplyCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record);
	void CreateCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record);
	void NativeApplyCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record);
	void NativeCreateCheckpointRecord(struct AOLPlayerController_FCheckpointRecord* Record);
	void SavePersistentState();
	void OnOverrideAIMusic(class UOLSeqAct_OverrideAIMusic* Action);
	void StopAllSounds();
	void DisplayDebug(class AHUD* H, float* out_YL, float* out_YPos);
	void DrawHUD(class AHUD* H);
	void FullScreenOverlayChanged();
	void ForcePause(bool bPause);
	void ClientSetHUD(class UClass* newHUDType);
	void OnSetMesh(class USeqAct_SetMesh* Action);
	void ClientSetCameraFade(bool _enableFading, const struct FColor& _FadeColor, const struct FVector2D& _FadeAlpha, float _FadeTime, bool _fadeAudio);
	void SetCinematicMode(class USeqAct_ToggleCinematicMode* Action, bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsButtons);
	void GetPlayerViewPoint(struct FVector* POVLocation, struct FRotator* POVRotation);
	float GetFOVAngle();
	void SpawnCamera();
	void SetCameraMode(const struct FName& NewCamMode);
	bool UsingFirstPersonCamera();
	void SetBehindView(bool bNewBehindView);
	void BehindView();
	void GammaCalibration();
	void PressedJump();
	void PressedReloadBatteries();
	void StopZoom();
	void StartZoomOut();
	void StartZoomIn();
	void ZoomOut();
	void ZoomIn();
	void ToggleCamcorder();
	void ToggleNightVision();
	void ReleasedUseButton();
	void PressedUseButton();
	bool PerformedUseAction();
	void SetPlayerFoundWhileHidden(class AOLEnemyPawn* SearchingEnemy);
	bool IsPlayerFindableWhileHidden(class AOLEnemyPawn* SearchingEnemy);
	void PlayerDied();
	void Destroyed();
	void ClientRestart(class APawn* NewPawn);
	void Reset();
	void UnPossess();
	void Possess(class APawn* inPawn, bool bVehicleTransition);
	void PostBeginPlay();
	void HideLoadingOverlay();
	void ShowLoadingOverlay();
	void SetVolume(float VolumeLevel);
	void SetGamma(float GammaValue);
	float GetGamma();
	void NativePlayerMove(float DeltaTime);
};


// Class OLGame.OLCheatManager
// 0x0030 (0x00D0 - 0x00A0)
class UOLCheatManager : public UGameCheatManager
{
public:
	int                                                GameSpeedLevel;                                           // 0x00A0(0x0004)
	unsigned long                                      bCheatsEnabled : 1;                                       // 0x00A4(0x0004) (Config)
	unsigned long                                      bUnlimitedBatteries : 1;                                  // 0x00A4(0x0004) (Config)
	unsigned long                                      bDebugGameplay : 1;                                       // 0x00A4(0x0004)
	unsigned long                                      bDebugSoundEnvironment : 1;                               // 0x00A4(0x0004)
	unsigned long                                      bDebugGameState : 1;                                      // 0x00A4(0x0004)
	unsigned long                                      bDebugCamera : 1;                                         // 0x00A4(0x0004)
	unsigned long                                      bDebugTrajectory : 1;                                     // 0x00A4(0x0004)
	unsigned long                                      bDrawDebugAI : 1;                                         // 0x00A4(0x0004)
	unsigned long                                      bDebugWaitPoints : 1;                                     // 0x00A4(0x0004) (Config)
	unsigned long                                      bMuted : 1;                                               // 0x00A4(0x0004) (Config)
	unsigned long                                      bDebugAIPositions : 1;                                    // 0x00A4(0x0004) (Config)
	unsigned long                                      bSuppressAllMessages : 1;                                 // 0x00A4(0x0004) (Config)
	unsigned long                                      bPausedForFreeCam : 1;                                    // 0x00A4(0x0004)
	struct FString                                     DebugSoundEnvFilter;                                      // 0x00A8(0x0010) (NeedCtorLink)
	float                                              NextSpikeTime;                                            // 0x00B8(0x0004)
	float                                              AutoSpikeDelay;                                           // 0x00BC(0x0004)
	TArray<struct FDebugTrajectoryPoint>               DebugTrajectoryPoints;                                    // 0x00C0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLCheatManager");
		return ptr;
	}


	void SetLanguage(const struct FString& LanguageCode);
	void ReloadSoundBanks(bool bDLC);
	bool ProcessCheatInput(class UOLPlayerInput* InputMgr, const struct FName& Key);
	bool IsViewModeUnlit();
	void SetFinishedGame(bool hasFinishedGame, bool hasFinishedDLC);
	void OutlastPause();
	void ResetGS();
	void ActivateGS(const struct FName& gsName);
	void DumpGS();
	void DebugGameState();
	void SuppressAllMessages();
	void DrawDebug();
	void ToggleMute();
	void InflictDamage(float Amount);
	void ResetWorldState();
	void ResetPushables();
	void ResetDoors();
	void SetGamma(float newGamma);
	void DemoMode();
	void LoadGame(const struct FString& Filename);
	void SaveGame(const struct FString& Filename);
	void GiveItem(const struct FString& ItemName);
	void ApplyCP(const struct FString& CPName);
	void cplist();
	void cp(const struct FString& CPName);
	void Checkpoint(const struct FString& CPName);
	void KillFade();
	void ToggleUnlimitedBatteries();
	void RechargeNightVision();
	void Ghost();
	void GhostPawn(bool ghosting);
	void FasterGameSpeed();
	void SlowerGameSpeed();
	void NormalGameSpeed();
	void UpdateGameSpeed();
	void SingleFrame();
	void TeleportToFreeCam();
	void ToggleFixedCam();
	void ToggleFreeCamNoPause();
	void ToggleFreeCam();
	void AutoSpike(float Spike, float Delay);
	void Spike(float Spike);
	void BadFPS(float slowdown);
	void DebugAIPositions();
	void DebugAI();
	void ShowHeroDebug();
	void ShowPaths();
	void ShowStatLevels();
	void DebugWaitPoints();
	void DebugTrajectory();
	void DebugCamera();
	void DebugSoundEnvironment(const struct FString& Filter);
	void DebugGameplay();
	void SaveAllCheckpoints();
	void DeleteAllSaves();
	void KillAll(class UClass* aClass);
	void ToggleCheats();
	class UOLCheatManager* STATIC_GetCheatManager();
	void AddDebugTrajectoryPoint(const struct FDebugTrajectoryPoint& Point);
};


// Class OLGame.OLCheckpoint
// 0x0014 (0x037C - 0x0368)
class AOLCheckpoint : public APlayerStart
{
public:
	struct FName                                       CheckpointName;                                           // 0x0368(0x0008) (Edit)
	unsigned long                                      bKillAllEnemies : 1;                                      // 0x0370(0x0004) (Edit)
	struct FName                                       PersistentLevelName;                                      // 0x0374(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLCheckpoint");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
	void SetEnabled(bool bEnable);
	void ResetCheckpointDeaths();
	void OnPlayerSpawn();
};


// Class OLGame.OLCheckpointList
// 0x0011 (0x0251 - 0x0240)
class AOLCheckpointList : public AActor
{
public:
	TArray<struct FName>                               CheckpointList;                                           // 0x0240(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EOutlastGameType>                      GameType;                                                 // 0x0250(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLCheckpointList");
		return ptr;
	}


	bool STATIC_Script_IsUnreached(struct FName* TestCheckpoint, struct FName* CurrentCheckpoint);
};


// Class OLGame.OLEngine
// 0x0058 (0x0AEC - 0x0A94)
class UOLEngine : public UGameEngine
{
public:
	TArray<struct FSaveFileInfo>                       SaveFiles;                                                // 0x0A94(0x0010) (NeedCtorLink)
	struct FName                                       PendingCheckpointName;                                    // 0x0AA4(0x0008)
	TEnumAsByte<ECheckpointAction>                     PendingCheckpointAction;                                  // 0x0AAC(0x0001)
	TEnumAsByte<EOrbisDialogType>                      ActiveOrbisDialog;                                        // 0x0AAD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0AAE(0x0002) MISSED OFFSET
	unsigned long                                      bRestartingActiveCheckpoint : 1;                          // 0x0AB0(0x0004)
	unsigned long                                      bPendingGraphicalSettingsChange : 1;                      // 0x0AB0(0x0004)
	unsigned long                                      bDisableMotionBlur : 1;                                   // 0x0AB0(0x0004) (Config)
	unsigned long                                      bPausedForSystemDialog : 1;                               // 0x0AB0(0x0004)
	class UOLCheckpointSave*                           CurrentCheckpointSave;                                    // 0x0AB4(0x0008)
	int                                                PendingNewLanguage;                                       // 0x0ABC(0x0004)
	class UAkEvent*                                    StartupMovieSound;                                        // 0x0AC0(0x0008)
	float                                              NextRefreshDLCTime;                                       // 0x0AC8(0x0004)
	TArray<unsigned char>                              SaveDataBuffer;                                           // 0x0ACC(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __SaveDataDialogDoneCallback__Delegate;                   // 0x0ADC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEngine");
		return ptr;
	}


	bool UpdateProfileKeyBindingsFromSystem(class UOLProfileSettings* ProfileSettings);
	bool UpdateProfileFromSystemSettings(class UOLProfileSettings* ProfileSettings);
	bool ApplyKeyBindings(class UOLProfileSettings* ProfileSettings);
	bool ApplySystemSettings(class UOLProfileSettings* ProfileSettings);
	bool LoadMostRecentSaveFile();
	bool LoadCurrentSaveFile();
	void RefreshSaveFiles();
	void DeleteSaveFile(const struct FString& Filename);
	bool LoadSaveFile(const struct FString& Filename);
	void DebugLoadGame(const struct FString& Filename);
	void DebugSaveGame(const struct FString& Filename);
	bool HasValidSaveGame();
	void SaveAllCheckpoints();
	void SaveCheckpointImmediate(const struct FName& CheckpointName);
	void SaveCheckpoint(const struct FName& CheckpointName, bool bSaveToDisk);
	void StartCurrentCheckpoint();
	void SelectAndLoadGame(const struct FScriptDelegate& Callback);
	void NativeSelectAndLoadGame();
	void SelectSaveLocation(const struct FString& startCP, const struct FScriptDelegate& Callback);
	void NativeSelectSaveLocation(const struct FString& startCP);
	void FinishedSaveDataDialog(bool bSuccess);
	void SaveDataDialogDoneCallback(bool bSuccess);
	bool UsingFixedSaveLocation();
	bool TryStartDLCGame();
	bool ShouldShowNewDLCGame();
	bool RefreshDLC();
	bool CheckReloadForDLC();
	void RestartPlayer(class AOLPlayerController* OLPC);
};


// Class OLGame.OLCheckpointSave
// 0x0044 (0x00A4 - 0x0060)
class UOLCheckpointSave : public UObject
{
public:
	struct FString                                     Filename;                                                 // 0x0060(0x0010) (NeedCtorLink)
	struct FCheckpointTime                             SaveTime;                                                 // 0x0070(0x0010)
	struct FString                                     CheckpointName;                                           // 0x0080(0x0010) (NeedCtorLink)
	TArray<unsigned char>                              PlayerData;                                               // 0x0090(0x0010) (NeedCtorLink)
	unsigned long                                      bDeprecatedPlayerData : 1;                                // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLCheckpointSave");
		return ptr;
	}


	bool CheckpointIsEmpty();
};


// Class OLGame.OLConsole
// 0x0000 (0x0270 - 0x0270)
class UOLConsole : public UConsole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLConsole");
		return ptr;
	}


	bool InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<EInputEvent> Event, float AmountDepressed, bool bGamepad);
	void AddCustomCommandsToAutoComplete();
};


// Class OLGame.OLDarknessVolume
// 0x0004 (0x02D8 - 0x02D4)
class AOLDarknessVolume : public APhysicsVolume
{
public:
	unsigned long                                      bDark : 1;                                                // 0x02D4(0x0004) (Edit)
	unsigned long                                      bOnlyDarkWhenCrouched : 1;                                // 0x02D4(0x0004) (Edit)
	unsigned long                                      bInitiallyDark : 1;                                       // 0x02D4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDarknessVolume");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class OLGame.OLDLCManager
// 0x0004 (0x0114 - 0x0110)
class UOLDLCManager : public UDownloadableContentManager
{
public:
	unsigned long                                      bDLCInstalled : 1;                                        // 0x0110(0x0004)
	unsigned long                                      bFakeDLCInstalledCooked : 1;                              // 0x0110(0x0004) (Config)
	unsigned long                                      bFakeDLCInstalledLoose : 1;                               // 0x0110(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDLCManager");
		return ptr;
	}


	bool FindAndInstallDLC();
};


// Class OLGame.OLDmgType
// 0x0008 (0x0098 - 0x0090)
class UOLDmgType : public UDamageType
{
public:
	float                                              SpeedPenaltyPctOnDamage;                                  // 0x0090(0x0004) (Config)
	float                                              SpeedPenaltyDuration;                                     // 0x0094(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDmgType");
		return ptr;
	}

};


// Class OLGame.OLDmgType_Electrified
// 0x0000 (0x0098 - 0x0098)
class UOLDmgType_Electrified : public UOLDmgType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDmgType_Electrified");
		return ptr;
	}

};


// Class OLGame.OLDmgType_Fell
// 0x0000 (0x0098 - 0x0098)
class UOLDmgType_Fell : public UOLDmgType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDmgType_Fell");
		return ptr;
	}

};


// Class OLGame.OLDmgType_Fire
// 0x0000 (0x0098 - 0x0098)
class UOLDmgType_Fire : public UOLDmgType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDmgType_Fire");
		return ptr;
	}

};


// Class OLGame.OLDmgType_GenericHit
// 0x0000 (0x0098 - 0x0098)
class UOLDmgType_GenericHit : public UOLDmgType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDmgType_GenericHit");
		return ptr;
	}

};


// Class OLGame.OLDmgType_NanoFog
// 0x0000 (0x0098 - 0x0098)
class UOLDmgType_NanoFog : public UOLDmgType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDmgType_NanoFog");
		return ptr;
	}

};


// Class OLGame.OLDmgType_Scripted
// 0x0000 (0x0098 - 0x0098)
class UOLDmgType_Scripted : public UOLDmgType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDmgType_Scripted");
		return ptr;
	}

};


// Class OLGame.OLDmgType_SoldierDecapitate
// 0x0000 (0x0098 - 0x0098)
class UOLDmgType_SoldierDecapitate : public UOLDmgType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDmgType_SoldierDecapitate");
		return ptr;
	}

};


// Class OLGame.OLDmgType_SoldierPunch
// 0x0000 (0x0098 - 0x0098)
class UOLDmgType_SoldierPunch : public UOLDmgType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDmgType_SoldierPunch");
		return ptr;
	}

};


// Class OLGame.OLDmgType_SoldierThrow
// 0x0000 (0x0098 - 0x0098)
class UOLDmgType_SoldierThrow : public UOLDmgType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDmgType_SoldierThrow");
		return ptr;
	}

};


// Class OLGame.OLDoor
// 0x17C8 (0x1A08 - 0x0240)
class AOLDoor : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;                     // 0x0240(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IInterface_NavMeshPathObstacle;                   // 0x0248(0x0008) (Const, Native, NoExport)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0250(0x0008) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        DoorMainMesh;                                             // 0x0258(0x0008) (Edit, ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      BreakingForwardMesh;                                      // 0x0260(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FName                                       BreakingForwardAnim;                                      // 0x0268(0x0008) (Edit)
	class USkeletalMeshComponent*                      BrokenForwardMesh;                                        // 0x0270(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FName                                       BrokenForwardAnim;                                        // 0x0278(0x0008) (Edit)
	class USkeletalMeshComponent*                      BreakingBackwardMesh;                                     // 0x0280(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FName                                       BreakingBackwardAnim;                                     // 0x0288(0x0008) (Edit)
	class USkeletalMeshComponent*                      BrokenBackwardMesh;                                       // 0x0290(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FName                                       BrokenBackwardAnim;                                       // 0x0298(0x0008) (Edit)
	class UDynamicLightEnvironmentComponent*           DoorMainLightEnvironment;                                 // 0x02A0(0x0008) (Edit, ExportObject, Component, EditInline)
	class UOLSoundConnectorComponent*                  SoundConnectorComp;                                       // 0x02A8(0x0008) (Edit, ExportObject, Component, EditInline)
	class UOLWaitPointComponent*                       WaitPointComponent;                                       // 0x02B0(0x0008) (Edit, ExportObject, Component, EditInline)
	float                                              InitialOpenAngle;                                         // 0x02B8(0x0004) (Edit)
	float                                              MaxOpenAngle;                                             // 0x02BC(0x0004) (Edit, EditConst)
	float                                              PlayerOpenedAngle;                                        // 0x02C0(0x0004) (Edit, EditConst)
	unsigned long                                      bReverseDirection : 1;                                    // 0x02C4(0x0004) (Edit)
	unsigned long                                      bLocked : 1;                                              // 0x02C4(0x0004) (Edit)
	unsigned long                                      bFakeUnlocked : 1;                                        // 0x02C4(0x0004) (Edit)
	unsigned long                                      bNoLockedInteraction : 1;                                 // 0x02C4(0x0004) (Edit)
	unsigned long                                      bAutoClose : 1;                                           // 0x02C4(0x0004) (Edit)
	unsigned long                                      bCantClose : 1;                                           // 0x02C4(0x0004) (Edit)
	unsigned long                                      bNoPushKnob : 1;                                          // 0x02C4(0x0004) (Edit)
	unsigned long                                      bAICanUseDoor : 1;                                        // 0x02C4(0x0004) (Edit)
	unsigned long                                      bAITraversing : 1;                                        // 0x02C4(0x0004)
	unsigned long                                      bDontBreak : 1;                                           // 0x02C4(0x0004) (Edit)
	unsigned long                                      bAlwaysBreak : 1;                                         // 0x02C4(0x0004) (Edit)
	unsigned long                                      bWaitForTriggerToBreak : 1;                               // 0x02C4(0x0004) (Edit)
	unsigned long                                      bTrimToDoorForInvestigate : 1;                            // 0x02C4(0x0004) (Edit)
	unsigned long                                      bSplitNavMesh : 1;                                        // 0x02C4(0x0004) (Edit)
	unsigned long                                      bAIAlwaysCloses : 1;                                      // 0x02C4(0x0004) (Edit)
	unsigned long                                      bUseObstacleOnClose : 1;                                  // 0x02C4(0x0004) (Edit)
	unsigned long                                      bPlayingLockedAnim : 1;                                   // 0x02C4(0x0004)
	unsigned long                                      bPlayingBlockedAnim : 1;                                  // 0x02C4(0x0004)
	unsigned long                                      bPlayingAutoCloseAnim : 1;                                // 0x02C4(0x0004)
	unsigned long                                      bBreakTriggered : 1;                                      // 0x02C4(0x0004)
	unsigned long                                      bBlocked : 1;                                             // 0x02C4(0x0004)
	unsigned long                                      bWasInitiallyLocked : 1;                                  // 0x02C4(0x0004)
	unsigned long                                      bInstantBreak : 1;                                        // 0x02C4(0x0004)
	unsigned long                                      bPreciseCloseTiming : 1;                                  // 0x02C4(0x0004)
	unsigned long                                      bObstacleRegistered : 1;                                  // 0x02C4(0x0004)
	unsigned long                                      bPlayingOpeningSound : 1;                                 // 0x02C4(0x0004)
	float                                              OpeningSpeed;                                             // 0x02C8(0x0004) (Edit)
	float                                              ClosingSpeed;                                             // 0x02CC(0x0004) (Edit)
	float                                              ExplicitOcclusionFactor;                                  // 0x02D0(0x0004) (Edit)
	float                                              DefaultOcclusionFactor;                                   // 0x02D4(0x0004) (Edit, EditConst)
	class AOLCSA*                                      UnlockingCSA;                                             // 0x02D8(0x0008) (Edit)
	float                                              LockerOpeningSpeed;                                       // 0x02E0(0x0004) (Const)
	float                                              LockerClosingSpeed;                                       // 0x02E4(0x0004) (Const)
	float                                              StaticOffsetFwdToCenterNormal;                            // 0x02E8(0x0004) (Const)
	float                                              StaticOffsetFwdToCenterLocker;                            // 0x02EC(0x0004) (Const)
	float                                              LockedAnimTotalTime;                                      // 0x02F0(0x0004) (Const)
	float                                              LockedAnimAmplitude;                                      // 0x02F4(0x0004) (Const)
	float                                              BlockedAnimTotalTime;                                     // 0x02F8(0x0004) (Const)
	float                                              BlockedAnimAmplitude;                                     // 0x02FC(0x0004) (Const)
	float                                              AutoCloseAnimTotalTime;                                   // 0x0300(0x0004) (Const)
	float                                              AutoCloseAnimAmplitude;                                   // 0x0304(0x0004) (Const)
	TEnumAsByte<EOLDoorType>                           DoorType;                                                 // 0x0308(0x0001) (Edit)
	TEnumAsByte<EDoorMaterial>                         DoorMaterial;                                             // 0x0309(0x0001)
	TEnumAsByte<EOLDoorMeshType>                       DoorMeshType;                                             // 0x030A(0x0001) (Edit)
	TEnumAsByte<EDoorState>                            DoorState;                                                // 0x030B(0x0001)
	TEnumAsByte<EDoorBreakState>                       DoorBreakState;                                           // 0x030C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x030D(0x0003) MISSED OFFSET
	struct FDoorMeshTypeData                           DoorMeshData[0x18];                                       // 0x0310(0x00E8) (NeedCtorLink)
	TArray<class UMaterialInstance*>                   MaterialOverrides;                                        // 0x18D0(0x0010) (Edit, NeedCtorLink)
	class UPhysicsAsset*                               LeftPhysicsAsset;                                         // 0x18E0(0x0008) (Const)
	class UPhysicsAsset*                               RightPhysicsAsset;                                        // 0x18E8(0x0008) (Const)
	struct FVector                                     DoorKnobOffset;                                           // 0x18F0(0x000C) (Edit)
	float                                              PathPointOffset;                                          // 0x18FC(0x0004) (Edit)
	int                                                NumBashesAfterBlocked;                                    // 0x1900(0x0004) (Edit)
	float                                              AIOpenDoorKnockback;                                      // 0x1904(0x0004) (Edit)
	float                                              OpenRatio;                                                // 0x1908(0x0004)
	float                                              TargetOpenRatio;                                          // 0x190C(0x0004) (Transient)
	float                                              CurrentSpeed;                                             // 0x1910(0x0004) (Const)
	float                                              ProceduralAnimElapsedTime;                                // 0x1914(0x0004)
	float                                              PreciseCloseDuration;                                     // 0x1918(0x0004)
	float                                              PreciseCloseStartTime;                                    // 0x191C(0x0004)
	struct FDoorShakeData                              ShakeData;                                                // 0x1920(0x0040)
	struct FDoorShakeData                              BashShakeData;                                            // 0x1960(0x0040) (Edit)
	class AOLPawn*                                     DoorUser;                                                 // 0x19A0(0x0008)
	class AOLBot*                                      ActiveBot;                                                // 0x19A8(0x0008)
	TArray<class AOLBot*>                              Bots;                                                     // 0x19B0(0x0010) (NeedCtorLink)
	struct FVector                                     Edge0Dest;                                                // 0x19C0(0x000C)
	struct FVector                                     Edge1Dest;                                                // 0x19CC(0x000C)
	float                                              LastInteractiveSoundTime;                                 // 0x19D8(0x0004)
	float                                              OpeningIntensity;                                         // 0x19DC(0x0004)
	TArray<struct FDoorSoundEvents>                    Sounds;                                                   // 0x19E0(0x0010) (Const, NeedCtorLink)
	class UAkEvent*                                    SndStopOpening;                                           // 0x19F0(0x0008) (Const)
	class UAkEvent*                                    SndLockerBash;                                            // 0x19F8(0x0008) (Const)
	struct FName                                       RTPCOpeningDoorIntensity;                                 // 0x1A00(0x0008) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLDoor");
		return ptr;
	}


	void BreakDoor(class AOLPawn* Breaker, bool bReversed);
	void BashDoor(bool bReversed);
	bool ShouldBreak(class AOLBot* Bot);
	void OnDestroy(class USeqAct_Destroy* Action);
	void SoftDestroy();
	void NotifyHandlesToWait();
	void NotifyHandlesToRepath();
	float GetOpenAngle();
	void TriggerEvent(TEnumAsByte<EDoorEventType> EventType, class AOLPawn* Triggerer);
	void TriggerBreakDoorCameraShake();
	void StopShaking();
	void StartShaking(const struct FDoorShakeData& ShakeParams, bool bSwitchToBreakingMesh, bool bReversed, bool bFromAI);
	bool IsBroken();
	void UnregisterNavmeshObstacle();
	void RegisterNavMeshObstacle();
	struct FVector ScriptGetCenterLocation();
};


// Class OLGame.OLElectrifiedVolume
// 0x0014 (0x02E8 - 0x02D4)
class AOLElectrifiedVolume : public APhysicsVolume
{
public:
	unsigned long                                      bElectrified : 1;                                         // 0x02D4(0x0004) (Edit)
	int                                                TouchDamage;                                              // 0x02D8(0x0004) (Edit)
	float                                              Knockback;                                                // 0x02DC(0x0004) (Edit)
	class UAkEvent*                                    SoundEvent;                                               // 0x02E0(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLElectrifiedVolume");
		return ptr;
	}


	void Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void OnToggle(class USeqAct_Toggle* Action);
};


// Class OLGame.OLElectrifiedWaterVolume
// 0x0004 (0x02D8 - 0x02D4)
class AOLElectrifiedWaterVolume : public APhysicsVolume
{
public:
	unsigned long                                      bElectrified : 1;                                         // 0x02D4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLElectrifiedWaterVolume");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class OLGame.OLFloorMaterialVolume
// 0x0010 (0x028C - 0x027C)
class AOLFloorMaterialVolume : public AVolume
{
public:
	unsigned long                                      bEnabled : 1;                                             // 0x027C(0x0004) (Edit)
	int                                                Priority;                                                 // 0x0280(0x0004) (Edit)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0284(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLFloorMaterialVolume");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class OLGame.OLFXHolder
// 0x0000 (0x0240 - 0x0240)
class AOLFXHolder : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLFXHolder");
		return ptr;
	}

};


// Class OLGame.OLFXManager
// 0x0400 (0x0460 - 0x0060)
class UOLFXManager : public UObject
{
public:
	struct FPostProcessSettings                        NVPPSSettings;                                            // 0x0060(0x0160) (NeedCtorLink)
	struct FPostProcessSettings                        DeathPPSSettings;                                         // 0x01C0(0x0160) (NeedCtorLink)
	class UPostProcessChain*                           DefaultPPSChain;                                          // 0x0320(0x0008)
	class UPostProcessChain*                           CamcorderPPSChain;                                        // 0x0328(0x0008)
	class UPostProcessChain*                           CamcorderPPSChainConsole;                                 // 0x0330(0x0008)
	class UPostProcessChain*                           NVPPSChain;                                               // 0x0338(0x0008)
	class UPostProcessChain*                           GammaCalibrationPPSChain;                                 // 0x0340(0x0008)
	TArray<class UMaterialInstanceConstant*>           NVSensitiveMaterials;                                     // 0x0348(0x0010) (NeedCtorLink)
	class UMaterialInstanceConstant*                   CameraGlitchMat;                                          // 0x0358(0x0008)
	class UOLUberPostProcessEffect*                    CurrentUberPostEffect;                                    // 0x0360(0x0008)
	class UParticleSystemComponent*                    ElectricSparksParticles;                                  // 0x0368(0x0008) (ExportObject, Component, EditInline)
	class AOLFXHolder*                                 FXHolder;                                                 // 0x0370(0x0008)
	struct FName                                       UberPostEffectName;                                       // 0x0378(0x0008)
	struct FName                                       CameraGlitchEffectName;                                   // 0x0380(0x0008)
	struct FName                                       NVParamName;                                              // 0x0388(0x0008)
	struct FName                                       NVLightParamName;                                         // 0x0390(0x0008)
	struct FName                                       CameraGlitchParamName;                                    // 0x0398(0x0008)
	float                                              CamcorderPPSOpacity;                                      // 0x03A0(0x0004)
	float                                              CurrentElectricEffect;                                    // 0x03A4(0x0004)
	float                                              LastSetElectricEffect;                                    // 0x03A8(0x0004)
	float                                              CurrentHurtEffect;                                        // 0x03AC(0x0004)
	float                                              LastSetHurtEffect;                                        // 0x03B0(0x0004)
	unsigned long                                      bShowingHurtEffect : 1;                                   // 0x03B4(0x0004)
	unsigned long                                      bShowingElectricityEffect : 1;                            // 0x03B4(0x0004)
	unsigned long                                      bSwarmBlurActive : 1;                                     // 0x03B4(0x0004)
	unsigned long                                      bShatteredGlassEffectActive : 1;                          // 0x03B4(0x0004)
	TEnumAsByte<EPPSMode>                              CurrentPPSMode;                                           // 0x03B8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	struct FBlurData                                   CurrentBlur;                                              // 0x03BC(0x001C)
	struct FBlurData                                   HeatBlur;                                                 // 0x03D8(0x001C)
	float                                              SwarmBlurAmount;                                          // 0x03F4(0x0004)
	struct FCameraGlitchData                           CameraGlitch;                                             // 0x03F8(0x0018)
	class UAkEvent*                                    SndCameraGlitch;                                          // 0x0410(0x0008) (Const)
	struct FString                                     CameraGlitchIntensity;                                    // 0x0418(0x0010) (Const, NeedCtorLink)
	struct FMovieEffectData                            MovieEffect;                                              // 0x0428(0x0030) (NeedCtorLink)
	struct FName                                       MovieEffectRTPC;                                          // 0x0458(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLFXManager");
		return ptr;
	}


	void SetFXForEnemyPawn(class AOLEnemyPawn* EnemyPawn);
	void DeactivateNightVisionEffect();
	void ActivateCamcorderEffect();
	void ActivateNightVisionEffect(bool bPowered);
	void SetPPSFromScript(TEnumAsByte<EPPSMode> newPPS);
	class UOLFXManager* STATIC_GetFXManager();
};


// Class OLGame.OLGame
// 0x0058 (0x04F4 - 0x049C)
class AOLGame : public AUDKGame
{
public:
	TEnumAsByte<EDifficultyMode>                       DifficultyMode;                                           // 0x049C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	struct FName                                       DefaultMapName;                                           // 0x04A0(0x0008) (Config)
	struct FName                                       DemoMapName;                                              // 0x04A8(0x0008) (Config)
	struct FName                                       DLCInstalledMapName;                                      // 0x04B0(0x0008) (Config)
	struct FName                                       CurrentCheckpointName;                                    // 0x04B8(0x0008)
	unsigned long                                      bIsDemo : 1;                                              // 0x04C0(0x0004) (Config)
	unsigned long                                      bForcePlayingDLC : 1;                                     // 0x04C0(0x0004) (Config)
	unsigned long                                      bIsPlayingDLC : 1;                                        // 0x04C0(0x0004)
	unsigned long                                      bSoundOnPause : 1;                                        // 0x04C0(0x0004)
	class UOLVoiceManager*                             VoiceManager;                                             // 0x04C4(0x0008)
	struct FName                                       PendingCheckpointName;                                    // 0x04CC(0x0008)
	class UAkEvent*                                    SndPause;                                                 // 0x04D4(0x0008) (Const)
	class UAkEvent*                                    SndUnpause;                                               // 0x04DC(0x0008) (Const)
	class UAkEvent*                                    SndPauseNoSound;                                          // 0x04E4(0x0008) (Const)
	class UAkEvent*                                    SndUnpauseNoSound;                                        // 0x04EC(0x0008) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLGame");
		return ptr;
	}


	void ClearPause();
	bool SetPause(class APlayerController* PC, const struct FScriptDelegate& CanUnpauseDelegate);
	void HandleUnpaused();
	void HandlePaused();
	void SetGameSpeed(float T);
	void TravelToStartupMap();
	void RestartPlayer(class AController* NewPlayer);
	void UpdateGameType();
	void OnPlayerSpawned(class AController* NewPlayer, class ANavigationPoint* StartPoint);
	class ANavigationPoint* FindPlayerStart(class AController* Player, unsigned char InTeam, const struct FString& IncomingName);
	class AOLCheckpoint* MatchCheckpoint(const struct FString& PortalName);
	bool AllowCheats(class APlayerController* P);
	bool STATIC_IsDLCInstalled();
	bool STATIC_IsPlayingDLC();
	bool STATIC_IsDemo();
	class UClass* STATIC_SetGameType(const struct FString& MapName, const struct FString& Options, const struct FString& Portal);
};


// Class OLGame.OLGameplayMarker
// 0x0004 (0x0244 - 0x0240)
class AOLGameplayMarker : public AActor
{
public:
	unsigned long                                      bEnabled : 1;                                             // 0x0240(0x0004) (Edit)
	unsigned long                                      bInitiallyEnabled : 1;                                    // 0x0240(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLGameplayMarker");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class OLGame.OLAIVaultMarker
// 0x0048 (0x028C - 0x0244)
class AOLAIVaultMarker : public AOLGameplayMarker
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;                     // 0x0244(0x0008) (Const, Native, NoExport)
	float                                              VaultWidth;                                               // 0x024C(0x0004) (Edit)
	int                                                NonChaseCostMultiplier;                                   // 0x0250(0x0004) (Edit)
	class UOLWaitPointComponent*                       WaitPointComponent;                                       // 0x0254(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FVector                                     EndPointOne;                                              // 0x025C(0x000C)
	struct FVector                                     EndPointTwo;                                              // 0x0268(0x000C)
	class AOLBot*                                      ActiveBot;                                                // 0x0274(0x0008)
	TArray<class AOLBot*>                              Bots;                                                     // 0x027C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAIVaultMarker");
		return ptr;
	}

};


// Class OLGame.OLBed
// 0x002C (0x0270 - 0x0244)
class AOLBed : public AOLGameplayMarker
{
public:
	class UOLWaitPointComponent*                       WaitPointComponent;                                       // 0x0244(0x0008) (Edit, ExportObject, Component, EditInline)
	float                                              ThrowOffsetLeft;                                          // 0x024C(0x0004) (Edit)
	float                                              ThrowOffsetRight;                                         // 0x0250(0x0004) (Edit)
	float                                              FindHiddenPlayerProbability;                              // 0x0254(0x0004) (Edit)
	class AOLBot*                                      ActiveBot;                                                // 0x0258(0x0008)
	TArray<class AOLBot*>                              Bots;                                                     // 0x0260(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBed");
		return ptr;
	}

};


// Class OLGame.OLCornerMarker
// 0x0018 (0x025C - 0x0244)
class AOLCornerMarker : public AOLGameplayMarker
{
public:
	unsigned long                                      b3Sided : 1;                                              // 0x0244(0x0004) (Edit)
	unsigned long                                      bRoundedCorner : 1;                                       // 0x0244(0x0004) (Edit)
	unsigned long                                      bCanPeekFromLeftStanding : 1;                             // 0x0244(0x0004) (Edit)
	unsigned long                                      bCanPeekFromRightStanding : 1;                            // 0x0244(0x0004) (Edit)
	unsigned long                                      bCanPeekFromLeftCrouched : 1;                             // 0x0244(0x0004) (EditConst)
	unsigned long                                      bCanPeekFromRightCrouched : 1;                            // 0x0244(0x0004) (EditConst)
	float                                              WallThickness;                                            // 0x0248(0x0004) (Edit)
	struct FString                                     BoundStaticMesh;                                          // 0x024C(0x0010) (Edit, EditConst, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLCornerMarker");
		return ptr;
	}

};


// Class OLGame.OLCSA
// 0x0064 (0x02A8 - 0x0244)
class AOLCSA : public AOLGameplayMarker
{
public:
	unsigned long                                      bAutomatic : 1;                                           // 0x0244(0x0004) (Edit)
	unsigned long                                      bCheckLOS : 1;                                            // 0x0244(0x0004) (Edit)
	unsigned long                                      bConsumeItem : 1;                                         // 0x0244(0x0004) (Edit)
	unsigned long                                      bNoPrompt : 1;                                            // 0x0244(0x0004) (Edit)
	unsigned long                                      bShowPropAfterLastValidCheckpoint : 1;                    // 0x0244(0x0004) (Edit)
	int                                                MaxTriggerCount;                                          // 0x0248(0x0004) (Edit)
	float                                              InteractDistHorz;                                         // 0x024C(0x0004) (Edit)
	float                                              InteractDistVert;                                         // 0x0250(0x0004) (Edit)
	float                                              InteractRadius;                                           // 0x0254(0x0004) (Edit)
	float                                              MaxPlayerAngle;                                           // 0x0258(0x0004) (Edit)
	struct FName                                       RequiredItem;                                             // 0x025C(0x0008) (Edit)
	struct FName                                       AnimName;                                                 // 0x0264(0x0008) (Edit)
	float                                              AnimStartDistFwd;                                         // 0x026C(0x0004) (Edit)
	float                                              AnimStartDistRight;                                       // 0x0270(0x0004) (Edit)
	class AActor*                                      ReferenceAnimActor;                                       // 0x0274(0x0008) (Edit)
	struct FName                                       ActivationPromptTextId;                                   // 0x027C(0x0008) (Edit)
	struct FName                                       RequiredItemPromptTextId;                                 // 0x0284(0x0008) (Edit)
	class AStaticMeshActor*                            AnimatedProp;                                             // 0x028C(0x0008) (Edit)
	struct FName                                       LastValidCheckpoint;                                      // 0x0294(0x0008) (Edit)
	int                                                TriggerCount;                                             // 0x029C(0x0004)
	class UDrawSphereComponent*                        PreviewComp;                                              // 0x02A0(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLCSA");
		return ptr;
	}

};


// Class OLGame.OLHeatMarker
// 0x0010 (0x0254 - 0x0244)
class AOLHeatMarker : public AOLGameplayMarker
{
public:
	class UDrawSphereComponent*                        PreviewComp;                                              // 0x0244(0x0008) (ExportObject, Component, EditInline)
	unsigned long                                      bNoDamage : 1;                                            // 0x024C(0x0004) (Edit)
	float                                              Radius;                                                   // 0x0250(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLHeatMarker");
		return ptr;
	}

};


// Class OLGame.OLHidingSpot
// 0x002C (0x0270 - 0x0244)
class AOLHidingSpot : public AOLGameplayMarker
{
public:
	class AOLDoor*                                     AssociatedDoor;                                           // 0x0244(0x0008) (Edit)
	class UOLWaitPointComponent*                       WaitPointComponent;                                       // 0x024C(0x0008) (Edit, ExportObject, Component, EditInline)
	float                                              FindHiddenPlayerProbability;                              // 0x0254(0x0004) (Edit)
	class AOLBot*                                      ActiveBot;                                                // 0x0258(0x0008)
	TArray<class AOLBot*>                              Bots;                                                     // 0x0260(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLHidingSpot");
		return ptr;
	}

};


// Class OLGame.OLLadderMarker
// 0x0008 (0x024C - 0x0244)
class AOLLadderMarker : public AOLGameplayMarker
{
public:
	class AOLLadderMarker*                             OtherMarker;                                              // 0x0244(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLLadderMarker");
		return ptr;
	}

};


// Class OLGame.OLLedgeMarker
// 0x0074 (0x02B8 - 0x0244)
class AOLLedgeMarker : public AOLGameplayMarker
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;                     // 0x0244(0x0008) (Const, Native, NoExport)
	class AOLLedgeMarker*                              Next;                                                     // 0x024C(0x0008) (Edit)
	class AOLLedgeMarker*                              Prev;                                                     // 0x0254(0x0008) (Transient)
	float                                              PathOffset;                                               // 0x025C(0x0004) (Edit)
	unsigned long                                      AICanVault : 1;                                           // 0x0260(0x0004) (Edit)
	unsigned long                                      bCanLedgeWalk : 1;                                        // 0x0260(0x0004) (Edit)
	unsigned long                                      bCanLedgeHang : 1;                                        // 0x0260(0x0004) (Edit)
	unsigned long                                      bCanClimbUp : 1;                                          // 0x0260(0x0004) (Edit)
	unsigned long                                      bCanDropDown : 1;                                         // 0x0260(0x0004) (Edit)
	unsigned long                                      bCanSlide : 1;                                            // 0x0260(0x0004) (Edit)
	int                                                NonChaseCostMultiplier;                                   // 0x0264(0x0004) (Edit)
	class UOLWaitPointComponent*                       WaitPointComponent;                                       // 0x0268(0x0008) (Edit, ExportObject, Component, EditInline)
	struct FVector                                     WaitPointStartOffset;                                     // 0x0270(0x000C)
	struct FVector                                     WaitPointAdditionalOffset;                                // 0x027C(0x000C)
	struct FVector                                     TopPoint;                                                 // 0x0288(0x000C)
	struct FVector                                     BottomPoint;                                              // 0x0294(0x000C)
	class AOLBot*                                      ActiveBot;                                                // 0x02A0(0x0008)
	TArray<class AOLBot*>                              Bots;                                                     // 0x02A8(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLLedgeMarker");
		return ptr;
	}

};


// Class OLGame.OLPreferredPathMarker
// 0x0008 (0x024C - 0x0244)
class AOLPreferredPathMarker : public AOLGameplayMarker
{
public:
	class AOLPreferredPathMarker*                      Next;                                                     // 0x0244(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLPreferredPathMarker");
		return ptr;
	}

};


// Class OLGame.OLRecordingMarker
// 0x0028 (0x026C - 0x0244)
class AOLRecordingMarker : public AOLGameplayMarker
{
public:
	float                                              Radius;                                                   // 0x0244(0x0004) (Edit)
	struct FName                                       MomentName;                                               // 0x0248(0x0008) (Edit)
	float                                              MinRecordingDuration;                                     // 0x0250(0x0004) (Edit)
	unsigned long                                      bAllowNonContinuousRecording : 1;                         // 0x0254(0x0004) (Edit)
	unsigned long                                      bRecorded : 1;                                            // 0x0254(0x0004) (Transient)
	unsigned long                                      bRecording : 1;                                           // 0x0254(0x0004) (Transient)
	float                                              NotificationDelay;                                        // 0x0258(0x0004) (Edit)
	float                                              StartedRecordingTime;                                     // 0x025C(0x0004) (Transient)
	float                                              AccumulatedRecordingTime;                                 // 0x0260(0x0004) (Transient)
	class UDrawSphereComponent*                        PreviewComp;                                              // 0x0264(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLRecordingMarker");
		return ptr;
	}

};


// Class OLGame.OLScareMoment
// 0x0020 (0x0264 - 0x0244)
class AOLScareMoment : public AOLGameplayMarker
{
public:
	class UAkEvent*                                    StartEvent;                                               // 0x0244(0x0008) (Edit)
	class UAkEvent*                                    StopEvent;                                                // 0x024C(0x0008) (Edit)
	struct FName                                       DistanceRTPC;                                             // 0x0254(0x0008) (Edit)
	float                                              Range;                                                    // 0x025C(0x0004) (Edit)
	unsigned long                                      bPlaying : 1;                                             // 0x0260(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLScareMoment");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
	void StopScare();
	void StartScare();
};


// Class OLGame.OLGameplayVolume
// 0x0000 (0x02D4 - 0x02D4)
class AOLGameplayVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLGameplayVolume");
		return ptr;
	}

};


// Class OLGame.OLAIVisionObstructionVolume
// 0x0000 (0x02D4 - 0x02D4)
class AOLAIVisionObstructionVolume : public AOLGameplayVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAIVisionObstructionVolume");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class OLGame.OLSqueezeVolume
// 0x0014 (0x02E8 - 0x02D4)
class AOLSqueezeVolume : public AOLGameplayVolume
{
public:
	class AOLGameplayMarker*                           Node1;                                                    // 0x02D4(0x0008) (Edit)
	class AOLGameplayMarker*                           Node2;                                                    // 0x02DC(0x0008) (Edit)
	unsigned long                                      bCanLookLeft : 1;                                         // 0x02E4(0x0004) (Edit)
	unsigned long                                      bCanLookRight : 1;                                        // 0x02E4(0x0004) (Edit)
	unsigned long                                      bNoHands : 1;                                             // 0x02E4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSqueezeVolume");
		return ptr;
	}


	void PostBeginPlay();
};


// Class OLGame.OLGameStateList
// 0x0011 (0x0251 - 0x0240)
class AOLGameStateList : public AActor
{
public:
	TArray<struct FOLGameState>                        GameStateList;                                            // 0x0240(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EOutlastGameType>                      GameType;                                                 // 0x0250(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLGameStateList");
		return ptr;
	}


	void STATIC_OnPlayerDeath();
	void STATIC_ResetAllGameState();
	void STATIC_DumpGameState();
};


// Class OLGame.OLGameViewportClient
// 0x0000 (0x01B0 - 0x01B0)
class UOLGameViewportClient : public UUDKGameViewportClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLGameViewportClient");
		return ptr;
	}


	void DrawTransition(class UCanvas* Canvas);
};


// Class OLGame.OLHeatVolume
// 0x0000 (0x02D4 - 0x02D4)
class AOLHeatVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLHeatVolume");
		return ptr;
	}

};


// Class OLGame.OLHeroCamera
// 0x01E4 (0x0244 - 0x0060)
class UOLHeroCamera : public UObject
{
public:
	class AOLHero*                                     Hero;                                                     // 0x0060(0x0008)
	struct FCamView                                    ViewWS;                                                   // 0x0068(0x0018)
	struct FCamView                                    ViewCS;                                                   // 0x0080(0x0018)
	struct FViewLimits                                 Limits;                                                   // 0x0098(0x0010)
	struct FViewLimits                                 SoftLimits;                                               // 0x00A8(0x0010)
	float                                              SoftZonePitch;                                            // 0x00B8(0x0004)
	float                                              SoftZoneYaw;                                              // 0x00BC(0x0004)
	struct FRotator                                    BaseRotation;                                             // 0x00C0(0x000C)
	struct FVector                                     BaseLocation;                                             // 0x00CC(0x000C)
	struct FSmoothingData                              BaseViewSmoothing;                                        // 0x00D8(0x0024)
	float                                              InputYaw;                                                 // 0x00FC(0x0004)
	float                                              InputPitch;                                               // 0x0100(0x0004)
	float                                              NeckOffsetFwd;                                            // 0x0104(0x0004)
	float                                              NeckOffsetSide;                                           // 0x0108(0x0004)
	float                                              NeckOffsetBaseYaw;                                        // 0x010C(0x0004)
	float                                              LookBackRatio;                                            // 0x0110(0x0004)
	float                                              LeanPushingRatio;                                         // 0x0114(0x0004)
	unsigned long                                      bActiveLookAt : 1;                                        // 0x0118(0x0004)
	unsigned long                                      bUserControlsPawnRotation : 1;                            // 0x0118(0x0004)
	unsigned long                                      bLocalSpacePlayerControl : 1;                             // 0x0118(0x0004)
	float                                              PendingYawCorrection;                                     // 0x011C(0x0004)
	struct FTargettedSmoothingData                     TargettedYawSmoothing;                                    // 0x0120(0x0014)
	struct FCameraShakeData                            ShakeData;                                                // 0x0134(0x007C)
	struct FCameraShakeData                            SmallLandingShakeData;                                    // 0x01B0(0x007C) (Const)
	class UForceFeedbackWaveform*                      CamShakeFFWaveform;                                       // 0x022C(0x0008)
	struct FName                                       CameraBoneName;                                           // 0x0234(0x0008) (Config)
	float                                              ViewLimitsSoftZone;                                       // 0x023C(0x0004) (Config)
	float                                              SoftZoneStiffness;                                        // 0x0240(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLHeroCamera");
		return ptr;
	}

};


// Class OLGame.OLHUD
// 0x017C (0x084C - 0x06D0)
class AOLHUD : public AUDKHUD
{
public:
	class AOLBot*                                      CurrentDebugBot;                                          // 0x06D0(0x0008)
	unsigned long                                      bGammaCalibrationOpen : 1;                                // 0x06D8(0x0004)
	unsigned long                                      bSplashScreenOpen : 1;                                    // 0x06D8(0x0004)
	unsigned long                                      bSplashScreenReady : 1;                                   // 0x06D8(0x0004)
	unsigned long                                      bGameOver : 1;                                            // 0x06D8(0x0004)
	unsigned long                                      bShowCrosshair : 1;                                       // 0x06D8(0x0004) (Config)
	unsigned long                                      bCrosshairDesired : 1;                                    // 0x06D8(0x0004)
	unsigned long                                      bAlwaysShowPrompts : 1;                                   // 0x06D8(0x0004)
	unsigned long                                      bShowSubtitles : 1;                                       // 0x06D8(0x0004) (Config)
	unsigned long                                      bForcePS4UI : 1;                                          // 0x06D8(0x0004) (Config)
	unsigned long                                      bLostFocus : 1;                                           // 0x06D8(0x0004)
	TEnumAsByte<EPPSMode>                              PreGammaPPSMode;                                          // 0x06DC(0x0001)
	TEnumAsByte<EHUDMessageType>                       CurrentMessageType;                                       // 0x06DD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x06DE(0x0002) MISSED OFFSET
	float                                              SplashScreenActivatedTimestamp;                           // 0x06E0(0x0004)
	float                                              CrosshairOpacity;                                         // 0x06E4(0x0004)
	float                                              LastCrosshairUpdateRealTime;                              // 0x06E8(0x0004)
	float                                              InteractionCrosshairPct;                                  // 0x06EC(0x0004)
	float                                              NewObjectiveTimestamp;                                    // 0x06F0(0x0004)
	struct FVector                                     NewObjectiveHeroPos;                                      // 0x06F4(0x000C)
	float                                              NewObjectiveZoneRadius;                                   // 0x0700(0x0004) (Config)
	float                                              ShowInventoryTimestamp;                                   // 0x0704(0x0004)
	float                                              LastCamCycleTime;                                         // 0x0708(0x0004)
	struct FName                                       LatestRecordingName;                                      // 0x070C(0x0008)
	float                                              LatestRecordingTimer;                                     // 0x0714(0x0004)
	struct FName                                       LatestDocumentName;                                       // 0x0718(0x0008)
	float                                              LatestDocumentTimer;                                      // 0x0720(0x0004)
	float                                              NewObjectiveTimer;                                        // 0x0724(0x0004)
	float                                              LatestCheckpointTimer;                                    // 0x0728(0x0004)
	float                                              SubtitleMaxDistance;                                      // 0x072C(0x0004) (Const)
	float                                              SubtitleMaxDistanceOccluded;                              // 0x0730(0x0004) (Const)
	float                                              SubtitleOcclusionThreshold;                               // 0x0734(0x0004) (Const)
	float                                              SubtitleObstructionThreshold;                             // 0x0738(0x0004) (Const)
	TArray<struct FSubtitleData>                       SubtitleQueue;                                            // 0x073C(0x0010) (NeedCtorLink)
	struct FString                                     CurrentSubtitle;                                          // 0x074C(0x0010) (NeedCtorLink)
	class UTexture2D*                                  InventoryBackgoundImg;                                    // 0x075C(0x0008)
	class UTexture2D*                                  NormalCrosshairImage;                                     // 0x0764(0x0008)
	class UTexture2D*                                  InteractionCrosshairImage;                                // 0x076C(0x0008)
	class UTexture2D*                                  SplashScreenImage;                                        // 0x0774(0x0008)
	class UTexture2D*                                  GameOverImage;                                            // 0x077C(0x0008)
	class UTexture2D*                                  GameOverImageDemo;                                        // 0x0784(0x0008)
	class UFont*                                       SmallFont;                                                // 0x078C(0x0008)
	class UFont*                                       MediumFont;                                               // 0x0794(0x0008)
	class UFont*                                       LargeFont;                                                // 0x079C(0x0008)
	class UFont*                                       HugeFont;                                                 // 0x07A4(0x0008)
	class UOLCamcorderHud*                             CamcorderHUD;                                             // 0x07AC(0x0008)
	class UOLMainHud*                                  MainHUD;                                                  // 0x07B4(0x0008)
	class UAkEvent*                                    SoundEventSelect;                                         // 0x07BC(0x0008)
	class UAkEvent*                                    SoundEventEnter;                                          // 0x07C4(0x0008)
	class UOLUIFrontEnd*                               MenuManager;                                              // 0x07CC(0x0008)
	class UOLUIMessage*                                ObjectiveScreen;                                          // 0x07D4(0x0008)
	class UOLUIMessage*                                MessageScreen;                                            // 0x07DC(0x0008)
	class UOLUIMessage*                                SubtitleScreen;                                           // 0x07E4(0x0008)
	struct FString                                     CurrentObjectiveText;                                     // 0x07EC(0x0010) (NeedCtorLink)
	struct FString                                     CurrentMessageText;                                       // 0x07FC(0x0010) (NeedCtorLink)
	struct FString                                     LastUntranslatedMessageText;                              // 0x080C(0x0010) (NeedCtorLink)
	struct FString                                     CachedTranslatedMessageText;                              // 0x081C(0x0010) (NeedCtorLink)
	TArray<struct FGenericMessage>                     GenericMessages;                                          // 0x082C(0x0010) (NeedCtorLink)
	struct FScriptDelegate                             __CanUnpauseInPauseMenu__Delegate;                        // 0x083C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLHUD");
		return ptr;
	}


	void GamepadConfigChanged();
	void OnLostFocusPause(bool bEnable);
	void ShowHUDMessages();
	void HideHUDMessages();
	bool ShowingSubtitle();
	void HideSubtitle();
	void ShowSubtitle(const struct FString& MessageText);
	void HideObjective();
	void ShowObjective(const struct FString& ObjectiveText);
	void HideMessage();
	void ShowMessage(TEnumAsByte<EHUDMessageType> MessageType, const struct FString& MessageText);
	void HideMenu();
	void ShowMenuType(TEnumAsByte<EMenuType> MenuType);
	void PostSoundEventEnter();
	void PostSoundEventSelect();
	void MuteSelectSound(float MuteTime);
	bool CanShowSubMenu();
	void ShowEvidenceMenu();
	void ShowRecordingMenu();
	void ShowTabMenu();
	void ShowMenu();
	void ShowMainMenu();
	void ReloadMenu();
	bool IsAMenuOpen();
	bool IsInCreditsMenu();
	bool IsOnMainMenuScreen();
	bool IsMainMenuOpen();
	bool IsInPauseMenu();
	bool CanUnpauseInPauseMenu();
	void ShowDebugInfo(float* out_YL, float* out_YPos);
	void DebugNextAI();
	void NotifyGameSaved();
	void SetGammaCalibrationActive(bool bActive);
	bool ShowingFullScreenOverlay();
	void Draw();
};


// Class OLGame.OLInterpTrackInstPPSEffectParam
// 0x0008 (0x0068 - 0x0060)
class UOLInterpTrackInstPPSEffectParam : public UInterpTrackInst
{
public:
	float                                              PreviousParamValue;                                       // 0x0060(0x0004)
	unsigned long                                      PreviousEffectShown : 1;                                  // 0x0064(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLInterpTrackInstPPSEffectParam");
		return ptr;
	}

};


// Class OLGame.OLInterpTrackPPSEffectParam
// 0x0019 (0x00F1 - 0x00D8)
class UOLInterpTrackPPSEffectParam : public UInterpTrackFloatBase
{
public:
	class UMaterialInstanceConstant*                   EffectMaterial;                                           // 0x00D8(0x0008) (Edit)
	struct FName                                       ParamName;                                                // 0x00E0(0x0008) (Edit)
	struct FName                                       EffectName;                                               // 0x00E8(0x0008) (Edit)
	TEnumAsByte<ETrackPropertyType>                    PropertyType;                                             // 0x00F0(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLInterpTrackPPSEffectParam");
		return ptr;
	}

};


// Class OLGame.OLInventoryManager
// 0x0050 (0x00B0 - 0x0060)
class UOLInventoryManager : public UObject
{
public:
	TArray<struct FName>                               OwnedInventory;                                           // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FName>                               CollectedDocuments;                                       // 0x0070(0x0010) (NeedCtorLink)
	TArray<struct FName>                               UnreadDocuments;                                          // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FVector>                             SavedBatteryLocs;                                         // 0x0090(0x0010) (NeedCtorLink)
	TArray<struct FVector>                             UnsavedBatteryLocs;                                       // 0x00A0(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLInventoryManager");
		return ptr;
	}


	void ClearGameplayItems();
	void ClearUnsavedBatteries();
};


// Class OLGame.OLMainHud
// 0x002C (0x0210 - 0x01E4)
class UOLMainHud : public UGFxMoviePlayer
{
public:
	class AOLHUD*                                      HUD;                                                      // 0x01E4(0x0008)
	struct FString                                     SavingMessageText;                                        // 0x01EC(0x0010) (Const, Localized, NeedCtorLink)
	struct FMainHudObjects                             Objects;                                                  // 0x01FC(0x0010)
	struct FMainHudState                               HudState;                                                 // 0x020C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLMainHud");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
};


// Class OLGame.OLPawn
// 0x2430 (0x2BBC - 0x078C)
class AOLPawn : public AUDKPawn
{
public:
	class AOLPawn*                                     DefaultPawn;                                              // 0x078C(0x0008)
	class UOLAnimNodeSlot*                             FullBodyAnimSlot;                                         // 0x0794(0x0008)
	class UOLAnimCustomBlend*                          CustomBlendNode;                                          // 0x079C(0x0008)
	struct FVector                                     RealVelocity;                                             // 0x07A4(0x000C)
	struct FVector                                     PreviousLocation;                                         // 0x07B0(0x000C)
	TEnumAsByte<ELocomotionMode>                       LocomotionMode;                                           // 0x07BC(0x0001)
	TEnumAsByte<ESpecialMoveType>                      SpecialMove;                                              // 0x07BD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07BE(0x0002) MISSED OFFSET
	struct FSpecialMoveParameters                      SpecialMoveParams[0x66];                                  // 0x07C0(0x0058)
	unsigned long                                      bPlayingSpecialMoveAnim : 1;                              // 0x2AD0(0x0004)
	unsigned long                                      bDelayedSpecialMoveAnim : 1;                              // 0x2AD0(0x0004)
	unsigned long                                      bSpecialMoveInterruptible : 1;                            // 0x2AD0(0x0004)
	unsigned long                                      bPendingSpecialMoveAnims : 1;                             // 0x2AD0(0x0004)
	unsigned long                                      bFilterAnimEndNotifies : 1;                               // 0x2AD0(0x0004) (Const)
	unsigned long                                      bProceduralAnimsDelayedAfterSpecialMove : 1;              // 0x2AD0(0x0004)
	unsigned long                                      bRepelsAI : 1;                                            // 0x2AD0(0x0004)
	unsigned long                                      bFailedCollisionSet : 1;                                  // 0x2AD0(0x0004)
	TArray<struct FName>                               PlayingSpecialMoveAnims;                                  // 0x2AD4(0x0010) (NeedCtorLink)
	struct FAdjustPositionData                         AdjustPosition;                                           // 0x2AE4(0x0038)
	TArray<struct FProceduralAnimData>                 ProceduralAnims;                                          // 0x2B1C(0x0010) (NeedCtorLink)
	float                                              ProceduralAnimLinearVelocity;                             // 0x2B2C(0x0004) (Const)
	float                                              ProceduralAnimAngularVelocity;                            // 0x2B30(0x0004) (Const)
	struct FTurningData                                Turning;                                                  // 0x2B34(0x0028)
	float                                              MaxFootstepDistSq;                                        // 0x2B5C(0x0004)
	float                                              MaxJumpSoundDistSq;                                       // 0x2B60(0x0004)
	float                                              RepulsionMaxDistance;                                     // 0x2B64(0x0004) (Const)
	float                                              RepulsionCollisionAngle;                                  // 0x2B68(0x0004) (Const)
	float                                              RepulsionCollisionFactor;                                 // 0x2B6C(0x0004) (Const)
	float                                              RepulsionMagnitudeFactor;                                 // 0x2B70(0x0004) (Const)
	float                                              RepulsionMaxMagnitude;                                    // 0x2B74(0x0004) (Const)
	float                                              RepulsionSidestepFactor;                                  // 0x2B78(0x0004) (Const)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x2B7C(0x0008) (ExportObject, Component, EditInline)
	struct FName                                       HeadBoneName;                                             // 0x2B84(0x0008)
	float                                              DefaultAirControl;                                        // 0x2B8C(0x0004)
	float                                              DestinationPredictionFactor;                              // 0x2B90(0x0004)
	float                                              DestinationPredictionMax;                                 // 0x2B94(0x0004)
	struct FName                                       FloorMaterialGroup;                                       // 0x2B98(0x0008)
	class UAkEvent*                                    FootStepSound_Walk;                                       // 0x2BA0(0x0008)
	struct FString                                     SubtitleName;                                             // 0x2BA8(0x0010) (Const, NeedCtorLink)
	float                                              PendingAnimSetUpdateTime;                                 // 0x2BB8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLPawn");
		return ptr;
	}


	void STATIC_DrawDebugAnimNode(const struct FName& NodeName, class UAnimNode* aNode, class UCanvas* aCanvas, float XL, float XBasePos, float XOffset, TArray<class UAnimNode*>* visitedNodes, float* out_YL, float* out_YPos);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	struct FVector GetFutureDestination(class AOLPawn* Agent);
	bool IsFirstPerson();
	void PlayLanded(float ImpactVel);
	void Landed(const struct FVector& HitNormal, class AActor* FloorActor);
	void Destroyed();
	void MAT_BeginAIGroup(const struct FVector& StartLoc, const struct FRotator& StartRot, float BlendTime);
	void StartMatinee(const struct FVector& StartLoc, const struct FRotator& StartRot, float BlendTime);
	void PostInitAnimTree(class USkeletalMeshComponent* SkelComp);
	void PlayVOLine(class UAkEvent* LineToPlay, const struct FName& BoneName);
	void PlayJumpingSound();
	void PlayLandingSound();
	struct FName GetMaterialBelowFeet();
	void ClientRestart();
	void PlayFootStepSound(int FootDown, class UAnimNotify_Footstep* footstepNotify);
	void FaceRotation(const struct FRotator& NewRotation, float DeltaTime);
	float GetEyeHeight();
	class USoundCue* GetPawnAmbientSound();
	void SetPawnAmbientSound(class USoundCue* NewAmbientSound);
	bool Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void EncroachedBy(class AActor* Other);
	void SetPawnRBChannels(bool bRagdollMode);
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void ReattachMesh();
	void UpdateShadowSettings(bool bWantShadow);
	void PostBeginPlay();
	void ProceduralAdjustNotify(float Duration);
	void RestoreCollisionSizeNotify();
	void ChangeCollisionSizeNotify();
	void MoveInterruptibleNotify();
	void NativePostBeginPlay();
	void NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void StartSpecialMove(TEnumAsByte<ESpecialMoveType> moveType, const struct FVector& targetPosition, const struct FVector& TargetDirection, TEnumAsByte<EAdjustPositionTargetType> TargetType);
	bool IsSpecialMoveCompleted();
};


// Class OLGame.OLHero
// 0x18B8 (0x4474 - 0x2BBC)
class AOLHero : public AOLPawn
{
public:
	class AOLPlayerController*                         OLPC;                                                     // 0x2BBC(0x0008)
	class AOLHero*                                     DefaultHero;                                              // 0x2BC4(0x0008)
	struct FVector                                     CharForward;                                              // 0x2BCC(0x000C)
	struct FVector                                     EyeForward;                                               // 0x2BD8(0x000C)
	TArray<class AOLLedgeMarker*>                      CachedMarkers;                                            // 0x2BE4(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLHidingSpot*>                       CachedHidingSpots;                                        // 0x2BF4(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLDoor*>                             CachedDoors;                                              // 0x2C04(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLBed*>                              CachedBeds;                                               // 0x2C14(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLPickableObject*>                   CachedPickables;                                          // 0x2C24(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLLadderMarker*>                     CachedLadders;                                            // 0x2C34(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLCSA*>                              CachedCSAs;                                               // 0x2C44(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLScareMoment*>                      CachedScares;                                             // 0x2C54(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLPushableObject*>                   CachedPushables;                                          // 0x2C64(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLCornerMarker*>                     CachedCorners;                                            // 0x2C74(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLHeatMarker*>                       CachedHeatMarkers;                                        // 0x2C84(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLRecordingMarker*>                  CachedRecordingMarkers;                                   // 0x2C94(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLPreferredPathMarker*>              CachedPreferredPathMarkers;                               // 0x2CA4(0x0010) (Transient, NeedCtorLink)
	TArray<class ALight*>                              CachedLights;                                             // 0x2CB4(0x0010) (Transient, NeedCtorLink)
	struct FVector                                     CachedObjectsPos;                                         // 0x2CC4(0x000C) (Transient)
	TArray<struct FPointer>                            CachedLevelList;                                          // 0x2CD0(0x0010) (Native, Transient)
	class USkeletalMeshComponent*                      ShadowProxy;                                              // 0x2CE0(0x0008) (ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        HeadMesh;                                                 // 0x2CE8(0x0008) (ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      CameraMesh;                                               // 0x2CF0(0x0008) (ExportObject, Component, EditInline)
	class USkeletalMeshComponent*                      CameraMeshShadowProxy;                                    // 0x2CF8(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    BloodEffect;                                              // 0x2D00(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    DeathParticles;                                           // 0x2D08(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    DecapitatedBloodEffect;                                   // 0x2D10(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    RainEffect;                                               // 0x2D18(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    WaterFootstepParticlesLeft;                               // 0x2D20(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    WaterFootstepParticlesRight;                              // 0x2D28(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    WaterSplashParticles;                                     // 0x2D30(0x0008) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    GenericCameraEffect;                                      // 0x2D38(0x0008) (ExportObject, Component, EditInline)
	class USpotLightComponent*                         NVLightPowered;                                           // 0x2D40(0x0008) (ExportObject, Component, EditInline)
	class USpotLightComponent*                         NVLightDefault;                                           // 0x2D48(0x0008) (ExportObject, Component, EditInline)
	class USpotLightComponent*                         DarkLight;                                                // 0x2D50(0x0008) (ExportObject, Component, EditInline)
	class UPointLightComponent*                        CamcorderScreenLight;                                     // 0x2D58(0x0008) (ExportObject, Component, EditInline)
	class USkeletalMesh*                               FingerlessMesh;                                           // 0x2D60(0x0008)
	class USkeletalMesh*                               ITTechMesh;                                               // 0x2D68(0x0008)
	class USkeletalMesh*                               PrisonerMesh;                                             // 0x2D70(0x0008)
	class UMaterialInstanceConstant*                   FootstepDecalMatL1;                                       // 0x2D78(0x0008)
	class UMaterialInstanceConstant*                   FootstepDecalMatL2;                                       // 0x2D80(0x0008)
	class UMaterialInstanceConstant*                   FootstepDecalMatR1;                                       // 0x2D88(0x0008)
	class UMaterialInstanceConstant*                   FootstepDecalMatR2;                                       // 0x2D90(0x0008)
	class UMaterialInstanceConstant*                   FootstepBarefeetDecalMatL1;                               // 0x2D98(0x0008)
	class UMaterialInstanceConstant*                   FootstepBarefeetDecalMatL2;                               // 0x2DA0(0x0008)
	class UMaterialInstanceConstant*                   FootstepBarefeetDecalMatR1;                               // 0x2DA8(0x0008)
	class UMaterialInstanceConstant*                   FootstepBarefeetDecalMatR2;                               // 0x2DB0(0x0008)
	class UMaterialInstanceConstant*                   CameraScreenMat;                                          // 0x2DB8(0x0008)
	struct FName                                       CameraScreenParamName;                                    // 0x2DC0(0x0008)
	class UOLAnimNodeSlot*                             ShadowProxyFullBodyAnimSlot;                              // 0x2DC8(0x0008)
	class UOLAnimCustomBlend*                          ShadowProxyCustomBlendNode;                               // 0x2DD0(0x0008)
	class UOLAnimCustomBlend*                          UpperBodyBlendNode;                                       // 0x2DD8(0x0008)
	class UOLAnimCustomBlend*                          ShadowProxyUpperBodyBlendNode;                            // 0x2DE0(0x0008)
	class UAnimNodeSlot*                               RightArmAnimSlot;                                         // 0x2DE8(0x0008)
	class UAnimNodeSlot*                               ShadowProxyRightArmAnimSlot;                              // 0x2DF0(0x0008)
	class UAnimNodeSlot*                               LeftArmAnimSlot;                                          // 0x2DF8(0x0008)
	class UAnimNodeSlot*                               ShadowProxyLeftArmAnimSlot;                               // 0x2E00(0x0008)
	class UOLAnimBlendByPosture*                       BlendByPostureWalkingAnimNode;                            // 0x2E08(0x0008)
	class UOLAnimBlendByPosture*                       BlendByPostureFallingAnimNode;                            // 0x2E10(0x0008)
	class UOLAnimBlendByLocomotionMode*                LocomotionAnimNode;                                       // 0x2E18(0x0008)
	class UOLAnimConstrainedMovement*                  LedgeHangAnimNode;                                        // 0x2E20(0x0008)
	class UOLAnimConstrainedMovement*                  ShadowProxyLedgeHangAnimNode;                             // 0x2E28(0x0008)
	class UOLAnimConstrainedMovement*                  LedgeWalkAnimNode;                                        // 0x2E30(0x0008)
	class UOLAnimConstrainedMovement*                  ShadowProxyLedgeWalkAnimNode;                             // 0x2E38(0x0008)
	class UOLAnimConstrainedMovement*                  SqueezeAnimNode;                                          // 0x2E40(0x0008)
	class UOLAnimConstrainedMovement*                  ShadowProxySqueezeAnimNode;                               // 0x2E48(0x0008)
	class UOLAnimMultiCycleConstrainedMovement*        LadderAnimNode;                                           // 0x2E50(0x0008)
	class UOLAnimMultiCycleConstrainedMovement*        ShadowProxyLadderAnimNode;                                // 0x2E58(0x0008)
	class UOLAnimDoorInteraction*                      DoorAnimNode;                                             // 0x2E60(0x0008)
	class UOLAnimDoorInteraction*                      ShadowProxyDoorAnimNode;                                  // 0x2E68(0x0008)
	class UAnimNodeBlendPerBone*                       LeftArmWallContactFilterNode;                             // 0x2E70(0x0008)
	class UAnimNodeBlendPerBone*                       ShadowProxyLeftArmWallContactFilterNode;                  // 0x2E78(0x0008)
	class UAnimNodeSequence*                           LeftArmWallContactAnimSequence;                           // 0x2E80(0x0008)
	class UAnimNodeSequence*                           ShadowProxyLeftArmWallContactAnimSequence;                // 0x2E88(0x0008)
	class UOLAnimPeeking*                              PeekingAnimNode;                                          // 0x2E90(0x0008)
	class UOLAnimPeeking*                              ShadowProxyPeekingAnimNode;                               // 0x2E98(0x0008)
	class UAnimNodeSequence*                           BedAnimNode;                                              // 0x2EA0(0x0008)
	class UAnimNodeSequence*                           ShadowProxyBedAnimNode;                                   // 0x2EA8(0x0008)
	class UAnimNodeBlendPerBone*                       LeftFootPlacementNode;                                    // 0x2EB0(0x0008)
	class UAnimNodeBlendPerBone*                       ShadowProxyLeftFootPlacementNode;                         // 0x2EB8(0x0008)
	class UAnimNodeBlendPerBone*                       RightFootPlacementNode;                                   // 0x2EC0(0x0008)
	class UAnimNodeBlendPerBone*                       ShadowProxyRightFootPlacementNode;                        // 0x2EC8(0x0008)
	class UOLAnimStruggleCycle*                        StruggleAnimNode;                                         // 0x2ED0(0x0008)
	class UOLAnimStruggleCycle*                        ShadowProxyStruggleAnimNode;                              // 0x2ED8(0x0008)
	class UOLAnimCrouchedTurnOnSpot*                   CrouchTurnOnSpotAnimNode;                                 // 0x2EE0(0x0008)
	class UOLAnimCrouchedTurnOnSpot*                   ShadowProxyCrouchTurnOnSpotAnimNode;                      // 0x2EE8(0x0008)
	class UOLAnimParrying*                             ParryingAnimNode;                                         // 0x2EF0(0x0008)
	class UOLAnimParrying*                             ShadowProxyParryingAnimNode;                              // 0x2EF8(0x0008)
	class UOLAnimBlendByLeaning*                       LeanStandingAnimNode;                                     // 0x2F00(0x0008)
	class UOLAnimBlendByLeaning*                       LeanCrouchedAnimNode;                                     // 0x2F08(0x0008)
	class USkelControlLimb*                            ShadowProxyLeftHandIK;                                    // 0x2F10(0x0008)
	class USkelControlLimb*                            ShadowProxyRightHandIK;                                   // 0x2F18(0x0008)
	class USkelControlSingleBone*                      HiddenRightArmControl;                                    // 0x2F20(0x0008)
	class USkelControlSingleBone*                      HiddenLeftArmControl;                                     // 0x2F28(0x0008)
	class USkelControlBase*                            LeftForeTwistControl;                                     // 0x2F30(0x0008)
	class USkelControlBase*                            ShadowProxyLeftForeTwistControl;                          // 0x2F38(0x0008)
	class USkelControlBase*                            LeftForeTwist1Control;                                    // 0x2F40(0x0008)
	class USkelControlBase*                            ShadowProxyLeftForeTwist1Control;                         // 0x2F48(0x0008)
	class USkelControlBase*                            LeftUpArmTwistControl;                                    // 0x2F50(0x0008)
	class USkelControlBase*                            ShadowProxyLeftUpArmTwistControl;                         // 0x2F58(0x0008)
	class USkelControlBase*                            RightForeTwistControl;                                    // 0x2F60(0x0008)
	class USkelControlBase*                            ShadowProxyRightForeTwistControl;                         // 0x2F68(0x0008)
	class USkelControlBase*                            RightUpArmTwistControl;                                   // 0x2F70(0x0008)
	class USkelControlBase*                            ShadowProxyRightUpArmTwistControl;                        // 0x2F78(0x0008)
	class USkelControlBase*                            ShadowProxyRightClavicleFixup;                            // 0x2F80(0x0008)
	unsigned long                                      bLeftHandIKActive : 1;                                    // 0x2F88(0x0004)
	unsigned long                                      bRightHandIKActive : 1;                                   // 0x2F88(0x0004)
	unsigned long                                      bShouldHideLeftHandDuringSM : 1;                          // 0x2F88(0x0004)
	unsigned long                                      bShouldHideRightHandDuringSM : 1;                         // 0x2F88(0x0004)
	unsigned long                                      bMustCrouchAfterSpecialMove : 1;                          // 0x2F88(0x0004)
	unsigned long                                      bForcedCrouch : 1;                                        // 0x2F88(0x0004)
	unsigned long                                      bLeaningLeftPushing : 1;                                  // 0x2F88(0x0004)
	unsigned long                                      bLeaningRightPushing : 1;                                 // 0x2F88(0x0004)
	unsigned long                                      bWantToRun : 1;                                           // 0x2F88(0x0004)
	unsigned long                                      bIsGhost : 1;                                             // 0x2F88(0x0004)
	unsigned long                                      bPlayingRunSnd : 1;                                       // 0x2F88(0x0004)
	unsigned long                                      bElectricGlitchActive : 1;                                // 0x2F88(0x0004)
	unsigned long                                      bElectrified : 1;                                         // 0x2F88(0x0004)
	unsigned long                                      bHeatShielding : 1;                                       // 0x2F88(0x0004)
	unsigned long                                      bParrying : 1;                                            // 0x2F88(0x0004)
	unsigned long                                      bLimping : 1;                                             // 0x2F88(0x0004)
	unsigned long                                      bHobbling : 1;                                            // 0x2F88(0x0004)
	unsigned long                                      bCamcorderDesired : 1;                                    // 0x2F88(0x0004)
	unsigned long                                      bLastCinematicModeDisabledCamcorder : 1;                  // 0x2F88(0x0004)
	unsigned long                                      bBothHandsNeeded : 1;                                     // 0x2F88(0x0004)
	unsigned long                                      bPlayingNVGlitchSound : 1;                                // 0x2F88(0x0004)
	unsigned long                                      bRainEffectDesired : 1;                                   // 0x2F88(0x0004)
	unsigned long                                      bCameraCracked : 1;                                       // 0x2F88(0x0004)
	unsigned long                                      bOverrideDarkLight : 1;                                   // 0x2F88(0x0004)
	unsigned long                                      bCameraEffectActive : 1;                                  // 0x2F88(0x0004)
	unsigned long                                      bBlockConstrainedMovement : 1;                            // 0x2F88(0x0004)
	unsigned long                                      bKillConstrainedMovement : 1;                             // 0x2F88(0x0004)
	unsigned long                                      bWantLookBack : 1;                                        // 0x2F88(0x0004)
	unsigned long                                      bLeftAnim : 1;                                            // 0x2F88(0x0004)
	unsigned long                                      bBackAnim : 1;                                            // 0x2F88(0x0004)
	unsigned long                                      bExitLadderLeftHand : 1;                                  // 0x2F88(0x0004)
	unsigned long                                      bLookingBackLeftSide : 1;                                 // 0x2F88(0x0004)
	unsigned long                                      bRunningTraversalMove : 1;                                // 0x2F8C(0x0004)
	unsigned long                                      bApplyLandingPenalty : 1;                                 // 0x2F8C(0x0004)
	unsigned long                                      bJumping : 1;                                             // 0x2F8C(0x0004)
	unsigned long                                      bPushingFromBackEdge : 1;                                 // 0x2F8C(0x0004)
	unsigned long                                      bEnterLedgeWalkAfterStruggle : 1;                         // 0x2F8C(0x0004)
	unsigned long                                      bStartingSpecialMove : 1;                                 // 0x2F8C(0x0004)
	unsigned long                                      bJumpFromLedgeWalkWithVelocity : 1;                       // 0x2F8C(0x0004)
	unsigned long                                      bPickupCrouched : 1;                                      // 0x2F8C(0x0004)
	unsigned long                                      bDoorStartingRatioReached : 1;                            // 0x2F8C(0x0004)
	unsigned long                                      bQuietDoorInteraction : 1;                                // 0x2F8C(0x0004)
	unsigned long                                      MovingNoiseActive : 1;                                    // 0x2F8C(0x0004)
	unsigned long                                      bWasUnder : 1;                                            // 0x2F8C(0x0004)
	float                                              MeshZOffset;                                              // 0x2F90(0x0004)
	float                                              MeshXOffset;                                              // 0x2F94(0x0004)
	float                                              LastFrameMeshZOffset;                                     // 0x2F98(0x0004)
	struct FHandIKData                                 LeftHandIKData;                                           // 0x2F9C(0x0024)
	struct FCornerPeekData                             CornerPeek;                                               // 0x2FC0(0x0070)
	float                                              LastValidCornerPeekTime;                                  // 0x3030(0x0004)
	class AOLCornerMarker*                             LastValidCornerMarker;                                    // 0x3034(0x0008)
	TEnumAsByte<ECornerPeekPosition>                   LastValidCornerPeekPosition;                              // 0x303C(0x0001)
	TEnumAsByte<ECamcorderMode>                        CamcorderMode;                                            // 0x303D(0x0001)
	TEnumAsByte<ECamcorderState>                       CamcorderState;                                           // 0x303E(0x0001)
	TEnumAsByte<ELedgeTransitionType>                  ActiveLedgeTransitionType;                                // 0x303F(0x0001)
	TEnumAsByte<ELedgeClimbType>                       LedgeClimbType;                                           // 0x3040(0x0001)
	TEnumAsByte<ESqueezeTransitionType>                SqueezeTransitionType;                                    // 0x3041(0x0001)
	TEnumAsByte<EDoorOpeningType>                      DoorOpeningType;                                          // 0x3042(0x0001)
	TEnumAsByte<EDoorPartialOpenType>                  DoorPartialOpenType;                                      // 0x3043(0x0001)
	TEnumAsByte<EDoorClosingType>                      DoorClosingType;                                          // 0x3044(0x0001)
	TEnumAsByte<EEnemyType>                            EnemyType;                                                // 0x3045(0x0001)
	TEnumAsByte<EWeaponType>                           EnemyWeapon;                                              // 0x3046(0x0001)
	TEnumAsByte<EHeroBodySetup>                        BodySetup;                                                // 0x3047(0x0001)
	unsigned char                                      UnknownData00[0x8];                                       // 0x3048(0x0008) MISSED OFFSET
	struct FAttachmentData                             ActiveAttachment;                                         // 0x3050(0x0060) (Component)
	float                                              CurrentLean;                                              // 0x30B0(0x0004)
	float                                              LastLeanSndTime;                                          // 0x30B4(0x0004)
	float                                              LastFootstepTime;                                         // 0x30B8(0x0004)
	float                                              LargeSlopeStartedTime;                                    // 0x30BC(0x0004)
	int                                                RemainingBloodyFootsteps;                                 // 0x30C0(0x0004)
	class UOLHeroCamera*                               Camera;                                                   // 0x30C4(0x0008)
	struct FName                                       LeftHandBoneName;                                         // 0x30CC(0x0008)
	struct FName                                       LeftHandAuxBoneName;                                      // 0x30D4(0x0008)
	struct FName                                       RightHandAuxBoneName;                                     // 0x30DC(0x0008)
	struct FVector                                     EyeLocation;                                              // 0x30E4(0x000C)
	struct FRotator                                    EyeRotation;                                              // 0x30F0(0x000C)
	float                                              CurrentFOV;                                               // 0x30FC(0x0004)
	struct FMatrix                                     CameraCompSpace;                                          // 0x3100(0x0040)
	struct FCameraParameters                           CamParams;                                                // 0x3140(0x0018)
	float                                              LastDamageTime;                                           // 0x3158(0x0004)
	class UClass*                                      LastDamageType;                                           // 0x315C(0x0008)
	float                                              LastScriptedDamageEffectTime;                             // 0x3164(0x0004)
	float                                              PreciseHealth;                                            // 0x3168(0x0004)
	float                                              ElectricEffectStartTime;                                  // 0x316C(0x0004)
	float                                              NextElectricHurtSoundTime;                                // 0x3170(0x0004)
	float                                              ElectricGlitchStartTime;                                  // 0x3174(0x0004)
	float                                              ElectricGlitchMaxIntensity;                               // 0x3178(0x0004)
	float                                              ElectricGlitchDuration;                                   // 0x317C(0x0004)
	float                                              ElectricGlitchFrequency;                                  // 0x3180(0x0004)
	float                                              TimeOfDeath;                                              // 0x3184(0x0004)
	float                                              HeatDistance;                                             // 0x3188(0x0004)
	float                                              LastHeatDamageTime;                                       // 0x318C(0x0004)
	float                                              LastElectricDamageTime;                                   // 0x3190(0x0004)
	float                                              CurrentHeatBlur;                                          // 0x3194(0x0004)
	float                                              HobblingIntensity;                                        // 0x3198(0x0004)
	float                                              TargetHobblingIntensity;                                  // 0x319C(0x0004)
	float                                              CamcorderDisabledEndTime;                                 // 0x31A0(0x0004)
	float                                              LastCamcorderSwitchTime;                                  // 0x31A4(0x0004)
	float                                              CurrentBatterySetEnergy;                                  // 0x31A8(0x0004)
	float                                              CurrentCamcorderZoomFactor;                               // 0x31AC(0x0004)
	float                                              TargetCamcorderZoomFactor;                                // 0x31B0(0x0004)
	float                                              NVLightInterpFactor;                                      // 0x31B4(0x0004)
	float                                              LastRainEffectActiveTime;                                 // 0x31B8(0x0004)
	float                                              CurrentDarkLightRadius;                                   // 0x31BC(0x0004)
	float                                              CurrentDarkLightBrightness;                               // 0x31C0(0x0004)
	float                                              DarkLightOverrideBrightness;                              // 0x31C4(0x0004)
	float                                              DarkLightOverrideRadius;                                  // 0x31C8(0x0004)
	float                                              CameraEffectEndTime;                                      // 0x31CC(0x0004)
	float                                              CameraEffectPlaneDist;                                    // 0x31D0(0x0004)
	float                                              OverriddenMinCamcorderFOV;                                // 0x31D4(0x0004)
	struct FNVGlitchData                               NVGlitch;                                                 // 0x31D8(0x001C)
	struct FVector                                     DesiredMoveDirection;                                     // 0x31F4(0x000C)
	struct FVector                                     ExternalImpulse;                                          // 0x3200(0x000C)
	float                                              LedgeHangIdleStartTime;                                   // 0x320C(0x0004)
	float                                              WalkSpeed;                                                // 0x3210(0x0004)
	float                                              RunSpeed;                                                 // 0x3214(0x0004)
	float                                              CurrentRunSpeed;                                          // 0x3218(0x0004)
	float                                              InputMovementScaling;                                     // 0x321C(0x0004)
	struct FLocomotionModeParameters                   LocomotionModeParams[0x10];                               // 0x3220(0x0040)
	class UOLSeqAct_HeroControl*                       HeroControl;                                              // 0x3620(0x0008)
	class AOLSqueezeVolume*                            ActiveSqueeze;                                            // 0x3628(0x0008)
	class AOLLedgeMarker*                              ActiveLedge;                                              // 0x3630(0x0008)
	class AOLDoor*                                     ActiveDoor;                                               // 0x3638(0x0008)
	class AOLLadderMarker*                             ActiveLadder;                                             // 0x3640(0x0008)
	class AOLPickableObject*                           ActivePickup;                                             // 0x3648(0x0008)
	class AOLHidingSpot*                               ActiveLocker;                                             // 0x3650(0x0008)
	class AOLBed*                                      ActiveBed;                                                // 0x3658(0x0008)
	class AOLCSA*                                      ActiveCSA;                                                // 0x3660(0x0008)
	class AOLPushableObject*                           ActivePushable;                                           // 0x3668(0x0008)
	float                                              SpecialMoveBlendAlpha;                                    // 0x3670(0x0004)
	float                                              SpecialMoveTargetYaw;                                     // 0x3674(0x0004)
	float                                              EnterBedZ;                                                // 0x3678(0x0004)
	float                                              LastCompletedDoorInteractionTime;                         // 0x367C(0x0004)
	float                                              LastActiveLedgeTimestamp;                                 // 0x3680(0x0004)
	float                                              LastActiveLedgeZ;                                         // 0x3684(0x0004)
	float                                              LastActiveLadderTimestamp;                                // 0x3688(0x0004)
	float                                              LastSpecialMoveFinishedTime;                              // 0x368C(0x0004)
	float                                              LastClimbUpObstacleFinishedTime;                          // 0x3690(0x0004)
	float                                              RunStartedTime;                                           // 0x3694(0x0004)
	float                                              LastLandingTimestamp;                                     // 0x3698(0x0004)
	float                                              SpecialMoveStalledTimestamp;                              // 0x369C(0x0004)
	float                                              FallingStartedTime;                                       // 0x36A0(0x0004)
	float                                              LastEnterLookBackTime;                                    // 0x36A4(0x0004)
	float                                              DoorInteractionStartingRatio;                             // 0x36A8(0x0004)
	float                                              DoorSlowClosingAnimStartTime;                             // 0x36AC(0x0004)
	float                                              MovingNoiseTimer;                                         // 0x36B0(0x0004)
	TArray<struct FAIPositionPoint>                    AIPositionPoints;                                         // 0x36B4(0x0010) (NeedCtorLink)
	TArray<struct FAIPositionPawnInfo>                 AIPositionPawns;                                          // 0x36C4(0x0010) (NeedCtorLink)
	int                                                LastAIPositionChecked;                                    // 0x36D4(0x0004)
	float                                              NumAIPositions;                                           // 0x36D8(0x0004) (Const)
	float                                              AIPositionDistance;                                       // 0x36DC(0x0004) (Const)
	float                                              AIPositionLayerBuffer;                                    // 0x36E0(0x0004) (Const)
	int                                                NumAIPositionsPerSidePerPawn;                             // 0x36E4(0x0004) (Const)
	int                                                NumAIPositionsToCheckPerFrame;                            // 0x36E8(0x0004) (Const)
	struct FVector                                     AvgVelocity;                                              // 0x36EC(0x000C)
	TArray<struct FVector2D>                           AvgVelPoints;                                             // 0x36F8(0x0010) (NeedCtorLink)
	float                                              AvgVelocityTimer;                                         // 0x3708(0x0004)
	float                                              NumAvgVelPoints;                                          // 0x370C(0x0004) (Const)
	float                                              AvgVelPointLength;                                        // 0x3710(0x0004) (Const)
	struct FName                                       FirstFingerlessCheckpoint;                                // 0x3714(0x0008) (Config)
	struct FName                                       ShatteredCameraGlassCheckpoint;                           // 0x371C(0x0008) (Config)
	struct FName                                       ITUniformCheckpoint;                                      // 0x3724(0x0008) (Config)
	struct FName                                       PrisonerUniformCheckpoint;                                // 0x372C(0x0008) (Config)
	float                                              NormalWalkSpeed;                                          // 0x3734(0x0004) (Config)
	float                                              NormalRunSpeed;                                           // 0x3738(0x0004) (Config)
	float                                              CrouchedSpeed;                                            // 0x373C(0x0004) (Config)
	float                                              ElectrifiedSpeed;                                         // 0x3740(0x0004) (Config)
	float                                              WaterWalkSpeed;                                           // 0x3744(0x0004) (Config)
	float                                              WaterRunSpeed;                                            // 0x3748(0x0004) (Config)
	float                                              LimpingWalkSpeed;                                         // 0x374C(0x0004) (Config)
	float                                              HobblingWalkSpeed;                                        // 0x3750(0x0004) (Config)
	float                                              HobblingRunSpeed;                                         // 0x3754(0x0004) (Config)
	float                                              SpeedPenaltyBackwards;                                    // 0x3758(0x0004) (Config)
	float                                              SpeedPenaltyStrafe;                                       // 0x375C(0x0004) (Config)
	float                                              ForwardSpeedForJumpWalking;                               // 0x3760(0x0004) (Config)
	float                                              ForwardSpeedForJumpRunning;                               // 0x3764(0x0004) (Config)
	float                                              JumpClearanceWalking;                                     // 0x3768(0x0004) (Config)
	float                                              JumpClearanceRunning;                                     // 0x376C(0x0004) (Config)
	float                                              LandingPenaltyDuration;                                   // 0x3770(0x0004) (Config)
	float                                              LandingSpeedModifier;                                     // 0x3774(0x0004) (Config)
	float                                              ElectrifiedJumpDelay;                                     // 0x3778(0x0004) (Config)
	float                                              ExternalImpulseDecelCoeff;                                // 0x377C(0x0004) (Config)
	float                                              ExternalImpulseMinVel;                                    // 0x3780(0x0004) (Config)
	float                                              ExternalImpulseMaxVel;                                    // 0x3784(0x0004) (Config)
	float                                              ExternalImpulseMaxVelCrouched;                            // 0x3788(0x0004) (Config)
	float                                              FallSpeedForDamage;                                       // 0x378C(0x0004) (Config)
	float                                              FallSpeedForDeath;                                        // 0x3790(0x0004) (Config)
	float                                              FallDamageExponent;                                       // 0x3794(0x0004) (Config)
	float                                              DefaultFOV;                                               // 0x3798(0x0004) (Config)
	float                                              RunningFOV;                                               // 0x379C(0x0004) (Config)
	float                                              FOVApproachCoeffOpening;                                  // 0x37A0(0x0004) (Config)
	float                                              FOVApproachCoeffClosing;                                  // 0x37A4(0x0004) (Config)
	float                                              FOVApproachCoeffRun;                                      // 0x37A8(0x0004) (Config)
	float                                              FOVApproachCoeffWalk;                                     // 0x37AC(0x0004) (Config)
	float                                              BatteryDuration;                                          // 0x37B0(0x0004)
	float                                              NrmBatteryDuration;                                       // 0x37B4(0x0004) (Config)
	float                                              HardBatteryDuration;                                      // 0x37B8(0x0004) (Config)
	float                                              CamcorderMinFOV;                                          // 0x37BC(0x0004) (Config)
	float                                              CamcorderMaxFOV;                                          // 0x37C0(0x0004) (Config)
	float                                              CamcorderNVMaxFOV;                                        // 0x37C4(0x0004) (Config)
	float                                              NVLightZoomedInInnerAngle;                                // 0x37C8(0x0004) (Config)
	float                                              NVLightZoomedInOuterAngle;                                // 0x37CC(0x0004) (Config)
	float                                              NVLightZoomedInRadius;                                    // 0x37D0(0x0004) (Config)
	float                                              NVLightZoomedInBrightness;                                // 0x37D4(0x0004) (Config)
	float                                              DarkLightBrightnessDefault;                               // 0x37D8(0x0004) (Config)
	float                                              DarkLightRadiusDefault;                                   // 0x37DC(0x0004) (Config)
	float                                              DarkLightBrightnessNoCamcorder;                           // 0x37E0(0x0004) (Config)
	float                                              DarkLightRadiusNoCamcorder;                               // 0x37E4(0x0004) (Config)
	float                                              DarkLightBrightnessBothHandsNeeded;                       // 0x37E8(0x0004) (Config)
	float                                              DarkLightRadiusBothHandsNeeded;                           // 0x37EC(0x0004) (Config)
	float                                              DarkLightBrightnessAttacked;                              // 0x37F0(0x0004) (Config)
	float                                              DarkLightRadiusAttacked;                                  // 0x37F4(0x0004) (Config)
	float                                              DarkLightBrightnessParrying;                              // 0x37F8(0x0004) (Config)
	float                                              DarkLightRadiusParrying;                                  // 0x37FC(0x0004) (Config)
	float                                              NVGlitchTimeThreshold;                                    // 0x3800(0x0004) (Config)
	float                                              NVGlitchMaxDelayStart;                                    // 0x3804(0x0004) (Config)
	float                                              NVGlitchMaxDelayEnd;                                      // 0x3808(0x0004) (Config)
	float                                              NVGlitchMinDuration;                                      // 0x380C(0x0004) (Config)
	float                                              NVGlitchMaxDuration;                                      // 0x3810(0x0004) (Config)
	float                                              NVGlitchMaxLevel;                                         // 0x3814(0x0004) (Config)
	float                                              HealthRegenRate;                                          // 0x3818(0x0004) (Config)
	float                                              HealthRegenDelay;                                         // 0x381C(0x0004) (Config)
	float                                              HobbleApproachRate;                                       // 0x3820(0x0004) (Config)
	float                                              ElectricEffectPeriod;                                     // 0x3824(0x0004) (Config)
	float                                              ElectricEffectBase;                                       // 0x3828(0x0004) (Config)
	int                                                ElectricEffectMode;                                       // 0x382C(0x0004) (Config)
	float                                              ElectricHurtSoundInterval;                                // 0x3830(0x0004) (Config)
	float                                              DeathScreenDuration;                                      // 0x3834(0x0004) (Config)
	int                                                NumBloodyFootsteps;                                       // 0x3838(0x0004) (Config)
	float                                              HeatDamageDist;                                           // 0x383C(0x0004) (Config)
	float                                              HeatDamageInterval;                                       // 0x3840(0x0004) (Config)
	float                                              HeatDamagePerSec;                                         // 0x3844(0x0004) (Config)
	float                                              HeatMaxBlurDist;                                          // 0x3848(0x0004) (Config)
	float                                              HeatMinBlurDist;                                          // 0x384C(0x0004) (Config)
	float                                              HeatMinBlurAmount;                                        // 0x3850(0x0004) (Config)
	float                                              HeatBlurApproachCoeffIn;                                  // 0x3854(0x0004) (Config)
	float                                              HeatBlurApproachCoeffOut;                                 // 0x3858(0x0004) (Config)
	float                                              MinCosAngleForPickup;                                     // 0x385C(0x0004) (Config)
	float                                              PickupInteractRadius;                                     // 0x3860(0x0004) (Config)
	float                                              JumpForwardFromLedgeWalkXYSpeed;                          // 0x3864(0x0004) (Config)
	float                                              JumpForwardFromLedgeWalkZSpeed;                           // 0x3868(0x0004) (Config)
	float                                              DropFromLedgeWalkXYSpeed;                                 // 0x386C(0x0004) (Config)
	float                                              DropFromLedgeWalkZSpeed;                                  // 0x3870(0x0004) (Config)
	float                                              LookBackCamRotOffset;                                     // 0x3874(0x0004) (Config)
	float                                              LookBackCamBackOffset;                                    // 0x3878(0x0004) (Config)
	float                                              LookBackCamSideOffset;                                    // 0x387C(0x0004) (Config)
	float                                              LeanSpeedThreshold;                                       // 0x3880(0x0004) (Config)
	float                                              WalkingLoudness;                                          // 0x3884(0x0004) (Config)
	float                                              CrouchLoudness;                                           // 0x3888(0x0004) (Config)
	float                                              RunningLoudness;                                          // 0x388C(0x0004) (Config)
	float                                              WalkingWaterLoudness;                                     // 0x3890(0x0004) (Config)
	float                                              CrouchWaterLoudness;                                      // 0x3894(0x0004) (Config)
	float                                              HobblingWalkLoudness;                                     // 0x3898(0x0004) (Config)
	float                                              HobblingRunLoudness;                                      // 0x389C(0x0004) (Config)
	float                                              LandingBigLoudness;                                       // 0x38A0(0x0004) (Config)
	float                                              LandingSmallLoudness;                                     // 0x38A4(0x0004) (Config)
	float                                              LandingBigWaterLoudness;                                  // 0x38A8(0x0004) (Config)
	float                                              LandingSmallWaterLoudness;                                // 0x38AC(0x0004) (Config)
	float                                              DoorOpenInstantLoudness;                                  // 0x38B0(0x0004) (Config)
	float                                              DoorOpenPartialLoudness;                                  // 0x38B4(0x0004) (Config)
	float                                              DoorCloseFastLoudness;                                    // 0x38B8(0x0004) (Config)
	float                                              DoorEnterLockerLoudness;                                  // 0x38BC(0x0004) (Config)
	float                                              DoorExitLockerLoudness;                                   // 0x38C0(0x0004) (Config)
	float                                              DoorRunThroughLoudness;                                   // 0x38C4(0x0004) (Config)
	float                                              MovingNoiseStartTime;                                     // 0x38C8(0x0004) (Config)
	float                                              MovingNoiseClearTime;                                     // 0x38CC(0x0004) (Config)
	struct FName                                       CrouchNoise;                                              // 0x38D0(0x0008) (Const)
	struct FName                                       WalkingNoise;                                             // 0x38D8(0x0008) (Const)
	struct FName                                       RunningNoise;                                             // 0x38E0(0x0008) (Const)
	struct FName                                       DoorMajorNoise;                                           // 0x38E8(0x0008) (Const)
	float                                              MovingNoiseRate;                                          // 0x38F0(0x0004) (Const)
	struct FName                                       WaterMaterial;                                            // 0x38F4(0x0008) (Const)
	struct FName                                       BloodMaterial;                                            // 0x38FC(0x0008) (Const)
	class UForceFeedbackWaveform*                      BigLandingFFWaveform;                                     // 0x3904(0x0008) (Const)
	class UForceFeedbackWaveform*                      SmallLandingFFWaveform;                                   // 0x390C(0x0008) (Const)
	class UForceFeedbackWaveform*                      PickupFFWaveform;                                         // 0x3914(0x0008) (Const)
	class UForceFeedbackWaveform*                      DoorInteractionFFWaveform;                                // 0x391C(0x0008) (Const)
	class UForceFeedbackWaveform*                      RunThroughDoorFFWaveform;                                 // 0x3924(0x0008) (Const)
	class UAkEvent*                                    FootStepSound_Run;                                        // 0x392C(0x0008) (Const)
	class UAkEvent*                                    SndCamStart;                                              // 0x3934(0x0008) (Const)
	class UAkEvent*                                    SndCamStop;                                               // 0x393C(0x0008) (Const)
	class UAkEvent*                                    SndCamOnNVOn;                                             // 0x3944(0x0008) (Const)
	class UAkEvent*                                    SndCamOnNVOff;                                            // 0x394C(0x0008) (Const)
	class UAkEvent*                                    SndCamOffNVOn;                                            // 0x3954(0x0008) (Const)
	class UAkEvent*                                    SndCamOffNVOff;                                           // 0x395C(0x0008) (Const)
	class UAkEvent*                                    SndReloadBatteries;                                       // 0x3964(0x0008) (Const)
	class UAkEvent*                                    SndPickupDocument;                                        // 0x396C(0x0008) (Const)
	class UAkEvent*                                    SndPickupBatteries;                                       // 0x3974(0x0008) (Const)
	class UAkEvent*                                    SndZoomIn;                                                // 0x397C(0x0008) (Const)
	class UAkEvent*                                    SndZoomOut;                                               // 0x3984(0x0008) (Const)
	class UAkEvent*                                    SndSoldierHit;                                            // 0x398C(0x0008) (Const)
	class UAkEvent*                                    SndDie;                                                   // 0x3994(0x0008) (Const)
	class UAkEvent*                                    SndHit;                                                   // 0x399C(0x0008) (Const)
	class UAkEvent*                                    SndHitElectrified;                                        // 0x39A4(0x0008) (Const)
	class UAkEvent*                                    SndStartPeek;                                             // 0x39AC(0x0008) (Const)
	class UAkEvent*                                    SndStopPeek;                                              // 0x39B4(0x0008) (Const)
	class UAkEvent*                                    SndStartDamage;                                           // 0x39BC(0x0008) (Const)
	class UAkEvent*                                    SndStopDamage;                                            // 0x39C4(0x0008) (Const)
	class UAkEvent*                                    SndElectricHitStart;                                      // 0x39CC(0x0008) (Const)
	class UAkEvent*                                    SndElectricHitStop;                                       // 0x39D4(0x0008) (Const)
	class UAkEvent*                                    SndStartRun;                                              // 0x39DC(0x0008) (Const)
	class UAkEvent*                                    SndStopRun;                                               // 0x39E4(0x0008) (Const)
	class UAkEvent*                                    SndStartLookBack;                                         // 0x39EC(0x0008) (Const)
	class UAkEvent*                                    SndStopLookBack;                                          // 0x39F4(0x0008) (Const)
	class UAkEvent*                                    SndSmallLanding;                                          // 0x39FC(0x0008) (Const)
	class UAkEvent*                                    SndBigLanding;                                            // 0x3A04(0x0008) (Const)
	class UAkEvent*                                    SndDieMusicEvent;                                         // 0x3A0C(0x0008) (Const)
	class UAkEvent*                                    SndNewObjective;                                          // 0x3A14(0x0008) (Const)
	class UAkEvent*                                    SndRecordingCompleted;                                    // 0x3A1C(0x0008) (Const)
	class UAkEvent*                                    SndLowBatteryStart;                                       // 0x3A24(0x0008) (Const)
	class UAkEvent*                                    SndLowBatteryStop;                                        // 0x3A2C(0x0008) (Const)
	struct FString                                     StateHitIntensityGroup;                                   // 0x3A34(0x0010) (Const, NeedCtorLink)
	struct FString                                     StateHitIntensityLow;                                     // 0x3A44(0x0010) (Const, NeedCtorLink)
	struct FString                                     StateHitIntensityMed;                                     // 0x3A54(0x0010) (Const, NeedCtorLink)
	struct FString                                     StateHitIntensityHigh;                                    // 0x3A64(0x0010) (Const, NeedCtorLink)
	struct FString                                     RTPCHealth;                                               // 0x3A74(0x0010) (Const, NeedCtorLink)
	struct FString                                     RTPCZoom;                                                 // 0x3A84(0x0010) (Const, NeedCtorLink)
	struct FString                                     RTPCBatteryIntensity;                                     // 0x3A94(0x0010) (Const, NeedCtorLink)
	struct FName                                       AnimNameJumpFromWalk;                                     // 0x3AA4(0x0008) (Const)
	struct FName                                       AnimNameJumpFromRun;                                      // 0x3AAC(0x0008) (Const)
	struct FName                                       AnimNameJumpOverFromWalk;                                 // 0x3AB4(0x0008) (Const)
	struct FName                                       AnimNameJumpOverFromRun;                                  // 0x3ABC(0x0008) (Const)
	struct FName                                       AnimNameJumpOverToGrabLedge;                              // 0x3AC4(0x0008) (Const)
	struct FName                                       AnimNameClimbUpFromWalk;                                  // 0x3ACC(0x0008) (Const)
	struct FName                                       AnimNameClimbUpFromRun;                                   // 0x3AD4(0x0008) (Const)
	struct FName                                       AnimNameClimbUpToCrouch;                                  // 0x3ADC(0x0008) (Const)
	struct FName                                       AnimNameClimbUpWall150;                                   // 0x3AE4(0x0008) (Const)
	struct FName                                       AnimNameClimbUpWall200;                                   // 0x3AEC(0x0008) (Const)
	struct FName                                       AnimNameClimbOverWall200;                                 // 0x3AF4(0x0008) (Const)
	struct FName                                       AnimNameCrouch;                                           // 0x3AFC(0x0008) (Const)
	struct FName                                       AnimNameUncrouch;                                         // 0x3B04(0x0008) (Const)
	struct FName                                       AnimNameLedgeHangLeftInside;                              // 0x3B0C(0x0008) (Const)
	struct FName                                       AnimNameLedgeHangRightInside;                             // 0x3B14(0x0008) (Const)
	struct FName                                       AnimNameLedgeHangLeftOutside;                             // 0x3B1C(0x0008) (Const)
	struct FName                                       AnimNameLedgeHangRightOutside;                            // 0x3B24(0x0008) (Const)
	struct FName                                       AnimNameClimbUpLedgeToCrouch;                             // 0x3B2C(0x0008) (Const)
	struct FName                                       AnimNameClimbUpLedgeToStand;                              // 0x3B34(0x0008) (Const)
	struct FName                                       AnimNameClimbOverLedgeToFalling;                          // 0x3B3C(0x0008) (Const)
	struct FName                                       AnimNameClimbOverLedgeToStand;                            // 0x3B44(0x0008) (Const)
	struct FName                                       AnimNameSlideOverFromRun;                                 // 0x3B4C(0x0008) (Const)
	struct FName                                       AnimNameGrabAndClimb;                                     // 0x3B54(0x0008) (Const)
	struct FName                                       AnimNameGrabLedgeFromAir;                                 // 0x3B5C(0x0008) (Const)
	struct FName                                       AnimNameGrabLedgeFromWalkHigh;                            // 0x3B64(0x0008) (Const)
	struct FName                                       AnimNameGrabLedgeFromWalkLow;                             // 0x3B6C(0x0008) (Const)
	struct FName                                       AnimNameLandingSmallStanding;                             // 0x3B74(0x0008) (Const)
	struct FName                                       AnimNameLandingSmallCrouched;                             // 0x3B7C(0x0008) (Const)
	struct FName                                       AnimNameBigLandingStanding;                               // 0x3B84(0x0008) (Const)
	struct FName                                       AnimNameBigLandingCrouched;                               // 0x3B8C(0x0008) (Const)
	struct FName                                       AnimNameEnterLedgeWalkInsideLeftPerp;                     // 0x3B94(0x0008) (Const)
	struct FName                                       AnimNameEnterLedgeWalkInsideLeftPrl;                      // 0x3B9C(0x0008) (Const)
	struct FName                                       AnimNameEnterLedgeWalkInsideRightPerp;                    // 0x3BA4(0x0008) (Const)
	struct FName                                       AnimNameEnterLedgeWalkInsideRightPrl;                     // 0x3BAC(0x0008) (Const)
	struct FName                                       AnimNameEnterLedgeWalkOutsideLeftPerp;                    // 0x3BB4(0x0008) (Const)
	struct FName                                       AnimNameEnterLedgeWalkOutsideLeftPrl;                     // 0x3BBC(0x0008) (Const)
	struct FName                                       AnimNameEnterLedgeWalkOutsideRightPerp;                   // 0x3BC4(0x0008) (Const)
	struct FName                                       AnimNameEnterLedgeWalkOutsideRightPrl;                    // 0x3BCC(0x0008) (Const)
	struct FName                                       AnimNameLedgeWalkTransitionLeftInside;                    // 0x3BD4(0x0008) (Const)
	struct FName                                       AnimNameLedgeWalkTransitionLeftOutside;                   // 0x3BDC(0x0008) (Const)
	struct FName                                       AnimNameLedgeWalkTransitionRightInside;                   // 0x3BE4(0x0008) (Const)
	struct FName                                       AnimNameLedgeWalkTransitionRightOutside;                  // 0x3BEC(0x0008) (Const)
	struct FName                                       AnimNameExitLedgeWalkRightInside;                         // 0x3BF4(0x0008) (Const)
	struct FName                                       AnimNameExitLedgeWalkLeftInside;                          // 0x3BFC(0x0008) (Const)
	struct FName                                       AnimNameExitLedgeWalkRightOutside;                        // 0x3C04(0x0008) (Const)
	struct FName                                       AnimNameExitLedgeWalkLeftOutside;                         // 0x3C0C(0x0008) (Const)
	struct FName                                       AnimNameJumpFromLedgeWalk;                                // 0x3C14(0x0008) (Const)
	struct FName                                       AnimNameStepOffFromLedgeWalk;                             // 0x3C1C(0x0008) (Const)
	struct FName                                       AnimNameEnterSqueezeLeft;                                 // 0x3C24(0x0008) (Const)
	struct FName                                       AnimNameEnterSqueezeRight;                                // 0x3C2C(0x0008) (Const)
	struct FName                                       AnimNameExitSqueezeLeft;                                  // 0x3C34(0x0008) (Const)
	struct FName                                       AnimNameExitSqueezeRight;                                 // 0x3C3C(0x0008) (Const)
	struct FName                                       AnimNameAutomaticSqueeze;                                 // 0x3C44(0x0008) (Const)
	struct FName                                       AnimNameEnterLadderGroundStraight;                        // 0x3C4C(0x0008) (Const)
	struct FName                                       AnimNameEnterLadderGround45Left;                          // 0x3C54(0x0008) (Const)
	struct FName                                       AnimNameEnterLadderGround45Right;                         // 0x3C5C(0x0008) (Const)
	struct FName                                       AnimNameExitLadderOnTopLH;                                // 0x3C64(0x0008) (Const)
	struct FName                                       AnimNameExitLadderOnTopRH;                                // 0x3C6C(0x0008) (Const)
	struct FName                                       AnimNamePickupObject_h40v70;                              // 0x3C74(0x0008) (Const)
	struct FName                                       AnimNamePickupObject_h40v140;                             // 0x3C7C(0x0008) (Const)
	struct FName                                       AnimNamePickupObject_h85v70;                              // 0x3C84(0x0008) (Const)
	struct FName                                       AnimNamePickupObject_h85v140;                             // 0x3C8C(0x0008) (Const)
	struct FName                                       AnimNamePickupObject_h62v105;                             // 0x3C94(0x0008) (Const)
	struct FName                                       AnimNamePickupObjectCrouched_h30vm10;                     // 0x3C9C(0x0008) (Const)
	struct FName                                       AnimNamePickupObjectCrouched_h60vm10;                     // 0x3CA4(0x0008) (Const)
	struct FName                                       AnimNamePickupObjectCrouched_h45v35;                      // 0x3CAC(0x0008) (Const)
	struct FName                                       AnimNamePickupObjectCrouched_h30v60;                      // 0x3CB4(0x0008) (Const)
	struct FName                                       AnimNamePickupObjectCrouched_h60v60;                      // 0x3CBC(0x0008) (Const)
	struct FName                                       AnimNamePickupDoc_h40v70;                                 // 0x3CC4(0x0008) (Const)
	struct FName                                       AnimNamePickupDoc_h40v140;                                // 0x3CCC(0x0008) (Const)
	struct FName                                       AnimNamePickupDoc_h85v70;                                 // 0x3CD4(0x0008) (Const)
	struct FName                                       AnimNamePickupDoc_h85v140;                                // 0x3CDC(0x0008) (Const)
	struct FName                                       AnimNamePickupDoc_h62v105;                                // 0x3CE4(0x0008) (Const)
	struct FName                                       AnimNamePickupDocCrouched_h30vm10;                        // 0x3CEC(0x0008) (Const)
	struct FName                                       AnimNamePickupDocCrouched_h60vm10;                        // 0x3CF4(0x0008) (Const)
	struct FName                                       AnimNamePickupDocCrouched_h45v35;                         // 0x3CFC(0x0008) (Const)
	struct FName                                       AnimNamePickupDocCrouched_h30v60;                         // 0x3D04(0x0008) (Const)
	struct FName                                       AnimNamePickupDocCrouched_h60v60;                         // 0x3D0C(0x0008) (Const)
	struct FName                                       AnimNamePutdownObject;                                    // 0x3D14(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorLeftFront;                               // 0x3D1C(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorLeftSide;                                // 0x3D24(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorLeftBack;                                // 0x3D2C(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorLeftInside;                              // 0x3D34(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorRightFront;                              // 0x3D3C(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorRightSide;                               // 0x3D44(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorRightBack;                               // 0x3D4C(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorRightInside;                             // 0x3D54(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorLeftFrontSlow;                           // 0x3D5C(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorLeftSideSlow;                            // 0x3D64(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorLeftBackSlow;                            // 0x3D6C(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorLeftInsideSlow;                          // 0x3D74(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorRightFrontSlow;                          // 0x3D7C(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorRightSideSlow;                           // 0x3D84(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorRightBackSlow;                           // 0x3D8C(0x0008) (Const)
	struct FName                                       AnimNameCloseDoorRightInsideSlow;                         // 0x3D94(0x0008) (Const)
	struct FName                                       AnimNameDoorOpenPullLeft;                                 // 0x3D9C(0x0008) (Const)
	struct FName                                       AnimNameDoorOpenPullRight;                                // 0x3DA4(0x0008) (Const)
	struct FName                                       AnimNameDoorOpenPushLeft;                                 // 0x3DAC(0x0008) (Const)
	struct FName                                       AnimNameDoorOpenPushRight;                                // 0x3DB4(0x0008) (Const)
	struct FName                                       AnimNameDoorRunThroughLeft;                               // 0x3DBC(0x0008) (Const)
	struct FName                                       AnimNameDoorRunThroughRight;                              // 0x3DC4(0x0008) (Const)
	struct FName                                       AnimNameDoorOpenInsidePushLeft;                           // 0x3DCC(0x0008) (Const)
	struct FName                                       AnimNameDoorOpenInsidePushRight;                          // 0x3DD4(0x0008) (Const)
	struct FName                                       AnimNameDoorAccessLeft;                                   // 0x3DDC(0x0008) (Const)
	struct FName                                       AnimNameDoorAccessRight;                                  // 0x3DE4(0x0008) (Const)
	struct FName                                       AnimNameDoorAccessLeftPull15;                             // 0x3DEC(0x0008) (Const)
	struct FName                                       AnimNameDoorAccessRightPull15;                            // 0x3DF4(0x0008) (Const)
	struct FName                                       AnimNameDoorAccessLeftPush15;                             // 0x3DFC(0x0008) (Const)
	struct FName                                       AnimNameDoorAccessRightPush15;                            // 0x3E04(0x0008) (Const)
	struct FName                                       AnimNameDoorLockedLeft;                                   // 0x3E0C(0x0008) (Const)
	struct FName                                       AnimNameDoorLockedRight;                                  // 0x3E14(0x0008) (Const)
	struct FName                                       AnimNameLockerOpenStraight;                               // 0x3E1C(0x0008) (Const)
	struct FName                                       AnimNameLockerOpen45Left;                                 // 0x3E24(0x0008) (Const)
	struct FName                                       AnimNameLockerOpen45Right;                                // 0x3E2C(0x0008) (Const)
	struct FName                                       AnimNameHideInLocker;                                     // 0x3E34(0x0008) (Const)
	struct FName                                       AnimNameGrabFromSqueezeLeftFacing;                        // 0x3E3C(0x0008) (Const)
	struct FName                                       AnimNameGrabFromSqueezeLeftBack;                          // 0x3E44(0x0008) (Const)
	struct FName                                       AnimNameGrabFromSqueezeRightFacing;                       // 0x3E4C(0x0008) (Const)
	struct FName                                       AnimNameGrabFromSqueezeRightBack;                         // 0x3E54(0x0008) (Const)
	struct FName                                       AnimNameGrabFromSqueezePhase1Right0;                      // 0x3E5C(0x0008) (Const)
	struct FName                                       AnimNameGrabFromSqueezePhase1Right90;                     // 0x3E64(0x0008) (Const)
	struct FName                                       AnimNameGrabFromSqueezePhase1Right180;                    // 0x3E6C(0x0008) (Const)
	struct FName                                       AnimNameGrabFromSqueezePhase1Left0;                       // 0x3E74(0x0008) (Const)
	struct FName                                       AnimNameGrabFromSqueezePhase1Left90;                      // 0x3E7C(0x0008) (Const)
	struct FName                                       AnimNameGrabFromSqueezePhase1Left180;                     // 0x3E84(0x0008) (Const)
	struct FName                                       AnimNameEnterBedLeft;                                     // 0x3E8C(0x0008) (Const)
	struct FName                                       AnimNameEnterBedRight;                                    // 0x3E94(0x0008) (Const)
	struct FName                                       AnimNameEnterBedLeftFromStand;                            // 0x3E9C(0x0008) (Const)
	struct FName                                       AnimNameEnterBedRightFromStand;                           // 0x3EA4(0x0008) (Const)
	struct FName                                       AnimNameExitBedLeft;                                      // 0x3EAC(0x0008) (Const)
	struct FName                                       AnimNameExitBedRight;                                     // 0x3EB4(0x0008) (Const)
	struct FName                                       AnimNameExitBedLeftToCrouch;                              // 0x3EBC(0x0008) (Const)
	struct FName                                       AnimNameExitBedRightToCrouch;                             // 0x3EC4(0x0008) (Const)
	struct FName                                       AnimNameEnterPushObjectLeft;                              // 0x3ECC(0x0008) (Const)
	struct FName                                       AnimNameEnterPushObjectRight;                             // 0x3ED4(0x0008) (Const)
	struct FName                                       AnimNameExitPushObjectLeft;                               // 0x3EDC(0x0008) (Const)
	struct FName                                       AnimNameExitPushObjectRight;                              // 0x3EE4(0x0008) (Const)
	struct FName                                       AnimNameRaiseCamcorder;                                   // 0x3EEC(0x0008) (Const)
	struct FName                                       AnimNameLowerCamcorder;                                   // 0x3EF4(0x0008) (Const)
	struct FName                                       AnimNameRaiseCamcorderBed;                                // 0x3EFC(0x0008) (Const)
	struct FName                                       AnimNameLowerCamcorderBed;                                // 0x3F04(0x0008) (Const)
	struct FName                                       AnimNameRaiseCamcorderCrouched;                           // 0x3F0C(0x0008) (Const)
	struct FName                                       AnimNameLowerCamcorderCrouched;                           // 0x3F14(0x0008) (Const)
	struct FName                                       AnimNameReloadBatteries;                                  // 0x3F1C(0x0008) (Const)
	struct FName                                       AnimNameReloadBatteriesInactive;                          // 0x3F24(0x0008) (Const)
	struct FName                                       AnimNameReloadBatteriesCrouched;                          // 0x3F2C(0x0008) (Const)
	struct FName                                       AnimNameReloadBatteriesCrouchedInactive;                  // 0x3F34(0x0008) (Const)
	struct FName                                       AnimNameReloadBatteriesBed;                               // 0x3F3C(0x0008) (Const)
	struct FName                                       AnimNameReloadBatteriesBedInactive;                       // 0x3F44(0x0008) (Const)
	struct FName                                       AnimNameReloadBatteriesSqueeze;                           // 0x3F4C(0x0008) (Const)
	struct FName                                       AnimNameReloadBatteriesSqueezeInactive;                   // 0x3F54(0x0008) (Const)
	struct FName                                       AnimNameGrabNormal;                                       // 0x3F5C(0x0008) (Const)
	struct FName                                       AnimNameGrabNormalLeft90;                                 // 0x3F64(0x0008) (Const)
	struct FName                                       AnimNameGrabNormalLeft180;                                // 0x3F6C(0x0008) (Const)
	struct FName                                       AnimNameGrabNormalRight90;                                // 0x3F74(0x0008) (Const)
	struct FName                                       AnimNameGrabNormalRight180;                               // 0x3F7C(0x0008) (Const)
	struct FName                                       AnimNameGrabCrouched;                                     // 0x3F84(0x0008) (Const)
	struct FName                                       AnimNameGrabCrouchedLeft90;                               // 0x3F8C(0x0008) (Const)
	struct FName                                       AnimNameGrabCrouchedLeft180;                              // 0x3F94(0x0008) (Const)
	struct FName                                       AnimNameGrabCrouchedRight90;                              // 0x3F9C(0x0008) (Const)
	struct FName                                       AnimNameGrabCrouchedRight180;                             // 0x3FA4(0x0008) (Const)
	struct FName                                       AnimNameGrabUnder;                                        // 0x3FAC(0x0008) (Const)
	struct FName                                       AnimNameGrabUnderCCW;                                     // 0x3FB4(0x0008) (Const)
	struct FName                                       AnimNameGrabUnderLeft90;                                  // 0x3FBC(0x0008) (Const)
	struct FName                                       AnimNameGrabUnderLeft180;                                 // 0x3FC4(0x0008) (Const)
	struct FName                                       AnimNameGrabUnderRight90;                                 // 0x3FCC(0x0008) (Const)
	struct FName                                       AnimNameGrabUnderRight180;                                // 0x3FD4(0x0008) (Const)
	struct FName                                       AnimNameGrabFromBedLeft;                                  // 0x3FDC(0x0008) (Const)
	struct FName                                       AnimNameGrabFromBedRight;                                 // 0x3FE4(0x0008) (Const)
	struct FName                                       AnimNameGrabFromLocker;                                   // 0x3FEC(0x0008) (Const)
	struct FName                                       AnimNameThrown;                                           // 0x3FF4(0x0008) (Const)
	struct FName                                       AnimNameThrownLeft90;                                     // 0x3FFC(0x0008) (Const)
	struct FName                                       AnimNameThrownLeft180;                                    // 0x4004(0x0008) (Const)
	struct FName                                       AnimNameThrownRight90;                                    // 0x400C(0x0008) (Const)
	struct FName                                       AnimNameThrownRight180;                                   // 0x4014(0x0008) (Const)
	struct FName                                       AnimNameHitReactionFwd;                                   // 0x401C(0x0008) (Const)
	struct FName                                       AnimNameHitReactionBwd;                                   // 0x4024(0x0008) (Const)
	struct FName                                       AnimNameHitReactionLeft;                                  // 0x402C(0x0008) (Const)
	struct FName                                       AnimNameHitReactionRight;                                 // 0x4034(0x0008) (Const)
	struct FName                                       AnimNameHitReactionCrouchedFwd;                           // 0x403C(0x0008) (Const)
	struct FName                                       AnimNameHitReactionCrouchedBwd;                           // 0x4044(0x0008) (Const)
	struct FName                                       AnimNameHitReactionCrouchedLeft;                          // 0x404C(0x0008) (Const)
	struct FName                                       AnimNameHitReactionCrouchedRight;                         // 0x4054(0x0008) (Const)
	struct FName                                       AnimNameWallContactLeftHard;                              // 0x405C(0x0008) (Const)
	struct FName                                       AnimNameWallContactLeftSoft;                              // 0x4064(0x0008) (Const)
	struct FName                                       AnimNameWallContactRightHard;                             // 0x406C(0x0008) (Const)
	struct FName                                       AnimNameWallContactRightSoft;                             // 0x4074(0x0008) (Const)
	struct FName                                       AnimNameEnterCornerPeekLeftHard;                          // 0x407C(0x0008) (Const)
	struct FName                                       AnimNameEnterCornerPeekLeftSoft;                          // 0x4084(0x0008) (Const)
	struct FName                                       AnimNameEnterCornerPeekRightHard;                         // 0x408C(0x0008) (Const)
	struct FName                                       AnimNameEnterCornerPeekRightSoft;                         // 0x4094(0x0008) (Const)
	struct FName                                       AnimNameExitCornerPeekLeftHard;                           // 0x409C(0x0008) (Const)
	struct FName                                       AnimNameExitCornerPeekLeftSoft;                           // 0x40A4(0x0008) (Const)
	struct FName                                       AnimNameExitCornerPeekRightHard;                          // 0x40AC(0x0008) (Const)
	struct FName                                       AnimNameExitCornerPeekRightSoft;                          // 0x40B4(0x0008) (Const)
	struct FName                                       AnimNameExitCornerPeekForwardLeftHard;                    // 0x40BC(0x0008) (Const)
	struct FName                                       AnimNameExitCornerPeekForwardLeftSoft;                    // 0x40C4(0x0008) (Const)
	struct FName                                       AnimNameExitCornerPeekForwardRightHard;                   // 0x40CC(0x0008) (Const)
	struct FName                                       AnimNameExitCornerPeekForwardRightSoft;                   // 0x40D4(0x0008) (Const)
	struct FName                                       AnimNameCornerTransitionFromLeft;                         // 0x40DC(0x0008) (Const)
	struct FName                                       AnimNameCornerTransitionFromRight;                        // 0x40E4(0x0008) (Const)
	struct FName                                       AnimNameGenericGrabFromBedLeft;                           // 0x40EC(0x0008) (Const)
	struct FName                                       AnimNameGenericGrabFromBedRight;                          // 0x40F4(0x0008) (Const)
	struct FName                                       AnimNameGenericGrabFromLocker;                            // 0x40FC(0x0008) (Const)
	struct FName                                       AnimNameGenericGrabUnder;                                 // 0x4104(0x0008) (Const)
	struct FName                                       AnimNameGenericGrabUnderLeft90;                           // 0x410C(0x0008) (Const)
	struct FName                                       AnimNameGenericGrabUnderLeft180;                          // 0x4114(0x0008) (Const)
	struct FName                                       AnimNameGenericGrabUnderRight90;                          // 0x411C(0x0008) (Const)
	struct FName                                       AnimNameGenericGrabUnderRight180;                         // 0x4124(0x0008) (Const)
	struct FName                                       AnimNamePushawayLeft;                                     // 0x412C(0x0008) (Const)
	struct FName                                       AnimNamePushawayRight;                                    // 0x4134(0x0008) (Const)
	struct FName                                       AnimNameGenericDeath;                                     // 0x413C(0x0008) (Const)
	struct FName                                       AnimNameFatalityBackstabBack;                             // 0x4144(0x0008) (Const)
	struct FName                                       AnimNameFatalityBackstabLeft;                             // 0x414C(0x0008) (Const)
	struct FName                                       AnimNameFatalityBackstabRight;                            // 0x4154(0x0008) (Const)
	struct FName                                       AnimNameFatalityChokeFront;                               // 0x415C(0x0008) (Const)
	struct FName                                       AnimNameFatalityChokeLeft;                                // 0x4164(0x0008) (Const)
	struct FName                                       AnimNameFatalityChokeRight;                               // 0x416C(0x0008) (Const)
	struct FName                                       AnimNameFatalityClubBack;                                 // 0x4174(0x0008) (Const)
	struct FName                                       AnimNameFatalityClubFront;                                // 0x417C(0x0008) (Const)
	struct FName                                       AnimNameFatalityClubLeft;                                 // 0x4184(0x0008) (Const)
	struct FName                                       AnimNameFatalityClubRight;                                // 0x418C(0x0008) (Const)
	struct FName                                       AnimNameFatalityStabChopFront;                            // 0x4194(0x0008) (Const)
	struct FName                                       AnimNameFatalityStabChopLeft;                             // 0x419C(0x0008) (Const)
	struct FName                                       AnimNameFatalityStabChopRight;                            // 0x41A4(0x0008) (Const)
	struct FName                                       AnimNameFatalityXplodeBack;                               // 0x41AC(0x0008) (Const)
	struct FName                                       AnimNameFatalityXplodeFront;                              // 0x41B4(0x0008) (Const)
	struct FName                                       AnimNameFatalityXplodeLeft;                               // 0x41BC(0x0008) (Const)
	struct FName                                       AnimNameFatalityXplodeRight;                              // 0x41C4(0x0008) (Const)
	struct FName                                       AnimNameFatalityLocker;                                   // 0x41CC(0x0008) (Const)
	struct FName                                       AnimNameFatalitySoldier;                                  // 0x41D4(0x0008) (Const)
	struct FName                                       AnimNameFatalityGroom;                                    // 0x41DC(0x0008) (Const)
	float                                              ObstacleMinZWalking;                                      // 0x41E4(0x0004) (Const)
	float                                              ObstacleMaxZWalking;                                      // 0x41E8(0x0004) (Const)
	float                                              ObstacleMinZFalling;                                      // 0x41EC(0x0004) (Const)
	float                                              ObstacleMaxZFalling;                                      // 0x41F0(0x0004) (Const)
	float                                              MinCosAngleToObstacle;                                    // 0x41F4(0x0004) (Const)
	float                                              MaxLedgeCosAngle;                                         // 0x41F8(0x0004) (Const)
	float                                              MinWidthForClimbWalking;                                  // 0x41FC(0x0004) (Const)
	float                                              MinWidthForClimbRunning;                                  // 0x4200(0x0004) (Const)
	float                                              MinWidthForClimbUpWall;                                   // 0x4204(0x0004) (Const)
	float                                              MinWidthForSlide;                                         // 0x4208(0x0004) (Const)
	float                                              MaxWidthForSlide;                                         // 0x420C(0x0004) (Const)
	float                                              MinHeightForSlide;                                        // 0x4210(0x0004) (Const)
	float                                              MaxHeightForSlide;                                        // 0x4214(0x0004) (Const)
	float                                              StepUpAndLandInteractDist;                                // 0x4218(0x0004) (Const)
	float                                              JumpOverInteractDistWalking;                              // 0x421C(0x0004) (Const)
	float                                              JumpOverInteractDistRunning;                              // 0x4220(0x0004) (Const)
	float                                              JumpOverInteractDistFalling;                              // 0x4224(0x0004) (Const)
	float                                              JumpOverMinObstacleZ;                                     // 0x4228(0x0004) (Const)
	float                                              JumpOverExpectedDistWalking;                              // 0x422C(0x0004) (Const)
	float                                              JumpOverExpectedHeightWalking;                            // 0x4230(0x0004) (Const)
	float                                              JumpOverExpectedDistRunning;                              // 0x4234(0x0004) (Const)
	float                                              JumpOverExpectedHeightRunning;                            // 0x4238(0x0004) (Const)
	float                                              JumpOverAndGrabLedgeInteractDistWalking;                  // 0x423C(0x0004) (Const)
	float                                              JumpOverAndGrabLedgeInteractDistRunning;                  // 0x4240(0x0004) (Const)
	float                                              JumpOverAndGrabLedgeInteractDistFalling;                  // 0x4244(0x0004) (Const)
	float                                              JumpOverAndGrabLedgeExpectedDist;                         // 0x4248(0x0004) (Const)
	float                                              JumpOverAndGrabLedgeExpectedHeightFromLedge;              // 0x424C(0x0004) (Const)
	float                                              SlideOverInteractDistMin;                                 // 0x4250(0x0004) (Const)
	float                                              SlideOverInteractDistMax;                                 // 0x4254(0x0004) (Const)
	float                                              SlideOverExpectedDist;                                    // 0x4258(0x0004) (Const)
	float                                              SlideOverExpectedHeight;                                  // 0x425C(0x0004) (Const)
	float                                              ClimbUpInteractDistWalking;                               // 0x4260(0x0004) (Const)
	float                                              ClimbUpInteractDistRunning;                               // 0x4264(0x0004) (Const)
	float                                              ClimbUpInteractDistFalling;                               // 0x4268(0x0004) (Const)
	float                                              ClimbUpWallInteractHeightMin;                             // 0x426C(0x0004) (Const)
	float                                              ClimbUpExpectedDistWalking;                               // 0x4270(0x0004) (Const)
	float                                              ClimbUpExpectedHeightWalking;                             // 0x4274(0x0004) (Const)
	float                                              ClimbUpExpectedDistRunning;                               // 0x4278(0x0004) (Const)
	float                                              ClimbUpExpectedHeightRunning;                             // 0x427C(0x0004) (Const)
	float                                              ClimbUpWallExpectedDist;                                  // 0x4280(0x0004) (Const)
	float                                              ClimbUpWallExpectedHeightMin;                             // 0x4284(0x0004) (Const)
	float                                              ClimbUpWallExpectedHeightMax;                             // 0x4288(0x0004) (Const)
	float                                              ClimbOverWallExpectedDist;                                // 0x428C(0x0004) (Const)
	float                                              ClimbOverWallExpectedHeight;                              // 0x4290(0x0004) (Const)
	float                                              ClimbUpToCrouchExpectedDist;                              // 0x4294(0x0004) (Const)
	float                                              ClimbUpToCrouchExpectedHeight;                            // 0x4298(0x0004) (Const)
	float                                              ClimbUpToCrouchMinHeight;                                 // 0x429C(0x0004) (Const)
	float                                              GrabLedgeInteractDistWalking;                             // 0x42A0(0x0004) (Const)
	float                                              GrabLedgeInteractDistRunning;                             // 0x42A4(0x0004) (Const)
	float                                              GrabLedgeMinHeightOnGround;                               // 0x42A8(0x0004) (Const)
	float                                              GrabLedgeMaxHeightOnGround;                               // 0x42AC(0x0004) (Const)
	float                                              GrabLedgeMinFloorClearance;                               // 0x42B0(0x0004) (Const)
	float                                              GrabLedgeFromJumpOverMinFloorClearance;                   // 0x42B4(0x0004) (Const)
	float                                              GrabLedgeMinHeightInAir;                                  // 0x42B8(0x0004) (Const)
	float                                              GrabLedgeMaxHeightInAir;                                  // 0x42BC(0x0004) (Const)
	float                                              GrabLedgeInteractDistGoingDown;                           // 0x42C0(0x0004) (Const)
	float                                              GrabLedgeMinHeightInAirGoingDown;                         // 0x42C4(0x0004) (Const)
	float                                              GrabLedgeMaxHeightInAirGoingDown;                         // 0x42C8(0x0004) (Const)
	float                                              GrabLedgeFromGroundExpectedHeight;                        // 0x42CC(0x0004) (Const)
	float                                              GrabLedgeFromAirExpectedHeight;                           // 0x42D0(0x0004) (Const)
	float                                              GrabAndClimbInteractDist;                                 // 0x42D4(0x0004) (Const)
	float                                              GrabAndClimbExpectedDistFwd;                              // 0x42D8(0x0004) (Const)
	float                                              GrabAndClimbExpectedDistHeight;                           // 0x42DC(0x0004) (Const)
	float                                              GrabAndClimbMinHeight;                                    // 0x42E0(0x0004) (Const)
	float                                              GrabAndClimbMaxHeight;                                    // 0x42E4(0x0004) (Const)
	float                                              LedgeHangDistToWall;                                      // 0x42E8(0x0004) (Const)
	float                                              LedgeHangHeightToLedge;                                   // 0x42EC(0x0004) (Const)
	float                                              LedgeHangTransitionInteractDist;                          // 0x42F0(0x0004) (Const)
	float                                              LedgeHangTransitionInsideExpectedDist;                    // 0x42F4(0x0004) (Const)
	float                                              LedgeHangTransitionOutsideExpectedDist;                   // 0x42F8(0x0004) (Const)
	float                                              LedgeHangClimbOverMaxLedgeWidth;                          // 0x42FC(0x0004) (Const)
	float                                              LedgeHangClimbOverMinHeightClearance;                     // 0x4300(0x0004) (Const)
	float                                              LedgeHangClimbOverFullHeightClearance;                    // 0x4304(0x0004) (Const)
	float                                              LedgeHangClimbUpMinFwdClearance;                          // 0x4308(0x0004) (Const)
	float                                              LedgeWalkTransitionInteractDistInside;                    // 0x430C(0x0004) (Const)
	float                                              LedgeWalkTransitionInteractDistOutside;                   // 0x4310(0x0004) (Const)
	float                                              LedgeWalkTransitionInteractDistExit;                      // 0x4314(0x0004) (Const)
	float                                              LedgeWalkEnterExpectedInsidePerpSideDist;                 // 0x4318(0x0004) (Const)
	float                                              LedgeWalkEnterExpectedOutsidePerpSideDist;                // 0x431C(0x0004) (Const)
	float                                              LedgeWalkEnterExpectedInsidePrlSideDist;                  // 0x4320(0x0004) (Const)
	float                                              LedgeWalkEnterExpectedOutsidePrlSideDist;                 // 0x4324(0x0004) (Const)
	float                                              LedgeWalkEnterExpectedInsidePerpFwdDist;                  // 0x4328(0x0004) (Const)
	float                                              LedgeWalkEnterExpectedOutsidePerpFwdDist;                 // 0x432C(0x0004) (Const)
	float                                              LedgeWalkEnterExpectedInsidePrlFwdDist;                   // 0x4330(0x0004) (Const)
	float                                              LedgeWalkEnterExpectedOutsidePrlFwdDist;                  // 0x4334(0x0004) (Const)
	float                                              LedgeWalkTransitionExpectedDistInside;                    // 0x4338(0x0004) (Const)
	float                                              LedgeWalkTransitionExpectedDistOutside;                   // 0x433C(0x0004) (Const)
	float                                              LedgeWalkDistFromEdge;                                    // 0x4340(0x0004) (Const)
	float                                              LedgeWalkMaxWallDist;                                     // 0x4344(0x0004) (Const)
	float                                              LedgeWalkMinDrop;                                         // 0x4348(0x0004) (Const)
	float                                              SqueezeInteractDist;                                      // 0x434C(0x0004) (Const)
	float                                              SqueezeEnterExpectedDistFwd;                              // 0x4350(0x0004) (Const)
	float                                              SqueezeExitExpectedDistFwd;                               // 0x4354(0x0004) (Const)
	float                                              SqueezeDistFromCenter;                                    // 0x4358(0x0004) (Const)
	float                                              EnterLockerInteractDistance;                              // 0x435C(0x0004) (Const)
	float                                              LadderEnterFromGroundInteractDist;                        // 0x4360(0x0004) (Const)
	float                                              LadderEnterFromAboveInteractDist;                         // 0x4364(0x0004) (Const)
	float                                              LadderGrabDist;                                           // 0x4368(0x0004) (Const)
	float                                              LadderEnterFromGroundDeltaZ;                              // 0x436C(0x0004) (Const)
	float                                              LadderBarSpacing;                                         // 0x4370(0x0004) (Const)
	float                                              LadderRootHeightOffsetFromBar;                            // 0x4374(0x0004) (Const)
	float                                              LadderEnterFromAboveExpectedDist;                         // 0x4378(0x0004) (Const)
	float                                              LadderDistFwd;                                            // 0x437C(0x0004) (Const)
	float                                              LadderExitOnTopInteractDist;                              // 0x4380(0x0004) (Const)
	float                                              LadderExitOnGroundInteractDist;                           // 0x4384(0x0004) (Const)
	float                                              LadderMaxHeightForDrop;                                   // 0x4388(0x0004) (Const)
	float                                              PickupObjectExpectedDist;                                 // 0x438C(0x0004) (Const)
	float                                              PickupObjectInteractDistMinHorz;                          // 0x4390(0x0004) (Const)
	float                                              PickupObjectInteractDistMaxHorz;                          // 0x4394(0x0004) (Const)
	float                                              PickupObjectInteractDistMinVertStanding;                  // 0x4398(0x0004) (Const)
	float                                              PickupObjectInteractDistMaxVertStanding;                  // 0x439C(0x0004) (Const)
	float                                              PickupObjectInteractDistMinVertCrouched;                  // 0x43A0(0x0004) (Const)
	float                                              PickupObjectInteractDistMaxVertCrouched;                  // 0x43A4(0x0004) (Const)
	float                                              DoorOpenInteractionDist;                                  // 0x43A8(0x0004) (Const)
	float                                              DoorOpenExpectedFwdDist;                                  // 0x43AC(0x0004) (Const)
	float                                              DoorOpenExpectedSideDist;                                 // 0x43B0(0x0004) (Const)
	float                                              DoorOpenInsideExpectedDistFwd;                            // 0x43B4(0x0004) (Const)
	float                                              DoorRunThroughInteractDist;                               // 0x43B8(0x0004) (Const)
	float                                              DoorRunThroughExpectedDist;                               // 0x43BC(0x0004) (Const)
	float                                              DoorInteractiveOpenMaxAngle;                              // 0x43C0(0x0004) (Const)
	float                                              DoorMaxAngleForInteractiveOpen;                           // 0x43C4(0x0004) (Const)
	float                                              DoorCloseInteractionDist;                                 // 0x43C8(0x0004) (Const)
	float                                              DoorCloseExpectedDistFwd;                                 // 0x43CC(0x0004) (Const)
	float                                              LockerOpenStraightExpectedDistSide;                       // 0x43D0(0x0004) (Const)
	float                                              LockerOpenLeftExpectedDistSide;                           // 0x43D4(0x0004) (Const)
	float                                              LockerOpenRightExpectedDistSide;                          // 0x43D8(0x0004) (Const)
	float                                              LockerOpenExpectedDistFwd;                                // 0x43DC(0x0004) (Const)
	float                                              LockerEnterExpectedDistSide;                              // 0x43E0(0x0004) (Const)
	float                                              LockerEnterExpectedDistFwd;                               // 0x43E4(0x0004) (Const)
	float                                              GrabFromSqueezeMaxDistance;                               // 0x43E8(0x0004) (Const)
	float                                              GrabFromSqueezeExpectedDistance;                          // 0x43EC(0x0004) (Const)
	float                                              BedInteractDistance;                                      // 0x43F0(0x0004) (Const)
	float                                              BedEnterExpectedFwdDist;                                  // 0x43F4(0x0004) (Const)
	float                                              BedEnterExpectedSideDist;                                 // 0x43F8(0x0004) (Const)
	float                                              PushableInteractDist;                                     // 0x43FC(0x0004) (Const)
	float                                              PushableInteractMinLookCosAngle;                          // 0x4400(0x0004) (Const)
	float                                              PushableExpectedDistFromEdge;                             // 0x4404(0x0004) (Const)
	float                                              PushableExpectedSideOffset;                               // 0x4408(0x0004) (Const)
	float                                              PushFromLedgeAnimatedExpectedDist;                        // 0x440C(0x0004) (Const)
	float                                              PushFromLedgeAnimatedInteractDist;                        // 0x4410(0x0004) (Const)
	float                                              PushFromLedgeAnimatedMinHeight;                           // 0x4414(0x0004) (Const)
	float                                              PushFromLedgeProceduralInteractDist;                      // 0x4418(0x0004) (Const)
	float                                              PeekingEnterInteractDistFromWall;                         // 0x441C(0x0004) (Const)
	float                                              PeekingEnterInteractDistFromEdgeMin;                      // 0x4420(0x0004) (Const)
	float                                              PeekingEnterInteractDistFromEdgeMax;                      // 0x4424(0x0004) (Const)
	float                                              PeekingEnterExpectedDistFromWall;                         // 0x4428(0x0004) (Const)
	float                                              PeekingEnterExpectedDistFromEdgeLeft;                     // 0x442C(0x0004) (Const)
	float                                              PeekingEnterExpectedDistFromEdgeRight;                    // 0x4430(0x0004) (Const)
	float                                              ImpactVelThresholdForBigLanding;                          // 0x4434(0x0004) (Const)
	float                                              ImpactVelThresholdForSmallLanding;                        // 0x4438(0x0004) (Const)
	float                                              ImpactVelThresholdForSpeedPenalty;                        // 0x443C(0x0004) (Const)
	float                                              MinEyeDistToWall;                                         // 0x4440(0x0004) (Const)
	float                                              ForwardJumpSpeedThreshold;                                // 0x4444(0x0004) (Const)
	float                                              MaxGrabLedgeAdjustment;                                   // 0x4448(0x0004) (Const)
	float                                              MaxSpeedPenaltyPctForInjuries;                            // 0x444C(0x0004) (Const)
	struct FVector                                     DefaultLeftHandJointTargetRotation;                       // 0x4450(0x000C) (Const)
	struct FVector                                     CornerPeekJointTargetPosLeft;                             // 0x445C(0x000C) (Const)
	struct FVector                                     CornerPeekJointTargetPosRight;                            // 0x4468(0x000C) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLHero");
		return ptr;
	}


	void UpdateDifficultyBasedValues();
	void OutsideWorldBounds();
	void FellOutOfWorld(class UClass* dmgType);
	void RespawnHero();
	void PlayFootStepSound(int FootDown, class UAnimNotify_Footstep* footstepNotify);
	bool IsInMainMenu();
	void SpawnBloodFootstepDecal(bool bLeftFoot, float Alpha);
	void GetFootstepDecalTransform(bool bLeftFoot, struct FVector* DecalLocation, struct FRotator* DecalRotation);
	void SetMeshVisibility(bool bVisible);
	void EndViewTarget(class APlayerController* PC);
	void BecomeViewTarget(class APlayerController* PC);
	void PhysicsVolumeChange(class APhysicsVolume* NewVolume);
	void OnEnterDeepWater(class APhysicsVolume* NewVolume);
	void PlayLanded(float ImpactVel);
	void NativePlayLanded(float ImpactVel);
	void TakeFallingDamage();
	bool HealDamage(int Amount, class AController* Healer, class UClass* DamageType);
	void TakeDamage(int Damage, class AController* InstigatedBy, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void PostInitAnimTree(class USkeletalMeshComponent* SkelComp);
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void RemoveEnemyFromAIPositionPawns(class AOLEnemyPawn* EnemyPawn);
	struct FVector GetGrabUnderDestination(class AOLEnemyPawn* Enemy);
	struct FVector GetFutureDestination(class AOLPawn* Agent);
	void QuickHeroTest();
	bool CanBeGrabbedUnder();
	bool CanBeFatalitized();
	bool CanBeAttacked();
	bool IsBarefeet();
	bool IsInLocker();
	void AttachCameraEffect(class UParticleSystem* ParticleEffectTemplate, float Duration, float PlaneDist);
	void SetCamcorderVisibleNotify();
	void ResetNeckOffsetNotify();
	void BloodOnScreenNotify();
	void DecapitatedNotify();
	void DieNotify();
	void OverrideCameraSettingsNotify(class UOLAnimNotify_OverrideCameraParams* camParamsNotify);
	void BatteriesReloadedNotify();
	void CamcorderLoweredNotify();
	void CamcorderRaisedNotify();
	void CamcorderAvailableNotify();
	void DoorAnimNotify();
	void PickupNotify();
	void ReactToHit(float hitStrength, const struct FVector& hitDirection, bool bForceFullPower);
	bool TryKillInLocker(class AOLEnemyPawn* attacker);
	bool TryKillHero(class AOLEnemyPawn* attacker, const struct FVector& enemyStartLocation, const struct FVector& Direction);
	bool TryDecapitate(class AOLEnemyPawn* attacker);
	bool TryGrabFromUnder(class AOLEnemyPawn* attacker, const struct FVector& StartLocation, const struct FVector& AttackStartLocation);
	bool TryThrowPlayer(class AOLEnemyPawn* attacker, float ThrowRotation);
	bool TryGrabNormal(class AOLEnemyPawn* attacker, const struct FVector& StartLocation, const struct FVector& AttackStartLocation);
	bool TryGrabFromBed(class AOLEnemyPawn* attacker);
	bool TryExitBed(const struct FVector& playerIntentDirection);
	bool TryExitLocker();
	bool TryGrabFromLocker(class AOLEnemyPawn* attacker);
	bool CanGrabFromSqueeze();
	bool TryGrabFromSqueeze(class AOLEnemyPawn* attacker);
	bool HeroControlActivated(class UOLSeqAct_HeroControl* heroControlAction);
	void ExitCinematicMode(class USeqAct_ToggleCinematicMode* seqAction);
	void EnterCinematicMode(class USeqAct_ToggleCinematicMode* seqAction);
	void StartSpecialMove(TEnumAsByte<ESpecialMoveType> moveType, const struct FVector& targetPosition, const struct FVector& TargetDirection, TEnumAsByte<EAdjustPositionTargetType> TargetType);
	void OnPossess();
	void ActivateWaterFootstepParticles(bool bRightFoot);
	void TakeElectricDamage(int Damage, float Knockback, const struct FVector& HitNormal, class UAkEvent* ElectricSoundEvent);
	void NativeTakeFallingDamage();
	void NativeTakeDamage(int Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UClass* DamageType);
	void NativeDisplayDebug(class UCanvas* Canvas, float* out_YL, float* out_YPos);
	void GetCamera(struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV);
	void NativePostBeginPlay();
	void ResetAfterTeleport();
	bool IsRunning();
	bool TryRun();
	void Walk();
	struct FRotator GetViewRotation();
	struct FVector GetPawnViewLocation();
};


// Class OLGame.OLPhysicalMaterialProperty
// 0x0008 (0x0068 - 0x0060)
class UOLPhysicalMaterialProperty : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       MaterialType;                                             // 0x0060(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLPhysicalMaterialProperty");
		return ptr;
	}

};


// Class OLGame.OLPickableObject
// 0x002C (0x026C - 0x0240)
class AOLPickableObject : public AActor
{
public:
	class UStaticMeshComponent*                        PickupMesh;                                               // 0x0240(0x0008) (Edit, ExportObject, Component, EditInline)
	class UDynamicLightEnvironmentComponent*           PickupLightEnvironment;                                   // 0x0248(0x0008) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bUsed : 1;                                                // 0x0250(0x0004)
	unsigned long                                      bPickupOnNotify : 1;                                      // 0x0250(0x0004)
	unsigned long                                      bDisabled : 1;                                            // 0x0250(0x0004) (Transient)
	struct FVector                                     AttachPositionOffset;                                     // 0x0254(0x000C) (Edit)
	struct FRotator                                    AttachRotationOffset;                                     // 0x0260(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLPickableObject");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class OLGame.OLBatteriesPickupFactory
// 0x0024 (0x0290 - 0x026C)
class AOLBatteriesPickupFactory : public AOLPickableObject
{
public:
	int                                                NumBatteries;                                             // 0x026C(0x0004) (Edit)
	class UStaticMesh*                                 Mesh1;                                                    // 0x0270(0x0008) (Edit)
	class UStaticMesh*                                 Mesh2;                                                    // 0x0278(0x0008) (Edit)
	class UStaticMesh*                                 Mesh3;                                                    // 0x0280(0x0008) (Edit)
	class UStaticMesh*                                 Mesh4;                                                    // 0x0288(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBatteriesPickupFactory");
		return ptr;
	}

};


// Class OLGame.OLCollectiblePickup
// 0x0008 (0x0274 - 0x026C)
class AOLCollectiblePickup : public AOLPickableObject
{
public:
	struct FName                                       CollectibleName;                                          // 0x026C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLCollectiblePickup");
		return ptr;
	}


	void PostBeginPlay();
	bool ShouldShowCollectible();
};


// Class OLGame.OLGameplayItemPickup
// 0x0018 (0x0284 - 0x026C)
class AOLGameplayItemPickup : public AOLPickableObject
{
public:
	struct FName                                       ItemName;                                                 // 0x026C(0x0008) (Edit)
	struct FName                                       LastValidCheckpoint;                                      // 0x0274(0x0008) (Edit)
	class UAkEvent*                                    PickupSound;                                              // 0x027C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLGameplayItemPickup");
		return ptr;
	}


	void PostBeginPlay();
	bool ShouldShowItem();
};


// Class OLGame.OLPlayerInput
// 0x0091 (0x05DD - 0x054C)
class UOLPlayerInput : public UUDKPlayerInput
{
public:
	TArray<struct FKeyBind>                            GPBindingsA;                                              // 0x054C(0x0010) (Config, NeedCtorLink)
	TArray<struct FKeyBind>                            GPBindingsB;                                              // 0x055C(0x0010) (Config, NeedCtorLink)
	TArray<struct FKeyBind>                            GPBindingsC;                                              // 0x056C(0x0010) (Config, NeedCtorLink)
	struct FString                                     StrafeCommand;                                            // 0x057C(0x0010) (Config, NeedCtorLink)
	struct FString                                     MoveCommand;                                              // 0x058C(0x0010) (Config, NeedCtorLink)
	struct FString                                     LookXCommand;                                             // 0x059C(0x0010) (Config, NeedCtorLink)
	struct FString                                     LookYCommand;                                             // 0x05AC(0x0010) (Config, NeedCtorLink)
	struct FString                                     SouthpawMoveCommand;                                      // 0x05BC(0x0010) (Config, NeedCtorLink)
	struct FString                                     SouthpawLookYCommand;                                     // 0x05CC(0x0010) (Config, NeedCtorLink)
	TEnumAsByte<EGamepadBindingsType>                  GamepadConfig;                                            // 0x05DC(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLPlayerInput");
		return ptr;
	}


	bool IsKeyPressed(const struct FName& Key);
	void UnBindNoSave(const struct FString& Command);
	void PreProcessInput(float DeltaTime);
	void StopLeanRight();
	void StopLeanLeft();
	void StartLeanRight();
	void StartLeanLeft();
	void ToggleDuck();
	void UnDuck();
	void Duck();
	void ResetInput();
};


// Class OLGame.OLProfileSettings
// 0x0010 (0x00D4 - 0x00C4)
class UOLProfileSettings : public UUDKProfileSettings
{
public:
	TArray<struct FScreenResolutionInfo>               ScreenResolutions;                                        // 0x00C4(0x0010) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLProfileSettings");
		return ptr;
	}


	void AutoDetectPerformanceSettings();
	void MatchMonitorResolution(bool bLimitForPerformance);
	void SetLanguageFromSteam();
	void SetToDefaults();
	bool GetProfileSettingValues(int ProfileSettingId, TArray<struct FName>* Values);
	float GetGammaSetting();
};


// Class OLGame.OLPushableObject
// 0x0080 (0x02C0 - 0x0240)
class AOLPushableObject : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObstacle;                   // 0x0240(0x0008) (Const, Native, NoExport)
	unsigned long                                      bEnabled : 1;                                             // 0x0248(0x0004) (Edit)
	unsigned long                                      bCanPushBack : 1;                                         // 0x0248(0x0004) (Edit)
	unsigned long                                      bCanPushFwd : 1;                                          // 0x0248(0x0004) (Edit)
	unsigned long                                      bPlayerLocked : 1;                                        // 0x0248(0x0004) (Transient)
	unsigned long                                      bPushActive : 1;                                          // 0x0248(0x0004) (Transient)
	unsigned long                                      bPushFwd : 1;                                             // 0x0248(0x0004) (Transient)
	float                                              Width;                                                    // 0x024C(0x0004) (Edit)
	float                                              MaxBackDist;                                              // 0x0250(0x0004) (Edit)
	float                                              MaxFwdDist;                                               // 0x0254(0x0004) (Edit)
	class AOLDoor*                                     LinkedDoor;                                               // 0x0258(0x0008) (Edit)
	float                                              MaxSpeed;                                                 // 0x0260(0x0004) (Edit)
	float                                              BaseTranslation;                                          // 0x0264(0x0004) (Edit)
	TEnumAsByte<EPushableMaterial>                     PushableType;                                             // 0x0268(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	class UStaticMeshComponent*                        Mesh;                                                     // 0x026C(0x0008) (Edit, ExportObject, Component, EditInline)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x0274(0x0008) (Edit, ExportObject, Component, EditInline)
	float                                              CurrentDisplacement;                                      // 0x027C(0x0004) (Transient)
	float                                              CurrentVelocity;                                          // 0x0280(0x0004) (Transient)
	float                                              CurrentPhase;                                             // 0x0284(0x0004) (Transient)
	float                                              AccelApproachCoeff;                                       // 0x0288(0x0004) (Const)
	float                                              DecelApproachCoeff;                                       // 0x028C(0x0004) (Const)
	class UAkEvent*                                    SndStartPushing;                                          // 0x0290(0x0008) (Const)
	class UAkEvent*                                    SndStopPushing;                                           // 0x0298(0x0008) (Const)
	struct FName                                       RTPCPushingSpeed;                                         // 0x02A0(0x0008) (Const)
	struct FName                                       SwitchPushableType;                                       // 0x02A8(0x0008) (Const)
	struct FName                                       SwitchPushableTypeMetal;                                  // 0x02B0(0x0008) (Const)
	struct FName                                       SwitchPushableTypeWood;                                   // 0x02B8(0x0008) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLPushableObject");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class OLGame.OLSeqAct_ActivateGameState
// 0x000C (0x015C - 0x0150)
class UOLSeqAct_ActivateGameState : public USequenceAction
{
public:
	struct FName                                       GameStateName;                                            // 0x0150(0x0008) (Edit)
	unsigned long                                      bTriggerApplyEvent : 1;                                   // 0x0158(0x0004) (Edit)
	unsigned long                                      bStatusIsOk : 1;                                          // 0x0158(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_ActivateGameState");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_Checkpoint
// 0x000C (0x015C - 0x0150)
class UOLSeqAct_Checkpoint : public USequenceAction
{
public:
	struct FName                                       CheckpointName;                                           // 0x0150(0x0008) (Edit)
	unsigned long                                      bStatusIsOk : 1;                                          // 0x0158(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_Checkpoint");
		return ptr;
	}


	void Activated();
	class AOLCheckpoint* GetCheckpointFromName(const struct FName& CPName);
	int STATIC_GetObjClassVersion();
};


// Class OLGame.OLSoundConnector
// 0x0014 (0x0254 - 0x0240)
class AOLSoundConnector : public AActor
{
public:
	class UDrawSphereComponent*                        PreviewComp;                                              // 0x0240(0x0008) (ExportObject, Component, EditInline)
	class UOLSoundConnectorComponent*                  SoundConnectorComp;                                       // 0x0248(0x0008) (Edit, ExportObject, Component, EditInline)
	float                                              OcclusionFactor;                                          // 0x0250(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSoundConnector");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class OLGame.OLSoundConnectorComponent
// 0x001B (0x00A0 - 0x0085)
class UOLSoundConnectorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	unsigned long                                      bEnabled : 1;                                             // 0x0088(0x0004) (Edit)
	unsigned long                                      bAllowSourceVirtualization : 1;                           // 0x0088(0x0004) (Edit)
	float                                              Radius;                                                   // 0x008C(0x0004) (Edit)
	TArray<class AOLSoundEnvironmentVolume*>           ConnectedVolumes;                                         // 0x0090(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSoundConnectorComponent");
		return ptr;
	}

};


// Class OLGame.OLSoundEmitter
// 0x00A0 (0x0100 - 0x0060)
class UOLSoundEmitter : public UObject
{
public:
	class AActor*                                      Actor;                                                    // 0x0060(0x0008)
	unsigned long                                      bActive : 1;                                              // 0x0068(0x0004)
	unsigned long                                      bDirty : 1;                                               // 0x0068(0x0004)
	unsigned long                                      bDynamic : 1;                                             // 0x0068(0x0004)
	unsigned long                                      bAllowVirtualization : 1;                                 // 0x0068(0x0004)
	unsigned long                                      bVirtualized : 1;                                         // 0x0068(0x0004)
	unsigned long                                      bInMultiPositionGroup : 1;                                // 0x0068(0x0004)
	unsigned long                                      bGroupMaster : 1;                                         // 0x0068(0x0004)
	TArray<struct FSoundEnvVolumeData>                 SoundEnvironments;                                        // 0x006C(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              CurrentOcclusion;                                         // 0x007C(0x0004)
	float                                              TargetOcclusion;                                          // 0x0080(0x0004)
	float                                              CurrentObstruction;                                       // 0x0084(0x0004)
	float                                              TargetObstruction;                                        // 0x0088(0x0004)
	float                                              LastObstructionCheckTime;                                 // 0x008C(0x0004)
	float                                              LastOcclusionCheckTime;                                   // 0x0090(0x0004)
	struct FVector                                     BaseLocation;                                             // 0x0094(0x000C)
	struct FVector                                     VirtualizedLocation;                                      // 0x00A0(0x000C)
	struct FString                                     GroupEventName;                                           // 0x00AC(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<struct FAuxBusInfo>                         ReverbBusInfos;                                           // 0x00BC(0x0010) (AlwaysInit, NeedCtorLink)
	struct FEmitterDebugInfo                           DebugInfo;                                                // 0x00CC(0x0034) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSoundEmitter");
		return ptr;
	}

};


// Class OLGame.OLSoundEmittingMeshActor
// 0x000F (0x025C - 0x024D)
class AOLSoundEmittingMeshActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	class UAkEvent*                                    PlayEvent;                                                // 0x0250(0x0008) (Edit)
	unsigned long                                      bAllowVirtualization : 1;                                 // 0x0258(0x0004) (Edit)
	unsigned long                                      bEnableMultiPosition : 1;                                 // 0x0258(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSoundEmittingMeshActor");
		return ptr;
	}

};


// Class OLGame.OLSoundEnvironment
// 0x0018 (0x0078 - 0x0060)
class UOLSoundEnvironment : public UObject
{
public:
	struct FString                                     ReverbEnvironmentType;                                    // 0x0060(0x0010) (Edit, NeedCtorLink)
	float                                              OcclusionFactor;                                          // 0x0070(0x0004) (Edit)
	float                                              ObstructionFactor;                                        // 0x0074(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSoundEnvironment");
		return ptr;
	}

};


// Class OLGame.OLSoundEnvironmentManager
// 0x0084 (0x00E4 - 0x0060)
class UOLSoundEnvironmentManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	TArray<class AOLSoundEnvironmentVolume*>           ListenerVolumes;                                          // 0x0068(0x0010) (Transient, NeedCtorLink)
	TArray<class AOLSoundEnvironmentVolume*>           AllVolumes;                                               // 0x0078(0x0010) (Transient, NeedCtorLink)
	unsigned long                                      bEnvironmentsDirty : 1;                                   // 0x0088(0x0004)
	unsigned long                                      bPendingDestroy : 1;                                      // 0x0088(0x0004)
	unsigned long                                      bEnableSoundVirtualization : 1;                           // 0x0088(0x0004) (Config)
	TArray<class UOLSoundEmitter*>                     ActiveSources;                                            // 0x008C(0x0010) (NeedCtorLink)
	TArray<struct FMultiPositionGroup>                 ActiveGroups;                                             // 0x009C(0x0010) (NeedCtorLink)
	class UOLSoundEnvironment*                         DefaultSoundEnvironment;                                  // 0x00AC(0x0008)
	struct FName                                       FadeRTPC;                                                 // 0x00B4(0x0008) (Const)
	float                                              OcclusionApproachCoeff;                                   // 0x00BC(0x0004) (Config)
	float                                              ObstructionApproachCoeff;                                 // 0x00C0(0x0004) (Config)
	float                                              ObstructionRatioInSameVolume;                             // 0x00C4(0x0004) (Config)
	float                                              MaxPathingDist;                                           // 0x00C8(0x0004) (Config)
	float                                              FreePathingDist;                                          // 0x00CC(0x0004) (Config)
	float                                              LockerOcclusion;                                          // 0x00D0(0x0004) (Config)
	struct FString                                     LockerReverbEnvironment;                                  // 0x00D4(0x0010) (Config, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSoundEnvironmentManager");
		return ptr;
	}


	class UOLSoundEnvironmentManager* STATIC_GetSoundEnvManager();
	void ExitAllTouchingVolumes();
	void Cleanup();
};


// Class OLGame.OLSoundEnvironmentVolume
// 0x0040 (0x02BC - 0x027C)
class AOLSoundEnvironmentVolume : public AVolume
{
public:
	unsigned long                                      bUseForOcclusion : 1;                                     // 0x027C(0x0004) (Edit)
	unsigned long                                      bInitialized : 1;                                         // 0x027C(0x0004) (Transient)
	class UOLSoundEnvironment*                         SoundEnvironment;                                         // 0x0280(0x0008) (Edit)
	TArray<class UAkEvent*>                            OnEnterEvents;                                            // 0x0288(0x0010) (Edit, NeedCtorLink)
	TArray<class UAkEvent*>                            OnExitEvents;                                             // 0x0298(0x0010) (Edit, NeedCtorLink)
	float                                              FadeDistance;                                             // 0x02A8(0x0004) (Edit)
	TArray<class UOLSoundConnectorComponent*>          Connections;                                              // 0x02AC(0x0010) (ExportObject, Transient, Component, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSoundEnvironmentVolume");
		return ptr;
	}


	void PostBeginPlay();
};


// Class OLGame.OLTutorialManager
// 0x006C (0x00CC - 0x0060)
class UOLTutorialManager : public UObject
{
public:
	unsigned long                                      bTutorialsEnabled : 1;                                    // 0x0060(0x0004) (Config)
	unsigned long                                      bActiveTutorial : 1;                                      // 0x0060(0x0004)
	unsigned long                                      bBatteryTutorialComplete : 1;                             // 0x0060(0x0004)
	unsigned long                                      bClimbUpTutorialComplete : 1;                             // 0x0060(0x0004)
	unsigned long                                      bDocumentTutorialComplete : 1;                            // 0x0060(0x0004)
	int                                                CurrentID;                                                // 0x0064(0x0004)
	struct FString                                     TutorialText;                                             // 0x0068(0x0010) (NeedCtorLink)
	TArray<struct FString>                             CompletedTutorials;                                       // 0x0078(0x0010) (NeedCtorLink)
	float                                              TutorialItemTimestamp;                                    // 0x0088(0x0004)
	int                                                ClimbUpTutorialItemIdx;                                   // 0x008C(0x0004)
	float                                              DefaultTutorialDuration;                                  // 0x0090(0x0004) (Const)
	struct FString                                     BatteriesTutorialText;                                    // 0x0094(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ClimbUpTutorialText_Keyboard;                             // 0x00A4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ClimbUpTutorialText_Gamepad;                              // 0x00B4(0x0010) (Const, Localized, NeedCtorLink)
	struct FName                                       DocumentTutorialTextId;                                   // 0x00C4(0x0008) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLTutorialManager");
		return ptr;
	}


	void Clear();
};


// Class OLGame.OLUberPostProcessEffect
// 0x00E4 (0x0268 - 0x0184)
class UOLUberPostProcessEffect : public UUberPostProcessEffect
{
public:
	float                                              VignetteBlack;                                            // 0x0184(0x0004) (Edit)
	float                                              VignetteWhite;                                            // 0x0188(0x0004) (Edit)
	float                                              GrainBrightness;                                          // 0x018C(0x0004) (Edit)
	float                                              GrainOpacity;                                             // 0x0190(0x0004) (Edit)
	float                                              GrainScale;                                               // 0x0194(0x0004) (Edit)
	class UTexture2D*                                  GrainTexture;                                             // 0x0198(0x0008)
	struct FLinearColor                                HurtColor;                                                // 0x01A0(0x0010) (Edit)
	float                                              HurtRadiusMin;                                            // 0x01B0(0x0004) (Edit)
	float                                              HurtRadiusMax;                                            // 0x01B4(0x0004) (Edit)
	float                                              HurtHardnessMin;                                          // 0x01B8(0x0004) (Edit)
	float                                              HurtHardnessMax;                                          // 0x01BC(0x0004) (Edit)
	float                                              HurtAmount;                                               // 0x01C0(0x0004) (Edit)
	float                                              HurtExp;                                                  // 0x01C4(0x0004) (Edit)
	float                                              HurtTimeScale;                                            // 0x01C8(0x0004) (Edit)
	float                                              HurtScale;                                                // 0x01CC(0x0004) (Edit)
	TEnumAsByte<ECameraMode>                           CameraMode;                                               // 0x01D0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	unsigned long                                      bCameraGlassShattered : 1;                                // 0x01D4(0x0004) (Edit)
	float                                              CameraColorEffect;                                        // 0x01D8(0x0004) (Edit)
	float                                              CameraScale;                                              // 0x01DC(0x0004) (Edit)
	struct FLinearColor                                CameraColor;                                              // 0x01E0(0x0010) (Edit)
	float                                              CameraGlassLightIntensity;                                // 0x01F0(0x0004) (Edit)
	struct FLinearColor                                CameraGlassLightColor;                                    // 0x01F4(0x0010) (Edit)
	class UTexture2D*                                  CameraGlassDiffuse;                                       // 0x0204(0x0008)
	class UTexture2D*                                  CameraGlassNormal;                                        // 0x020C(0x0008)
	class UTextureCube*                                CameraGlassCubeMap;                                       // 0x0214(0x0008)
	float                                              MovieIntensity;                                           // 0x021C(0x0004) (Edit)
	struct FLinearColor                                MovieColorHi;                                             // 0x0220(0x0010) (Edit)
	struct FLinearColor                                MovieColorLo;                                             // 0x0230(0x0010) (Edit)
	struct FLinearColor                                MovieColor;                                               // 0x0240(0x0010) (Edit)
	class UTextureMovie*                               MovieTexture;                                             // 0x0250(0x0008)
	class UTexture2D*                                  MovieGradTexture;                                         // 0x0258(0x0008)
	class UTexture2D*                                  MovieLightMaskTexture;                                    // 0x0260(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUberPostProcessEffect");
		return ptr;
	}

};


// Class OLGame.OLUtils
// 0x0000 (0x0060 - 0x0060)
class UOLUtils : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUtils");
		return ptr;
	}


	class AOLPlayerController* STATIC_GetOLPC();
	bool STATIC_IsBindableKey(const struct FName& ButtonName);
	bool STATIC_IsPlayingDLC();
	bool STATIC_IsDLCInstalled();
	bool STATIC_IsConsole();
	bool STATIC_IsPS4();
};


// Class OLGame.OLVoiceManager
// 0x0068 (0x00C8 - 0x0060)
class UOLVoiceManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x0060(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IInterface_AkEventHandler;                        // 0x0068(0x0008) (Const, Native, NoExport)
	TArray<struct FName>                               VOPackages;                                               // 0x0070(0x0010) (Config, NeedCtorLink)
	TArray<struct FLineQueue>                          LineQueues;                                               // 0x0080(0x0010) (NeedCtorLink)
	TArray<struct FQueueTimer>                         Timers;                                                   // 0x0090(0x0010) (NeedCtorLink)
	TArray<struct FEndOfEventInfo>                     EventCallbacksToProcess;                                  // 0x00A0(0x0010) (NeedCtorLink)
	TArray<struct FMarkerInfo>                         MarkerCallbacksToProcess;                                 // 0x00B0(0x0010) (NeedCtorLink)
	struct FPointer                                    CriticalSection;                                          // 0x00C0(0x0008) (Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLVoiceManager");
		return ptr;
	}


	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
};


// Class OLGame.OLWaitPointComponent
// 0x007B (0x0100 - 0x0085)
class UOLWaitPointComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	TArray<struct FWaitPoint>                          WaitPoints;                                               // 0x0088(0x0010) (Edit, NeedCtorLink)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	struct FMatrix                                     LocalToWorld;                                             // 0x00A0(0x0040)
	struct FVector                                     StartOffset;                                              // 0x00E0(0x000C) (Const)
	struct FVector                                     AdditionalOffset;                                         // 0x00EC(0x000C) (Const)
	int                                                NumWaitPointsPerSide;                                     // 0x00F8(0x0004) (Const)
	unsigned long                                      bOneSideOnly : 1;                                         // 0x00FC(0x0004) (Edit, Const)
	unsigned long                                      bFlipOnYAxis : 1;                                         // 0x00FC(0x0004) (Edit, Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLWaitPointComponent");
		return ptr;
	}


	void ReturnWaitPoint(const struct FWaitPoint& Point);
	struct FWaitPoint GrabBestWaitPoint(bool bReversed);
	struct FVector GetWaitPointForwardVector(const struct FWaitPoint& Point);
};


// Class OLGame.OLEnemyPawn
// 0x0C30 (0x37EC - 0x2BBC)
class AOLEnemyPawn : public AOLPawn
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObstacle;                   // 0x2BBC(0x0008) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;                     // 0x2BC4(0x0008) (Const, Native, NoExport)
	class UClass*                                      NPCController;                                            // 0x2BCC(0x0008) (Edit)
	class AOLBot*                                      Bot;                                                      // 0x2BD4(0x0008)
	class UStaticMeshComponent*                        WeaponMesh;                                               // 0x2BDC(0x0008) (ExportObject, Component, EditInline)
	TArray<class UAnimSet*>                            WeaponAnimSets;                                           // 0x2BE4(0x0010) (NeedCtorLink)
	unsigned long                                      bUsingWeapon : 1;                                         // 0x2BF4(0x0004)
	unsigned long                                      bHasWeaponEquipped : 1;                                   // 0x2BF4(0x0004)
	unsigned long                                      bNavMeshRegistered : 1;                                   // 0x2BF4(0x0004) (Transient)
	unsigned long                                      bHasPreferredPath : 1;                                    // 0x2BF4(0x0004)
	unsigned long                                      bIsAnimatingFullBody : 1;                                 // 0x2BF4(0x0004)
	unsigned long                                      bAnimRootMotionActive : 1;                                // 0x2BF4(0x0004)
	unsigned long                                      bCastShadowInNV : 1;                                      // 0x2BF4(0x0004)
	unsigned long                                      bLeftAnim : 1;                                            // 0x2BF4(0x0004)
	unsigned long                                      bBackAnim : 1;                                            // 0x2BF4(0x0004)
	unsigned long                                      bIdleSoundPlaying : 1;                                    // 0x2BF4(0x0004)
	unsigned long                                      bAttackUseQuickAttack : 1;                                // 0x2BF4(0x0004) (Config)
	unsigned long                                      bInvestigateLockers : 1;                                  // 0x2BF4(0x0004) (Config)
	unsigned long                                      bInvestigateBeds : 1;                                     // 0x2BF4(0x0004) (Config)
	unsigned long                                      bDrawSteeringDebug : 1;                                   // 0x2BF4(0x0004) (Config)
	unsigned long                                      bUsePreferredPaths : 1;                                   // 0x2BF4(0x0004) (Config)
	unsigned long                                      bUseForMusic : 1;                                         // 0x2BF4(0x0004) (Const)
	unsigned long                                      bMusicInPatrol : 1;                                       // 0x2BF4(0x0004) (Const)
	unsigned long                                      bUseAIGroup : 1;                                          // 0x2BF4(0x0004) (Const)
	unsigned long                                      bCanVault : 1;                                            // 0x2BF4(0x0004) (Const)
	unsigned long                                      bCanThrow : 1;                                            // 0x2BF4(0x0004) (Const)
	unsigned long                                      bUsesDirectionalAttacks : 1;                              // 0x2BF4(0x0004) (Const)
	unsigned long                                      bCanBeKnockedback : 1;                                    // 0x2BF4(0x0004) (Const)
	unsigned long                                      bUseFirstInvestigationInFront : 1;                        // 0x2BF4(0x0004) (Const)
	unsigned long                                      bCloseDoorInPatrol : 1;                                   // 0x2BF4(0x0004) (Const)
	unsigned long                                      bUsesDoorBashLoop : 1;                                    // 0x2BF4(0x0004) (Const)
	unsigned long                                      bUseAvoidSystem : 1;                                      // 0x2BF4(0x0004) (Const)
	TEnumAsByte<EWeaponType>                           WeaponType;                                               // 0x2BF8(0x0001)
	TEnumAsByte<EWeapon>                               CurrentWeapon;                                            // 0x2BF9(0x0001)
	TEnumAsByte<ERotationMode>                         RotationMode;                                             // 0x2BFA(0x0001)
	TEnumAsByte<EEnemyMode>                            EnemyMode;                                                // 0x2BFB(0x0001)
	TEnumAsByte<EAttackSide>                           AttackSide;                                               // 0x2BFC(0x0001)
	TEnumAsByte<EMoveSpeedMode>                        MoveSpeedMode;                                            // 0x2BFD(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x2BFE(0x0002) MISSED OFFSET
	struct FWeaponTypeData                             Weapons[0x9];                                             // 0x2C00(0x000C)
	struct FEnemyModifiers                             Modifiers;                                                // 0x2C6C(0x0014)
	class UOLBTBehaviorTree*                           BehaviorTree;                                             // 0x2C80(0x0008)
	struct FVector                                     LastNavMeshCheckLocation;                                 // 0x2C88(0x000C) (Transient)
	float                                              LastNavMeshObstacleRegisterTime;                          // 0x2C94(0x0004) (Transient)
	float                                              NavMeshObstacleRegistrationTime;                          // 0x2C98(0x0004) (Edit)
	struct FVector                                     CurrentMovePathStart;                                     // 0x2C9C(0x000C)
	TArray<struct FVector>                             CurrentMovePath;                                          // 0x2CA8(0x0010) (NeedCtorLink)
	int                                                CurrentMovePathIdx;                                       // 0x2CB8(0x0004)
	struct FVector                                     LastMovePathPoint;                                        // 0x2CBC(0x000C)
	class AActor*                                      FocusTarget;                                              // 0x2CC8(0x0008)
	TArray<struct FVector2D>                           CRPathSegments;                                           // 0x2CD0(0x0010) (NeedCtorLink)
	TArray<struct FVector2D>                           CRPathSubSegments;                                        // 0x2CE0(0x0010) (NeedCtorLink)
	int                                                CRPathLastIndex;                                          // 0x2CF0(0x0004)
	float                                              MaxPathSegmentRatio;                                      // 0x2CF4(0x0004) (Const)
	int                                                CRPathNumSubSegments;                                     // 0x2CF8(0x0004) (Const)
	float                                              PathMaxElasticityDistance;                                // 0x2CFC(0x0004) (Const)
	float                                              PathMinElasticityDistance;                                // 0x2D00(0x0004) (Const)
	TArray<struct FVector>                             MovingTestPoints;                                         // 0x2D04(0x0010) (NeedCtorLink)
	float                                              MovingTestTimer;                                          // 0x2D14(0x0004)
	int                                                NumMovingTestPoints;                                      // 0x2D18(0x0004) (Const)
	float                                              MovingTestLength;                                         // 0x2D1C(0x0004) (Const)
	struct FVector                                     TargetVelocity;                                           // 0x2D20(0x000C)
	float                                              TargetYaw;                                                // 0x2D2C(0x0004)
	TArray<class UOLAISteering*>                       SteeringBehaviors;                                        // 0x2D30(0x0010) (NeedCtorLink)
	struct FVector                                     CurrentRepulsion;                                         // 0x2D40(0x000C) (Transient)
	struct FVector                                     PreferredPathAnchor;                                      // 0x2D4C(0x000C)
	struct FVector                                     PreferredPathDirection;                                   // 0x2D58(0x000C)
	class AOLPreferredPathMarker*                      PreferredPath;                                            // 0x2D64(0x0008)
	float                                              SmoothedVelocityYaw;                                      // 0x2D6C(0x0004)
	struct FName                                       LastPlayedAnim;                                           // 0x2D70(0x0008)
	TArray<class UAnimSet*>                            SpawnerAnimSets;                                          // 0x2D78(0x0010) (NeedCtorLink)
	class UAnimNodeSlot*                               TopHalfSlot;                                              // 0x2D88(0x0008)
	class UOLAnimCustomBlend*                          TopHalfBlend;                                             // 0x2D90(0x0008)
	class UOLAnimBlendByEnemyMode*                     AnimNodeSelectEnemyMode;                                  // 0x2D98(0x0008)
	class USkelControlLookAt*                          HeadTrackingLookAt;                                       // 0x2DA0(0x0008)
	TArray<struct FNanoSwarmEmitter>                   NanoSwarmEmitters;                                        // 0x2DA8(0x0010) (Component, NeedCtorLink)
	float                                              FallingDeathZ;                                            // 0x2DB8(0x0004) (Const)
	float                                              MeshZOffset;                                              // 0x2DBC(0x0004)
	struct FVector                                     MeshOffset2D;                                             // 0x2DC0(0x000C)
	struct FRotator                                    TurnStart;                                                // 0x2DCC(0x000C) (Transient)
	float                                              OldTurnAmount;                                            // 0x2DD8(0x0004) (Transient)
	float                                              TurnAmount;                                               // 0x2DDC(0x0004) (Transient)
	float                                              ThrowRotation;                                            // 0x2DE0(0x0004) (Transient)
	float                                              SpecialMoveBlendAlpha;                                    // 0x2DE4(0x0004)
	float                                              SpecialMoveRate;                                          // 0x2DE8(0x0004)
	float                                              SpecialMoveStalledTimestamp;                              // 0x2DEC(0x0004)
	class UAkEvent*                                    FootStepSound_Run;                                        // 0x2DF0(0x0008)
	class UAkEvent*                                    SoundEventAmbientStart;                                   // 0x2DF8(0x0008)
	class UAkEvent*                                    SoundEventAmbientStop;                                    // 0x2E00(0x0008)
	class UAkEvent*                                    SoundEventIdleStart;                                      // 0x2E08(0x0008)
	class UAkEvent*                                    SoundEventIdleStop;                                       // 0x2E10(0x0008)
	class UOLAIContextualVOAsset*                      VOAsset;                                                  // 0x2E18(0x0008)
	TArray<struct FVOInstance>                         VOInstances;                                              // 0x2E20(0x0010) (Transient, NeedCtorLink)
	TArray<struct FDelayedVO>                          DelayedVOContexts;                                        // 0x2E30(0x0010) (Transient, NeedCtorLink)
	struct FSpeedValues                                NormalSpeedValues;                                        // 0x2E40(0x000C)
	struct FSpeedValues                                DarknessSpeedValues;                                      // 0x2E4C(0x000C)
	struct FSpeedValues                                ElectricitySpeedValues;                                   // 0x2E58(0x000C)
	float                                              MoveSpeed_Target;                                         // 0x2E64(0x0004)
	struct FSpeedValues                                MoveSpeed_Override;                                       // 0x2E68(0x000C)
	float                                              MoveSpeed_AccelRate;                                      // 0x2E74(0x0004)
	float                                              MoveSpeed_DecelRate;                                      // 0x2E78(0x0004)
	float                                              MoveSpeed_SpeedNoVisibility;                              // 0x2E7C(0x0004)
	float                                              MoveSpeed_ChaseSpeedAtMinDist;                            // 0x2E80(0x0004)
	float                                              MoveSpeed_ChaseSpeedAtMaxDist;                            // 0x2E84(0x0004)
	float                                              MoveSpeed_ChaseDistMin;                                   // 0x2E88(0x0004)
	float                                              MoveSpeed_ChaseDistMax;                                   // 0x2E8C(0x0004)
	struct FSpeedValues                                NrmNormalSpeedValues;                                     // 0x2E90(0x000C) (Config)
	struct FSpeedValues                                NrmDarknessSpeedValues;                                   // 0x2E9C(0x000C) (Config)
	struct FSpeedValues                                NrmElectricitySpeedValues;                                // 0x2EA8(0x000C) (Config)
	struct FSpeedValues                                HardNormalSpeedValues;                                    // 0x2EB4(0x000C) (Config)
	struct FSpeedValues                                HardDarknessSpeedValues;                                  // 0x2EC0(0x000C) (Config)
	struct FSpeedValues                                HardElectricitySpeedValues;                               // 0x2ECC(0x000C) (Config)
	float                                              NrmEnemyHearingThreshold;                                 // 0x2ED8(0x0004) (Config)
	float                                              HardEnemyHearingThreshold;                                // 0x2EDC(0x0004) (Config)
	struct FVisionParameters                           LightUnAwareVisionParameters;                             // 0x2EE0(0x0030)
	struct FVisionParameters                           NightvisionUnAwareVisionParameters;                       // 0x2F10(0x0030)
	struct FVisionParameters                           DarkUnAwareVisionParameters;                              // 0x2F40(0x0030)
	struct FVisionParameters                           LightAwareVisionParameters;                               // 0x2F70(0x0030)
	struct FVisionParameters                           NightvisionAwareVisionParameters;                         // 0x2FA0(0x0030)
	struct FVisionParameters                           DarkAwareVisionParameters;                                // 0x2FD0(0x0030)
	struct FVisionParameters                           NrmLightUnAwareVisionParameters;                          // 0x3000(0x0030) (Config)
	struct FVisionParameters                           NrmNightvisionUnAwareVisionParameters;                    // 0x3030(0x0030) (Config)
	struct FVisionParameters                           NrmDarkUnAwareVisionParameters;                           // 0x3060(0x0030) (Config)
	struct FVisionParameters                           NrmLightAwareVisionParameters;                            // 0x3090(0x0030) (Config)
	struct FVisionParameters                           NrmNightvisionAwareVisionParameters;                      // 0x30C0(0x0030) (Config)
	struct FVisionParameters                           NrmDarkAwareVisionParameters;                             // 0x30F0(0x0030) (Config)
	struct FVisionParameters                           HardLightUnAwareVisionParameters;                         // 0x3120(0x0030) (Config)
	struct FVisionParameters                           HardNightvisionUnAwareVisionParameters;                   // 0x3150(0x0030) (Config)
	struct FVisionParameters                           HardDarkUnAwareVisionParameters;                          // 0x3180(0x0030) (Config)
	struct FVisionParameters                           HardLightAwareVisionParameters;                           // 0x31B0(0x0030) (Config)
	struct FVisionParameters                           HardNightvisionAwareVisionParameters;                     // 0x31E0(0x0030) (Config)
	struct FVisionParameters                           HardDarkAwareVisionParameters;                            // 0x3210(0x0030) (Config)
	int                                                NumOfDoorBashLoops;                                       // 0x3240(0x0004) (Config)
	float                                              DoorClosedPathMultiplier;                                 // 0x3244(0x0004) (Config)
	float                                              MoveReactionTime;                                         // 0x3248(0x0004) (Config)
	float                                              WaitLeaveNormalMultiplier;                                // 0x324C(0x0004) (Config)
	float                                              WaitLeaveChaseMultiplier;                                 // 0x3250(0x0004) (Config)
	float                                              UnstuckCheckTime;                                         // 0x3254(0x0004) (Config)
	float                                              LookAheadDistance;                                        // 0x3258(0x0004) (Config)
	float                                              LookAheadUpdateTime;                                      // 0x325C(0x0004) (Config)
	float                                              AttackRange;                                              // 0x3260(0x0004) (Config)
	float                                              AttackGrabChance;                                         // 0x3264(0x0004) (Config)
	float                                              AttackNormalDamage;                                       // 0x3268(0x0004)
	float                                              AttackThrowDamage;                                        // 0x326C(0x0004)
	float                                              NrmAttackNormalDamage;                                    // 0x3270(0x0004) (Config)
	float                                              NrmAttackThrowDamage;                                     // 0x3274(0x0004) (Config)
	float                                              HardAttackNormalDamage;                                   // 0x3278(0x0004) (Config)
	float                                              HardAttackThrowDamage;                                    // 0x327C(0x0004) (Config)
	float                                              AttackNormalRecovery;                                     // 0x3280(0x0004) (Config)
	float                                              AttackThrowRecovery;                                      // 0x3284(0x0004) (Config)
	float                                              AttackNormalKnockbackPower;                               // 0x3288(0x0004) (Config)
	float                                              AttackPushKnockbackPower;                                 // 0x328C(0x0004) (Config)
	float                                              DoorBashDamage;                                           // 0x3290(0x0004)
	float                                              NrmDoorBashDamage;                                        // 0x3294(0x0004) (Config)
	float                                              HardDoorBashDamage;                                       // 0x3298(0x0004) (Config)
	float                                              DoorBashKnockbackPower;                                   // 0x329C(0x0004) (Config)
	float                                              VaultDamage;                                              // 0x32A0(0x0004)
	float                                              NrmVaultDamage;                                           // 0x32A4(0x0004) (Config)
	float                                              HardVaultDamage;                                          // 0x32A8(0x0004) (Config)
	float                                              VaultKnockbackPower;                                      // 0x32AC(0x0004) (Config)
	float                                              AttackSqueezeRange;                                       // 0x32B0(0x0004) (Config)
	float                                              AttackSqueezeCycleTime;                                   // 0x32B4(0x0004) (Config)
	float                                              AttackIdleTimeAfterGrab;                                  // 0x32B8(0x0004) (Config)
	float                                              AttackQuickSpeedThreshold;                                // 0x32BC(0x0004) (Config)
	float                                              AttackQuickAngleThreshold;                                // 0x32C0(0x0004) (Config)
	float                                              AttackQuickDistanceThreshold;                             // 0x32C4(0x0004) (Config)
	int                                                InvestigationNumPointsGenerated;                          // 0x32C8(0x0004) (Config)
	float                                              InvestigationMinRadius;                                   // 0x32CC(0x0004) (Config)
	float                                              InvestigationMaxRadius;                                   // 0x32D0(0x0004) (Config)
	float                                              InvestigationMaxPathDistance;                             // 0x32D4(0x0004) (Config)
	float                                              InvestigationFirstPointAngle;                             // 0x32D8(0x0004) (Config)
	float                                              InvestigationNormalWeight;                                // 0x32DC(0x0004) (Config)
	float                                              InvestigationLockerWeight;                                // 0x32E0(0x0004) (Config)
	float                                              InvestigationLockerOccupiedWeight;                        // 0x32E4(0x0004) (Config)
	float                                              InvestigationBedWeight;                                   // 0x32E8(0x0004) (Config)
	float                                              InvestigationBedOccupiedWeight;                           // 0x32EC(0x0004) (Config)
	float                                              InvestigateBedAlternateChance;                            // 0x32F0(0x0004) (Config)
	float                                              InvestigationFindHiddenPlayerProbability;                 // 0x32F4(0x0004) (Config)
	struct FName                                       VisionBone;                                               // 0x32F8(0x0008) (Const)
	struct FName                                       WeaponAttachBone;                                         // 0x3300(0x0008) (Const)
	struct FName                                       HipBone;                                                  // 0x3308(0x0008) (Const)
	float                                              AttackSqueezeVisibleRangeToNode;                          // 0x3310(0x0004) (Const)
	float                                              AttackSqueezeHiddenRangeToTarget;                         // 0x3314(0x0004) (Const)
	float                                              DoorOpenDistancePush;                                     // 0x3318(0x0004) (Const)
	float                                              DoorOpenDistancePull;                                     // 0x331C(0x0004) (Const)
	float                                              DoorBreakDistance;                                        // 0x3320(0x0004) (Const)
	float                                              DoorChasingBreakDistance;                                 // 0x3324(0x0004) (Const)
	float                                              DoorBreakFinishDistance;                                  // 0x3328(0x0004) (Const)
	float                                              NormalDropDownDistance;                                   // 0x332C(0x0004) (Const)
	float                                              NormalClimbUpDistance;                                    // 0x3330(0x0004) (Const)
	float                                              ChasingDropDownDistance;                                  // 0x3334(0x0004) (Const)
	float                                              ChasingClimbUpDistance;                                   // 0x3338(0x0004) (Const)
	float                                              WallBashDistance;                                         // 0x333C(0x0004) (Const)
	float                                              WallBashTime;                                             // 0x3340(0x0004) (Const)
	float                                              TableBashDistance;                                        // 0x3344(0x0004) (Const)
	struct FVector                                     DoorOpenEndOffsetPushLeft;                                // 0x3348(0x000C) (Const)
	struct FVector                                     DoorOpenEndOffsetPushRight;                               // 0x3354(0x000C) (Const)
	struct FVector                                     DoorOpenEndOffsetPullLeft;                                // 0x3360(0x000C) (Const)
	struct FVector                                     DoorOpenEndOffsetPullRight;                               // 0x336C(0x000C) (Const)
	struct FVector                                     DoorOpenEndOffsetPushLeftWithClose;                       // 0x3378(0x000C) (Const)
	struct FVector                                     DoorOpenEndOffsetPushRightWithClose;                      // 0x3384(0x000C) (Const)
	struct FVector                                     DoorOpenEndOffsetPullLeftWithClose;                       // 0x3390(0x000C) (Const)
	struct FVector                                     DoorOpenEndOffsetPullRightWithClose;                      // 0x339C(0x000C) (Const)
	struct FVector                                     DoorBashEndOffset;                                        // 0x33A8(0x000C) (Const)
	struct FVector                                     LockerInvestigateOffset;                                  // 0x33B4(0x000C) (Const)
	struct FVector                                     LockerAttackOffset;                                       // 0x33C0(0x000C) (Const)
	struct FVector                                     BedInvestigateOffsetLeft;                                 // 0x33CC(0x000C) (Const)
	struct FVector                                     BedInvestigateOffsetRight;                                // 0x33D8(0x000C) (Const)
	struct FVector                                     BedAttackOffsetLeft;                                      // 0x33E4(0x000C) (Const)
	struct FVector                                     BedAttackOffsetRight;                                     // 0x33F0(0x000C) (Const)
	float                                              GrabTargetVelocity;                                       // 0x33FC(0x0004) (Const)
	struct FVector                                     SqueezeAttackOffset;                                      // 0x3400(0x000C) (Const)
	float                                              SwarmXplodBackOffset;                                     // 0x340C(0x0004) (Const)
	float                                              GrabDistance;                                             // 0x3410(0x0004) (Const)
	float                                              KillDistance;                                             // 0x3414(0x0004) (Const)
	float                                              ThrowStartPlayerDistance;                                 // 0x3418(0x0004) (Const)
	float                                              ThrowStartPlayerZOffset;                                  // 0x341C(0x0004) (Const)
	class UClass*                                      InstantKillDmgType;                                       // 0x3420(0x0008) (Const)
	class UClass*                                      AttackNormalDmgType;                                      // 0x3428(0x0008) (Const)
	class UClass*                                      AttackThrowDmgType;                                       // 0x3430(0x0008) (Const)
	float                                              AvoidRatePatrol;                                          // 0x3438(0x0004) (Const)
	float                                              AvoidRateInvestigate;                                     // 0x343C(0x0004) (Const)
	float                                              AvoidRateChase;                                           // 0x3440(0x0004) (Const)
	struct FString                                     SoundSwitchDoorMaterial;                                  // 0x3444(0x0010) (Const, NeedCtorLink)
	struct FString                                     SoundSwitchParamDMWood;                                   // 0x3454(0x0010) (Const, NeedCtorLink)
	struct FString                                     SoundSwitchParamDMMetal;                                  // 0x3464(0x0010) (Const, NeedCtorLink)
	struct FString                                     SoundSwitchParamDMSecurity;                               // 0x3474(0x0010) (Const, NeedCtorLink)
	struct FString                                     SoundSwitchParamDMBigPrison;                              // 0x3484(0x0010) (Const, NeedCtorLink)
	struct FName                                       SoundSwitchWeaponType;                                    // 0x3494(0x0008) (Const)
	struct FName                                       SoundSwitchWeaponTypeParams[0x9];                         // 0x349C(0x0008) (Const)
	struct FName                                       AnimNameClimbUp50;                                        // 0x34E4(0x0008) (Const)
	struct FName                                       AnimNameClimbUp100;                                       // 0x34EC(0x0008) (Const)
	struct FName                                       AnimNameClimbDown50;                                      // 0x34F4(0x0008) (Const)
	struct FName                                       AnimNameClimbDown100;                                     // 0x34FC(0x0008) (Const)
	struct FName                                       AnimNameClimbUp50Chase;                                   // 0x3504(0x0008) (Const)
	struct FName                                       AnimNameClimbUp100Chase;                                  // 0x350C(0x0008) (Const)
	struct FName                                       AnimNameClimbDown50Chase;                                 // 0x3514(0x0008) (Const)
	struct FName                                       AnimNameClimbDown100Chase;                                // 0x351C(0x0008) (Const)
	struct FName                                       AnimNameVault;                                            // 0x3524(0x0008) (Const)
	struct FName                                       AnimNameOpenDoorLeftPull;                                 // 0x352C(0x0008) (Const)
	struct FName                                       AnimNameOpenDoorLeftPush;                                 // 0x3534(0x0008) (Const)
	struct FName                                       AnimNameOpenDoorRightPull;                                // 0x353C(0x0008) (Const)
	struct FName                                       AnimNameOpenDoorRightPush;                                // 0x3544(0x0008) (Const)
	struct FName                                       AnimNameOpenDoorLeftPullWithClose;                        // 0x354C(0x0008) (Const)
	struct FName                                       AnimNameOpenDoorLeftPushWithClose;                        // 0x3554(0x0008) (Const)
	struct FName                                       AnimNameOpenDoorRightPullWithClose;                       // 0x355C(0x0008) (Const)
	struct FName                                       AnimNameOpenDoorRightPushWithClose;                       // 0x3564(0x0008) (Const)
	struct FName                                       AnimNameBashDoor;                                         // 0x356C(0x0008) (Const)
	struct FName                                       AnimNameBashDoorStart;                                    // 0x3574(0x0008) (Const)
	struct FName                                       AnimNameBashDoorLoop;                                     // 0x357C(0x0008) (Const)
	struct FName                                       AnimNameBashDoorEnd;                                      // 0x3584(0x0008) (Const)
	struct FName                                       AnimNameBashDoorEndEquip;                                 // 0x358C(0x0008) (Const)
	struct FName                                       AnimNameBashDoorFailed;                                   // 0x3594(0x0008) (Const)
	struct FName                                       AnimNameBashDoorChase;                                    // 0x359C(0x0008) (Const)
	struct FName                                       AnimNameNanoDoor;                                         // 0x35A4(0x0008) (Const)
	struct FName                                       AnimNameAttack;                                           // 0x35AC(0x0008) (Const)
	struct FName                                       AnimNameAttackLeft;                                       // 0x35B4(0x0008) (Const)
	struct FName                                       AnimNameAttackRight;                                      // 0x35BC(0x0008) (Const)
	struct FName                                       AnimNameAttackMiddle;                                     // 0x35C4(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeRightStart;                            // 0x35CC(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeRightStartToWait;                      // 0x35D4(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeRightWait;                             // 0x35DC(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeRightWaitToFail;                       // 0x35E4(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeRightWaitToSuccess;                    // 0x35EC(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeRightSuccess;                          // 0x35F4(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeLeftStart;                             // 0x35FC(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeLeftStartToWait;                       // 0x3604(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeLeftWait;                              // 0x360C(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeLeftWaitToFail;                        // 0x3614(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeLeftWaitToSuccess;                     // 0x361C(0x0008) (Const)
	struct FName                                       AnimNameGrabSqueezeLeftSuccess;                           // 0x3624(0x0008) (Const)
	struct FName                                       AnimNameBashWallChase;                                    // 0x362C(0x0008) (Const)
	struct FName                                       AnimNameBashTableChase;                                   // 0x3634(0x0008) (Const)
	struct FName                                       AnimNameIdle;                                             // 0x363C(0x0008) (Const)
	struct FName                                       AnimNameIdlePose;                                         // 0x3644(0x0008) (Const)
	struct FName                                       AnimNameTurnOnSpotLeft90;                                 // 0x364C(0x0008) (Const)
	struct FName                                       AnimNameTurnOnSpotLeft180;                                // 0x3654(0x0008) (Const)
	struct FName                                       AnimNameTurnOnSpotRight90;                                // 0x365C(0x0008) (Const)
	struct FName                                       AnimNameTurnOnSpotRight180;                               // 0x3664(0x0008) (Const)
	struct FName                                       AnimNameIdleChase;                                        // 0x366C(0x0008) (Const)
	struct FName                                       AnimNameIdlePoseChase;                                    // 0x3674(0x0008) (Const)
	struct FName                                       AnimNameTurnOnSpotLeft90Chase;                            // 0x367C(0x0008) (Const)
	struct FName                                       AnimNameTurnOnSpotLeft180Chase;                           // 0x3684(0x0008) (Const)
	struct FName                                       AnimNameTurnOnSpotRight90Chase;                           // 0x368C(0x0008) (Const)
	struct FName                                       AnimNameTurnOnSpotRight180Chase;                          // 0x3694(0x0008) (Const)
	struct FName                                       AnimNameGrabNormal;                                       // 0x369C(0x0008) (Const)
	struct FName                                       AnimNameGrabCrouch;                                       // 0x36A4(0x0008) (Const)
	struct FName                                       AnimNameGrabBedLeft;                                      // 0x36AC(0x0008) (Const)
	struct FName                                       AnimNameGrabBedRight;                                     // 0x36B4(0x0008) (Const)
	struct FName                                       AnimNameGrabUnder;                                        // 0x36BC(0x0008) (Const)
	struct FName                                       AnimNameGrabLocker;                                       // 0x36C4(0x0008) (Const)
	struct FName                                       AnimNameThrowPlayer;                                      // 0x36CC(0x0008) (Const)
	struct FName                                       AnimNameThrowPlayerLeft90;                                // 0x36D4(0x0008) (Const)
	struct FName                                       AnimNameThrowPlayerLeft180;                               // 0x36DC(0x0008) (Const)
	struct FName                                       AnimNameThrowPlayerRight90;                               // 0x36E4(0x0008) (Const)
	struct FName                                       AnimNameThrowPlayerRight180;                              // 0x36EC(0x0008) (Const)
	struct FName                                       AnimNameSearchLocker;                                     // 0x36F4(0x0008) (Const)
	struct FName                                       AnimNameSearchBedLeft;                                    // 0x36FC(0x0008) (Const)
	struct FName                                       AnimNameSearchBedLeftAlt;                                 // 0x3704(0x0008) (Const)
	struct FName                                       AnimNameSearchBedRight;                                   // 0x370C(0x0008) (Const)
	struct FName                                       AnimNameSearchBedRightAlt;                                // 0x3714(0x0008) (Const)
	struct FName                                       AnimNameGrabFatality;                                     // 0x371C(0x0008) (Const)
	struct FName                                       AnimNameRunChaseToIdleChase;                              // 0x3724(0x0008) (Const)
	struct FName                                       AnimNameWalkToIdle;                                       // 0x372C(0x0008) (Const)
	struct FName                                       AnimNamePushForward;                                      // 0x3734(0x0008) (Const)
	struct FName                                       AnimNamePushLeft;                                         // 0x373C(0x0008) (Const)
	struct FName                                       AnimNamePushRight;                                        // 0x3744(0x0008) (Const)
	struct FName                                       AnimNameAvoidLeft;                                        // 0x374C(0x0008) (Const)
	struct FName                                       AnimNameAvoidRight;                                       // 0x3754(0x0008) (Const)
	struct FName                                       AnimNameKnockbackLeft;                                    // 0x375C(0x0008) (Const)
	struct FName                                       AnimNameKnockbackRight;                                   // 0x3764(0x0008) (Const)
	struct FName                                       AnimNameEquipWeapon;                                      // 0x376C(0x0008) (Const)
	struct FName                                       AnimNameUnequipWeapon;                                    // 0x3774(0x0008) (Const)
	struct FName                                       AnimNameChokeFatality;                                    // 0x377C(0x0008) (Const)
	struct FName                                       AnimNameBackstabFatality;                                 // 0x3784(0x0008) (Const)
	struct FName                                       AnimNameClubFatalityBack;                                 // 0x378C(0x0008) (Const)
	struct FName                                       AnimNameClubFatalityFront;                                // 0x3794(0x0008) (Const)
	struct FName                                       AnimNameStabChopFatality;                                 // 0x379C(0x0008) (Const)
	struct FName                                       AnimNameFatalityXplodeBack;                               // 0x37A4(0x0008) (Const)
	struct FName                                       AnimNameFatalityXplode;                                   // 0x37AC(0x0008) (Const)
	struct FName                                       AnimNameFatalityLocker;                                   // 0x37B4(0x0008) (Const)
	struct FName                                       AnimNameDisturbedFrontLeft;                               // 0x37BC(0x0008) (Const)
	struct FName                                       AnimNameDisturbedFrontRight;                              // 0x37C4(0x0008) (Const)
	struct FName                                       AnimNameDisturbedLeft90;                                  // 0x37CC(0x0008) (Const)
	struct FName                                       AnimNameDisturbedLeft180;                                 // 0x37D4(0x0008) (Const)
	struct FName                                       AnimNameDisturbedRight90;                                 // 0x37DC(0x0008) (Const)
	struct FName                                       AnimNameDisturbedRight180;                                // 0x37E4(0x0008) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyPawn");
		return ptr;
	}


	void PlayContextualVO(TEnumAsByte<EVOContext> VOContext, float DelayTime);
	void PlayFootStepSound(int FootDown, class UAnimNotify_Footstep* footstepNotify);
	void FinishAIGroup();
	void BeginAIGroup();
	void StartMatinee(const struct FVector& StartLoc, const struct FRotator& StartRot, float BlendTime);
	void OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void StartDisturbed();
	void StartNormalAttack();
	void StartDoorKnockback(const struct FVector& Direction, bool bLocker);
	void StartKnockback(class AOLHero* Hero, const struct FVector& HitNormal);
	void StartAvoid(class AOLEnemyPawn* OtherPawn);
	void TurnOnSpot(const struct FRotator& EndRotation);
	void PlayFullBodyAnim(const struct FName& AnimName, float Rate, float BlendInTime, float BlendOutTime, bool bLooping, float StartTime, float EndTime);
	void DisableRootMotion();
	void EnableRootMotion();
	void StopIdleSound();
	void StartIdleSound();
	void HideWeaponMatinee();
	void ShowWeaponMatinee();
	void HideWeapon();
	void ShowWeapon();
	void ResetAnimationMode();
	void PushNotify();
	void KnockbackTickNotify();
	void KnockbackStartNotify();
	void BreakDoorNotify();
	void BashDoorNotify();
	void DamageTargetRangeTickNotify();
	void DamageTargetRangeStartNotify();
	void DamageTarget();
	void Destroyed();
	void BuildScriptAnimSetList();
	void UpdateDifficultyBasedValues();
	void ApplyModifiers(const struct FEnemyModifiers& NewModifiers);
	void PostInitAnimTree(class USkeletalMeshComponent* SkelComp);
	void PossessedBy(class AController* C, bool bVehicleTransition);
	void ZeroMovementVariables();
	void PostBeginPlay();
	void AIStartingMove();
	bool HasRegisteredNavMeshRecently();
	void UpdateNavMeshObstacle();
	void CancelSpecialMove();
	void StartSpecialMove(TEnumAsByte<ESpecialMoveType> moveType, const struct FVector& targetPosition, const struct FVector& TargetDirection, TEnumAsByte<EAdjustPositionTargetType> TargetType);
	void UnregisterNavmeshObstacle();
	void RegisterNavMeshObstacle();
};


// Class OLGame.ActorFactoryOLAI
// 0x005C (0x0130 - 0x00D4)
class UActorFactoryOLAI : public UActorFactoryAI
{
public:
	class UOLBTBehaviorTree*                           BehaviorTree;                                             // 0x00D4(0x0008) (Edit)
	class USkeletalMesh*                               MeshOverride;                                             // 0x00DC(0x0008) (Edit)
	struct FShaderValues                               ShaderOverrides;                                          // 0x00E4(0x0014) (Edit)
	struct FName                                       UniformColorName;                                         // 0x00F8(0x0008) (Const)
	unsigned long                                      bOverrideLightingFlags : 1;                               // 0x0100(0x0004) (Edit)
	unsigned long                                      bCastStaticShadow : 1;                                    // 0x0100(0x0004) (Edit)
	unsigned long                                      bCastDynamicShadow : 1;                                   // 0x0100(0x0004) (Edit)
	unsigned long                                      bSelfShadowOnly : 1;                                      // 0x0100(0x0004) (Edit)
	unsigned long                                      bCastShadowInNightVision : 1;                             // 0x0100(0x0004) (Edit)
	unsigned long                                      bPlaySpawnWaypointAnim : 1;                               // 0x0100(0x0004) (Edit)
	unsigned long                                      ShouldAttack : 1;                                         // 0x0100(0x0004) (Deprecated)
	unsigned long                                      bUseKillingBlow : 1;                                      // 0x0100(0x0004) (Deprecated)
	unsigned long                                      bAlwaysLookAtPlayer : 1;                                  // 0x0100(0x0004) (Deprecated)
	struct FEnemyModifiers                             PawnModifiers;                                            // 0x0104(0x0014) (Edit)
	TArray<class UAnimSet*>                            AdditionalAnimSets;                                       // 0x0118(0x0010) (Edit, NeedCtorLink)
	class UOLAIContextualVOAsset*                      VOAsset;                                                  // 0x0128(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.ActorFactoryOLAI");
		return ptr;
	}

};


// Class OLGame.ActorFactoryOLWaypoint
// 0x0000 (0x009C - 0x009C)
class UActorFactoryOLWaypoint : public UActorFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.ActorFactoryOLWaypoint");
		return ptr;
	}

};


// Class OLGame.OLBot
// 0x02C8 (0x0764 - 0x049C)
class AOLBot : public AGameAIController
{
public:
	class AOLEnemyPawn*                                EnemyPawn;                                                // 0x049C(0x0008)
	class AOLAIGroup*                                  Group;                                                    // 0x04A4(0x0008)
	class AOLHero*                                     TargetPlayer;                                             // 0x04AC(0x0008)
	class UOLNavigationHandle*                         OLNavHandle;                                              // 0x04B4(0x0008)
	unsigned long                                      bReGeneratePath : 1;                                      // 0x04BC(0x0004)
	unsigned long                                      bRegenerateWhilePerforming : 1;                           // 0x04BC(0x0004)
	unsigned long                                      bDebugBehaviorTransitions : 1;                            // 0x04BC(0x0004) (Edit)
	unsigned long                                      bDebugThrowCalculations : 1;                              // 0x04BC(0x0004) (Edit)
	unsigned long                                      ShouldRecalculate : 1;                                    // 0x04BC(0x0004)
	unsigned long                                      bForceRecalculate : 1;                                    // 0x04BC(0x0004)
	unsigned long                                      bOpeningDoor : 1;                                         // 0x04BC(0x0004)
	unsigned long                                      bBreachingDoor : 1;                                       // 0x04BC(0x0004)
	unsigned long                                      bTrimmedToDoor : 1;                                       // 0x04BC(0x0004)
	unsigned long                                      bFinishedDoor : 1;                                        // 0x04BC(0x0004)
	unsigned long                                      bCancelBash : 1;                                          // 0x04BC(0x0004)
	unsigned long                                      bWasChasing : 1;                                          // 0x04BC(0x0004)
	unsigned long                                      bMoveCancelled : 1;                                       // 0x04BC(0x0004)
	unsigned long                                      bTurning : 1;                                             // 0x04BC(0x0004)
	unsigned long                                      InAttackRange : 1;                                        // 0x04BC(0x0004)
	unsigned long                                      bInDarkness : 1;                                          // 0x04BC(0x0004)
	unsigned long                                      bTargetInDarkness : 1;                                    // 0x04BC(0x0004)
	unsigned long                                      bInElectricity : 1;                                       // 0x04BC(0x0004)
	unsigned long                                      bEnableHeadTracking : 1;                                  // 0x04BC(0x0004) (Transient)
	unsigned long                                      bAvoiding : 1;                                            // 0x04BC(0x0004)
	unsigned long                                      bPatrolToPlayer : 1;                                      // 0x04BC(0x0004)
	unsigned long                                      bReversePatrolRoute : 1;                                  // 0x04BC(0x0004)
	unsigned long                                      bNewDisturbance : 1;                                      // 0x04BC(0x0004)
	unsigned long                                      bNoTrimDisturbance : 1;                                   // 0x04BC(0x0004)
	unsigned long                                      bDisturbed : 1;                                           // 0x04BC(0x0004)
	unsigned long                                      bInvestigationValid : 1;                                  // 0x04BC(0x0004)
	unsigned long                                      bIsInvestigating : 1;                                     // 0x04BC(0x0004)
	unsigned long                                      bInvestigationFirstPoint : 1;                             // 0x04BC(0x0004)
	unsigned long                                      bInvestigationPointValid : 1;                             // 0x04BC(0x0004)
	unsigned long                                      bInvestigatingObject : 1;                                 // 0x04BC(0x0004)
	unsigned long                                      bAttacking : 1;                                           // 0x04BC(0x0004)
	unsigned long                                      bAttackRight : 1;                                         // 0x04BC(0x0004)
	unsigned long                                      bAttackCycling : 1;                                       // 0x04C0(0x0004)
	unsigned long                                      bKilling : 1;                                             // 0x04C0(0x0004)
	unsigned long                                      bUseQuickAttack : 1;                                      // 0x04C0(0x0004)
	unsigned long                                      bDamageTargetTicking : 1;                                 // 0x04C0(0x0004)
	unsigned long                                      bTookDamage : 1;                                          // 0x04C0(0x0004)
	unsigned long                                      bKnockedBack : 1;                                         // 0x04C0(0x0004)
	struct FVector                                     NavigationExtent;                                         // 0x04C4(0x000C)
	class UOLAISightComponent*                         SightComponent;                                           // 0x04D0(0x0008) (ExportObject, Component, EditInline)
	class UOLBTBehavior*                               RootBehavior;                                             // 0x04D8(0x0008)
	struct FName                                       InterruptionState;                                        // 0x04E0(0x0008)
	TEnumAsByte<EAIBehaviorState>                      BehaviorState;                                            // 0x04E8(0x0001)
	TEnumAsByte<EAIBehaviorState>                      LastBehaviorState;                                        // 0x04E9(0x0001)
	TEnumAsByte<EAIEnvironment>                        CurrentEnvironment;                                       // 0x04EA(0x0001)
	TEnumAsByte<EMoveStatus>                           CurrentMoveStatus;                                        // 0x04EB(0x0001)
	TEnumAsByte<EMoveFailedReason>                     LastMoveFailedReason;                                     // 0x04EC(0x0001)
	unsigned char                                      CurrentBedSide;                                           // 0x04ED(0x0001)
	unsigned char                                      bPatrolComplete;                                          // 0x04EE(0x0001)
	TEnumAsByte<EEnemyMode>                            PatrolMode;                                               // 0x04EF(0x0001)
	TEnumAsByte<EAIAttackType>                         CurrentAttackType;                                        // 0x04F0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	struct FMovementData                               CurrentMove;                                              // 0x04F4(0x002C)
	struct FMovementData                               NextMove;                                                 // 0x0520(0x002C)
	float                                              DynamicPathCheckTime;                                     // 0x054C(0x0004) (Const)
	class UGameAICommand*                              QueuedCommand;                                            // 0x0550(0x0008)
	class AOLDoor*                                     ActiveDoor;                                               // 0x0558(0x0008)
	class AOLLedgeMarker*                              ActiveLedge;                                              // 0x0560(0x0008)
	class AOLBashableObject*                           ActiveBashable;                                           // 0x0568(0x0008)
	class AOLBed*                                      ActiveBed;                                                // 0x0570(0x0008)
	class AOLHidingSpot*                               ActiveLocker;                                             // 0x0578(0x0008)
	class AOLAIVaultMarker*                            ActiveVault;                                              // 0x0580(0x0008)
	class UOLWaitPointComponent*                       ActiveWPComponent;                                        // 0x0588(0x0008) (ExportObject, Component, EditInline)
	struct FVector                                     MoveTempDest;                                             // 0x0590(0x000C)
	struct FVector                                     MoveLastLocation;                                         // 0x059C(0x000C)
	float                                              MoveTimeSinceLastPath;                                    // 0x05A8(0x0004)
	float                                              TempTrimAmount;                                           // 0x05AC(0x0004)
	TArray<struct FVector>                             MoveTempPath;                                             // 0x05B0(0x0010) (NeedCtorLink)
	float                                              MoveModifiedBufferDist;                                   // 0x05C0(0x0004) (Transient)
	float                                              CheckStuckTimer;                                          // 0x05C4(0x0004)
	float                                              CheckStuckSpeedThreshold;                                 // 0x05C8(0x0004) (Const)
	float                                              LookAheadTimer;                                           // 0x05CC(0x0004)
	float                                              StuckRepathDelayTimer;                                    // 0x05D0(0x0004)
	float                                              StuckRepathDelayLength;                                   // 0x05D4(0x0004) (Const)
	float                                              IgnoreTimer;                                              // 0x05D8(0x0004)
	float                                              AIMoveReactionTimer;                                      // 0x05DC(0x0004)
	struct FWaitPoint                                  CurrentWaitPoint;                                         // 0x05E0(0x0024)
	float                                              WaitForMoveTime;                                          // 0x0604(0x0004)
	struct FAnimationData                              CurrentAnimation;                                         // 0x0608(0x003C)
	struct FRotator                                    TurnToDirection;                                          // 0x0644(0x000C)
	float                                              PatrolToPlayerDistance;                                   // 0x0650(0x0004)
	float                                              PatrolToPlayerUpdateRate;                                 // 0x0654(0x0004)
	float                                              PatrolToPlayerLastUpdated;                                // 0x0658(0x0004)
	struct FVector                                     PatrolToPlayerLastLocation;                               // 0x065C(0x000C)
	class ARoute*                                      PatrolRoute;                                              // 0x0668(0x0008)
	int                                                PatrolRouteIndex;                                         // 0x0670(0x0004)
	int                                                NextPatrolRouteIndex;                                     // 0x0674(0x0004)
	TArray<struct FDelayedNoise>                       DelayedNoises;                                            // 0x0678(0x0010) (AlwaysInit, NeedCtorLink)
	struct FDisturbance                                VisualDisturbance;                                        // 0x0688(0x0010)
	struct FDisturbance                                AudioDisturbance;                                         // 0x0698(0x0010)
	float                                              NewDisturbanceResetTimer;                                 // 0x06A8(0x0004)
	float                                              IgnoreDisturbanceTimer;                                   // 0x06AC(0x0004)
	float                                              DebugLastLoudness;                                        // 0x06B0(0x0004) (Transient)
	float                                              DebugLastOcclusion;                                       // 0x06B4(0x0004) (Transient)
	float                                              DebugLastDistance;                                        // 0x06B8(0x0004) (Transient)
	TArray<class AOLBot*>                              InvestigatingBots;                                        // 0x06BC(0x0010) (NeedCtorLink)
	TArray<struct FInvestigationPoint>                 InvestigationPoints;                                      // 0x06CC(0x0010) (NeedCtorLink)
	float                                              InvestigateTotalWeight;                                   // 0x06DC(0x0004)
	class AOLAIInvestigationVolume*                    InvestigationVolume;                                      // 0x06E0(0x0008)
	struct FVector                                     InvestigationOrigin;                                      // 0x06E8(0x000C)
	class AOLBot*                                      InvestigationOwner;                                       // 0x06F4(0x0008)
	struct FInvestigationPoint                         CurrentInvestigationPoint;                                // 0x06FC(0x001C)
	struct FVector                                     InvestigateStartLocation;                                 // 0x0718(0x000C)
	struct FVector                                     InvestigateStartRotation;                                 // 0x0724(0x000C)
	float                                              CurrentNoiseValue;                                        // 0x0730(0x0004)
	float                                              TimeSinceNoise;                                           // 0x0734(0x0004)
	float                                              AttackTimer;                                              // 0x0738(0x0004)
	struct FVector                                     AttackStartLocation;                                      // 0x073C(0x000C)
	struct FVector                                     AttackStartRotation;                                      // 0x0748(0x000C)
	struct FVector                                     GrabTargetStartLocation;                                  // 0x0754(0x000C)
	float                                              ThrowPlayerRotation;                                      // 0x0760(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBot");
		return ptr;
	}


	void OnAIMoveToActor(class USeqAct_AIMoveToActor* Action);
	void FinishMatinee();
	void BeginMatinee();
	void OnAIInvestigatePoint(class UOLSeqAct_AIInvestigatePoint* Action);
	void ToggleAIAttackOnProximity(bool bEnable);
	void OnToggleAIAttackOnProximity(class UOLSeqAct_ToggleAIAttackOnProximity* Action);
	void ToggleAIAlwaysSeePlayer(bool bEnable);
	void OnToggleAIAlwaysSeePlayer(class UOLSeqAct_ToggleAIAlwaysSeePlayer* Action);
	void IgnoreTarget(float Time);
	void ToggleAIIgnorePlayer(bool bEnable);
	void OnToggleAIIgnorePlayer(class UOLSeqAct_ToggleAIIgnorePlayer* Action);
	void OnAIAbortPatrol(class UOLSeqAct_AIAbortPatrol* Action);
	void StopPatrol(bool bAbort);
	void OnAIStartPatrol(class UOLSeqAct_AIStartPatrol* Action);
	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
	void STATIC_DrawDebugStates(class UObject* anObject, class UCanvas* aCanvas, float XL, float XPos, float* out_YL, float* out_YPos);
	void DebugMessagePlayer(const struct FString& msg);
	void ClearDestination();
	void ClearDisturbance();
	void ClearInvestigation();
	void TriggerVisualDisturbance(const struct FVector& DisturbanceLocation, bool bFromGroup);
	void TriggerAudioDisturbance(const struct FVector& DisturbanceLocation, bool bFromGroup, bool bNewInvestigate, bool bNoTrim, bool bIgnoreDisturbs);
	void LostTarget(bool bAfterChase);
	bool IsAtTrimmedDoor();
	bool GetDoorApproachPoint(class AOLDoor* aDoor, struct FVector* ApproachPoint);
	void EndDoorTraversal();
	void StartDoorTraversal(bool bReversed);
	struct FVector GetSqueezePoint(class AOLSqueezeVolume* Squeeze);
	bool GetClosestPointOnNavMesh(const struct FVector& PointToCheck, struct FVector* out_NewPoint);
	void MoveAlongPath(TArray<struct FVector> PathPoints, class AActor* FocusTarget);
	void ClearNextMove();
	void ClearCurrentMove();
	void StartWaitForDoor();
	void StopMoving(bool bAborted);
	bool TargetReachable();
	bool GetClosestPointToActor(class AActor* ActorToCheck, struct FVector* NewPoint, float* NewBuffer);
	bool StartMove(const struct FMovementData& aData);
	bool IsAlreadyAtDestination(const struct FMovementData& aData);
	bool CompareMoves(const struct FMovementData& Data1, const struct FMovementData& Data2);
	class AOLWaypoint* GetCurrentWaypoint();
	bool ChooseClosestPatrolWaypoint();
	bool ChooseNextPatrolWaypoint();
	bool NotifyBump(class AActor* Other, const struct FVector& HitNormal);
	void RegeneratePath();
	void NotifyPathChanged();
	bool GeneratePathToLocation(const struct FVector& Goal, float WithinDistance, bool bAllowPartialPath);
	bool GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath);
	void AddBasePathContraints();
	void Recalculate(bool bForce);
	void PushNotify();
	void KnockbackTickNotify();
	bool IsPlayerOnVaultingPath();
	bool IsPlayerOnBrokenSideOfDoor(class AOLDoor* door);
	void KnockbackStartNotify();
	void BreakDoorNotify();
	void BashDoorNotify();
	void DamageTargetRangeTickNotify();
	void DamageTargetRangeStartNotify();
	void DamageTarget();
	bool IsInDamageRange();
	bool IsInFinalAttackRange();
	bool IsInApproachAttackRange();
	bool IsInAttackRange();
	bool InvestigateObject(class AActor* anActor);
	bool TryGrabUnder();
	bool TryGrabNormal(bool bCrouched);
	void AttackCycleEnd();
	bool AttackTarget(TEnumAsByte<EAIAttackType> aType);
	void UpdateAnimationMode();
	void TriggerDisturbed();
	void StartAnimating(const struct FAnimationData& aAnim, const struct FRotator& Direction);
	void ClearAnimation();
	bool CompareAnimations(const struct FAnimationData& AnimDataOne, const struct FAnimationData& AnimDataTwo);
	void TurnTo(const struct FRotator& Direction);
	bool PerformAttackCheck();
	bool PerformGrabCheck();
	bool IsPerformingMoveAbility();
	void WaitForSpecialMove(bool bNoDelay);
	void WaitForFullBodyAnim();
	void PlayFullBodyAnim(const struct FName& AnimName, float Rate, float BlendInTime, float BlendOutTime, bool bLooping, float StartTime, float EndTime);
	void PushQueuedCommand();
	bool QueueAICommand(class UGameAICommand* Cmd);
	void UnPossess();
	void AddToAIGroup();
	void Possess(class APawn* aPawn, bool bVehicleTransition);
	void Destroyed();
	void FindPlayer();
	void InitNavigationHandle();
	void PostBeginPlay();
};


// Class OLGame.OLAICmd_MoveAbility
// 0x0064 (0x00E8 - 0x0084)
class UOLAICmd_MoveAbility : public UGameAICommand
{
public:
	struct FVector                                     CurrentDestination;                                       // 0x0084(0x000C)
	unsigned long                                      bReversed : 1;                                            // 0x0090(0x0004)
	unsigned long                                      bAtWaitPoint : 1;                                         // 0x0090(0x0004) (Transient)
	class UOLWaitPointComponent*                       WaitPointComponent;                                       // 0x0094(0x0008) (ExportObject, Component, EditInline)
	struct FWaitPoint                                  CurrentWaitPoint;                                         // 0x009C(0x0024)
	class AOLBot*                                      ClosestBot;                                               // 0x00C0(0x0008) (Transient)
	class AOLBot*                                      ActiveBot;                                                // 0x00C8(0x0008) (Transient)
	class UOLAICmd_MoveAbility*                        TempMoveAbility;                                          // 0x00D0(0x0008) (Transient)
	TArray<struct FVector>                             TempPath;                                                 // 0x00D8(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAICmd_MoveAbility");
		return ptr;
	}


	bool AtPoint(const struct FVector& Point);
	void SetActiveOnObject(class AOLBot* NewActiveBot);
	class AOLBot* GetActiveOnObject();
	class AOLBot* GetClosestToObject();
	void UnregisterWithObject();
	void RegisterWithObject();
	bool IsObjectInUse();
	void ContinueFromWaiting();
	void MoveToWaiting();
	int GetWaitIndex();
	TArray<class AOLBot*> GetBotsOnObject();
	struct FVector GetWaitPointForwardDirection(const struct FWaitPoint& Point);
	void ReturnWaitPoint(const struct FWaitPoint& Point);
	struct FWaitPoint GrabBestWaitPoint();
	void ModifyPath(const struct FVector& NewDestination, TArray<struct FVector>* NewPath);
	bool ModifyApproach(struct FVector* NewDestination);
	void Completed();
	void Popped();
	void Pushed();
};


// Class OLGame.OLAICmd_MoveAbility_Bash
// 0x0014 (0x00FC - 0x00E8)
class UOLAICmd_MoveAbility_Bash : public UOLAICmd_MoveAbility
{
public:
	class AOLBashableObject*                           Bashable;                                                 // 0x00E8(0x0008)
	struct FVector                                     LastDestination;                                          // 0x00F0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAICmd_MoveAbility_Bash");
		return ptr;
	}


	class UOLAICmd_MoveAbility_Bash* STATIC_MoveThruBashable(class AOLBot* Bot, class AOLBashableObject* InBashable, const struct FVector& InitialDestination, bool bInReversed);
};


// Class OLGame.OLAICmd_MoveAbility_Door
// 0x0018 (0x0100 - 0x00E8)
class UOLAICmd_MoveAbility_Door : public UOLAICmd_MoveAbility
{
public:
	class AOLDoor*                                     door;                                                     // 0x00E8(0x0008)
	struct FVector                                     LastDestination;                                          // 0x00F0(0x000C)
	int                                                BashIter;                                                 // 0x00FC(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAICmd_MoveAbility_Door");
		return ptr;
	}


	TArray<class AOLBot*> GetBotsOnObject();
	void SetActiveOnObject(class AOLBot* NewActiveBot);
	class AOLBot* GetActiveOnObject();
	class AOLBot* GetClosestToObject();
	void UnregisterWithObject();
	void RegisterWithObject();
	bool IsObjectInUse();
	void Cancel();
	void Popped();
	bool ModifyApproach(struct FVector* NewDestination);
	bool IsDoorOpen();
	class UOLAICmd_MoveAbility_Door* STATIC_MoveThruDoor(class AOLBot* Bot, class AOLDoor* InDoor, const struct FVector& InitialDestination, bool bInReversed);
};


// Class OLGame.OLAICmd_MoveAbility_Ledge
// 0x0008 (0x00F0 - 0x00E8)
class UOLAICmd_MoveAbility_Ledge : public UOLAICmd_MoveAbility
{
public:
	class AOLLedgeMarker*                              Ledge;                                                    // 0x00E8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAICmd_MoveAbility_Ledge");
		return ptr;
	}


	TArray<class AOLBot*> GetBotsOnObject();
	void SetActiveOnObject(class AOLBot* NewActiveBot);
	class AOLBot* GetActiveOnObject();
	class AOLBot* GetClosestToObject();
	void UnregisterWithObject();
	void RegisterWithObject();
	bool IsObjectInUse();
	class UOLAICmd_MoveAbility_Ledge* STATIC_MoveThruLedge(class AOLBot* Bot, class AOLLedgeMarker* InLedge, const struct FVector& InitialDestination, bool bInReversed);
};


// Class OLGame.OLAICmd_MoveAbility_Vault
// 0x0014 (0x00FC - 0x00E8)
class UOLAICmd_MoveAbility_Vault : public UOLAICmd_MoveAbility
{
public:
	class AOLAIVaultMarker*                            VaultMarker;                                              // 0x00E8(0x0008)
	struct FVector                                     NextPoint;                                                // 0x00F0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAICmd_MoveAbility_Vault");
		return ptr;
	}


	TArray<class AOLBot*> GetBotsOnObject();
	void SetActiveOnObject(class AOLBot* NewActiveBot);
	class AOLBot* GetActiveOnObject();
	class AOLBot* GetClosestToObject();
	void UnregisterWithObject();
	void RegisterWithObject();
	bool IsObjectInUse();
	class UOLAICmd_MoveAbility_Vault* STATIC_MoveThruLedge(class AOLBot* Bot, class AOLAIVaultMarker* InMarker, const struct FVector& InitialDestination, bool bInReversed);
};


// Class OLGame.OLAIContextualVOAsset
// 0x0010 (0x0070 - 0x0060)
class UOLAIContextualVOAsset : public UObject
{
public:
	TArray<struct FVOMapping>                          Mappings;                                                 // 0x0060(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAIContextualVOAsset");
		return ptr;
	}

};


// Class OLGame.OLAIGroup
// 0x0028 (0x0268 - 0x0240)
class AOLAIGroup : public AInfo
{
public:
	TArray<class AOLBot*>                              Bots;                                                     // 0x0240(0x0010) (NeedCtorLink)
	class AOLBot*                                      AttackingBot;                                             // 0x0250(0x0008)
	unsigned long                                      bTokenAvailable : 1;                                      // 0x0258(0x0004)
	float                                              AttackTimer;                                              // 0x025C(0x0004)
	float                                              MinTimeBetweenAttacks;                                    // 0x0260(0x0004) (Const)
	float                                              MaxTimeBetweenAttacks;                                    // 0x0264(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAIGroup");
		return ptr;
	}


	void NotifyOthersPathChanged(class AOLBot* Notifier);
	void ReturnAttackToken(class AOLBot* attacker);
	void TakeAttackToken(class AOLBot* attacker);
	bool CanAttack(class AOLBot* attacker);
	void Recalculate();
	bool DidAnyoneSeePlayerInBed();
	bool DidAnyoneSeePlayerinLocker();
	bool CanAnyoneSeeTarget();
	void ToggleAIAlwaysSeePlayer(bool bEnable);
	void ToggleAIIgnorePlayer(bool bEnable);
	void TriggerVisualDisturbance(class AOLBot* Triggerer, const struct FVector& DisturbanceLocation);
	void TriggerAudioDisturbance(class AOLBot* Triggerer, const struct FVector& DisturbanceLocation, bool bNewInvestigate, bool bNoTrim);
	void RemoveBot(class AOLBot* Bot);
	void AddBot(class AOLBot* Bot);
};


// Class OLGame.OLAIInvestigationPoint
// 0x0010 (0x0250 - 0x0240)
class AOLAIInvestigationPoint : public AActor
{
public:
	struct FName                                       AnimToPlay;                                               // 0x0240(0x0008) (Edit)
	unsigned long                                      bUseRotation : 1;                                         // 0x0248(0x0004) (Edit)
	float                                              WeightOverride;                                           // 0x024C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAIInvestigationPoint");
		return ptr;
	}

};


// Class OLGame.OLAIInvestigationVolume
// 0x0030 (0x02AC - 0x027C)
class AOLAIInvestigationVolume : public AVolume
{
public:
	TArray<class AOLAIInvestigationPoint*>             Points;                                                   // 0x027C(0x0010) (NeedCtorLink)
	TArray<class AOLHidingSpot*>                       Lockers;                                                  // 0x028C(0x0010) (NeedCtorLink)
	TArray<class AOLBed*>                              Beds;                                                     // 0x029C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAIInvestigationVolume");
		return ptr;
	}


	void ProcessActorSetVolume(class AActor* Other);
};


// Class OLGame.OLAISightComponent
// 0x003B (0x00C0 - 0x0085)
class UOLAISightComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	class AOLBot*                                      Bot;                                                      // 0x0088(0x0008)
	unsigned long                                      bAlwaysSeeTarget : 1;                                     // 0x0090(0x0004)
	unsigned long                                      bWasAlwaysSeeTarget : 1;                                  // 0x0090(0x0004)
	unsigned long                                      bIgnoreTarget : 1;                                        // 0x0090(0x0004)
	unsigned long                                      CanSeeTarget : 1;                                         // 0x0090(0x0004)
	unsigned long                                      CouldSeeTarget : 1;                                       // 0x0090(0x0004)
	unsigned long                                      IsInClose : 1;                                            // 0x0090(0x0004)
	unsigned long                                      IsInNarrowCone : 1;                                       // 0x0090(0x0004)
	unsigned long                                      IsInWideCone : 1;                                         // 0x0090(0x0004)
	unsigned long                                      bSawPlayerEnterHidingSpot : 1;                            // 0x0090(0x0004)
	unsigned long                                      bSawPlayerEnterBed : 1;                                   // 0x0090(0x0004)
	unsigned long                                      bSawPlayerGoUnder : 1;                                    // 0x0090(0x0004)
	unsigned long                                      bPeeking : 1;                                             // 0x0090(0x0004)
	unsigned long                                      bCrouched : 1;                                            // 0x0090(0x0004)
	unsigned long                                      bSawPlayerInSqueeze : 1;                                  // 0x0090(0x0004)
	unsigned long                                      bDebugSight : 1;                                          // 0x0090(0x0004) (Config)
	struct FVector                                     SawPlayerGoUnderLastPosition;                             // 0x0094(0x000C)
	float                                              SawPlayerGoUnderMaxDistance;                              // 0x00A0(0x0004) (Const)
	class AOLSqueezeVolume*                            LastSqueeze;                                              // 0x00A4(0x0008)
	float                                              WideConeTimer;                                            // 0x00AC(0x0004)
	float                                              LoseTimer;                                                // 0x00B0(0x0004)
	float                                              DistanceToPlayer;                                         // 0x00B4(0x0004) (Transient)
	float                                              HorizontalAngleToPlayer;                                  // 0x00B8(0x0004) (Transient)
	float                                              VerticalAngleToPlayer;                                    // 0x00BC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAISightComponent");
		return ptr;
	}


	void DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos);
};


// Class OLGame.OLAISteering
// 0x0000 (0x0060 - 0x0060)
class UOLAISteering : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAISteering");
		return ptr;
	}

};


// Class OLGame.OLAISteeringAvoidance
// 0x0000 (0x0060 - 0x0060)
class UOLAISteeringAvoidance : public UOLAISteering
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAISteeringAvoidance");
		return ptr;
	}

};


// Class OLGame.OLAISteeringFollowPath
// 0x0000 (0x0060 - 0x0060)
class UOLAISteeringFollowPath : public UOLAISteering
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAISteeringFollowPath");
		return ptr;
	}

};


// Class OLGame.OLBTBehavior
// 0x0011 (0x0071 - 0x0060)
class UOLBTBehavior : public UObject
{
public:
	class UOLBTNode*                                   Node;                                                     // 0x0060(0x0008)
	class UOLBTTask*                                   Task;                                                     // 0x0068(0x0008)
	TEnumAsByte<EStatus>                               CurrentStatus;                                            // 0x0070(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTBehavior");
		return ptr;
	}

};


// Class OLGame.OLBTBehaviorTree
// 0x000C (0x006C - 0x0060)
class UOLBTBehaviorTree : public UObject
{
public:
	class UOLBTRootNode*                               RootNode;                                                 // 0x0060(0x0008)
	unsigned long                                      bBeingEdited : 1;                                         // 0x0068(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTBehaviorTree");
		return ptr;
	}

};


// Class OLGame.OLBTNode
// 0x0038 (0x0098 - 0x0060)
class UOLBTNode : public UObject
{
public:
	struct FName                                       NodeName;                                                 // 0x0060(0x0008) (Edit)
	class UClass*                                      TaskType;                                                 // 0x0068(0x0008)
	int                                                SearchTag;                                                // 0x0070(0x0004) (Transient)
	int                                                DrawWidth;                                                // 0x0074(0x0004)
	int                                                DrawHeight;                                               // 0x0078(0x0004)
	float                                              NodePosX;                                                 // 0x007C(0x0004)
	float                                              NodePosY;                                                 // 0x0080(0x0004)
	int                                                InDrawY;                                                  // 0x0084(0x0004)
	struct FString                                     CategoryDesc;                                             // 0x0088(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTNode");
		return ptr;
	}

};


// Class OLGame.OLBTActivateEventNode
// 0x0008 (0x00A0 - 0x0098)
class UOLBTActivateEventNode : public UOLBTNode
{
public:
	struct FName                                       EventName;                                                // 0x0098(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTActivateEventNode");
		return ptr;
	}

};


// Class OLGame.OLBTAttackNode
// 0x0001 (0x0099 - 0x0098)
class UOLBTAttackNode : public UOLBTNode
{
public:
	TEnumAsByte<EAIAttackType>                         Type;                                                     // 0x0098(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTAttackNode");
		return ptr;
	}

};


// Class OLGame.OLBTBasicNode
// 0x0008 (0x00A0 - 0x0098)
class UOLBTBasicNode : public UOLBTNode
{
public:
	class UClass*                                      BasicTask;                                                // 0x0098(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTBasicNode");
		return ptr;
	}

};


// Class OLGame.OLBTCompositeNode
// 0x0014 (0x00AC - 0x0098)
class UOLBTCompositeNode : public UOLBTNode
{
public:
	TArray<struct FOLBTNodeChild>                      Children;                                                 // 0x0098(0x0010) (ExportObject, EditFixedSize, NeedCtorLink, EditInline)
	unsigned long                                      bFixNumChildren : 1;                                      // 0x00A8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTCompositeNode");
		return ptr;
	}

};


// Class OLGame.OLBTGetNextInvestigationPointNode
// 0x0000 (0x00AC - 0x00AC)
class UOLBTGetNextInvestigationPointNode : public UOLBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTGetNextInvestigationPointNode");
		return ptr;
	}

};


// Class OLGame.OLBTIfNode
// 0x0004 (0x00B0 - 0x00AC)
class UOLBTIfNode : public UOLBTCompositeNode
{
public:
	unsigned long                                      bNot : 1;                                                 // 0x00AC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTIfNode");
		return ptr;
	}

};


// Class OLGame.OLBTIfCustomNode
// 0x0008 (0x00B8 - 0x00B0)
class UOLBTIfCustomNode : public UOLBTIfNode
{
public:
	class UClass*                                      IfTask;                                                   // 0x00B0(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTIfCustomNode");
		return ptr;
	}

};


// Class OLGame.OLBTOptionalNode
// 0x0000 (0x00AC - 0x00AC)
class UOLBTOptionalNode : public UOLBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTOptionalNode");
		return ptr;
	}

};


// Class OLGame.OLBTRepeatNode
// 0x0004 (0x00B0 - 0x00AC)
class UOLBTRepeatNode : public UOLBTCompositeNode
{
public:
	int                                                NumRepetitions;                                           // 0x00AC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTRepeatNode");
		return ptr;
	}

};


// Class OLGame.OLBTRootNode
// 0x0000 (0x00AC - 0x00AC)
class UOLBTRootNode : public UOLBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTRootNode");
		return ptr;
	}

};


// Class OLGame.OLBTSelectorNode
// 0x0000 (0x00AC - 0x00AC)
class UOLBTSelectorNode : public UOLBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSelectorNode");
		return ptr;
	}

};


// Class OLGame.OLBTSequenceNode
// 0x0000 (0x00AC - 0x00AC)
class UOLBTSequenceNode : public UOLBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSequenceNode");
		return ptr;
	}

};


// Class OLGame.OLBTWaitHandlerNode
// 0x0008 (0x00B4 - 0x00AC)
class UOLBTWaitHandlerNode : public UOLBTCompositeNode
{
public:
	class UClass*                                      WaitHandlerTask;                                          // 0x00AC(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWaitHandlerNode");
		return ptr;
	}

};


// Class OLGame.OLBTDebugLogNode
// 0x0011 (0x00A9 - 0x0098)
class UOLBTDebugLogNode : public UOLBTNode
{
public:
	struct FString                                     DebugString;                                              // 0x0098(0x0010) (Edit, NeedCtorLink)
	TEnumAsByte<EStatus>                               DebugReturnValue;                                         // 0x00A8(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTDebugLogNode");
		return ptr;
	}

};


// Class OLGame.OLBTPlayAkEventNode
// 0x0008 (0x00A0 - 0x0098)
class UOLBTPlayAkEventNode : public UOLBTNode
{
public:
	class UAkEvent*                                    Event;                                                    // 0x0098(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTPlayAkEventNode");
		return ptr;
	}

};


// Class OLGame.OLBTPlayAnimNode
// 0x0014 (0x00AC - 0x0098)
class UOLBTPlayAnimNode : public UOLBTNode
{
public:
	TArray<struct FAnimData>                           Animations;                                               // 0x0098(0x0010) (Edit, NeedCtorLink)
	unsigned long                                      bLoop : 1;                                                // 0x00A8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTPlayAnimNode");
		return ptr;
	}

};


// Class OLGame.OLBTPlayAnimAtInvPointNode
// 0x0000 (0x00AC - 0x00AC)
class UOLBTPlayAnimAtInvPointNode : public UOLBTPlayAnimNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTPlayAnimAtInvPointNode");
		return ptr;
	}

};


// Class OLGame.OLBTTargetUnreachableNode
// 0x0004 (0x00B0 - 0x00AC)
class UOLBTTargetUnreachableNode : public UOLBTPlayAnimNode
{
public:
	float                                              IgnoreTime;                                               // 0x00AC(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTTargetUnreachableNode");
		return ptr;
	}

};


// Class OLGame.OLBTSetBehaviorStateNode
// 0x0001 (0x0099 - 0x0098)
class UOLBTSetBehaviorStateNode : public UOLBTNode
{
public:
	TEnumAsByte<EAIBehaviorState>                      BehaviorState;                                            // 0x0098(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSetBehaviorStateNode");
		return ptr;
	}

};


// Class OLGame.OLBTStopPatrolNode
// 0x0004 (0x009C - 0x0098)
class UOLBTStopPatrolNode : public UOLBTNode
{
public:
	unsigned long                                      bAbort : 1;                                               // 0x0098(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTStopPatrolNode");
		return ptr;
	}

};


// Class OLGame.OLBTWaitNode
// 0x0004 (0x009C - 0x0098)
class UOLBTWaitNode : public UOLBTNode
{
public:
	float                                              WaitTime;                                                 // 0x0098(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWaitNode");
		return ptr;
	}

};


// Class OLGame.OLBTTask
// 0x0010 (0x0070 - 0x0060)
class UOLBTTask : public UObject
{
public:
	class UOLBTNode*                                   Node;                                                     // 0x0060(0x0008)
	class AOLBot*                                      Owner;                                                    // 0x0068(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTTask");
		return ptr;
	}


	void DisplayDebug(class UCanvas* aCanvas, float XL, float XPos, float* out_YL, float* out_YPos);
};


// Class OLGame.OLBTActivateEventTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTActivateEventTask : public UOLBTTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTActivateEventTask");
		return ptr;
	}

};


// Class OLGame.OLBTAttackTask
// 0x0004 (0x0074 - 0x0070)
class UOLBTAttackTask : public UOLBTTask
{
public:
	unsigned long                                      AttackSucceeded : 1;                                      // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTAttackTask");
		return ptr;
	}

};


// Class OLGame.OLBTBasicTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTBasicTask : public UOLBTTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTBasicTask");
		return ptr;
	}

};


// Class OLGame.OLBTCancelMoveTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTCancelMoveTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTCancelMoveTask");
		return ptr;
	}

};


// Class OLGame.OLBTClearDisturbanceTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTClearDisturbanceTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTClearDisturbanceTask");
		return ptr;
	}

};


// Class OLGame.OLBTClearInvestigationTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTClearInvestigationTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTClearInvestigationTask");
		return ptr;
	}

};


// Class OLGame.OLBTClearSqueezeTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTClearSqueezeTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTClearSqueezeTask");
		return ptr;
	}

};


// Class OLGame.OLBTInvestigateObjectTask
// 0x0004 (0x0074 - 0x0070)
class UOLBTInvestigateObjectTask : public UOLBTBasicTask
{
public:
	unsigned long                                      bInvestigateSuccessful : 1;                               // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTInvestigateObjectTask");
		return ptr;
	}

};


// Class OLGame.OLBTLookAtDisturbanceTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTLookAtDisturbanceTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTLookAtDisturbanceTask");
		return ptr;
	}

};


// Class OLGame.OLBTMoveToTask
// 0x0004 (0x0074 - 0x0070)
class UOLBTMoveToTask : public UOLBTBasicTask
{
public:
	unsigned long                                      bStartedAtDestination : 1;                                // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTMoveToTask");
		return ptr;
	}

};


// Class OLGame.OLBTMoveToBedTask
// 0x0000 (0x0074 - 0x0074)
class UOLBTMoveToBedTask : public UOLBTMoveToTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTMoveToBedTask");
		return ptr;
	}

};


// Class OLGame.OLBTMoveToDisturbanceTask
// 0x0000 (0x0074 - 0x0074)
class UOLBTMoveToDisturbanceTask : public UOLBTMoveToTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTMoveToDisturbanceTask");
		return ptr;
	}

};


// Class OLGame.OLBTMoveToInvestigationTask
// 0x0000 (0x0074 - 0x0074)
class UOLBTMoveToInvestigationTask : public UOLBTMoveToTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTMoveToInvestigationTask");
		return ptr;
	}

};


// Class OLGame.OLBTMoveToLockerTask
// 0x0000 (0x0074 - 0x0074)
class UOLBTMoveToLockerTask : public UOLBTMoveToTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTMoveToLockerTask");
		return ptr;
	}

};


// Class OLGame.OLBTMoveToNextInvPointTask
// 0x0000 (0x0074 - 0x0074)
class UOLBTMoveToNextInvPointTask : public UOLBTMoveToTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTMoveToNextInvPointTask");
		return ptr;
	}

};


// Class OLGame.OLBTMoveToSqueezeTask
// 0x0000 (0x0074 - 0x0074)
class UOLBTMoveToSqueezeTask : public UOLBTMoveToTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTMoveToSqueezeTask");
		return ptr;
	}

};


// Class OLGame.OLBTMoveToTargetTask
// 0x0000 (0x0074 - 0x0074)
class UOLBTMoveToTargetTask : public UOLBTMoveToTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTMoveToTargetTask");
		return ptr;
	}

};


// Class OLGame.OLBTMoveToWaitPointTask
// 0x0000 (0x0074 - 0x0074)
class UOLBTMoveToWaitPointTask : public UOLBTMoveToTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTMoveToWaitPointTask");
		return ptr;
	}

};


// Class OLGame.OLBTMoveToWaypointTask
// 0x000C (0x0080 - 0x0074)
class UOLBTMoveToWaypointTask : public UOLBTMoveToTask
{
public:
	class ARoute*                                      PatrolRoute;                                              // 0x0074(0x0008) (Transient)
	int                                                PatrolRouteIndex;                                         // 0x007C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTMoveToWaypointTask");
		return ptr;
	}

};


// Class OLGame.OLBTPerformWaypointActionTask
// 0x0008 (0x0078 - 0x0070)
class UOLBTPerformWaypointActionTask : public UOLBTBasicTask
{
public:
	float                                              WaitTimer;                                                // 0x0070(0x0004)
	unsigned long                                      bPlayingAnim : 1;                                         // 0x0074(0x0004)
	unsigned long                                      bLoopingAnim : 1;                                         // 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTPerformWaypointActionTask");
		return ptr;
	}

};


// Class OLGame.OLBTResetNewDisturbanceTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTResetNewDisturbanceTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTResetNewDisturbanceTask");
		return ptr;
	}

};


// Class OLGame.OLBTRotateAtWaitPointTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTRotateAtWaitPointTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTRotateAtWaitPointTask");
		return ptr;
	}

};


// Class OLGame.OLBTSelectClosestWaypointTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTSelectClosestWaypointTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSelectClosestWaypointTask");
		return ptr;
	}

};


// Class OLGame.OLBTSelectNextWaypointTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTSelectNextWaypointTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSelectNextWaypointTask");
		return ptr;
	}

};


// Class OLGame.OLBTSetupInvestigationTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTSetupInvestigationTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSetupInvestigationTask");
		return ptr;
	}

};


// Class OLGame.OLBTWaitForAnimTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTWaitForAnimTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWaitForAnimTask");
		return ptr;
	}

};


// Class OLGame.OLBTWaitForAttackTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTWaitForAttackTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWaitForAttackTask");
		return ptr;
	}

};


// Class OLGame.OLBTWaitForReactionTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTWaitForReactionTask : public UOLBTBasicTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWaitForReactionTask");
		return ptr;
	}

};


// Class OLGame.OLBTCompositeTask
// 0x000C (0x007C - 0x0070)
class UOLBTCompositeTask : public UOLBTTask
{
public:
	class UOLBTBehavior*                               CurrentBehavior;                                          // 0x0070(0x0008)
	int                                                CurrentChildIndex;                                        // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTCompositeTask");
		return ptr;
	}


	void DisplayDebug(class UCanvas* aCanvas, float XL, float XPos, float* out_YL, float* out_YPos);
};


// Class OLGame.OLBTGetNextInvestigationPointTask
// 0x0000 (0x007C - 0x007C)
class UOLBTGetNextInvestigationPointTask : public UOLBTCompositeTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTGetNextInvestigationPointTask");
		return ptr;
	}

};


// Class OLGame.OLBTIfTask
// 0x0000 (0x007C - 0x007C)
class UOLBTIfTask : public UOLBTCompositeTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTIfTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTOptionalTask
// 0x0000 (0x007C - 0x007C)
class UOLBTOptionalTask : public UOLBTCompositeTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTOptionalTask");
		return ptr;
	}

};


// Class OLGame.OLBTRepeatTask
// 0x0004 (0x0080 - 0x007C)
class UOLBTRepeatTask : public UOLBTCompositeTask
{
public:
	int                                                CurrRepetition;                                           // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTRepeatTask");
		return ptr;
	}

};


// Class OLGame.OLBTRootTask
// 0x0000 (0x007C - 0x007C)
class UOLBTRootTask : public UOLBTCompositeTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTRootTask");
		return ptr;
	}

};


// Class OLGame.OLBTSelectorTask
// 0x0000 (0x007C - 0x007C)
class UOLBTSelectorTask : public UOLBTCompositeTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSelectorTask");
		return ptr;
	}

};


// Class OLGame.OLBTSequenceTask
// 0x0000 (0x007C - 0x007C)
class UOLBTSequenceTask : public UOLBTCompositeTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSequenceTask");
		return ptr;
	}

};


// Class OLGame.OLBTWaitHandlerBaseTask
// 0x0000 (0x007C - 0x007C)
class UOLBTWaitHandlerBaseTask : public UOLBTCompositeTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWaitHandlerBaseTask");
		return ptr;
	}

};


// Class OLGame.OLBTWaitHandlerBedTask
// 0x0008 (0x0084 - 0x007C)
class UOLBTWaitHandlerBedTask : public UOLBTWaitHandlerBaseTask
{
public:
	class AOLBed*                                      Bed;                                                      // 0x007C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWaitHandlerBedTask");
		return ptr;
	}

};


// Class OLGame.OLBTWaitHandlerLockerTask
// 0x0008 (0x0084 - 0x007C)
class UOLBTWaitHandlerLockerTask : public UOLBTWaitHandlerBaseTask
{
public:
	class AOLHidingSpot*                               Locker;                                                   // 0x007C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWaitHandlerLockerTask");
		return ptr;
	}

};


// Class OLGame.OLBTDebugLogTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTDebugLogTask : public UOLBTTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTDebugLogTask");
		return ptr;
	}

};


// Class OLGame.OLBTPlayAkEventTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTPlayAkEventTask : public UOLBTTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTPlayAkEventTask");
		return ptr;
	}

};


// Class OLGame.OLBTPlayAnimTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTPlayAnimTask : public UOLBTTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTPlayAnimTask");
		return ptr;
	}

};


// Class OLGame.OLBTPlayAnimAtInvPointTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTPlayAnimAtInvPointTask : public UOLBTPlayAnimTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTPlayAnimAtInvPointTask");
		return ptr;
	}

};


// Class OLGame.OLBTTargetUnreachableTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTTargetUnreachableTask : public UOLBTPlayAnimTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTTargetUnreachableTask");
		return ptr;
	}

};


// Class OLGame.OLBTSetBehaviorStateTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTSetBehaviorStateTask : public UOLBTTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSetBehaviorStateTask");
		return ptr;
	}

};


// Class OLGame.OLBTStopPatrolTask
// 0x0000 (0x0070 - 0x0070)
class UOLBTStopPatrolTask : public UOLBTTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTStopPatrolTask");
		return ptr;
	}

};


// Class OLGame.OLBTWaitTask
// 0x0004 (0x0074 - 0x0070)
class UOLBTWaitTask : public UOLBTTask
{
public:
	float                                              WaitTimer;                                                // 0x0070(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWaitTask");
		return ptr;
	}

};


// Class OLGame.OLNavigationHandle
// 0x0018 (0x01B8 - 0x01A0)
class UOLNavigationHandle : public UNavigationHandle
{
public:
	TArray<struct FMovePoint>                          MovePoints;                                               // 0x01A0(0x0010) (NeedCtorLink)
	int                                                LastMovePointIdxForPath;                                  // 0x01B0(0x0004)
	unsigned long                                      bDebugMovePoints : 1;                                     // 0x01B4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLNavigationHandle");
		return ptr;
	}


	bool PointReachable(const struct FVector& Point, const struct FVector& OverrideStartPoint, bool bAllowHitsInEndCollisionBox);
	bool TrimPathByDistance(float DistanceToTrim, bool bStopAtMeshObject, struct FVector* out_NewDestination);
	bool TrimPathToLastDoor(struct FVector* out_NewDestination);
	void ClearPath();
	void PopMoveLocation();
	bool GetNextMovePath(float ArrivalDistance, TArray<struct FVector>* out_MovePath);
	bool GetNextMoveLocation(float ArrivalDistance, struct FVector* out_MoveDest);
	bool FindPath(class AActor** out_DestActor, int* out_DestItem);
};


// Class OLGame.OLNavMeshPath_SimilarToLastPath
// 0x0004 (0x007C - 0x0078)
class UOLNavMeshPath_SimilarToLastPath : public UNavMeshPathConstraint
{
public:
	float                                              DifferentDirectionPenalty;                                // 0x0078(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLNavMeshPath_SimilarToLastPath");
		return ptr;
	}


	void Recycle();
	bool STATIC_SimilarToLastPath(class UNavigationHandle* NavHandle);
};


// Class OLGame.OLEnemyGenericPatient
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient : public AOLEnemyPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient");
		return ptr;
	}

};


// Class OLGame.OLEnemyCannibal
// 0x0010 (0x37FC - 0x37EC)
class AOLEnemyCannibal : public AOLEnemyGenericPatient
{
public:
	class UAnimSet*                                    CannibalSpecificAnimSet;                                  // 0x37EC(0x0008)
	class USkeletalMeshComponent*                      CannibalDrill;                                            // 0x37F4(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyCannibal");
		return ptr;
	}


	void NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void NativeHideWeapon();
	void HideWeapon();
	void BuildScriptAnimSetList();
};


// Class OLGame.OLEnemySurgeon
// 0x0010 (0x37FC - 0x37EC)
class AOLEnemySurgeon : public AOLEnemyGenericPatient
{
public:
	class UAnimSet*                                    SurgeonSpecificAnimSet;                                   // 0x37EC(0x0008)
	class USkeletalMeshComponent*                      BoneShears;                                               // 0x37F4(0x0008) (ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemySurgeon");
		return ptr;
	}


	void NativeOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void BuildScriptAnimSetList();
};


// Class OLGame.OLEnemyNanoCloud
// 0x00CC (0x38B8 - 0x37EC)
class AOLEnemyNanoCloud : public AOLEnemyPawn
{
public:
	class UParticleSystemComponent*                    CloudEmitter;                                             // 0x37EC(0x0008) (ExportObject, Component, EditInline)
	class UMaterialInstanceConstant*                   MatInstSwarm;                                             // 0x37F4(0x0008)
	class UMaterialInstanceConstant*                   MatInstSkeleton;                                          // 0x37FC(0x0008)
	class UMaterialInstanceConstant*                   MatInstEyes;                                              // 0x3804(0x0008)
	class UStaticMeshComponent*                        SphereMesh;                                               // 0x380C(0x0008) (ExportObject, Component, EditInline)
	class UTextureMovie*                               SwarmMindMovie;                                           // 0x3814(0x0008)
	class UMaterialInstanceConstant*                   MatBloodyMain;                                            // 0x381C(0x0008)
	class UMaterial*                                   MatBloodySecondary;                                       // 0x3824(0x0008)
	TEnumAsByte<ENanoCloudForm>                        CurrentForm;                                              // 0x382C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x382D(0x0003) MISSED OFFSET
	float                                              MorphStartedTime;                                         // 0x3830(0x0004)
	TArray<float>                                      MorphValues;                                              // 0x3834(0x0010) (NeedCtorLink)
	TArray<struct FMorphingTransition>                 HumanMorphs;                                              // 0x3844(0x0010) (NeedCtorLink)
	TArray<struct FMorphingTransition>                 SwarmMorphs;                                              // 0x3854(0x0010) (NeedCtorLink)
	float                                              AlwaysVisibleRange;                                       // 0x3864(0x0004)
	float                                              DistanceBasedVisibilityMorphTimeScale;                    // 0x3868(0x0004)
	float                                              MorphMultiplier;                                          // 0x386C(0x0004)
	unsigned long                                      bAlwaysVisible : 1;                                       // 0x3870(0x0004)
	float                                              AlwaysVisibleChangeTime;                                  // 0x3874(0x0004)
	float                                              FullOpacityDistance;                                      // 0x3878(0x0004)
	float                                              CurrentOpacity;                                           // 0x387C(0x0004)
	float                                              DefaultMorphMultiplier;                                   // 0x3880(0x0004) (Const)
	float                                              ChaseMorphMultiplier;                                     // 0x3884(0x0004) (Const)
	float                                              HumanMorphDuration;                                       // 0x3888(0x0004) (Const)
	float                                              SwarmMorphDuration;                                       // 0x388C(0x0004) (Const)
	float                                              HumanMorphPhase1Time;                                     // 0x3890(0x0004) (Const)
	float                                              SwarmMorphPhase1Time;                                     // 0x3894(0x0004) (Const)
	float                                              TimeSinceLastChange;                                      // 0x3898(0x0004)
	float                                              TimeForNextChange;                                        // 0x389C(0x0004)
	float                                              PatrolChangeMin;                                          // 0x38A0(0x0004) (Const)
	float                                              PatrolChangeMax;                                          // 0x38A4(0x0004) (Const)
	struct FName                                       CloudEmitterAttachBoneName;                               // 0x38A8(0x0008) (Const)
	struct FName                                       NanoSphereAttachBoneName;                                 // 0x38B0(0x0008) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyNanoCloud");
		return ptr;
	}


	void OnSetNanoCloudVisibility(class UOLSeqAct_SetNanoCloudVisibility* Action);
	void OnMorphNanoCloud(class UOLSeqAct_MorphNanoCloud* Action);
	void PostBeginPlay();
	void SwitchToBloodyMaterialNotify();
	void SetHumanForm();
	void SetSwarmForm();
	void MorphToHuman(float TimeScale);
	void MorphToSwarm(float TimeScale);
	void NativePostBeginPlay();
};


// Class OLGame.OLEnemySoldier
// 0x0008 (0x37F4 - 0x37EC)
class AOLEnemySoldier : public AOLEnemyPawn
{
public:
	class UAkEvent*                                    SoundLanded;                                              // 0x37EC(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemySoldier");
		return ptr;
	}


	void PlayLanded(float ImpactVel);
};


// Class OLGame.OLEnemyGroom
// 0x0000 (0x37F4 - 0x37F4)
class AOLEnemyGroom : public AOLEnemySoldier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGroom");
		return ptr;
	}


	void PlayLanded(float ImpactVel);
};


// Class OLGame.OLScout
// 0x0000 (0x0600 - 0x0600)
class AOLScout : public AUDKScout
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLScout");
		return ptr;
	}

};


// Class OLGame.OLWaypoint
// 0x0010 (0x0368 - 0x0358)
class AOLWaypoint : public ANavigationPoint
{
public:
	float                                              WaitTime;                                                 // 0x0358(0x0004) (Edit)
	struct FName                                       AnimToPlay;                                               // 0x035C(0x0008) (Edit)
	unsigned long                                      bLoopAnimation : 1;                                       // 0x0364(0x0004) (Edit)
	unsigned long                                      bTurnToRotation : 1;                                      // 0x0364(0x0004) (Edit)
	unsigned long                                      bAlignAnimToWaypoint : 1;                                 // 0x0364(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLWaypoint");
		return ptr;
	}


	void AnimStartedEvent(class AActor* InInstigator);
	void WaypointReachedEvent(class AActor* InInstigator);
};


// Class OLGame.OLAnimBlendByEnemyEnvironment
// 0x0000 (0x0164 - 0x0164)
class UOLAnimBlendByEnemyEnvironment : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendByEnemyEnvironment");
		return ptr;
	}

};


// Class OLGame.OLAnimBlendByEnemyMode
// 0x0000 (0x0164 - 0x0164)
class UOLAnimBlendByEnemyMode : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendByEnemyMode");
		return ptr;
	}

};


// Class OLGame.OLAnimBlendByHobblingIntensity
// 0x0000 (0x0150 - 0x0150)
class UOLAnimBlendByHobblingIntensity : public UAnimNodeBlend
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendByHobblingIntensity");
		return ptr;
	}

};


// Class OLGame.OLAnimBlendByIdle
// 0x0008 (0x0184 - 0x017C)
class UOLAnimBlendByIdle : public UUDKAnimBlendBase
{
public:
	struct FName                                       ChildSynchGroup;                                          // 0x017C(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendByIdle");
		return ptr;
	}

};


// Class OLGame.OLAnimBlendByLeaning
// 0x0007 (0x0144 - 0x013D)
class UOLAnimBlendByLeaning : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              CurrentRatio;                                             // 0x0140(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendByLeaning");
		return ptr;
	}

};


// Class OLGame.OLAnimBlendByLocomotionMode
// 0x0010 (0x0174 - 0x0164)
class UOLAnimBlendByLocomotionMode : public UAnimNodeBlendList
{
public:
	TArray<float>                                      ChildBlendTimes;                                          // 0x0164(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendByLocomotionMode");
		return ptr;
	}

};


// Class OLGame.OLAnimBlendByPosture
// 0x0000 (0x0164 - 0x0164)
class UOLAnimBlendByPosture : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendByPosture");
		return ptr;
	}

};


// Class OLGame.OLAnimBlendBySpeed
// 0x0010 (0x0160 - 0x0150)
class UOLAnimBlendBySpeed : public UAnimNodeBlend
{
public:
	float                                              MinSpeed;                                                 // 0x0150(0x0004) (Edit)
	float                                              MaxSpeed;                                                 // 0x0154(0x0004) (Edit)
	float                                              MaxWeightRate;                                            // 0x0158(0x0004) (Edit)
	float                                              CurrentWeight;                                            // 0x015C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendBySpeed");
		return ptr;
	}

};


// Class OLGame.OLAnimBlendBySpeedExpandable
// 0x0023 (0x0160 - 0x013D)
class UOLAnimBlendBySpeedExpandable : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	TArray<float>                                      AnimSpeeds;                                               // 0x0140(0x0010) (Edit, EditFixedSize, NeedCtorLink)
	unsigned long                                      bTimeScaleDown : 1;                                       // 0x0150(0x0004) (Edit)
	unsigned long                                      bTimeScaleUp : 1;                                         // 0x0150(0x0004) (Edit)
	float                                              SmoothingCoefficient;                                     // 0x0154(0x0004) (Edit)
	float                                              CurrentSpeed;                                             // 0x0158(0x0004) (Transient)
	float                                              SliderPosition;                                           // 0x015C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendBySpeedExpandable");
		return ptr;
	}

};


// Class OLGame.OLAnimBlendBySwarmForm
// 0x0000 (0x0164 - 0x0164)
class UOLAnimBlendBySwarmForm : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendBySwarmForm");
		return ptr;
	}

};


// Class OLGame.OLAnimBlendDirectional
// 0x0013 (0x0150 - 0x013D)
class UOLAnimBlendDirectional : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	unsigned long                                      bTimescaleDiagonals : 1;                                  // 0x0140(0x0004) (Edit)
	unsigned long                                      bTimescaleBelowExpectedSpeed : 1;                         // 0x0140(0x0004) (Edit)
	unsigned long                                      bTimescaleAboveExpectedSpeed : 1;                         // 0x0140(0x0004) (Edit)
	unsigned long                                      bUseReversedSideForBackwards : 1;                         // 0x0140(0x0004) (Edit)
	unsigned long                                      bReversingBackward : 1;                                   // 0x0140(0x0004) (Transient)
	float                                              ExpectedPawnSpeed;                                        // 0x0144(0x0004) (Edit)
	float                                              BlendInIdleMaxSpeedPct;                                   // 0x0148(0x0004) (Edit)
	float                                              SliderDirAngle;                                           // 0x014C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimBlendDirectional");
		return ptr;
	}

};


// Class OLGame.OLAnimCameraSpace
// 0x0034 (0x01B8 - 0x0184)
class UOLAnimCameraSpace : public UAnimNodeBlendPerBone
{
public:
	class UAnimNodeSlot*                               ChildSlot;                                                // 0x0184(0x0008) (Transient)
	class UOLAnimCustomBlend*                          ChildBlend;                                               // 0x018C(0x0008) (Transient)
	int                                                CameraBoneIdx;                                            // 0x0194(0x0004) (Transient)
	TArray<int>                                        StartBoneIndices;                                         // 0x0198(0x0010) (Transient, NeedCtorLink)
	TArray<int>                                        ParentChain;                                              // 0x01A8(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimCameraSpace");
		return ptr;
	}

};


// Class OLGame.OLAnimConstrainedMovement
// 0x0010 (0x0174 - 0x0164)
class UOLAnimConstrainedMovement : public UAnimNodeBlendList
{
public:
	unsigned long                                      bUpDown : 1;                                              // 0x0164(0x0004) (Edit)
	unsigned long                                      bCompleteCyclesOnly : 1;                                  // 0x0164(0x0004) (Edit)
	unsigned long                                      bNoAutomaticRootMotion : 1;                               // 0x0164(0x0004) (Edit)
	unsigned long                                      bAutomaticMotion : 1;                                     // 0x0164(0x0004) (Transient)
	float                                              CurrentRatio;                                             // 0x0168(0x0004) (Transient)
	float                                              SmoothedDelta;                                            // 0x016C(0x0004) (Transient)
	int                                                LastTargetIdx;                                            // 0x0170(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimConstrainedMovement");
		return ptr;
	}

};


// Class OLGame.OLAnimCrouchedTurnOnSpot
// 0x0060 (0x01B0 - 0x0150)
class UOLAnimCrouchedTurnOnSpot : public UAnimNodeBlend
{
public:
	float                                              BaseHeading;                                              // 0x0150(0x0004) (Transient)
	float                                              LastHeading;                                              // 0x0154(0x0004) (Transient)
	float                                              TurningVelocity;                                          // 0x0158(0x0004) (Transient)
	float                                              HandUpWeight;                                             // 0x015C(0x0004) (Transient)
	unsigned long                                      bHandUp : 1;                                              // 0x0160(0x0004) (Transient)
	float                                              IKStrength;                                               // 0x0164(0x0004) (Transient)
	struct FVector                                     IKPosition;                                               // 0x0168(0x000C) (Transient)
	struct FRotator                                    IKRotationWS;                                             // 0x0174(0x000C) (Transient)
	struct FVector                                     ActorSpaceIKOffset;                                       // 0x0180(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	struct FQuat                                       ActorSpaceIKRotation;                                     // 0x0190(0x0010)
	class UAkEvent*                                    HandUpSound;                                              // 0x01A0(0x0008)
	class UAkEvent*                                    HandDownSound;                                            // 0x01A8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimCrouchedTurnOnSpot");
		return ptr;
	}

};


// Class OLGame.OLAnimCustomBlend
// 0x0024 (0x0188 - 0x0164)
class UOLAnimCustomBlend : public UAnimNodeBlendList
{
public:
	unsigned long                                      bActive : 1;                                              // 0x0164(0x0004) (Transient)
	unsigned long                                      bBlendingOut : 1;                                         // 0x0164(0x0004) (Transient)
	unsigned long                                      bKeepLastPose : 1;                                        // 0x0164(0x0004) (Transient)
	unsigned long                                      bInhibitEndNotifies : 1;                                  // 0x0164(0x0004) (Transient)
	float                                              BlendOutTime;                                             // 0x0168(0x0004) (Transient)
	float                                              PlaybackTime;                                             // 0x016C(0x0004) (Transient)
	float                                              BlendWeights[0x3];                                        // 0x0170(0x0004) (Transient)
	float                                              bEarlyAnimEndFired;                                       // 0x017C(0x0004) (Transient)
	float                                              TimeRemaining;                                            // 0x0180(0x0004) (Transient)
	int                                                NumActiveAnims;                                           // 0x0184(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimCustomBlend");
		return ptr;
	}

};


// Class OLGame.OLAnimCycleBreaker
// 0x0073 (0x01B0 - 0x013D)
class UOLAnimCycleBreaker : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              DefaultCycleBias;                                         // 0x0140(0x0004) (Edit)
	float                                              DefaultStretchDuration;                                   // 0x0144(0x0004) (Edit)
	TArray<struct FCycleBreaker>                       Breakers;                                                 // 0x0148(0x0010) (Edit, NeedCtorLink)
	struct FCycleBreaker                               BreakerTemplate;                                          // 0x0158(0x0044) (Const, NeedCtorLink)
	float                                              NextBreakerWeightTransition;                              // 0x019C(0x0004) (Transient)
	TArray<int>                                        ValidBreakers;                                            // 0x01A0(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimCycleBreaker");
		return ptr;
	}

};


// Class OLGame.OLAnimSmarterIdle
// 0x0024 (0x01D4 - 0x01B0)
class UOLAnimSmarterIdle : public UOLAnimCycleBreaker
{
public:
	unsigned long                                      bModifyPlayrateIdle : 1;                                  // 0x01B0(0x0004) (Edit)
	float                                              IdleMinRate;                                              // 0x01B4(0x0004) (Edit)
	float                                              IdleMaxRate;                                              // 0x01B8(0x0004) (Edit)
	float                                              IdleRateMinDuration;                                      // 0x01BC(0x0004) (Edit)
	float                                              IdleRateMaxDuration;                                      // 0x01C0(0x0004) (Edit)
	float                                              IdleRateTransitionSpeed;                                  // 0x01C4(0x0004) (Edit)
	float                                              CurrentIdleRate;                                          // 0x01C8(0x0004) (Transient)
	float                                              TargetIdleRate;                                           // 0x01CC(0x0004) (Transient)
	float                                              NextIdleRateTransition;                                   // 0x01D0(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimSmarterIdle");
		return ptr;
	}

};


// Class OLGame.OLAnimDoorInteraction
// 0x0014 (0x0178 - 0x0164)
class UOLAnimDoorInteraction : public UAnimNodeBlendList
{
public:
	float                                              InitialRatio;                                             // 0x0164(0x0004)
	float                                              CurrentRatio;                                             // 0x0168(0x0004) (Transient)
	float                                              SmoothedDelta;                                            // 0x016C(0x0004) (Transient)
	float                                              PlayRate;                                                 // 0x0170(0x0004) (Edit)
	float                                              MaxRatio;                                                 // 0x0174(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimDoorInteraction");
		return ptr;
	}

};


// Class OLGame.OLAnimEnemyStruggle
// 0x0000 (0x0164 - 0x0164)
class UOLAnimEnemyStruggle : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimEnemyStruggle");
		return ptr;
	}

};


// Class OLGame.OLAnimHeatShielding
// 0x001B (0x0158 - 0x013D)
class UOLAnimHeatShielding : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              MinimumDistance;                                          // 0x0140(0x0004) (Edit)
	float                                              LowDistance;                                              // 0x0144(0x0004) (Edit)
	float                                              HighDistance;                                             // 0x0148(0x0004) (Edit)
	unsigned long                                      bActive : 1;                                              // 0x014C(0x0004) (Transient)
	float                                              HeatShieldingWeight;                                      // 0x0150(0x0004) (Transient)
	float                                              HeatStrength;                                             // 0x0154(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimHeatShielding");
		return ptr;
	}

};


// Class OLGame.OLAnimLocomotion
// 0x001F (0x015C - 0x013D)
class UOLAnimLocomotion : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              MinMovingContribUnder90;                                  // 0x0140(0x0004) (Edit)
	float                                              MinMovingContribOver90;                                   // 0x0144(0x0004) (Edit)
	float                                              BlendTimePct;                                             // 0x0148(0x0004) (Edit)
	int                                                ActiveChildIdx;                                           // 0x014C(0x0004) (Transient)
	float                                              TransitionBlendTime;                                      // 0x0150(0x0004) (Transient)
	unsigned long                                      bIsTurning : 1;                                           // 0x0154(0x0004) (Transient)
	unsigned long                                      bReachedHalfTurn : 1;                                     // 0x0154(0x0004) (Transient)
	unsigned long                                      bMoveOnNextFrame : 1;                                     // 0x0154(0x0004) (Transient)
	float                                              SliderPosition;                                           // 0x0158(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimLocomotion");
		return ptr;
	}

};


// Class OLGame.OLAnimMultiCycleConstrainedMovement
// 0x0010 (0x0174 - 0x0164)
class UOLAnimMultiCycleConstrainedMovement : public UAnimNodeBlendList
{
public:
	unsigned long                                      bUpDown : 1;                                              // 0x0164(0x0004) (Edit)
	unsigned long                                      bCompleteCyclesOnly : 1;                                  // 0x0164(0x0004) (Edit)
	unsigned long                                      bCommitMoves : 1;                                         // 0x0164(0x0004) (Edit)
	float                                              SmoothedDelta;                                            // 0x0168(0x0004) (Transient)
	float                                              CurrentRatio;                                             // 0x016C(0x0004) (Transient)
	int                                                CurrentIdx;                                               // 0x0170(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimMultiCycleConstrainedMovement");
		return ptr;
	}

};


// Class OLGame.OLAnimNodeDelayed
// 0x000C (0x0170 - 0x0164)
class UOLAnimNodeDelayed : public UAnimNodeBlendList
{
public:
	float                                              TimeDelay;                                                // 0x0164(0x0004) (Edit)
	float                                              BlendTime;                                                // 0x0168(0x0004) (Edit)
	float                                              ElapsedTime;                                              // 0x016C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNodeDelayed");
		return ptr;
	}

};


// Class OLGame.OLAnimNodeSlot
// 0x0000 (0x0164 - 0x0164)
class UOLAnimNodeSlot : public UAnimNodeSlot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNodeSlot");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_AttachWeapon
// 0x001C (0x0080 - 0x0064)
class UOLAnimNotify_AttachWeapon : public UAnimNotify
{
public:
	class USkeletalMesh*                               WeaponSkelMesh;                                           // 0x0064(0x0008) (Edit)
	struct FString                                     AttachBoneName;                                           // 0x006C(0x0010) (Edit, NeedCtorLink)
	float                                              Duration;                                                 // 0x007C(0x0004) (EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_AttachWeapon");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_Blur
// 0x0014 (0x0078 - 0x0064)
class UOLAnimNotify_Blur : public UAnimNotify
{
public:
	float                                              Amount;                                                   // 0x0064(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0068(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x006C(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0070(0x0004) (Edit)
	float                                              Desaturation;                                             // 0x0074(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_Blur");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_Door
// 0x000C (0x0070 - 0x0064)
class UOLAnimNotify_Door : public UAnimNotify
{
public:
	TEnumAsByte<EDoorInteraction>                      Interaction;                                              // 0x0064(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              AngleWhenOpen;                                            // 0x0068(0x0004) (Edit)
	float                                              Duration;                                                 // 0x006C(0x0004) (EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_Door");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_Fade
// 0x0010 (0x0074 - 0x0064)
class UOLAnimNotify_Fade : public UAnimNotify
{
public:
	unsigned long                                      bFadeIn : 1;                                              // 0x0064(0x0004) (Edit)
	unsigned long                                      bForceStartValue : 1;                                     // 0x0064(0x0004) (Edit)
	float                                              Opacity;                                                  // 0x0068(0x0004) (Edit)
	struct FColor                                      FadeColor;                                                // 0x006C(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0070(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_Fade");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_LeftHandIK
// 0x001C (0x0080 - 0x0064)
class UOLAnimNotify_LeftHandIK : public UAnimNotify
{
public:
	TEnumAsByte<EIKTargetType>                         TargetType;                                               // 0x0064(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              FadeInTime;                                               // 0x0068(0x0004) (Edit)
	float                                              FadeOutTime;                                              // 0x006C(0x0004) (Edit)
	struct FVector                                     EffectorOffset;                                           // 0x0070(0x000C) (Edit)
	float                                              Duration;                                                 // 0x007C(0x0004) (EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_LeftHandIK");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_ModifyPlayrate
// 0x0004 (0x0068 - 0x0064)
class UOLAnimNotify_ModifyPlayrate : public UAnimNotify
{
public:
	float                                              NewRate;                                                  // 0x0064(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_ModifyPlayrate");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_NonFatalDamage
// 0x0004 (0x0068 - 0x0064)
class UOLAnimNotify_NonFatalDamage : public UAnimNotify
{
public:
	int                                                DamageAmount;                                             // 0x0064(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_NonFatalDamage");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_OverrideCameraParams
// 0x001C (0x0080 - 0x0064)
class UOLAnimNotify_OverrideCameraParams : public UAnimNotify
{
public:
	unsigned long                                      bResetToDefault : 1;                                      // 0x0064(0x0004) (Edit)
	unsigned long                                      bLocalSpacePlayerControl : 1;                             // 0x0064(0x0004) (Edit)
	unsigned long                                      bMinYaw : 1;                                              // 0x0064(0x0004) (Edit)
	unsigned long                                      bMaxYaw : 1;                                              // 0x0064(0x0004) (Edit)
	unsigned long                                      bMinPitchWS : 1;                                          // 0x0064(0x0004) (Edit)
	unsigned long                                      bMaxPitchWS : 1;                                          // 0x0064(0x0004) (Edit)
	unsigned long                                      bMinPitchCS : 1;                                          // 0x0064(0x0004) (Edit)
	unsigned long                                      bMaxPitchCS : 1;                                          // 0x0064(0x0004) (Edit)
	float                                              MinYaw;                                                   // 0x0068(0x0004) (Edit)
	float                                              MaxYaw;                                                   // 0x006C(0x0004) (Edit)
	float                                              MinPitchWS;                                               // 0x0070(0x0004) (Edit)
	float                                              MaxPitchWS;                                               // 0x0074(0x0004) (Edit)
	float                                              MinPitchCS;                                               // 0x0078(0x0004) (Edit)
	float                                              MaxPitchCS;                                               // 0x007C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_OverrideCameraParams");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_PlayWeaponAnimation
// 0x0000 (0x0064 - 0x0064)
class UOLAnimNotify_PlayWeaponAnimation : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_PlayWeaponAnimation");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_ProceduralAdjust
// 0x0004 (0x0068 - 0x0064)
class UOLAnimNotify_ProceduralAdjust : public UAnimNotify
{
public:
	float                                              Duration;                                                 // 0x0064(0x0004) (EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_ProceduralAdjust");
		return ptr;
	}

};


// Class OLGame.OLAnimNotify_PropAttachment
// 0x0028 (0x008C - 0x0064)
class UOLAnimNotify_PropAttachment : public UAnimNotify
{
public:
	unsigned long                                      bHideWhenDone : 1;                                        // 0x0064(0x0004) (Edit)
	unsigned long                                      bDiscardOffsets : 1;                                      // 0x0064(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x0068(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x006C(0x0004) (Edit)
	struct FVector                                     PositionOffset;                                           // 0x0070(0x000C)
	struct FRotator                                    OrientationOffset;                                        // 0x007C(0x000C)
	float                                              Duration;                                                 // 0x0088(0x0004) (EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimNotify_PropAttachment");
		return ptr;
	}

};


// Class OLGame.OLAnimParrying
// 0x002B (0x0168 - 0x013D)
class UOLAnimParrying : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              MinimumDistance;                                          // 0x0140(0x0004) (Edit)
	float                                              LowDistance;                                              // 0x0144(0x0004) (Edit)
	float                                              HighDistance;                                             // 0x0148(0x0004) (Edit)
	float                                              AngleRange;                                               // 0x014C(0x0004) (Edit)
	unsigned long                                      bActive : 1;                                              // 0x0150(0x0004) (Transient)
	float                                              EnemyDistance;                                            // 0x0154(0x0004) (Transient)
	float                                              EnemyRelYaw;                                              // 0x0158(0x0004) (Transient)
	float                                              ParryWeight;                                              // 0x015C(0x0004) (Transient)
	float                                              ParryStrength;                                            // 0x0160(0x0004) (Transient)
	float                                              ParryAngleRatio;                                          // 0x0164(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimParrying");
		return ptr;
	}

};


// Class OLGame.OLAnimPeeking
// 0x002F (0x016C - 0x013D)
class UOLAnimPeeking : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	int                                                ActiveChildIdx;                                           // 0x0140(0x0004) (Transient)
	float                                              CurrentRatio;                                             // 0x0144(0x0004) (Transient)
	float                                              TargetRatio;                                              // 0x0148(0x0004) (Transient)
	TArray<struct FQuat>                               CornerToHandQuats;                                        // 0x014C(0x0010) (Edit, NeedCtorLink)
	TArray<struct FVector>                             CornerToHandVecs;                                         // 0x015C(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimPeeking");
		return ptr;
	}

};


// Class OLGame.OLAnimPushing
// 0x0007 (0x0144 - 0x013D)
class UOLAnimPushing : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	float                                              PushRatio;                                                // 0x0140(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimPushing");
		return ptr;
	}

};


// Class OLGame.OLAnimRandomCycle
// 0x001C (0x0180 - 0x0164)
class UOLAnimRandomCycle : public UAnimNodeBlendList
{
public:
	float                                              DefaultCycleBiasWalking;                                  // 0x0164(0x0004) (Edit)
	float                                              DefaultCycleBiasRunning;                                  // 0x0168(0x0004) (Edit)
	float                                              BlendTime;                                                // 0x016C(0x0004) (Edit)
	float                                              NextCycleCheckTime;                                       // 0x0170(0x0004) (Transient)
	unsigned long                                      bIsMaster : 1;                                            // 0x0174(0x0004) (Transient)
	class UOLAnimRandomCycle*                          ShadowNode;                                               // 0x0178(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimRandomCycle");
		return ptr;
	}

};


// Class OLGame.OLAnimSelectByCamcorder
// 0x0000 (0x0164 - 0x0164)
class UOLAnimSelectByCamcorder : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimSelectByCamcorder");
		return ptr;
	}

};


// Class OLGame.OLAnimSelectByPhysicsVolume
// 0x0000 (0x0164 - 0x0164)
class UOLAnimSelectByPhysicsVolume : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimSelectByPhysicsVolume");
		return ptr;
	}

};


// Class OLGame.OLAnimSelectByShadowProxy
// 0x0000 (0x0164 - 0x0164)
class UOLAnimSelectByShadowProxy : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimSelectByShadowProxy");
		return ptr;
	}

};


// Class OLGame.OLAnimSelectByWalkingStyle
// 0x0000 (0x0164 - 0x0164)
class UOLAnimSelectByWalkingStyle : public UAnimNodeBlendList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimSelectByWalkingStyle");
		return ptr;
	}

};


// Class OLGame.OLAnimSmartIdle
// 0x004F (0x018C - 0x013D)
class UOLAnimSmartIdle : public UAnimNodeBlendBase
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x013D(0x0003) MISSED OFFSET
	unsigned long                                      bModifyPlayrateIdle : 1;                                  // 0x0140(0x0004) (Edit)
	float                                              IdleMinRate;                                              // 0x0144(0x0004) (Edit)
	float                                              IdleMaxRate;                                              // 0x0148(0x0004) (Edit)
	float                                              IdleRateMinDuration;                                      // 0x014C(0x0004) (Edit)
	float                                              IdleRateMaxDuration;                                      // 0x0150(0x0004) (Edit)
	float                                              IdleRateTransitionSpeed;                                  // 0x0154(0x0004) (Edit)
	float                                              IdleBias;                                                 // 0x0158(0x0004) (Edit)
	float                                              BreakerMaxWeight;                                         // 0x015C(0x0004) (Edit)
	float                                              BreakerMinDuration;                                       // 0x0160(0x0004) (Edit)
	float                                              BreakerMaxDuration;                                       // 0x0164(0x0004) (Edit)
	float                                              MinBreakerWeightTransitionSpeed;                          // 0x0168(0x0004) (Edit)
	float                                              MaxBreakerWeightTransitionSpeed;                          // 0x016C(0x0004) (Edit)
	float                                              CurrentIdleRate;                                          // 0x0170(0x0004) (Transient)
	float                                              TargetIdleRate;                                           // 0x0174(0x0004) (Transient)
	float                                              NextIdleRateTransition;                                   // 0x0178(0x0004) (Transient)
	float                                              CurrentBreakerWeight;                                     // 0x017C(0x0004) (Transient)
	float                                              TargetBreakerWeight;                                      // 0x0180(0x0004) (Transient)
	float                                              BreakerWeightTransitionSpeed;                             // 0x0184(0x0004) (Transient)
	float                                              NextBreakerWeightTransition;                              // 0x0188(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimSmartIdle");
		return ptr;
	}

};


// Class OLGame.OLAnimStruggleCycle
// 0x0000 (0x0198 - 0x0198)
class UOLAnimStruggleCycle : public UAnimNodeSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimStruggleCycle");
		return ptr;
	}

};


// Class OLGame.OLAnimTurnOnSpot
// 0x0004 (0x0168 - 0x0164)
class UOLAnimTurnOnSpot : public UAnimNodeBlendList
{
public:
	float                                              CurrentFeetHeading;                                       // 0x0164(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLAnimTurnOnSpot");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_Achievement
// 0x0001 (0x0151 - 0x0150)
class UOLSeqAct_Achievement : public USequenceAction
{
public:
	TEnumAsByte<EOutlastAchievement>                   achievement;                                              // 0x0150(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_Achievement");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_AdjustToFloor
// 0x0008 (0x0158 - 0x0150)
class UOLSeqAct_AdjustToFloor : public USequenceAction
{
public:
	float                                              Duration;                                                 // 0x0150(0x0004) (Edit)
	float                                              HeightOffset;                                             // 0x0154(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_AdjustToFloor");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_AIAbortPatrol
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_AIAbortPatrol : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_AIAbortPatrol");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_AIStartPatrol
// 0x0018 (0x0180 - 0x0168)
class UOLSeqAct_AIStartPatrol : public USeqAct_Latent
{
public:
	class ARoute*                                      PatrolRoute;                                              // 0x0168(0x0008) (Edit)
	unsigned long                                      bStartAtClosestPoint : 1;                                 // 0x0170(0x0004) (Edit)
	unsigned long                                      FollowPlayer : 1;                                         // 0x0170(0x0004) (Edit)
	TEnumAsByte<EEnemyMode>                            PatrolMode;                                               // 0x0174(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0175(0x0003) MISSED OFFSET
	float                                              FollowDistance;                                           // 0x0178(0x0004) (Edit)
	float                                              FollowUpdateRate;                                         // 0x017C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_AIStartPatrol");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
};


// Class OLGame.OLSeqAct_AnimControl
// 0x002C (0x0194 - 0x0168)
class UOLSeqAct_AnimControl : public USeqAct_Latent
{
public:
	struct FName                                       BaseAnimName;                                             // 0x0168(0x0008) (Edit)
	TArray<struct FAnimParams>                         ExtraAnims;                                               // 0x0170(0x0010) (Edit, NeedCtorLink)
	struct FName                                       SlotName;                                                 // 0x0180(0x0008)
	struct FName                                       BaseAnimNodeName;                                         // 0x0188(0x0008)
	int                                                PlayingIdx;                                               // 0x0190(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_AnimControl");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_Blur
// 0x0014 (0x0164 - 0x0150)
class UOLSeqAct_Blur : public USequenceAction
{
public:
	float                                              Amount;                                                   // 0x0150(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0154(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x0158(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x015C(0x0004) (Edit)
	float                                              Desaturation;                                             // 0x0160(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_Blur");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_Camcorder
// 0x0010 (0x0160 - 0x0150)
class UOLSeqAct_Camcorder : public USequenceAction
{
public:
	unsigned long                                      bWithNightVision : 1;                                     // 0x0150(0x0004) (Edit)
	float                                              NewMinFOV;                                                // 0x0154(0x0004) (Edit)
	int                                                NewNumBatteries;                                          // 0x0158(0x0004) (Edit)
	float                                              NewCurrentEnergy;                                         // 0x015C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_Camcorder");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_CameraGlitch
// 0x000C (0x015C - 0x0150)
class UOLSeqAct_CameraGlitch : public USequenceAction
{
public:
	float                                              GlitchDuration;                                           // 0x0150(0x0004) (Edit)
	float                                              GlitchIntensity;                                          // 0x0154(0x0004) (Edit)
	float                                              GlitchFrequency;                                          // 0x0158(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_CameraGlitch");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_CameraParticleEffect
// 0x0010 (0x0160 - 0x0150)
class UOLSeqAct_CameraParticleEffect : public USequenceAction
{
public:
	class UParticleSystem*                             ParticleSystemTemplate;                                   // 0x0150(0x0008) (Edit)
	float                                              Duration;                                                 // 0x0158(0x0004) (Edit)
	float                                              PlaneDist;                                                // 0x015C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_CameraParticleEffect");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_CameraShake
// 0x007C (0x01CC - 0x0150)
class UOLSeqAct_CameraShake : public USequenceAction
{
public:
	struct FCameraShakeData                            Params;                                                   // 0x0150(0x007C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_CameraShake");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_ChokePoint
// 0x0014 (0x017C - 0x0168)
class UOLSeqAct_ChokePoint : public USeqAct_Latent
{
public:
	unsigned long                                      bWaitingForLoaded : 1;                                    // 0x0168(0x0004)
	unsigned long                                      bWaitingForVisible : 1;                                   // 0x0168(0x0004)
	unsigned long                                      bNonBlocking : 1;                                         // 0x0168(0x0004) (Edit)
	TArray<struct FName>                               LevelNames;                                               // 0x016C(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_ChokePoint");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_ConditionalHideBatteries
// 0x0008 (0x0158 - 0x0150)
class UOLSeqAct_ConditionalHideBatteries : public USequenceAction
{
public:
	int                                                MaxNumBatteries;                                          // 0x0150(0x0004) (Edit)
	unsigned long                                      bHideInHardMode : 1;                                      // 0x0154(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_ConditionalHideBatteries");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_CrackCameraGlass
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_CrackCameraGlass : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_CrackCameraGlass");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_DarkLightControl
// 0x0008 (0x0158 - 0x0150)
class UOLSeqAct_DarkLightControl : public USequenceAction
{
public:
	float                                              DarkLightBrightness;                                      // 0x0150(0x0004) (Edit)
	float                                              DarkLightRadius;                                          // 0x0154(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_DarkLightControl");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_Door
// 0x004D (0x019D - 0x0150)
class UOLSeqAct_Door : public USequenceAction
{
public:
	float                                              RotationSpeedOverride;                                    // 0x0150(0x0004) (Edit)
	float                                              OpenAngle;                                                // 0x0154(0x0004) (Edit)
	unsigned long                                      bNoSound : 1;                                             // 0x0158(0x0004) (Edit)
	unsigned long                                      bBashReversed : 1;                                        // 0x0158(0x0004) (Edit)
	unsigned long                                      bSwitchToBreakingMesh : 1;                                // 0x0158(0x0004) (Edit)
	struct FDoorShakeData                              ShakeParams;                                              // 0x015C(0x0040) (Edit)
	TEnumAsByte<ECancelBashDirection>                  CancelBashDirection;                                      // 0x019C(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_Door");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
};


// Class OLGame.OLSeqAct_DoorStatus
// 0x0004 (0x0154 - 0x0150)
class UOLSeqAct_DoorStatus : public USequenceAction
{
public:
	float                                              OpenAngle;                                                // 0x0150(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_DoorStatus");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_Fade
// 0x0010 (0x0160 - 0x0150)
class UOLSeqAct_Fade : public USequenceAction
{
public:
	unsigned long                                      bFadeIn : 1;                                              // 0x0150(0x0004) (Edit)
	unsigned long                                      bForceStartValue : 1;                                     // 0x0150(0x0004) (Edit)
	float                                              Opacity;                                                  // 0x0154(0x0004) (Edit)
	struct FColor                                      FadeColor;                                                // 0x0158(0x0004) (Edit)
	float                                              Duration;                                                 // 0x015C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_Fade");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_ForceStance
// 0x0004 (0x0154 - 0x0150)
class UOLSeqAct_ForceStance : public USequenceAction
{
public:
	unsigned long                                      bCrouch : 1;                                              // 0x0150(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_ForceStance");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_GameOver
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_GameOver : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_GameOver");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_GameplayItem
// 0x0008 (0x0158 - 0x0150)
class UOLSeqAct_GameplayItem : public USequenceAction
{
public:
	struct FName                                       ItemName;                                                 // 0x0150(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_GameplayItem");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_HeroControl
// 0x0044 (0x01AC - 0x0168)
class UOLSeqAct_HeroControl : public USeqAct_Latent
{
public:
	float                                              FixedDuration;                                            // 0x0168(0x0004) (Edit)
	float                                              LookAtBlendInTime;                                        // 0x016C(0x0004) (Edit)
	float                                              MovementSpeed;                                            // 0x0170(0x0004) (Edit)
	float                                              RotationSpeed;                                            // 0x0174(0x0004) (Edit)
	class AActor*                                      GoToTarget;                                               // 0x0178(0x0008)
	class AActor*                                      LookAtTarget;                                             // 0x0180(0x0008)
	unsigned long                                      bCompleted : 1;                                           // 0x0188(0x0004)
	unsigned long                                      bPendingKill : 1;                                         // 0x0188(0x0004)
	float                                              ElapsedTime;                                              // 0x018C(0x0004)
	float                                              Duration;                                                 // 0x0190(0x0004)
	struct FVector                                     OriginalCamLocation;                                      // 0x0194(0x000C)
	struct FRotator                                    OriginalCamRotation;                                      // 0x01A0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_HeroControl");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_IgnoreBaseRotation
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_IgnoreBaseRotation : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_IgnoreBaseRotation");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_Limp
// 0x0001 (0x0151 - 0x0150)
class UOLSeqAct_Limp : public USequenceAction
{
public:
	TEnumAsByte<EHobbleIntensity>                      HobbleIntensity;                                          // 0x0150(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_Limp");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_LoadingScreen
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_LoadingScreen : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_LoadingScreen");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_MovieEffect
// 0x0054 (0x01A4 - 0x0150)
class UOLSeqAct_MovieEffect : public USequenceAction
{
public:
	float                                              ScaleIntensity;                                           // 0x0150(0x0004) (Edit)
	unsigned long                                      bStartAtRandomFrame : 1;                                  // 0x0154(0x0004) (Edit)
	class UTextureMovie*                               Movie;                                                    // 0x0158(0x0008) (Edit)
	class UAkEvent*                                    SndEventPlay;                                             // 0x0160(0x0008) (Edit)
	class UAkEvent*                                    SndEventStop;                                             // 0x0168(0x0008) (Edit)
	TEnumAsByte<EMovieEffectAnim>                      AnimType;                                                 // 0x0170(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0171(0x0003) MISSED OFFSET
	TArray<struct FVector2D>                           Anim1;                                                    // 0x0174(0x0010) (Edit, NeedCtorLink)
	TArray<struct FVector2D>                           Anim2;                                                    // 0x0184(0x0010) (Edit, NeedCtorLink)
	TArray<struct FVector2D>                           Anim3;                                                    // 0x0194(0x0010) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_MovieEffect");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_NightVisionStatus
// 0x0004 (0x0154 - 0x0150)
class UOLSeqAct_NightVisionStatus : public USequenceAction
{
public:
	float                                              RemainingBatteries;                                       // 0x0150(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_NightVisionStatus");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_OpenMainMenu
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_OpenMainMenu : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_OpenMainMenu");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_Pushable
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_Pushable : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_Pushable");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_PushableObject
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_PushableObject : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_PushableObject");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_RainEffect
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_RainEffect : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_RainEffect");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_ReadDocument
// 0x0008 (0x0158 - 0x0150)
class UOLSeqAct_ReadDocument : public USequenceAction
{
public:
	struct FName                                       DocumentName;                                             // 0x0150(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_ReadDocument");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_SetEnemyMoveSpeed
// 0x002C (0x017C - 0x0150)
class UOLSeqAct_SetEnemyMoveSpeed : public USequenceAction
{
public:
	TEnumAsByte<EMoveSpeedMode>                        MoveSpeedMode;                                            // 0x0150(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              PatrolSpeedOverride;                                      // 0x0154(0x0004) (Edit)
	float                                              InvestigateSpeedOverride;                                 // 0x0158(0x0004) (Edit)
	float                                              ChaseSpeedOverride;                                       // 0x015C(0x0004) (Edit)
	float                                              AccelRate;                                                // 0x0160(0x0004) (Edit)
	float                                              DecelRate;                                                // 0x0164(0x0004) (Edit)
	float                                              SpeedNoVisibility;                                        // 0x0168(0x0004) (Edit)
	float                                              ChaseSpeedAtMinDist;                                      // 0x016C(0x0004) (Edit)
	float                                              ChaseSpeedAtMaxDist;                                      // 0x0170(0x0004) (Edit)
	float                                              ChaseDistMin;                                             // 0x0174(0x0004) (Edit)
	float                                              ChaseDistMax;                                             // 0x0178(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_SetEnemyMoveSpeed");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_SetObjective
// 0x000C (0x015C - 0x0150)
class UOLSeqAct_SetObjective : public USequenceAction
{
public:
	struct FName                                       ObjectiveTextId;                                          // 0x0150(0x0008) (Edit)
	unsigned long                                      bActivateOnlyOnce : 1;                                    // 0x0158(0x0004) (Edit)
	unsigned long                                      bResetOnPlayerDeath : 1;                                  // 0x0158(0x0004) (Edit)
	unsigned long                                      bHasBeenActivated : 1;                                    // 0x0158(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_SetObjective");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_SplashScreen
// 0x0004 (0x016C - 0x0168)
class UOLSeqAct_SplashScreen : public USeqAct_Latent
{
public:
	unsigned long                                      bPauseGame : 1;                                           // 0x0168(0x0004) (Edit)
	unsigned long                                      bAlwaysReady : 1;                                         // 0x0168(0x0004) (Edit)
	unsigned long                                      bDone : 1;                                                // 0x0168(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_SplashScreen");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_Struggle
// 0x00A0 (0x0208 - 0x0168)
class UOLSeqAct_Struggle : public USeqAct_Latent
{
public:
	struct FStruggleConfig                             Config;                                                   // 0x0168(0x007C) (Edit, NeedCtorLink)
	class ASkeletalMeshActor*                          Enemy;                                                    // 0x01E4(0x0008)
	struct FVector                                     RefLocation;                                              // 0x01EC(0x000C)
	struct FVector                                     RefDirection;                                             // 0x01F8(0x000C)
	unsigned long                                      bSucceeded : 1;                                           // 0x0204(0x0004)
	unsigned long                                      bFailed : 1;                                              // 0x0204(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_Struggle");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
};


// Class OLGame.OLSeqAct_ToggleNightVision
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_ToggleNightVision : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_ToggleNightVision");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_Tutorial
// 0x0020 (0x0188 - 0x0168)
class UOLSeqAct_Tutorial : public USeqAct_Latent
{
public:
	struct FName                                       TutorialTextId;                                           // 0x0168(0x0008) (Edit)
	struct FName                                       TutorialTextIdGamepad;                                    // 0x0170(0x0008) (Edit)
	float                                              DisplayTime;                                              // 0x0178(0x0004) (Edit)
	int                                                TutorialId;                                               // 0x017C(0x0004)
	unsigned long                                      bIsDone : 1;                                              // 0x0180(0x0004)
	float                                              ElapsedTime;                                              // 0x0184(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_Tutorial");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_WaitForPlayerInput
// 0x001C (0x0184 - 0x0168)
class UOLSeqAct_WaitForPlayerInput : public USeqAct_Latent
{
public:
	unsigned long                                      bOnClick : 1;                                             // 0x0168(0x0004) (Edit)
	unsigned long                                      bWaiting : 1;                                             // 0x0168(0x0004) (Transient)
	struct FName                                       PromptTextId;                                             // 0x016C(0x0008) (Edit)
	struct FString                                     TranslatedPrompt;                                         // 0x0174(0x0010) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_WaitForPlayerInput");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_ZoomImpulse
// 0x0004 (0x0154 - 0x0150)
class UOLSeqAct_ZoomImpulse : public USequenceAction
{
public:
	float                                              ImpulseScale;                                             // 0x0150(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_ZoomImpulse");
		return ptr;
	}

};


// Class OLGame.OLSeqCond_AIState
// 0x0000 (0x0134 - 0x0134)
class UOLSeqCond_AIState : public USequenceCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqCond_AIState");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
};


// Class OLGame.OLSeqCond_Checkpoint
// 0x000C (0x0140 - 0x0134)
class UOLSeqCond_Checkpoint : public USequenceCondition
{
public:
	struct FName                                       CheckpointName;                                           // 0x0134(0x0008) (Edit)
	unsigned long                                      bStatusIsOk : 1;                                          // 0x013C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqCond_Checkpoint");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
};


// Class OLGame.OLSeqCond_CompareDeaths
// 0x0004 (0x0138 - 0x0134)
class UOLSeqCond_CompareDeaths : public USequenceCondition
{
public:
	int                                                Value;                                                    // 0x0134(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqCond_CompareDeaths");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
};


// Class OLGame.OLSeqCond_DetailMode
// 0x0004 (0x0138 - 0x0134)
class UOLSeqCond_DetailMode : public USequenceCondition
{
public:
	unsigned long                                      bResult : 1;                                              // 0x0134(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqCond_DetailMode");
		return ptr;
	}

};


// Class OLGame.OLSeqCond_GameState
// 0x000C (0x0140 - 0x0134)
class UOLSeqCond_GameState : public USequenceCondition
{
public:
	struct FName                                       GameStateName;                                            // 0x0134(0x0008) (Edit)
	unsigned long                                      bStatusIsOk : 1;                                          // 0x013C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqCond_GameState");
		return ptr;
	}

};


// Class OLGame.OLSeqCond_IsDemo
// 0x0004 (0x0138 - 0x0134)
class UOLSeqCond_IsDemo : public USequenceCondition
{
public:
	unsigned long                                      bResult : 1;                                              // 0x0134(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqCond_IsDemo");
		return ptr;
	}

};


// Class OLGame.OLSeqCond_IsTouching
// 0x0004 (0x0138 - 0x0134)
class UOLSeqCond_IsTouching : public USequenceCondition
{
public:
	unsigned long                                      bResult : 1;                                              // 0x0134(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqCond_IsTouching");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
};


// Class OLGame.OLSeqEvent_AILostTarget
// 0x0004 (0x0174 - 0x0170)
class UOLSeqEvent_AILostTarget : public USequenceEvent
{
public:
	unsigned long                                      bOnlyAfterChase : 1;                                      // 0x0170(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_AILostTarget");
		return ptr;
	}

};


// Class OLGame.OLSeqEvent_AIWaypointAction
// 0x0000 (0x0170 - 0x0170)
class UOLSeqEvent_AIWaypointAction : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_AIWaypointAction");
		return ptr;
	}

};


// Class OLGame.OLSeqEvent_ApplyCheckpointState
// 0x000C (0x017C - 0x0170)
class UOLSeqEvent_ApplyCheckpointState : public USequenceEvent
{
public:
	struct FName                                       CheckpointName;                                           // 0x0170(0x0008) (Edit)
	unsigned long                                      bStatusIsOk : 1;                                          // 0x0178(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_ApplyCheckpointState");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
};


// Class OLGame.OLSeqEvent_ApplyGameState
// 0x000C (0x017C - 0x0170)
class UOLSeqEvent_ApplyGameState : public USequenceEvent
{
public:
	struct FName                                       GameStateName;                                            // 0x0170(0x0008) (Edit)
	unsigned long                                      bStatusIsOk : 1;                                          // 0x0178(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_ApplyGameState");
		return ptr;
	}

};


// Class OLGame.OLSeqEvent_BehaviorEvent
// 0x0008 (0x0178 - 0x0170)
class UOLSeqEvent_BehaviorEvent : public USequenceEvent
{
public:
	struct FName                                       EventName;                                                // 0x0170(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_BehaviorEvent");
		return ptr;
	}

};


// Class OLGame.OLSeqEvent_CSAActivated
// 0x0000 (0x0170 - 0x0170)
class UOLSeqEvent_CSAActivated : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_CSAActivated");
		return ptr;
	}

};


// Class OLGame.OLSeqEvent_Door
// 0x0008 (0x0178 - 0x0170)
class UOLSeqEvent_Door : public USequenceEvent
{
public:
	float                                              OpenThreshold;                                            // 0x0170(0x0004) (Edit)
	unsigned long                                      bOpenThresholdOnlyForInteractiveOpen : 1;                 // 0x0174(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_Door");
		return ptr;
	}


	int STATIC_GetObjClassVersion();
};


// Class OLGame.OLSeqEvent_NightVision
// 0x0000 (0x0170 - 0x0170)
class UOLSeqEvent_NightVision : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_NightVision");
		return ptr;
	}

};


// Class OLGame.OLSeqEvent_Pickup
// 0x0000 (0x0170 - 0x0170)
class UOLSeqEvent_Pickup : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_Pickup");
		return ptr;
	}

};


// Class OLGame.OLSeqEvent_Pushable
// 0x0000 (0x0170 - 0x0170)
class UOLSeqEvent_Pushable : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_Pushable");
		return ptr;
	}

};


// Class OLGame.OLSeqEvent_RecordingComplete
// 0x0000 (0x0170 - 0x0170)
class UOLSeqEvent_RecordingComplete : public USequenceEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_RecordingComplete");
		return ptr;
	}

};


// Class OLGame.OLSeqEvent_SpawnedAtCheckpoint
// 0x000C (0x017C - 0x0170)
class UOLSeqEvent_SpawnedAtCheckpoint : public USequenceEvent
{
public:
	struct FName                                       CheckpointName;                                           // 0x0170(0x0008) (Edit)
	unsigned long                                      bStatusIsOk : 1;                                          // 0x0178(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqEvent_SpawnedAtCheckpoint");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_ToggleAIIgnorePlayer
// 0x0004 (0x0154 - 0x0150)
class UOLSeqAct_ToggleAIIgnorePlayer : public USequenceAction
{
public:
	unsigned long                                      bSetOnGroup : 1;                                          // 0x0150(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_ToggleAIIgnorePlayer");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_ToggleAIAlwaysSeePlayer
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_ToggleAIAlwaysSeePlayer : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_ToggleAIAlwaysSeePlayer");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_ToggleAIAttackOnProximity
// 0x0000 (0x0150 - 0x0150)
class UOLSeqAct_ToggleAIAttackOnProximity : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_ToggleAIAttackOnProximity");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_AIInvestigatePoint
// 0x000C (0x015C - 0x0150)
class UOLSeqAct_AIInvestigatePoint : public USequenceAction
{
public:
	class AActor*                                      Point;                                                    // 0x0150(0x0008) (Edit)
	unsigned long                                      bStartChasing : 1;                                        // 0x0158(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_AIInvestigatePoint");
		return ptr;
	}

};


// Class OLGame.OLBTIfCustomTask
// 0x0000 (0x007C - 0x007C)
class UOLBTIfCustomTask : public UOLBTIfTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTIfCustomTask");
		return ptr;
	}

};


// Class OLGame.OLBTCanAttackTask
// 0x0000 (0x007C - 0x007C)
class UOLBTCanAttackTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTCanAttackTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTDistanceToPlayerNode
// 0x0005 (0x00B5 - 0x00B0)
class UOLBTDistanceToPlayerNode : public UOLBTIfNode
{
public:
	float                                              Distance;                                                 // 0x00B0(0x0004) (Edit)
	TEnumAsByte<EBTComparison>                         Comparison;                                               // 0x00B4(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTDistanceToPlayerNode");
		return ptr;
	}

};


// Class OLGame.OLBTDistanceToPlayerTask
// 0x0000 (0x007C - 0x007C)
class UOLBTDistanceToPlayerTask : public UOLBTIfTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTDistanceToPlayerTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTHasDisturbanceTask
// 0x0000 (0x007C - 0x007C)
class UOLBTHasDisturbanceTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTHasDisturbanceTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTHasFollowPatrolTask
// 0x0000 (0x007C - 0x007C)
class UOLBTHasFollowPatrolTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTHasFollowPatrolTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTHasInvestigationPointTask
// 0x0000 (0x007C - 0x007C)
class UOLBTHasInvestigationPointTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTHasInvestigationPointTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTHasNewDisturbanceTask
// 0x0000 (0x007C - 0x007C)
class UOLBTHasNewDisturbanceTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTHasNewDisturbanceTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTHasPatrolTask
// 0x0000 (0x007C - 0x007C)
class UOLBTHasPatrolTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTHasPatrolTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTHasValidTargetTask
// 0x0000 (0x007C - 0x007C)
class UOLBTHasValidTargetTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTHasValidTargetTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTHasVisibleTargetTask
// 0x0000 (0x007C - 0x007C)
class UOLBTHasVisibleTargetTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTHasVisibleTargetTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTIsInBehaviorStateNode
// 0x0001 (0x00B1 - 0x00B0)
class UOLBTIsInBehaviorStateNode : public UOLBTIfNode
{
public:
	TEnumAsByte<EAIBehaviorState>                      BehaviorState;                                            // 0x00B0(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTIsInBehaviorStateNode");
		return ptr;
	}

};


// Class OLGame.OLBTIsInBehaviorStateTask
// 0x0000 (0x007C - 0x007C)
class UOLBTIsInBehaviorStateTask : public UOLBTIfTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTIsInBehaviorStateTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTIsInMatineeTask
// 0x0000 (0x007C - 0x007C)
class UOLBTIsInMatineeTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTIsInMatineeTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTIsInvestigatingTask
// 0x0000 (0x007C - 0x007C)
class UOLBTIsInvestigatingTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTIsInvestigatingTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTIsTargetReachableTask
// 0x0000 (0x007C - 0x007C)
class UOLBTIsTargetReachableTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTIsTargetReachableTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTSawPlayerInBedTask
// 0x0000 (0x007C - 0x007C)
class UOLBTSawPlayerInBedTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSawPlayerInBedTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTSawPlayerInLockerTask
// 0x0000 (0x007C - 0x007C)
class UOLBTSawPlayerInLockerTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSawPlayerInLockerTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTSawPlayerInSqueezeTask
// 0x0000 (0x007C - 0x007C)
class UOLBTSawPlayerInSqueezeTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTSawPlayerInSqueezeTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTShouldAttackOnProximityTask
// 0x0000 (0x007C - 0x007C)
class UOLBTShouldAttackOnProximityTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTShouldAttackOnProximityTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTShouldAttackTask
// 0x0000 (0x007C - 0x007C)
class UOLBTShouldAttackTask : public UOLBTIfCustomTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTShouldAttackTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTTargetNotMovingTask
// 0x0004 (0x0080 - 0x007C)
class UOLBTTargetNotMovingTask : public UOLBTIfCustomTask
{
public:
	float                                              MovingThreshold;                                          // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTTargetNotMovingTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLBTWasLastMoveFailedReasonNode
// 0x0001 (0x00B1 - 0x00B0)
class UOLBTWasLastMoveFailedReasonNode : public UOLBTIfNode
{
public:
	TEnumAsByte<EMoveFailedReason>                     FailedReason;                                             // 0x00B0(0x0001) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWasLastMoveFailedReasonNode");
		return ptr;
	}

};


// Class OLGame.OLBTWasLastMoveFailedReasonTask
// 0x0000 (0x007C - 0x007C)
class UOLBTWasLastMoveFailedReasonTask : public UOLBTIfTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLBTWasLastMoveFailedReasonTask");
		return ptr;
	}


	bool Condition();
};


// Class OLGame.OLCamera
// 0x0000 (0x0584 - 0x0584)
class AOLCamera : public ACamera
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLCamera");
		return ptr;
	}

};


// Class OLGame.OLEmailScreen
// 0x0020 (0x0204 - 0x01E4)
class UOLEmailScreen : public UGFxMoviePlayer
{
public:
	struct FString                                     EmailText;                                                // 0x01E4(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SubjectText;                                              // 0x01F4(0x0010) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEmailScreen");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
};


// Class OLGame.OLEnemyGenericPatient_A
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_A : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_A");
		return ptr;
	}

};


// Class OLGame.OLEnemyGenericPatient_B
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_B : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_B");
		return ptr;
	}

};


// Class OLGame.OLEnemyGenericPatient_C
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_C : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_C");
		return ptr;
	}

};


// Class OLGame.OLEnemyGenericPatient_D
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_D : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_D");
		return ptr;
	}

};


// Class OLGame.OLEnemyGenericPatient_E
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_E : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_E");
		return ptr;
	}

};


// Class OLGame.OLEnemyGenericPatient_F
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_F : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_F");
		return ptr;
	}

};


// Class OLGame.OLEnemyGenericPatient_G
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_G : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_G");
		return ptr;
	}

};


// Class OLGame.OLEnemyGenericPatient_H
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_H : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_H");
		return ptr;
	}

};


// Class OLGame.OLEnemyGenericPatient_I
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_I : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_I");
		return ptr;
	}

};


// Class OLGame.OLEnemyGenericPatient_J
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_J : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_J");
		return ptr;
	}

};


// Class OLGame.OLEnemyGenericPatient_K
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyGenericPatient_K : public AOLEnemyGenericPatient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGenericPatient_K");
		return ptr;
	}

};


// Class OLGame.OLEnemyGroom_A
// 0x0000 (0x37F4 - 0x37F4)
class AOLEnemyGroom_A : public AOLEnemyGroom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyGroom_A");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_MorphNanoCloud
// 0x0008 (0x0158 - 0x0150)
class UOLSeqAct_MorphNanoCloud : public USequenceAction
{
public:
	unsigned long                                      bInstantMorph : 1;                                        // 0x0150(0x0004) (Edit)
	float                                              TimeScale;                                                // 0x0154(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_MorphNanoCloud");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_SetNanoCloudVisibility
// 0x000C (0x015C - 0x0150)
class UOLSeqAct_SetNanoCloudVisibility : public USequenceAction
{
public:
	float                                              AlwaysVisibleDistance;                                    // 0x0150(0x0004) (Edit)
	float                                              FullOpacityDistance;                                      // 0x0154(0x0004) (Edit)
	float                                              DistanceBasedVisibilityMorphTimeScale;                    // 0x0158(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_SetNanoCloudVisibility");
		return ptr;
	}

};


// Class OLGame.OLEnemyNanoCloud_A
// 0x0000 (0x38B8 - 0x38B8)
class AOLEnemyNanoCloud_A : public AOLEnemyNanoCloud
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyNanoCloud_A");
		return ptr;
	}

};


// Class OLGame.OLEnemyNanoCloud_B
// 0x0000 (0x38B8 - 0x38B8)
class AOLEnemyNanoCloud_B : public AOLEnemyNanoCloud
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyNanoCloud_B");
		return ptr;
	}

};


// Class OLGame.OLEnemyNanoCloud_C
// 0x0000 (0x38B8 - 0x38B8)
class AOLEnemyNanoCloud_C : public AOLEnemyNanoCloud
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyNanoCloud_C");
		return ptr;
	}

};


// Class OLGame.OLEnemyNanoCloud_D
// 0x0000 (0x38B8 - 0x38B8)
class AOLEnemyNanoCloud_D : public AOLEnemyNanoCloud
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyNanoCloud_D");
		return ptr;
	}

};


// Class OLGame.OLEnemyPriest
// 0x0000 (0x37EC - 0x37EC)
class AOLEnemyPriest : public AOLEnemyPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemyPriest");
		return ptr;
	}

};


// Class OLGame.OLEnemySoldier_A
// 0x0000 (0x37F4 - 0x37F4)
class AOLEnemySoldier_A : public AOLEnemySoldier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemySoldier_A");
		return ptr;
	}

};


// Class OLGame.OLEnemySoldier_B
// 0x0000 (0x37F4 - 0x37F4)
class AOLEnemySoldier_B : public AOLEnemySoldier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemySoldier_B");
		return ptr;
	}

};


// Class OLGame.OLEnemySoldier_C
// 0x0000 (0x37F4 - 0x37F4)
class AOLEnemySoldier_C : public AOLEnemySoldier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLEnemySoldier_C");
		return ptr;
	}

};


// Class OLGame.OLFlashBackScreen
// 0x0010 (0x01F4 - 0x01E4)
class UOLFlashBackScreen : public UGFxMoviePlayer
{
public:
	struct FString                                     Text;                                                     // 0x01E4(0x0010) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLFlashBackScreen");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
};


// Class OLGame.OLFlashForwardScreen
// 0x0010 (0x01F4 - 0x01E4)
class UOLFlashForwardScreen : public UGFxMoviePlayer
{
public:
	struct FString                                     Text;                                                     // 0x01E4(0x0010) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLFlashForwardScreen");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
};


// Class OLGame.OLFlashLight
// 0x0038 (0x0314 - 0x02DC)
class AOLFlashLight : public AInterpActor
{
public:
	class UStaticMeshComponent*                        FlashLightMesh;                                           // 0x02DC(0x0008) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        ConeMesh1a;                                               // 0x02E4(0x0008) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        ConeMesh1b;                                               // 0x02EC(0x0008) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        ConeMesh2a;                                               // 0x02F4(0x0008) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        ConeMesh2b;                                               // 0x02FC(0x0008) (Edit, ExportObject, Component, EditInline)
	class ULensFlareComponent*                         LensFlareMesh;                                            // 0x0304(0x0008) (Edit, ExportObject, Component, EditInline)
	class USpotLightComponent*                         LightSpotLight;                                           // 0x030C(0x0008) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLFlashLight");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class OLGame.OLPlayerReplicationInfo
// 0x0000 (0x0318 - 0x0318)
class AOLPlayerReplicationInfo : public APlayerReplicationInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLPlayerReplicationInfo");
		return ptr;
	}

};


// Class OLGame.OLGFxMoviePlayer
// 0x0000 (0x01E4 - 0x01E4)
class UOLGFxMoviePlayer : public UGFxMoviePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLGFxMoviePlayer");
		return ptr;
	}


	void OnProfileWriteComplete(unsigned char LocalUserNum, bool bWasSuccessful);
	bool SaveProfile(const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate, class AOLPlayerController* PlayerToSave);
	TScriptInterface<class UOnlinePlayerInterface> STATIC_GetOnlinePlayerInterface();
	void MuteSoundThemes(bool bMute);
	class AOLGame* STATIC_GetGame();
	class AOLPlayerController* GetOLPC();
};


// Class OLGame.OLUIFrontEnd
// 0x00D8 (0x02BC - 0x01E4)
class UOLUIFrontEnd : public UOLGFxMoviePlayer
{
public:
	struct FName                                       EscapeMenuKey;                                            // 0x01E4(0x0008)
	struct FName                                       TabMenuKey;                                               // 0x01EC(0x0008)
	struct FName                                       RecordingMenuKey;                                         // 0x01F4(0x0008)
	struct FName                                       EvidenceMenuKey;                                          // 0x01FC(0x0008)
	class UGFxObject*                                  RootMC;                                                   // 0x0204(0x0008)
	class UGFxObject*                                  ManagerMC;                                                // 0x020C(0x0008)
	unsigned long                                      bInitialized : 1;                                         // 0x0214(0x0004)
	unsigned long                                      bCapturingKeyBinding : 1;                                 // 0x0214(0x0004)
	TEnumAsByte<EMenuType>                             MenuType;                                                 // 0x0218(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	class UOLUIFrontEnd_MainMenu*                      MainMenuView;                                             // 0x021C(0x0008)
	class UOLUIFrontEnd_PauseMenu*                     PauseMenuView;                                            // 0x0224(0x0008)
	class UOLUIFrontEnd_LoadGame*                      LoadGameView;                                             // 0x022C(0x0008)
	class UOLUIFrontEnd_Options*                       OptionsView;                                              // 0x0234(0x0008)
	class UOLUIFrontEnd_Screen*                        GammaScreenView;                                          // 0x023C(0x0008)
	class UOLUIFrontEnd_Screen*                        GamepadScreenView;                                        // 0x0244(0x0008)
	class UOLUIFrontEnd_Credits*                       CreditsView;                                              // 0x024C(0x0008)
	class UOLUIFrontEnd_DifficultySelectionScreen*     DifficultySelectionView;                                  // 0x0254(0x0008)
	class UOLUIFrontEnd_ChapterSelection*              ChapterSelection;                                         // 0x025C(0x0008)
	class UOLUIFrontEnd_TabMenu*                       TabMenuView;                                              // 0x0264(0x0008)
	class UOLUIFrontEnd_RecordingList*                 RecordingListView;                                        // 0x026C(0x0008)
	class UOLUIFrontEnd_Screen*                        RecordingView;                                            // 0x0274(0x0008)
	class UOLUIFrontEnd_EvidenceList*                  EvidenceListView;                                         // 0x027C(0x0008)
	class UOLUIFrontEnd_Screen*                        EvidenceView;                                             // 0x0284(0x0008)
	TArray<struct FViewInfo>                           ViewData;                                                 // 0x028C(0x0010) (Config, NeedCtorLink)
	TArray<class UOLUIFrontEnd_View*>                  ViewStack;                                                // 0x029C(0x0010) (NeedCtorLink)
	TArray<struct FName>                               LoadedViews;                                              // 0x02AC(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd");
		return ptr;
	}


	struct FString GetLocalizedString(const struct FString& Category, const struct FString& KeyName, const struct FString& File);
	struct FString GetGamepadActionBoundToKey(const struct FString& KeyNameString, int ConfigType);
	bool HasInitializedGamma();
	struct FString GetFriendlyKeyBindingName(const struct FString& KeyName);
	void StartKeyBindingCapture();
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void ConfigureTargetView(class UOLUIFrontEnd_View* targetView);
	void ConfigureView(class UOLUIFrontEnd_View* InView, const struct FName& WidgetName, const struct FName& WidgetPath);
	class UGFxObject* PopViewStub();
	class UGFxObject* PopView();
	void PushViewByName(const struct FName& TargetViewName, class UOLUIFrontEnd_Screen* ParentView);
	void PushView(class UOLUIFrontEnd_View* targetView);
	void LoadView(const struct FViewInfo& InViewInfo);
	void LoadViews();
	void ConfigFrontEnd();
	void OnKeyBindingsChanged();
	void AddCaptureKeys();
	void OnClose();
	bool Start(bool StartPaused);
};


// Class OLGame.OLUIFrontEnd_View
// 0x0010 (0x00B0 - 0x00A0)
class UOLUIFrontEnd_View : public UGFxObject
{
public:
	class UOLUIFrontEnd*                               MenuManager;                                              // 0x00A0(0x0008)
	struct FName                                       ViewName;                                                 // 0x00A8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_View");
		return ptr;
	}


	void OnKeyBindingCaptured(const struct FName& KeyName);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool back();
	void OnViewDeactivated();
	void OnViewActivated();
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_Screen
// 0x0080 (0x0130 - 0x00B0)
class UOLUIFrontEnd_Screen : public UOLUIFrontEnd_View
{
public:
	struct FString                                     ViewTitle;                                                // 0x00B0(0x0010) (Config, NeedCtorLink)
	struct FString                                     BackText;                                                 // 0x00C0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     EnterText;                                                // 0x00D0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     YesText;                                                  // 0x00E0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     NoText;                                                   // 0x00F0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     CloseText;                                                // 0x0100(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     AcceptText;                                               // 0x0110(0x0010) (Const, Localized, NeedCtorLink)
	class UGFxObject*                                  CircleLabel;                                              // 0x0120(0x0008) (Transient)
	class UGFxObject*                                  CrossLabel;                                               // 0x0128(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_Screen");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	struct FString LocalizeNarrative(const struct FString& SectionName, const struct FString& KeyName);
	bool IsDLCInstalled();
	bool IsDemo();
	bool IsTopMostView();
};


// Class OLGame.OLUIFrontEnd_MainMenu
// 0x00FC (0x022C - 0x0130)
class UOLUIFrontEnd_MainMenu : public UOLUIFrontEnd_Screen
{
public:
	struct FString                                     TitleText;                                                // 0x0130(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ContinueText;                                             // 0x0140(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     StartText;                                                // 0x0150(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     PlayDemoText;                                             // 0x0160(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     LoadText;                                                 // 0x0170(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     OptionsText;                                              // 0x0180(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     CreditsText;                                              // 0x0190(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ExitText;                                                 // 0x01A0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     NewGameIntroText;                                         // 0x01B0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ChaptersText;                                             // 0x01C0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     StartDLCText;                                             // 0x01D0(0x0010) (Const, Localized, NeedCtorLink)
	class UGFxClikWidget*                              ButtonBar;                                                // 0x01E0(0x0008) (Transient)
	class UGFxClikWidget*                              IntroLabel;                                               // 0x01E8(0x0008) (Transient)
	class UGFxClikWidget*                              OKButton;                                                 // 0x01F0(0x0008) (Transient)
	int                                                ContinueButtonIndex;                                      // 0x01F8(0x0004)
	int                                                StartButtonIndex;                                         // 0x01FC(0x0004)
	int                                                StartDLCButtonIndex;                                      // 0x0200(0x0004)
	int                                                LoadButtonIndex;                                          // 0x0204(0x0004)
	int                                                OptionsButtonIndex;                                       // 0x0208(0x0004)
	int                                                CreditsButtonIndex;                                       // 0x020C(0x0004)
	int                                                ExitButtonIndex;                                          // 0x0210(0x0004)
	int                                                ChaptersButtonIndex;                                      // 0x0214(0x0004)
	unsigned long                                      bShowIntroMsg : 1;                                        // 0x0218(0x0004)
	struct FString                                     StartCPName;                                              // 0x021C(0x0010) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_MainMenu");
		return ptr;
	}


	void ASShowNewGameIntroText();
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void OnButtonClick(const struct FEventData& ev);
	void PopulateButtons();
	bool back();
	void OnExitButtonPress(const struct FEventData& ev);
	void OnCreditsButtonPress(const struct FEventData& ev);
	void OnOptionsButtonPress(const struct FEventData& ev);
	void Select_Options();
	void OnLoadButtonPress(const struct FEventData& ev);
	void OnOKButtonClick(const struct FEventData& ev);
	void OnChaptersButtonPress(const struct FEventData& ev);
	void OnStartDLCButtonPress(const struct FEventData& ev);
	void OnStartButtonPress(const struct FEventData& ev);
	void GameLoadedCallback(bool bSuccess);
	void StartNewGame();
	void DifficultySelected();
	void SaveLocationSelected(bool bSuccess);
	void OnContinueButtonPress(const struct FEventData& ev);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_Credits
// 0x0014 (0x0144 - 0x0130)
class UOLUIFrontEnd_Credits : public UOLUIFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              BackButton;                                               // 0x0130(0x0008) (Transient)
	class UGFxObject*                                  CreditsScroll;                                            // 0x0138(0x0008) (Transient)
	unsigned long                                      bGameOver : 1;                                            // 0x0140(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_Credits");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void Press_Back(const struct FEventData& ev);
	void OnViewDeactivated();
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnCreditsFinished();
	bool back();
};


// Class OLGame.OLUIFrontEnd_Console
// 0x0000 (0x02BC - 0x02BC)
class UOLUIFrontEnd_Console : public UOLUIFrontEnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_Console");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
};


// Class OLGame.OLUIMessage
// 0x0018 (0x01FC - 0x01E4)
class UOLUIMessage : public UOLGFxMoviePlayer
{
public:
	class UGFxClikWidget*                              MessageBox;                                               // 0x01E4(0x0008)
	float                                              MessageXPos;                                              // 0x01EC(0x0004)
	float                                              MessageYPos;                                              // 0x01F0(0x0004)
	float                                              MessageWidth;                                             // 0x01F4(0x0004)
	float                                              MessageHeight;                                            // 0x01F8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIMessage");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void SetMessage(TEnumAsByte<EHUDMessageType> MessageType, const struct FString& Message);
	void SetVisible(bool bVisible);
	void OnClose();
	bool Start(bool StartPaused);
};


// Class OLGame.OLUIMessage_Console
// 0x0000 (0x01FC - 0x01FC)
class UOLUIMessage_Console : public UOLUIMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIMessage_Console");
		return ptr;
	}

};


// Class OLGame.OLLight
// 0x0018 (0x0258 - 0x0240)
class AOLLight : public AActor
{
public:
	class UStaticMeshComponent*                        LightMesh;                                                // 0x0240(0x0008) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        FogMesh;                                                  // 0x0248(0x0008) (Edit, ExportObject, Component, EditInline)
	class USpotLightComponent*                         SpotLight;                                                // 0x0250(0x0008) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLLight");
		return ptr;
	}

};


// Class OLGame.OLLight_toggeble
// 0x0010 (0x025C - 0x024C)
class AOLLight_toggeble : public ASpotLightToggleable
{
public:
	class UStaticMeshComponent*                        LightMesh;                                                // 0x024C(0x0008) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        FogMesh;                                                  // 0x0254(0x0008) (Edit, ExportObject, Component, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLLight_toggeble");
		return ptr;
	}

};


// Class OLGame.OLMapInfo
// 0x0000 (0x0060 - 0x0060)
class UOLMapInfo : public UMapInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLMapInfo");
		return ptr;
	}

};


// Class OLGame.OLSeqAct_OverrideAIMusic
// 0x0008 (0x0158 - 0x0150)
class UOLSeqAct_OverrideAIMusic : public USequenceAction
{
public:
	TEnumAsByte<EAIMusicState>                         MusicState;                                               // 0x0150(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              MusicDistance;                                            // 0x0154(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLSeqAct_OverrideAIMusic");
		return ptr;
	}

};


// Class OLGame.OLUIFrontEnd_EvidenceList
// 0x0028 (0x0158 - 0x0130)
class UOLUIFrontEnd_EvidenceList : public UOLUIFrontEnd_Screen
{
public:
	struct FString                                     Title;                                                    // 0x0130(0x0010) (Const, Localized, NeedCtorLink)
	class UGFxObject*                                  TitleLabel;                                               // 0x0140(0x0008) (Transient)
	class UGFxClikWidget*                              ItemList;                                                 // 0x0148(0x0008) (Transient)
	class UGFxClikWidget*                              BackButton;                                               // 0x0150(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_EvidenceList");
		return ptr;
	}


	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void OnItemClick(const struct FEventData& ev);
	void PopulateItemList();
	void OnTopMostView(bool bPlayOpenAnimation);
	void Press_Back(const struct FEventData& ev);
};


// Class OLGame.OLUIFrontEnd_RecordingList
// 0x0028 (0x0158 - 0x0130)
class UOLUIFrontEnd_RecordingList : public UOLUIFrontEnd_Screen
{
public:
	struct FString                                     Title;                                                    // 0x0130(0x0010) (Const, Localized, NeedCtorLink)
	class UGFxObject*                                  TitleLabel;                                               // 0x0140(0x0008) (Transient)
	class UGFxClikWidget*                              ItemList;                                                 // 0x0148(0x0008) (Transient)
	class UGFxClikWidget*                              BackButton;                                               // 0x0150(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_RecordingList");
		return ptr;
	}


	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void OnItemClick(const struct FEventData& ev);
	void PopulateItemList();
	void OnTopMostView(bool bPlayOpenAnimation);
	void Press_Back(const struct FEventData& ev);
};


// Class OLGame.OLUIFrontEnd_TabMenu
// 0x0050 (0x0180 - 0x0130)
class UOLUIFrontEnd_TabMenu : public UOLUIFrontEnd_Screen
{
public:
	struct FString                                     ObjectiveText;                                            // 0x0130(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     RecordingText;                                            // 0x0140(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     EvidenceText;                                             // 0x0150(0x0010) (Const, Localized, NeedCtorLink)
	class UGFxClikWidget*                              ButtonBar;                                                // 0x0160(0x0008) (Transient)
	class UGFxObject*                                  ObjLabel;                                                 // 0x0168(0x0008) (Transient)
	class UGFxObject*                                  InventoryLabel;                                           // 0x0170(0x0008) (Transient)
	class UGFxClikWidget*                              CloseButton;                                              // 0x0178(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_TabMenu");
		return ptr;
	}


	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	struct FString GetInventoryText();
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void OnCloseButtonPress(const struct FEventData& ev);
	void OnEvidenceButtonPress(const struct FEventData& ev);
	void OnRecordingButtonPress(const struct FEventData& ev);
	void OnButtonClick(const struct FEventData& ev);
	void PopulateButtons();
	void OnViewActivated();
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_ChapterSelection
// 0x00A4 (0x01D4 - 0x0130)
class UOLUIFrontEnd_ChapterSelection : public UOLUIFrontEnd_Screen
{
public:
	struct FString                                     ChapterSelectionTitle;                                    // 0x0130(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     LoadText;                                                 // 0x0140(0x0010) (Const, Localized, NeedCtorLink)
	int                                                SelectedIndex;                                            // 0x0150(0x0004)
	TArray<struct FString>                             SelectionNames;                                           // 0x0154(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             SelectionCPs;                                             // 0x0164(0x0010) (Transient, NeedCtorLink)
	TArray<struct FString>                             MainChapters;                                             // 0x0174(0x0010) (Const, NeedCtorLink)
	TArray<struct FString>                             MainCPs;                                                  // 0x0184(0x0010) (Const, NeedCtorLink)
	TArray<struct FString>                             DLCChapters;                                              // 0x0194(0x0010) (Const, NeedCtorLink)
	TArray<struct FString>                             DLCCPs;                                                   // 0x01A4(0x0010) (Const, NeedCtorLink)
	class UGFxClikWidget*                              ChapterList;                                              // 0x01B4(0x0008) (Transient)
	class UGFxClikWidget*                              BackButton;                                               // 0x01BC(0x0008) (Transient)
	class UGFxClikWidget*                              LoadButton;                                               // 0x01C4(0x0008) (Transient)
	class UGFxObject*                                  TitleLabel;                                               // 0x01CC(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_ChapterSelection");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	void Press_Back(const struct FEventData& ev);
	void Press_Load(const struct FEventData& ev);
	void LoadSelectedChapter();
	void SetSelectedIndex(int Index);
	void ChapterListChanged(const struct FEventData& ev);
	void PopulateChapterList();
	void Pop();
	void OnViewDeactivated();
	void OnTopMostView(bool bPlayOpenAnimation);
};


// Class OLGame.OLUIFrontEnd_DifficultySelectionScreen
// 0x00AC (0x01DC - 0x0130)
class UOLUIFrontEnd_DifficultySelectionScreen : public UOLUIFrontEnd_Screen
{
public:
	class UOLProfileSettings*                          MyProfile;                                                // 0x0130(0x0008) (Transient)
	struct FString                                     ChooseDifficultyText;                                     // 0x0138(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     NormalText;                                               // 0x0148(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     HardText;                                                 // 0x0158(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     NightmareText;                                            // 0x0168(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     InsaneText;                                               // 0x0178(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ConfirmInsaneTitleText;                                   // 0x0188(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ConfirmInsaneMsgText;                                     // 0x0198(0x0010) (Const, Localized, NeedCtorLink)
	class UGFxClikWidget*                              NormalButton;                                             // 0x01A8(0x0008) (Transient)
	class UGFxClikWidget*                              HardButton;                                               // 0x01B0(0x0008) (Transient)
	class UGFxClikWidget*                              NightmareButton;                                          // 0x01B8(0x0008) (Transient)
	class UGFxClikWidget*                              InsaneButton;                                             // 0x01C0(0x0008) (Transient)
	class UGFxClikWidget*                              BackButton;                                               // 0x01C8(0x0008) (Transient)
	class UGFxObject*                                  TitleLabel;                                               // 0x01D0(0x0008) (Transient)
	unsigned long                                      bShowingInsaneConfirmDialog : 1;                          // 0x01D8(0x0004) (Transient)
	unsigned long                                      bSpecificChapter : 1;                                     // 0x01D8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_DifficultySelectionScreen");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void ASShowConfirmInsaneDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	void Press_Back(const struct FEventData& ev);
	void Pop();
	void OnViewDeactivated();
	void ProceedToStartGame();
	void OnConfirmedInsane(bool bOk);
	void Press_Insane(const struct FEventData& ev);
	void Press_Nightmare(const struct FEventData& ev);
	void Press_Hard(const struct FEventData& ev);
	void Press_Normal(const struct FEventData& ev);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_Options
// 0x0205 (0x0335 - 0x0130)
class UOLUIFrontEnd_Options : public UOLUIFrontEnd_Screen
{
public:
	class UOLProfileSettings*                          MyProfile;                                                // 0x0130(0x0008) (Transient)
	struct FUniqueNetId                                OwningId;                                                 // 0x0138(0x0010)
	class UOnlineSubsystem*                            OnlineSub;                                                // 0x0148(0x0008)
	struct FString                                     MouseSettingsText;                                        // 0x0150(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     MouseInvertYText;                                         // 0x0160(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     MouseSensitivityText;                                     // 0x0170(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ApplyText;                                                // 0x0180(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     GammaText;                                                // 0x0190(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ResetText;                                                // 0x01A0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     GameplayText;                                             // 0x01B0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     GraphicsText;                                             // 0x01C0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ControlsText;                                             // 0x01D0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ConfirmResolutionTitleText;                               // 0x01E0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ConfirmResolutionMessageText;                             // 0x01F0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ConfirmChangesTitleText;                                  // 0x0200(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ConfirmChangesMessageText;                                // 0x0210(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     KeyBindingConflictTitleText;                              // 0x0220(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     KeyBindingConflictMessageText;                            // 0x0230(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     MustRestartTitleText;                                     // 0x0240(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     MustRestartMessageText;                                   // 0x0250(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     OKText;                                                   // 0x0260(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     CancelText;                                               // 0x0270(0x0010) (Const, Localized, NeedCtorLink)
	TArray<struct FString>                             DifficultyOptions;                                        // 0x0280(0x0010) (Const, Localized, NeedCtorLink)
	class UGFxClikWidget*                              ApplyButton;                                              // 0x0290(0x0008)
	class UGFxClikWidget*                              BackButton;                                               // 0x0298(0x0008)
	class UGFxClikWidget*                              ResetButton;                                              // 0x02A0(0x0008)
	class UGFxClikWidget*                              TabButtons;                                               // 0x02A8(0x0008) (Transient)
	class UGFxObject*                                  GameplayList;                                             // 0x02B0(0x0008) (Transient)
	class UGFxObject*                                  GraphicsList;                                             // 0x02B8(0x0008) (Transient)
	class UGFxObject*                                  ControlsList;                                             // 0x02C0(0x0008) (Transient)
	int                                                PreviousResolutionSetting;                                // 0x02C8(0x0004)
	int                                                PreviousFullscreenSetting;                                // 0x02CC(0x0004)
	unsigned long                                      bWaitingForPopup : 1;                                     // 0x02D0(0x0004)
	unsigned long                                      bSwitchingFromJpn : 1;                                    // 0x02D0(0x0004) (Transient)
	TArray<struct FName>                               OriginalResolutionValueNames;                             // 0x02D4(0x0010) (NeedCtorLink)
	TArray<struct FName>                               DisplayedResolutionValueNames;                            // 0x02E4(0x0010) (NeedCtorLink)
	TArray<struct FOptionInfo>                         GeneralOptionsWithDifficulty;                             // 0x02F4(0x0010) (NeedCtorLink)
	TArray<struct FOptionInfo>                         GeneralOptionsNoDifficulty;                               // 0x0304(0x0010) (NeedCtorLink)
	TArray<struct FOptionInfo>                         GraphicsOptions;                                          // 0x0314(0x0010) (NeedCtorLink)
	TArray<struct FOptionInfo>                         ControlsOptions;                                          // 0x0324(0x0010) (NeedCtorLink)
	TEnumAsByte<EOptionTabs>                           CurrentTab;                                               // 0x0334(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_Options");
		return ptr;
	}


	void ASOnKeyBindingCaptured(const struct FString& KeyName);
	void ShowMessageDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& callbackName);
	void ShowKeyBindingConflictDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName);
	void ShowChangeConfirmationDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName);
	void ShowResolutionConfirmationDialogAfterDelay(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName);
	float GetCurrentGammaSetting();
	void OnSliderChanged(int ProfileSettingId, float SliderValue);
	TArray<struct FString> GetKeyBindingConflicts();
	class UGFxObject* GetCurrentGFxList();
	void SetGammaExternally(float Gamma);
	void SetGamepadConfigExternally(int ConfigIndex);
	int GetGamepadConfig();
	void OnKeyBindingCaptured(const struct FName& KeyName);
	int GetDisplayedResolutionIndexFromOriginalIndex(int OriginalIndex);
	int GetOriginalResolutionIndexFromDisplayedIndex(int DisplayedIndex);
	TArray<struct FName> RemoveUnsupportedResolutionsFromList(TArray<struct FName> OriginalList);
	int GetFullscreenOptionIndex();
	int GetResolutionOptionIndex();
	bool HasResolutionChanged();
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	class UOLProfileSettings* GetOLProfile();
	bool SaveSettingsToProfile();
	bool HasAnyPropertyChanged();
	bool HasPropertyChangedInList(class UGFxObject* OptionsList, TArray<struct FOptionInfo> OptionInfos);
	bool SaveSettingsForList(TArray<struct FOptionInfo> OptionInfos);
	void TabChanged(const struct FEventData& ev);
	void StoreOptionValuesForList(class UGFxObject* OptionsList, TArray<struct FOptionInfo>* OptionInfos);
	struct FString GetOptionValueStringAt(class UGFxObject* OptionsList, int Index);
	float GetOptionValueAt(class UGFxObject* OptionsList, int Index);
	void SetDefaultOptionValuesForList(TArray<struct FOptionInfo>* OptionInfos);
	void FillOptionValuesForList(TArray<struct FOptionInfo>* OptionInfos);
	void FillOptionValuesFromProfile();
	void PopulateControlsOptions();
	void PopulateGraphicsOptions();
	void PopulateGeneralOptions();
	class UGFxObject* GetObjectFromOption(const struct FOptionInfo& CurrentOptionInfo);
	void PopulateTabButtons();
	bool UseGeneralOptionsWithDifficulty();
	void Press_OptionItemButton(int PSID);
	void Press_Reset(const struct FEventData& ev);
	void Press_Gamma(const struct FEventData& ev);
	void Press_Back(const struct FEventData& ev);
	void OnConfirmChanges(bool bOk);
	void RevertToPreviousResolution();
	void OnConfirmResolution(bool bOk);
	void OnDismissKeyBindingConflictDialog(bool bOk);
	void Press_Apply(const struct FEventData& ev);
	void OnMustRestartAccepted();
	void ExitOptionsScreen();
	bool back();
	void OnViewActivated();
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_LoadGame
// 0x0058 (0x0188 - 0x0130)
class UOLUIFrontEnd_LoadGame : public UOLUIFrontEnd_Screen
{
public:
	struct FString                                     TitleText;                                                // 0x0130(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     LoadText;                                                 // 0x0140(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     DeleteText;                                               // 0x0150(0x0010) (Const, Localized, NeedCtorLink)
	int                                                SelectedIndex;                                            // 0x0160(0x0004)
	class UGFxClikWidget*                              SaveList;                                                 // 0x0164(0x0008) (Transient)
	class UGFxClikWidget*                              BackButton;                                               // 0x016C(0x0008) (Transient)
	class UGFxClikWidget*                              LoadButton;                                               // 0x0174(0x0008) (Transient)
	class UGFxClikWidget*                              DeleteButton;                                             // 0x017C(0x0008) (Transient)
	unsigned long                                      bShowCheckpointNames : 1;                                 // 0x0184(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_LoadGame");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	struct FName GetCheckpointTag(const struct FName& CheckpointName);
	struct FString GetSaveFileDisplayName(const struct FSaveFileInfo& SaveFile);
	void SetSelectedIndex(int Index);
	void SaveListChanged(const struct FEventData& ev);
	void PopulateSaveList();
	void Press_Delete(const struct FEventData& ev);
	void Press_Load(const struct FEventData& ev);
	void Press_Back(const struct FEventData& ev);
	void OnTopMostView(bool bPlayOpenAnimation);
};


// Class OLGame.OLUIFrontEnd_PauseMenu
// 0x009C (0x01CC - 0x0130)
class UOLUIFrontEnd_PauseMenu : public UOLUIFrontEnd_Screen
{
public:
	struct FString                                     ReturnText;                                               // 0x0130(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     OptionsText;                                              // 0x0140(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ExitToMenuText;                                           // 0x0150(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SaveAndExitText;                                          // 0x0160(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SaveText;                                                 // 0x0170(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ConfirmExitText;                                          // 0x0180(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ConfirmExitInsaneText;                                    // 0x0190(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ConfirmExitTitle;                                         // 0x01A0(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     ExitToWindowsText;                                        // 0x01B0(0x0010) (Const, Localized, NeedCtorLink)
	class UGFxClikWidget*                              ButtonBar;                                                // 0x01C0(0x0008) (Transient)
	unsigned long                                      bHasSaveOption : 1;                                       // 0x01C8(0x0004) (Transient)
	unsigned long                                      bShowingConfirmExitDialog : 1;                            // 0x01C8(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_PauseMenu");
		return ptr;
	}


	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void ASShowConfirmExitDialog(const struct FString& Title, const struct FString& Message, const struct FString& okButtonLabel, const struct FString& cancelButtonLabel, const struct FString& callbackName);
	void OnExitConfirmed(bool bOk);
	void OnExitToMenuButtonPress(const struct FEventData& ev);
	void OnSaveCompleted(bool bSuccess);
	void OnSaveButtonPress(const struct FEventData& ev);
	void OnOptionsButtonPress(const struct FEventData& ev);
	void OnReturnButtonPress(const struct FEventData& ev);
	void OnButtonClick(const struct FEventData& ev);
	void PopulateButtons();
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_RecordingView
// 0x0034 (0x0164 - 0x0130)
class UOLUIFrontEnd_RecordingView : public UOLUIFrontEnd_Screen
{
public:
	struct FName                                       Recording;                                                // 0x0130(0x0008) (Transient)
	class UGFxObject*                                  DescriptionTextArea;                                      // 0x0138(0x0008) (Transient)
	class UGFxClikWidget*                              BackButton;                                               // 0x0140(0x0008) (Transient)
	class UGFxClikWidget*                              CloseButton;                                              // 0x0148(0x0008) (Transient)
	class UGFxClikWidget*                              PreviousButton;                                           // 0x0150(0x0008) (Transient)
	class UGFxClikWidget*                              NextButton;                                               // 0x0158(0x0008) (Transient)
	unsigned long                                      bActivatedWithShortcut : 1;                               // 0x0160(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_RecordingView");
		return ptr;
	}


	void ASPreviousPage();
	void ASNextPage();
	void ASPaginateText();
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void GoAfterLastPage();
	void GoBeforeFirstPage();
	void Press_Close(const struct FEventData& ev);
	void Press_Back(const struct FEventData& ev);
	void Press_Next(const struct FEventData& ev);
	void Press_Previous(const struct FEventData& ev);
	void OnViewActivated();
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_EvidenceView
// 0x0034 (0x0164 - 0x0130)
class UOLUIFrontEnd_EvidenceView : public UOLUIFrontEnd_Screen
{
public:
	struct FName                                       Collectible;                                              // 0x0130(0x0008)
	class UGFxObject*                                  ContentsLabel;                                            // 0x0138(0x0008) (Transient)
	class UGFxClikWidget*                              BackButton;                                               // 0x0140(0x0008) (Transient)
	class UGFxClikWidget*                              CloseButton;                                              // 0x0148(0x0008) (Transient)
	class UGFxClikWidget*                              PreviousButton;                                           // 0x0150(0x0008) (Transient)
	class UGFxClikWidget*                              NextButton;                                               // 0x0158(0x0008) (Transient)
	unsigned long                                      bActivatedWithShortcut : 1;                               // 0x0160(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_EvidenceView");
		return ptr;
	}


	void ASPreviousPage();
	void ASNextPage();
	void ASPaginateText();
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void GoAfterLastPage();
	void GoBeforeFirstPage();
	void Press_Close(const struct FEventData& ev);
	void Press_Back(const struct FEventData& ev);
	void Press_Next(const struct FEventData& ev);
	void Press_Previous(const struct FEventData& ev);
	void OnViewActivated();
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_GammaScreen
// 0x0040 (0x0170 - 0x0130)
class UOLUIFrontEnd_GammaScreen : public UOLUIFrontEnd_Screen
{
public:
	class UOLProfileSettings*                          MyProfile;                                                // 0x0130(0x0008) (Transient)
	struct FString                                     GammaLabelText;                                           // 0x0138(0x0010) (Const, Localized, NeedCtorLink)
	class UGFxClikWidget*                              AcceptButtonCentred;                                      // 0x0148(0x0008) (Transient)
	class UGFxClikWidget*                              AcceptButton;                                             // 0x0150(0x0008) (Transient)
	class UGFxClikWidget*                              BackButton;                                               // 0x0158(0x0008) (Transient)
	class UGFxClikWidget*                              GammaSlider;                                              // 0x0160(0x0008) (Transient)
	class UGFxObject*                                  GammaLabel;                                               // 0x0168(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_GammaScreen");
		return ptr;
	}


	float GetCurrentGammaSetting();
	bool IsGammaInitialized();
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	void Change_Slider(const struct FEventData& ev);
	void Pop();
	void OnViewDeactivated();
	bool back();
	void Press_Back(const struct FEventData& ev);
	void OnAccept();
	void Press_Accept(const struct FEventData& ev);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_GamepadScreen
// 0x001C (0x014C - 0x0130)
class UOLUIFrontEnd_GamepadScreen : public UOLUIFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              TabButtons;                                               // 0x0130(0x0008) (Transient)
	class UGFxClikWidget*                              AcceptButton;                                             // 0x0138(0x0008) (Transient)
	class UGFxClikWidget*                              BackButton;                                               // 0x0140(0x0008) (Transient)
	int                                                SelectedTabIndex;                                         // 0x0148(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_GamepadScreen");
		return ptr;
	}


	void ASUpdateGamepadLabels(int ConfigType);
	void TabChanged(const struct FEventData& ev);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void PopulateTabButtons();
	void Pop();
	void OnViewDeactivated();
	void Press_Back(const struct FEventData& ev);
	void Press_Accept(const struct FEventData& ev);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_Options_Console
// 0x001B (0x0350 - 0x0335)
class UOLUIFrontEnd_Options_Console : public UOLUIFrontEnd_Options
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	class UGFxObject*                                  SquareLabel;                                              // 0x0338(0x0008) (Transient)
	struct FString                                     SettingsText;                                             // 0x0340(0x0010) (Const, Localized, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_Options_Console");
		return ptr;
	}


	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	int GetFullscreenOptionIndex();
	int GetResolutionOptionIndex();
	bool HasResolutionChanged();
	void TabChanged(const struct FEventData& ev);
	void SetGammaExternally(float Gamma);
	float GetCurrentGammaSetting();
	void ResetPS4Options();
	void Press_Reset(const struct FEventData& ev);
	void FillOptionValuesFromProfile();
	void PopulateControlsOptions();
	void PopulateTabButtons();
	void Press_Apply(const struct FEventData& ev);
	void Press_OptionItemButton(int PSID);
	void Press_Gamma(const struct FEventData& ev);
	bool back();
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewActivated();
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_RecordingView_Console
// 0x0014 (0x0144 - 0x0130)
class UOLUIFrontEnd_RecordingView_Console : public UOLUIFrontEnd_Screen
{
public:
	struct FName                                       Recording;                                                // 0x0130(0x0008) (Transient)
	class UGFxObject*                                  DescriptionTextArea;                                      // 0x0138(0x0008) (Transient)
	unsigned long                                      bActivatedWithShortcut : 1;                               // 0x0140(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_RecordingView_Console");
		return ptr;
	}


	void ASPreviousPage();
	void ASNextPage();
	void ASPaginateText();
	int GetNumPages();
	int GetCurrentPage();
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void OnViewActivated();
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_EvidenceView_Console
// 0x0014 (0x0144 - 0x0130)
class UOLUIFrontEnd_EvidenceView_Console : public UOLUIFrontEnd_Screen
{
public:
	struct FName                                       Collectible;                                              // 0x0130(0x0008)
	class UGFxObject*                                  ContentsLabel;                                            // 0x0138(0x0008) (Transient)
	unsigned long                                      bActivatedWithShortcut : 1;                               // 0x0140(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_EvidenceView_Console");
		return ptr;
	}


	void ASPreviousPage();
	void ASNextPage();
	void ASPaginateText();
	int GetNumPages();
	int GetCurrentPage();
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	void OnViewActivated();
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_GammaScreen_Console
// 0x0040 (0x0170 - 0x0130)
class UOLUIFrontEnd_GammaScreen_Console : public UOLUIFrontEnd_Screen
{
public:
	class UOLProfileSettings*                          MyProfile;                                                // 0x0130(0x0008) (Transient)
	struct FString                                     GammaLabelText;                                           // 0x0138(0x0010) (Const, Localized, NeedCtorLink)
	class UGFxClikWidget*                              AcceptButtonCentred;                                      // 0x0148(0x0008) (Transient)
	class UGFxClikWidget*                              AcceptButton;                                             // 0x0150(0x0008) (Transient)
	class UGFxClikWidget*                              BackButton;                                               // 0x0158(0x0008) (Transient)
	class UGFxClikWidget*                              GammaSlider;                                              // 0x0160(0x0008) (Transient)
	class UGFxObject*                                  GammaLabel;                                               // 0x0168(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_GammaScreen_Console");
		return ptr;
	}


	void ASDisableBackButton(bool bDisable);
	float GetCurrentGammaSetting();
	bool IsGammaInitialized();
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	void Change_Slider(const struct FEventData& ev);
	void Pop();
	void OnViewDeactivated();
	bool back();
	void Press_Back(const struct FEventData& ev);
	void OnAccept();
	void Press_Accept(const struct FEventData& ev);
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class OLGame.OLUIFrontEnd_GamepadScreen_Console
// 0x000C (0x013C - 0x0130)
class UOLUIFrontEnd_GamepadScreen_Console : public UOLUIFrontEnd_Screen
{
public:
	class UGFxClikWidget*                              TabButtons;                                               // 0x0130(0x0008) (Transient)
	int                                                SelectedTabIndex;                                         // 0x0138(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIFrontEnd_GamepadScreen_Console");
		return ptr;
	}


	void ASUpdateGamepadLabels(int ConfigType);
	void TabChanged(const struct FEventData& ev);
	bool WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget);
	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	void PopulateTabButtons();
	void Pop();
	void OnViewDeactivated();
	bool back();
	void OnTopMostView(bool bPlayOpenAnimation);
	void OnViewLoaded();
};


// Class OLGame.OLUIPopupScreen
// 0x0000 (0x01E4 - 0x01E4)
class UOLUIPopupScreen : public UOLGFxMoviePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OLGame.OLUIPopupScreen");
		return ptr;
	}


	bool FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<EInputEvent> InputEvent);
	void OnClose();
	bool Start(bool StartPaused);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
