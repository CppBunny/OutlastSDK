#pragma once

// Outlast (1.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OLGame.OLPawn.ESpecialMoveType
enum class ESpecialMoveType : uint8_t
{
	SMT_None                       = 0,
	SMT_Crouch                     = 1,
	SMT_Uncrouch                   = 2,
	SMT_JumpOnSpot                 = 3,
	SMT_BigLanding                 = 4,
	SMT_JumpOver                   = 5,
	SMT_JumpOverAndGrabLedge       = 6,
	SMT_SlideOver                  = 7,
	SMT_ClimbUpObstacle            = 8,
	SMT_ClimbUpWall                = 9,
	SMT_ClimbOverWall              = 10,
	SMT_StepUpAndLand              = 11,
	SMT_EnterLookBack              = 12,
	SMT_ExitLookBack               = 13,
	SMT_GrabLedgeFromGround        = 14,
	SMT_GrabLedgeFromAir           = 15,
	SMT_LedgeHangTransition        = 16,
	SMT_ClimbUpLedge               = 17,
	SMT_DropFromLedge              = 18,
	SMT_GrabAndClimb               = 19,
	SMT_EnterLedgeWalk             = 20,
	SMT_ExitLedgeWalk              = 21,
	SMT_LedgeWalkTransition        = 22,
	SMT_JumpFromLedgeWalk          = 23,
	SMT_EnterSqueeze               = 24,
	SMT_ExitSqueeze                = 25,
	SMT_AutomaticSqueeze           = 26,
	SMT_SqueezeReload              = 27,
	SMT_EnterDoorInteraction       = 28,
	SMT_OpenDoorInstant            = 29,
	SMT_OpenDoorPartial            = 30,
	SMT_TryOpenLockedDoor          = 31,
	SMT_RunThroughDoor             = 32,
	SMT_CloseDoor                  = 33,
	SMT_CloseDoorPositionned       = 34,
	SMT_ClearClosingDoor           = 35,
	SMT_DoorClosedFromOtherSide    = 36,
	SMT_OpenLockerFromOutside      = 37,
	SMT_EnterLocker                = 38,
	SMT_ExitLocker                 = 39,
	SMT_EnterBed                   = 40,
	SMT_ExitBed                    = 41,
	SMT_BedReload                  = 42,
	SMT_EnterLadderFromGround      = 43,
	SMT_EnterLadderFromAbove       = 44,
	SMT_ExitLadderOnGround         = 45,
	SMT_ExitLadderOnTop            = 46,
	SMT_DropFromLadder             = 47,
	SMT_GrabLadderFromAir          = 48,
	SMT_PickupObject               = 49,
	SMT_CSA                        = 50,
	SMT_EnterStruggle              = 51,
	SMT_ExitStruggle               = 52,
	SMT_KilledInStruggle           = 53,
	SMT_StartPushingObject         = 54,
	SMT_StopPushingObject          = 55,
	SMT_PushFromLedgeProcedural    = 56,
	SMT_PushFromLedgeAnimated      = 57,
	SMT_EnterContextualLean        = 58,
	SMT_ExitContextualLean         = 59,
	SMT_ExitContextualLeanForward  = 60,
	SMT_ContextualLeanInsideTransition = 61,
	SMT_HeroGrabbedNormal          = 62,
	SMT_HeroGrabbedFromSqueeze     = 63,
	SMT_HeroGrabbedFromLocker      = 64,
	SMT_HeroGrabbedFromBed         = 65,
	SMT_HeroGrabbedFromUnder       = 66,
	SMT_HeroThrown                 = 67,
	SMT_HeroDecapitate             = 68,
	SMT_HeroKilled                 = 69,
	SMT_Dying                      = 70,
	SMT_AttackNormal               = 71,
	SMT_AttackGrab                 = 72,
	SMT_AttackLocker               = 73,
	SMT_AttackBed                  = 74,
	SMT_AttackGrabUnder            = 75,
	SMT_AttackCrouch               = 76,
	SMT_AttackQuick                = 77,
	SMT_AttackPush                 = 78,
	SMT_AttackSqueezeStart         = 79,
	SMT_AttackSqueezeStartToWait   = 80,
	SMT_AttackSqueezeWaitToFail    = 81,
	SMT_AttackSqueezeWaitToSuccess = 82,
	SMT_AttackSqueezeSuccess       = 83,
	SMT_ThrowHero                  = 84,
	SMT_KillHero                   = 85,
	SMT_InvestigateLocker          = 86,
	SMT_InvestigateBed             = 87,
	SMT_Bash                       = 88,
	SMT_BashDoorStart              = 89,
	SMT_BashDoorLoop               = 90,
	SMT_BashDoorFinish             = 91,
	SMT_BashDoorFailed             = 92,
	SMT_Avoiding                   = 93,
	SMT_Knockedback                = 94,
	SMT_TurnOnSpot                 = 95,
	SMT_AIVault                    = 96,
	SMT_NanoThroughDoor            = 97,
	SMT_Disturbed                  = 98,
	SMT_AlignAnim                  = 99,
	SMT_SlideToNavMesh             = 100,
	SMTTT_FixCompileErrorWithSteam_SMT_MAX = 101,
	ESpecialMoveType_MAX           = 102
};


// Enum OLGame.OLPawn.ELocomotionMode
enum class ELocomotionMode : uint8_t
{
	LM_Walk                        = 0,
	LM_Fall                        = 1,
	LM_SpecialMove                 = 2,
	LM_Ladder                      = 3,
	LM_LedgeHang                   = 4,
	LM_LedgeWalk                   = 5,
	LM_Squeeze                     = 6,
	LM_Door                        = 7,
	LM_Locker                      = 8,
	LM_Cinematic                   = 9,
	LM_Bed                         = 10,
	LM_LookBack                    = 11,
	LM_Struggle                    = 12,
	LM_Grabbed                     = 13,
	LM_Pushing                     = 14,
	LM_ContextualLean              = 15,
	LM_MAX                         = 16
};


// Enum OLGame.OLPawn.EAdjustPositionTargetType
enum class EAdjustPositionTargetType : uint8_t
{
	APTT_TargetAtStart             = 0,
	APTT_TargetAtEnd               = 1,
	APTT_MAX                       = 2
};


// Enum OLGame.OLPawn.CameraRotationMode
enum class ECameraRotationMode : uint8_t
{
	CRM_UserControlled             = 0,
	CRM_Limited                    = 1,
	CRM_Spring                     = 2,
	CRM_FullyAnimated              = 3,
	CRM_Locked                     = 4,
	CRM_MAX                        = 5
};


// Enum OLGame.OLAIContextualVOAsset.EVOContext
enum class EVOContext : uint8_t
{
	EVOC_Undefined                 = 0,
	EVOC_LostTarget                = 1,
	EVOC_PatrolToInvestigate       = 2,
	EVOC_SwitchToChase             = 3,
	EVOC_SwitchToChaseMultiple     = 4,
	EVOC_ChaseToInvestigate        = 5,
	EVOC_Spawned                   = 6,
	EVOC_MAX                       = 7
};


// Enum OLGame.OLEnemyPawn.ERotationMode
enum class ERotationMode : uint8_t
{
	RM_FaceVelocity                = 0,
	RM_FaceTarget                  = 1,
	RM_Explicit                    = 2,
	RM_MAX                         = 3
};


// Enum OLGame.OLEnemyPawn.EEnemyMode
enum class EEnemyMode : uint8_t
{
	EM_Patrol                      = 0,
	EM_Investigate                 = 1,
	EM_Chase                       = 2,
	EM_SqueezeGrabLeft             = 3,
	EM_SqueezeGrabRight            = 4,
	EM_MAX                         = 5
};


// Enum OLGame.OLEnemyPawn.EAttackSide
enum class EAttackSide : uint8_t
{
	EAS_Left                       = 0,
	EAS_Right                      = 1,
	EAS_Middle                     = 2,
	EAS_MAX                        = 3
};


// Enum OLGame.OLEnemyPawn.EMoveSpeedMode
enum class EMoveSpeedMode : uint8_t
{
	EMSM_Default                   = 0,
	EMSM_Override                  = 1,
	EMSM_RubberBanding             = 2,
	EMSM_MAX                       = 3
};


// Enum OLGame.OLEnemyPawn.EWeapon
enum class EWeapon : uint8_t
{
	Weapon_None                    = 0,
	Weapon_Knife                   = 1,
	Weapon_ButcherKnife            = 2,
	Weapon_BoneShear               = 3,
	Weapon_Machete                 = 4,
	Weapon_NightStick              = 5,
	Weapon_Pipe                    = 6,
	Weapon_WoodPlank               = 7,
	Weapon_CannibalDrill           = 8,
	Weapon_MAX                     = 9
};


// Enum OLGame.OLEnemyPawn.EWeaponType
enum class EWeaponType : uint8_t
{
	WeaponType_None                = 0,
	WeaponType_Blunt               = 1,
	WeaponType_Stab                = 2,
	WeaponType_MAX                 = 3
};


// Enum OLGame.OLAnimEnemyStruggle.EStruggleAnimPhase
enum class EStruggleAnimPhase : uint8_t
{
	SAP_StartIdle                  = 0,
	SAP_Entry                      = 1,
	SAP_Cycle                      = 2,
	SAP_Success                    = 3,
	SAP_Fail                       = 4,
	SAP_SuccessIdle                = 5,
	SAP_MAX                        = 6
};


// Enum OLGame.OLAnimNotify_Door.EDoorInteraction
enum class EDoorInteraction : uint8_t
{
	DI_Open                        = 0,
	DI_Close                       = 1,
	DI_MAX                         = 2
};


// Enum OLGame.OLHero.NVGlitchType
enum class ENVGlitchType : uint8_t
{
	NVGT_SuddenDrop                = 0,
	NVGT_SlowDrop                  = 1,
	NVGT_Buzz                      = 2,
	NVGT_LastBreath                = 3,
	NVGT_MAX                       = 4
};


// Enum OLGame.OLHero.ECamcorderState
enum class ECamcorderState : uint8_t
{
	CCS_Inactive                   = 0,
	CCS_Active                     = 1,
	CCS_Raising                    = 2,
	CCS_Lowering                   = 3,
	CCS_ReloadingActive            = 4,
	CCS_ReloadingInactive          = 5,
	CCS_MAX                        = 6
};


// Enum OLGame.OLHero.ELedgeTransitionType
enum class ELedgeTransitionType : uint8_t
{
	LTT_LeftInside                 = 0,
	LTT_LeftOutside                = 1,
	LTT_RightInside                = 2,
	LTT_RightOutside               = 3,
	LTT_MAX                        = 4
};


// Enum OLGame.OLHero.ELedgeClimbType
enum class ELedgeClimbType : uint8_t
{
	LCT_ClimbUpToStand             = 0,
	LCT_ClimbUpToCrouch            = 1,
	LCT_ClimbOverToFalling         = 2,
	LCT_ClimbOverToStand           = 3,
	LCT_MAX                        = 4
};


// Enum OLGame.OLHero.ESqueezeTransitionType
enum class ESqueezeTransitionType : uint8_t
{
	STT_Left_Facing                = 0,
	STT_Left_Back                  = 1,
	STT_Right_Facing               = 2,
	STT_Right_Back                 = 3,
	STT_MAX                        = 4
};


// Enum OLGame.OLHero.EDoorOpeningType
enum class EDoorOpeningType : uint8_t
{
	DOT_LeftPush                   = 0,
	DOT_LeftPull                   = 1,
	DOT_RightPush                  = 2,
	DOT_RightPull                  = 3,
	DOT_MAX                        = 4
};


// Enum OLGame.OLHero.EDoorPartialOpenType
enum class EDoorPartialOpenType : uint8_t
{
	DPOT_LeftPush                  = 0,
	DPOT_LeftPull                  = 1,
	DPOT_LeftSwipe                 = 2,
	DPOT_RightPush                 = 3,
	DPOT_RightPull                 = 4,
	DPOT_RightSwipe                = 5,
	DPOT_MAX                       = 6
};


// Enum OLGame.OLHero.EDoorClosingType
enum class EDoorClosingType : uint8_t
{
	DCT_LeftFront                  = 0,
	DCT_LeftSide                   = 1,
	DCT_LeftBack                   = 2,
	DCT_LeftInside                 = 3,
	DCT_RightFront                 = 4,
	DCT_RightSide                  = 5,
	DCT_RightBack                  = 6,
	DCT_RightInside                = 7,
	DCT_MAX                        = 8
};


// Enum OLGame.OLHero.EEnemyType
enum class EEnemyType : uint8_t
{
	ET_Soldier                     = 0,
	ET_Generic                     = 1,
	ET_Surgeon                     = 2,
	ET_Swarm                       = 3,
	ET_Other                       = 4,
	ET_Groom                       = 5,
	ET_Cannibal                    = 6,
	ET_MAX                         = 7
};


// Enum OLGame.OLHero.EHeroBodySetup
enum class EHeroBodySetup : uint8_t
{
	HBS_Normal                     = 0,
	HBS_NoProxy                    = 1,
	HBS_CamcorderRaised            = 2,
	HBS_CamcorderRaisedNoShadow    = 3,
	HBS_CamcorderVisible           = 4,
	HBS_MAX                        = 5
};


// Enum OLGame.OLHero.ECamcorderMode
enum class ECamcorderMode : uint8_t
{
	CCM_Default                    = 0,
	CCM_PoweredNightVision         = 1,
	CCM_NightVision                = 2,
	CCM_MAX                        = 3
};


// Enum OLGame.OLHero.CornerPeekPosition
enum class ECornerPeekPosition : uint8_t
{
	CPP_Left                       = 0,
	CPP_Right                      = 1,
	CPP_MiddleLeft                 = 2,
	CPP_MiddleRight                = 3,
	CPP_MAX                        = 4
};


// Enum OLGame.OLHero.IKTargetType
enum class EIKTargetType : uint8_t
{
	IKTT_DoorKnob                  = 0,
	IKTT_CSAPropDestination        = 1,
	IKTT_Other                     = 2,
	IKTT_MAX                       = 3
};


// Enum OLGame.OLBashableObject.EOLBashableType
enum class EOLBashableType : uint8_t
{
	EOLBT_Wall                     = 0,
	EOLBT_Table                    = 1,
	EOLBT_MAX                      = 2
};


// Enum OLGame.OLBot.AIAttackType
enum class EAIAttackType : uint8_t
{
	AT_Normal                      = 0,
	AT_Squeeze                     = 1,
	AT_Locker                      = 2,
	AT_Bed                         = 3,
	AT_Grab                        = 4,
	AT_GrabCrouch                  = 5,
	AT_GrabUnder                   = 6,
	AT_Push                        = 7,
	AT_MAX                         = 8
};


// Enum OLGame.OLBot.EMoveFailedReason
enum class EMoveFailedReason : uint8_t
{
	MFR_Unknown                    = 0,
	MFR_AINotOnNavMesh             = 1,
	MFR_TargetNotOnNavMesh         = 2,
	MFR_NoPathToTarget             = 3,
	MFR_Aborted                    = 4,
	MFR_MAX                        = 5
};


// Enum OLGame.OLBot.EMoveType
enum class EMoveType : uint8_t
{
	MT_Invalid                     = 0,
	MT_Point                       = 1,
	MT_Actor                       = 2,
	MT_MAX                         = 3
};


// Enum OLGame.OLBot.EMoveStatus
enum class EMoveStatus : uint8_t
{
	MS_Moving                      = 0,
	MS_Success                     = 1,
	MS_Failed                      = 2,
	MS_Pending                     = 3,
	MS_MAX                         = 4
};


// Enum OLGame.OLBot.EOLInvestigationPointType
enum class EOLInvestigationPointType : uint8_t
{
	OLIPT_Normal                   = 0,
	OLIPT_Locker                   = 1,
	OLIPT_Bed                      = 2,
	OLIPT_MAX                      = 3
};


// Enum OLGame.OLBot.EAIEnvironment
enum class EAIEnvironment : uint8_t
{
	AIE_Normal                     = 0,
	AIE_Darkness                   = 1,
	AIE_Electricity                = 2,
	AIE_MAX                        = 3
};


// Enum OLGame.OLBot.EAIBehaviorState
enum class EAIBehaviorState : uint8_t
{
	AIBS_Idle                      = 0,
	AIBS_Patrolling                = 1,
	AIBS_Investigating             = 2,
	AIBS_Chasing                   = 3,
	AIBS_MAX                       = 4
};


// Enum OLGame.OLBTBehavior.EStatus
enum class EStatus : uint8_t
{
	Status_Invalid                 = 0,
	Status_Success                 = 1,
	Status_Failure                 = 2,
	Status_Running                 = 3,
	Status_ReachedCurrent          = 4,
	Status_MAX                     = 5
};


// Enum OLGame.OLBTDistanceToPlayerNode.EBTComparison
enum class EBTComparison : uint8_t
{
	BTC_LessThan                   = 0,
	BTC_LessThanOrEqual            = 1,
	BTC_GreaterThan                = 2,
	BTC_GreaterThanOrEqual         = 3,
	BTC_MAX                        = 4
};


// Enum OLGame.OLBTWaitHandlerNode.EWaitHandlerState
enum class EWaitHandlerState : uint8_t
{
	EWHS_Active                    = 0,
	EWHS_Waiting                   = 1,
	EWHS_MAX                       = 2
};


// Enum OLGame.OLCheatManager.EDebugTrajectoryType
enum class EDebugTrajectoryType : uint8_t
{
	DTT_Walking                    = 0,
	DTT_Falling                    = 1,
	DTT_AdjustPosition             = 2,
	DTT_ProceduralAnim             = 3,
	DTT_SpecialMove                = 4,
	DTT_Camera                     = 5,
	DTT_Other                      = 6,
	DTT_MAX                        = 7
};


// Enum OLGame.OLCheckpointList.OutlastGameType
enum class EOutlastGameType : uint8_t
{
	OGT_Outlast                    = 0,
	OGT_Whistleblower              = 1,
	OGT_MAX                        = 2
};


// Enum OLGame.OLDoor.DoorEventType
enum class EDoorEventType : uint8_t
{
	DET_StartOpening               = 0,
	DET_Opened                     = 1,
	DET_Closed                     = 2,
	DET_TriedOnLocked              = 3,
	DET_OpenThresholdReached       = 4,
	DET_Bashed                     = 5,
	DET_StartedBashing             = 6,
	DET_StartedClosing             = 7,
	DET_MAX                        = 8
};


// Enum OLGame.OLDoor.EDoorState
enum class EDoorState : uint8_t
{
	DS_Idle                        = 0,
	DS_Opening                     = 1,
	DS_Closing                     = 2,
	DS_PlayerInteracting           = 3,
	DS_Animating                   = 4,
	DS_MAX                         = 5
};


// Enum OLGame.OLDoor.EDoorBreakState
enum class EDoorBreakState : uint8_t
{
	DBS_Normal                     = 0,
	DBS_Breaking                   = 1,
	DBS_Broken                     = 2,
	DBS_MAX                        = 3
};


// Enum OLGame.OLDoor.ECancelBashDirection
enum class ECancelBashDirection : uint8_t
{
	ECBD_Both                      = 0,
	ECBD_Forward                   = 1,
	ECBD_Backward                  = 2,
	ECBD_MAX                       = 3
};


// Enum OLGame.OLDoor.EOLDoorMeshType
enum class EOLDoorMeshType : uint8_t
{
	DMesh_Undefined                = 0,
	DMesh_Wooden                   = 1,
	DMesh_WoodenOld                = 2,
	DMesh_WoodenWindow             = 3,
	DMesh_WoodenWindowSmall        = 4,
	DMesh_WoodenWindowOld          = 5,
	DMesh_WoodenWindowOldSmall     = 6,
	DMesh_WoodenWindowBig          = 7,
	DMesh_Metal                    = 8,
	DMesh_MetalWindow              = 9,
	DMesh_MetalWindowSmall         = 10,
	DMesh_Enforced                 = 11,
	DMesh_Grid                     = 12,
	DMesh_Prison                   = 13,
	DMesh_Entrance                 = 14,
	DMesh_Bathroom                 = 15,
	DMesh_IsolatedCell             = 16,
	DMesh_Locker                   = 17,
	DMesh_LockerRusted             = 18,
	DMesh_LockerBeige              = 19,
	DMesh_LockerGreen              = 20,
	DMesh_Glass                    = 21,
	DMesh_Fence                    = 22,
	DMesh_LockerHole               = 23,
	DMesh_MAX                      = 24
};


// Enum OLGame.OLDoor.EDoorMaterial
enum class EDoorMaterial : uint8_t
{
	OLDM_Wood                      = 0,
	OLDM_Metal                     = 1,
	OLDM_SecurityDoor              = 2,
	OLDM_BigPrisonDoor             = 3,
	OLDM_BigWoodenDoor             = 4,
	OLDM_MAX                       = 5
};


// Enum OLGame.OLDoor.EOLDoorType
enum class EOLDoorType : uint8_t
{
	DT_Normal                      = 0,
	DT_Locker                      = 1,
	DT_MAX                         = 2
};


// Enum OLGame.OLEnemyNanoCloud.NanoCloudForm
enum class ENanoCloudForm : uint8_t
{
	NCF_Swarm                      = 0,
	NCF_Human                      = 1,
	NCF_MorphingToSwarm            = 2,
	NCF_MorphingToHuman            = 3,
	NCF_MAX                        = 4
};


// Enum OLGame.OLEnemyNanoCloud.MorphingValueType
enum class EMorphingValueType : uint8_t
{
	MVT_CloudEmitter               = 0,
	MVT_SmallEmitters              = 1,
	MVT_SwarmMaterial              = 2,
	MVT_SkeletonMaterial           = 3,
	MVT_EyesMaterial               = 4,
	MVT_MAX                        = 5
};


// Enum OLGame.OLEngine.OrbisDialogType
enum class EOrbisDialogType : uint8_t
{
	ODT_None                       = 0,
	ODT_SelectSaveLocation         = 1,
	ODT_LoadGame                   = 2,
	ODT_SystemError                = 3,
	ODT_LoadedBadCheckpoint        = 4,
	ODT_PSStore                    = 5,
	ODT_MAX                        = 6
};


// Enum OLGame.OLEngine.ECheckpointAction
enum class ECheckpointAction : uint8_t
{
	Checkpoint_Default             = 0,
	Checkpoint_Load                = 1,
	Checkpoint_SaveToDisk          = 2,
	Checkpoint_SaveToMemory        = 3,
	Checkpoint_MAX                 = 4
};


// Enum OLGame.OLFXManager.EPPSMode
enum class EPPSMode : uint8_t
{
	PPS_Default                    = 0,
	PPS_Camcorder                  = 1,
	PPS_NightVision                = 2,
	PPS_GammaCalibration           = 3,
	PPS_Death                      = 4,
	PPS_MAX                        = 5
};


// Enum OLGame.OLFXManager.CameraGlitchType
enum class ECameraGlitchType : uint8_t
{
	CGT_OnOff                      = 0,
	CGT_LinearDrop                 = 1,
	CGT_Sine                       = 2,
	CGT_MAX                        = 3
};


// Enum OLGame.OLGame.EDifficultyMode
enum class EDifficultyMode : uint8_t
{
	EDM_Normal                     = 0,
	EDM_Hard                       = 1,
	EDM_Nightmare                  = 2,
	EDM_Insane                     = 3,
	EDM_MAX                        = 4
};


// Enum OLGame.OLHUD.EHUDMessageType
enum class EHUDMessageType : uint8_t
{
	EHMT_None                      = 0,
	EHMT_Objective                 = 1,
	EHMT_Tutorial                  = 2,
	EHMT_Generic                   = 3,
	EHMT_Interaction               = 4,
	EHMT_Subtitle                  = 5,
	EHMT_ShakeMouse                = 6,
	EHMT_ShakeStick                = 7,
	EHMT_MAX                       = 8
};


// Enum OLGame.OLHUD.EMenuType
enum class EMenuType : uint8_t
{
	EMT_MainMenu                   = 0,
	EMT_PauseMenu                  = 1,
	EMT_TabMenu                    = 2,
	EMT_RecordingMenu              = 3,
	EMT_EvidenceMenu               = 4,
	EMT_Credits                    = 5,
	EMT_MAX                        = 6
};


// Enum OLGame.OLInterpTrackPPSEffectParam.TrackPropertyType
enum class ETrackPropertyType : uint8_t
{
	TPP_MaterialInstance           = 0,
	TPP_UberMovieIntensity         = 1,
	TPP_MAX                        = 2
};


// Enum OLGame.OLPlayerController.EOutlastAchievement
enum class EOutlastAchievement : uint8_t
{
	OA_000_StartedGenerator        = 0,
	OA_001_DrainedSewer            = 1,
	OA_002_StartedSprinklers       = 2,
	OA_003_FoundFemaleWardKey      = 3,
	OA_004_MilestoneCollectibles   = 4,
	OA_005_FinishedGame            = 5,
	OA_006_AllCollectibles         = 6,
	OA_007_FinishedNightmare       = 7,
	OA_008_TurnOffGas              = 8,
	OA_009_TurnOffPower            = 9,
	OA_010_FinishDLC               = 10,
	OA_011_FinishDLCInsane         = 11,
	OA_012_AllDLCDocs              = 12,
	OA_013_AllDLCRecordings        = 13,
	OA_MAX                         = 14
};


// Enum OLGame.OLPlayerController.EAIMusicState
enum class EAIMusicState : uint8_t
{
	EAIMS_None                     = 0,
	EAIMS_Patrol                   = 1,
	EAIMS_Investigate              = 2,
	EAIMS_Chase                    = 3,
	EAIMS_MAX                      = 4
};


// Enum OLGame.OLPlayerController.StruggleInputDirection
enum class EStruggleInputDirection : uint8_t
{
	SID_Undefined                  = 0,
	SID_Left                       = 1,
	SID_Right                      = 2,
	SID_MAX                        = 3
};


// Enum OLGame.OLPlayerController.ZoomMovementType
enum class EZoomMovementType : uint8_t
{
	Zoom_Undefined                 = 0,
	Zoom_MovingLeft                = 1,
	Zoom_NotMoving                 = 2,
	Zoom_MovingRight               = 3,
	Zoom_MAX                       = 4
};


// Enum OLGame.OLPlayerController.EPlayerInteractionType
enum class EPlayerInteractionType : uint8_t
{
	PIT_CSA                        = 0,
	PIT_PickupObject               = 1,
	PIT_BatteriesFull              = 2,
	PIT_EnterBed                   = 3,
	PIT_EnterLocker                = 4,
	PIT_ExitLocker                 = 5,
	PIT_OpenDoor                   = 6,
	PIT_OpenPartiallyOpenDoor      = 7,
	PIT_CloseDoor                  = 8,
	PIT_LockedDoor                 = 9,
	PIT_AutoCloseDoor              = 10,
	PIT_ClimbUpLedge               = 11,
	PIT_ReloadBatteries            = 12,
	PIT_Struggle                   = 13,
	PIT_PushObject                 = 14,
	PIT_MAX                        = 15
};


// Enum OLGame.OLPlayerInput.GamepadBindingsType
enum class EGamepadBindingsType : uint8_t
{
	GBT_A                          = 0,
	GBT_B                          = 1,
	GBT_C                          = 2,
	GBT_MAX                        = 3
};


// Enum OLGame.OLProfileSettings.ProfileQualityLevel
enum class EProfileQualityLevel : uint8_t
{
	PQL_VeryLow                    = 0,
	PQL_Low                        = 1,
	PQL_Medium                     = 2,
	PQL_High                       = 3,
	PQL_VeryHigh                   = 4,
	PQL_Custom                     = 5,
	PQL_MAX                        = 6
};


// Enum OLGame.OLProfileSettings.EScreenResolution
enum class EScreenResolution : uint8_t
{
	SR_800x600                     = 0,
	SR_1024x768                    = 1,
	SR_1280x720                    = 2,
	SR_1280x800                    = 3,
	SR_1280x960                    = 4,
	SR_1366x768                    = 5,
	SR_1600x900                    = 6,
	SR_1600x1200                   = 7,
	SR_1680x1050                   = 8,
	SR_1920x1080                   = 9,
	SR_1920x1200                   = 10,
	SR_1920x1440                   = 11,
	SR_2560x1440                   = 12,
	SR_2560x1600                   = 13,
	SR_Other                       = 14,
	SR_MAX                         = 15
};


// Enum OLGame.OLProfileSettings.EGamepadConfigId
enum class EGamepadConfigId : uint8_t
{
	GC_TypeA                       = 0,
	GC_TypeB                       = 1,
	GC_TypeC                       = 2,
	GC_MAX                         = 3
};


// Enum OLGame.OLProfileSettings.ELanguage
enum class ELanguage : uint8_t
{
	EL_English                     = 0,
	EL_French                      = 1,
	EL_Spanish                     = 2,
	EL_Italian                     = 3,
	EL_German                      = 4,
	EL_Russian                     = 5,
	EL_Polish                      = 6,
	EL_Brazilian                   = 7,
	EL_Japanese                    = 8,
	EL_MAX                         = 9
};


// Enum OLGame.OLPushableObject.PushableMaterial
enum class EPushableMaterial : uint8_t
{
	PM_Wood                        = 0,
	PM_Metal                       = 1,
	PM_MAX                         = 2
};


// Enum OLGame.OLPushableObject.PushableEventType
enum class EPushableEventType : uint8_t
{
	PET_StartedPushing             = 0,
	PET_StoppedPushing             = 1,
	PET_UnblockedDoor              = 2,
	PET_BlockedDoor                = 3,
	PET_MAX                        = 4
};


// Enum OLGame.OLSeqAct_Limp.EHobbleIntensity
enum class EHobbleIntensity : uint8_t
{
	HI_VeryBad                     = 0,
	HI_Bad                         = 1,
	HI_NotSoBad                    = 2,
	HI_RatherOk                    = 3,
	HI_Healed                      = 4,
	HI_MAX                         = 5
};


// Enum OLGame.OLSeqAct_MovieEffect.MovieEffectAnim
enum class EMovieEffectAnim : uint8_t
{
	MEA_Random                     = 0,
	MEA_Anim1                      = 1,
	MEA_Anim2                      = 2,
	MEA_Anim3                      = 3,
	MEA_MAX                        = 4
};


// Enum OLGame.OLSeqEvent_NightVision.ENVEvent
enum class ENVEvent : uint8_t
{
	NVE_CamcorderActivated         = 0,
	NVE_CamcorderDeactivated       = 1,
	NVE_DefaultViewSelected        = 2,
	NVE_PassiveNVSelected          = 3,
	NVE_ActiveNVSelected           = 4,
	NVE_OutOfBatteries             = 5,
	NVE_MAX                        = 6
};


// Enum OLGame.OLUberPostProcessEffect.ECameraMode
enum class ECameraMode : uint8_t
{
	CM_Off                         = 0,
	CM_On                          = 1,
	CM_OnNightVision               = 2,
	CM_MAX                         = 3
};


// Enum OLGame.OLUIFrontEnd_Options.ENonProfileOption
enum class ENonProfileOption : uint8_t
{
	NPO_None                       = 0,
	NPO_DisableMotionBlur          = 1,
	NPO_Difficulty                 = 2,
	NPO_MAX                        = 3
};


// Enum OLGame.OLUIFrontEnd_Options.EOptionSelectorType
enum class EOptionSelectorType : uint8_t
{
	OST_CheckBox                   = 0,
	OST_Dropdown                   = 1,
	OST_Slider                     = 2,
	OST_KeyBinding                 = 3,
	OST_ControllerConfigButton     = 4,
	OST_GammaButton                = 5,
	OST_MAX                        = 6
};


// Enum OLGame.OLUIFrontEnd_Options.EOptionTabs
enum class EOptionTabs : uint8_t
{
	OT_Gameplay                    = 0,
	OT_Graphics                    = 1,
	OT_Controls                    = 2,
	OT_MAX                         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OLGame.OLCamcorderHud.CamcorderHudObjects
// 0x0038
struct FCamcorderHudObjects
{
	class UGFxObject*                                  ZoomTrackerMC;                                            // 0x0000(0x0008)
	class UGFxObject*                                  NVStatusMC;                                               // 0x0008(0x0008)
	class UGFxObject*                                  BatteryBarMC;                                             // 0x0010(0x0008)
	class UGFxObject*                                  RecStatucMC;                                              // 0x0018(0x0008)
	class UGFxObject*                                  MainOpacity;                                              // 0x0020(0x0008)
	class UGFxObject*                                  BatteryCount;                                             // 0x0028(0x0008)
	class UGFxObject*                                  RecordingTimeLabel;                                       // 0x0030(0x0008)
};

// ScriptStruct OLGame.OLCamcorderHud.CamcorderHudState
// 0x0018
struct FCamcorderHudState
{
	int                                                ZoomFactor;                                               // 0x0000(0x0004)
	int                                                CamcorderMode;                                            // 0x0004(0x0004)
	int                                                BatteryLeft;                                              // 0x0008(0x0004)
	int                                                RecStatucState;                                           // 0x000C(0x0004)
	int                                                MainOpacityState;                                         // 0x0010(0x0004)
	int                                                BatteryCountState;                                        // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLPlayerController.DeprecatedCheckpointRecord
// 0x0084
struct FDeprecatedCheckpointRecord
{
	int                                                NumBatteries;                                             // 0x0000(0x0004)
	struct FName                                       CurrentObjective;                                         // 0x0004(0x0008)
	TArray<struct FName>                               CompletedObjectives;                                      // 0x000C(0x0010) (NeedCtorLink)
	TArray<struct FName>                               CompletedRecordingMoments;                                // 0x001C(0x0010) (NeedCtorLink)
	TArray<struct FName>                               UnreadRecordingMoments;                                   // 0x002C(0x0010) (NeedCtorLink)
	TArray<struct FName>                               ActivatedGameState;                                       // 0x003C(0x0010) (NeedCtorLink)
	TArray<struct FName>                               CollectedDocuments;                                       // 0x004C(0x0010) (NeedCtorLink)
	TArray<struct FName>                               UnreadDocuments;                                          // 0x005C(0x0010) (NeedCtorLink)
	TArray<struct FVector>                             CollectedBatteries;                                       // 0x006C(0x0010) (NeedCtorLink)
	unsigned long                                      bBatteryTutorialComplete : 1;                             // 0x007C(0x0004)
	unsigned long                                      bClimbUpTutorialComplete : 1;                             // 0x007C(0x0004)
	unsigned long                                      bDocumentTutorialComplete : 1;                            // 0x007C(0x0004)
	unsigned long                                      bFoundBySoldierWhileHidden : 1;                           // 0x007C(0x0004)
	unsigned long                                      bFoundBySurgeonWhileHidden : 1;                           // 0x007C(0x0004)
	float                                              RecordingTimeSeconds;                                     // 0x0080(0x0004)
};

// ScriptStruct OLGame.OLPlayerController.CheckpointRecord
// 0x0090
struct AOLPlayerController_FCheckpointRecord
{
	int                                                CheckpointRecordVersion;                                  // 0x0000(0x0004)
	int                                                NumBatteries;                                             // 0x0004(0x0004)
	struct FName                                       CurrentObjective;                                         // 0x0008(0x0008)
	TArray<struct FName>                               CompletedObjectives;                                      // 0x0010(0x0010) (NeedCtorLink)
	TArray<struct FName>                               CompletedRecordingMoments;                                // 0x0020(0x0010) (NeedCtorLink)
	TArray<struct FName>                               UnreadRecordingMoments;                                   // 0x0030(0x0010) (NeedCtorLink)
	TArray<struct FName>                               ActivatedGameState;                                       // 0x0040(0x0010) (NeedCtorLink)
	TArray<struct FName>                               CollectedDocuments;                                       // 0x0050(0x0010) (NeedCtorLink)
	TArray<struct FName>                               UnreadDocuments;                                          // 0x0060(0x0010) (NeedCtorLink)
	TArray<struct FVector>                             CollectedBatteries;                                       // 0x0070(0x0010) (NeedCtorLink)
	unsigned long                                      bBatteryTutorialComplete : 1;                             // 0x0080(0x0004)
	unsigned long                                      bClimbUpTutorialComplete : 1;                             // 0x0080(0x0004)
	unsigned long                                      bDocumentTutorialComplete : 1;                            // 0x0080(0x0004)
	unsigned long                                      bFoundBySoldierWhileHidden : 1;                           // 0x0080(0x0004)
	unsigned long                                      bFoundBySurgeonWhileHidden : 1;                           // 0x0080(0x0004)
	float                                              RecordingTimeSeconds;                                     // 0x0084(0x0004)
	int                                                DifficultyMode;                                           // 0x0088(0x0004)
	float                                              BatteryEnergy;                                            // 0x008C(0x0004)
};

// ScriptStruct OLGame.OLPlayerController.DigitalInputs
// 0x0004
struct FDigitalInputs
{
	unsigned long                                      bPerformedUseAction : 1;                                  // 0x0000(0x0004)
	unsigned long                                      bPressedUseButton : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bReleasedUseButton : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bPressedToggleCamcorder : 1;                              // 0x0000(0x0004)
	unsigned long                                      bPressedToggleNightVision : 1;                            // 0x0000(0x0004)
	unsigned long                                      bPressedZoomIn : 1;                                       // 0x0000(0x0004)
	unsigned long                                      bPressedZoomOut : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bPressedJump : 1;                                         // 0x0000(0x0004)
	unsigned long                                      bPressedReloadBatteries : 1;                              // 0x0000(0x0004)
	unsigned long                                      bStartedActiveZoom : 1;                                   // 0x0000(0x0004)
};

// ScriptStruct OLGame.OLPlayerController.TouchZoomData
// 0x0014
struct FTouchZoomData
{
	float                                              bActive;                                                  // 0x0000(0x0004)
	float                                              SmoothedPosition;                                         // 0x0004(0x0004)
	TEnumAsByte<EZoomMovementType>                     CurrentDirection;                                         // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              LastPosition;                                             // 0x000C(0x0004)
	float                                              LastInputTime;                                            // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLTypes.StruggleConfig
// 0x007C
struct FStruggleConfig
{
	struct FName                                       InitIdleAnimEnemy;                                        // 0x0000(0x0008) (Edit)
	struct FName                                       EntryAnimPlayer;                                          // 0x0008(0x0008) (Edit)
	struct FName                                       EntryAnimEnemy;                                           // 0x0010(0x0008) (Edit)
	struct FName                                       CycleAnimPlayer;                                          // 0x0018(0x0008) (Edit)
	struct FName                                       CycleAnimEnemy;                                           // 0x0020(0x0008) (Edit)
	struct FName                                       ExitAnimPlayer;                                           // 0x0028(0x0008) (Edit)
	struct FName                                       ExitAnimEnemy;                                            // 0x0030(0x0008) (Edit)
	struct FName                                       KilledAnimPlayer;                                         // 0x0038(0x0008) (Edit)
	struct FName                                       KillAnimEnemy;                                            // 0x0040(0x0008) (Edit)
	float                                              EntryPlayerBlendInTime;                                   // 0x0048(0x0004) (Edit)
	float                                              ExitPlayerBlendOutTime;                                   // 0x004C(0x0004) (Edit)
	float                                              CycleTime;                                                // 0x0050(0x0004) (Edit)
	unsigned long                                      bNoFail : 1;                                              // 0x0054(0x0004) (Edit)
	float                                              MinRate;                                                  // 0x0058(0x0004) (Edit)
	float                                              MaxRateStart;                                             // 0x005C(0x0004) (Edit)
	float                                              MaxRateEnd;                                               // 0x0060(0x0004) (Edit)
	float                                              SuccessPctForMinRate;                                     // 0x0064(0x0004) (Edit)
	float                                              SuccessPctForMaxRate;                                     // 0x0068(0x0004) (Edit)
	TArray<class UAnimSet*>                            HeroAnimSets;                                             // 0x006C(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct OLGame.OLPlayerController.StruggleData
// 0x00CC
struct FStruggleData
{
	class UOLSeqAct_Struggle*                          StruggleAct;                                              // 0x0000(0x0008)
	class ASkeletalMeshActor*                          Enemy;                                                    // 0x0008(0x0008)
	struct FVector                                     RefLocation;                                              // 0x0010(0x000C)
	struct FVector                                     RefDirection;                                             // 0x001C(0x000C)
	struct FStruggleConfig                             Config;                                                   // 0x0028(0x007C) (NeedCtorLink)
	class UOLAnimEnemyStruggle*                        EnemyAnimNode;                                            // 0x00A4(0x0008)
	unsigned long                                      bActiveStrugging : 1;                                     // 0x00AC(0x0004)
	unsigned long                                      bSucceeded : 1;                                           // 0x00AC(0x0004)
	float                                              CycleStartedTime;                                         // 0x00B0(0x0004)
	float                                              NbShakes;                                                 // 0x00B4(0x0004)
	TEnumAsByte<EStruggleInputDirection>               CurrentInputDirection;                                    // 0x00B8(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              TotalDeltas;                                              // 0x00BC(0x0004)
	float                                              LastMouseX;                                               // 0x00C0(0x0004)
	float                                              SmoothedDirection;                                        // 0x00C4(0x0004)
	float                                              SmoothedAnimPlayRate;                                     // 0x00C8(0x0004)
};

// ScriptStruct OLGame.OLCheatManager.DebugTrajectoryPoint
// 0x0018
struct FDebugTrajectoryPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	float                                              Speed;                                                    // 0x000C(0x0004)
	TEnumAsByte<EDebugTrajectoryType>                  PointType;                                                // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              TimeStamp;                                                // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLEngine.SaveFileInfo
// 0x0028
struct FSaveFileInfo
{
	struct FString                                     Filename;                                                 // 0x0000(0x0010) (NeedCtorLink)
	struct FName                                       CheckpointName;                                           // 0x0010(0x0008)
	struct FCheckpointTime                             Time;                                                     // 0x0018(0x0010)
};

// ScriptStruct OLGame.OLEngine.CheckpointTime
// 0x0010
struct FCheckpointTime
{
	int                                                SecondsSinceMidnight;                                     // 0x0000(0x0004)
	int                                                Day;                                                      // 0x0004(0x0004)
	int                                                Month;                                                    // 0x0008(0x0004)
	int                                                Year;                                                     // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLDoor.DoorShakeData
// 0x0040
struct FDoorShakeData
{
	float                                              Rate;                                                     // 0x0000(0x0004) (Edit)
	float                                              RateVariation;                                            // 0x0004(0x0004) (Edit)
	float                                              Intensity;                                                // 0x0008(0x0004) (Edit)
	float                                              IntensityVariation;                                       // 0x000C(0x0004) (Edit)
	float                                              TotalDuration;                                            // 0x0010(0x0004) (Edit)
	float                                              AmplitudeYaw;                                             // 0x0014(0x0004) (Edit)
	float                                              AmplitudeTrans;                                           // 0x0018(0x0004) (Edit)
	float                                              FrequencyYaw;                                             // 0x001C(0x0004) (Edit)
	float                                              FrequencyTrans;                                           // 0x0020(0x0004) (Edit)
	float                                              ShakeDuration;                                            // 0x0024(0x0004) (Edit)
	float                                              FadeExp;                                                  // 0x0028(0x0004) (Edit)
	unsigned long                                      bShakeCamera : 1;                                         // 0x002C(0x0004) (Edit)
	unsigned long                                      bActive : 1;                                              // 0x002C(0x0004) (Transient)
	float                                              GlobalStartedTime;                                        // 0x0030(0x0004) (Transient)
	float                                              ShakeStartedTime;                                         // 0x0034(0x0004) (Transient)
	float                                              NextShakeStartTime;                                       // 0x0038(0x0004) (Transient)
	float                                              OriginalTranslationX;                                     // 0x003C(0x0004) (Transient)
};

// ScriptStruct OLGame.OLDoor.DoorMeshDirData
// 0x0068
struct FDoorMeshDirData
{
	class UStaticMesh*                                 MainMesh;                                                 // 0x0000(0x0008)
	class USkeletalMesh*                               ForwardBreakingMesh;                                      // 0x0008(0x0008)
	class UAnimSet*                                    ForwardBreakingAnimSet;                                   // 0x0010(0x0008)
	struct FName                                       ForwardBreakingAnimation;                                 // 0x0018(0x0008)
	class USkeletalMesh*                               ForwardBrokenMesh;                                        // 0x0020(0x0008)
	class UAnimSet*                                    ForwardBrokenAnimSet;                                     // 0x0028(0x0008)
	struct FName                                       ForwardBrokenAnimation;                                   // 0x0030(0x0008)
	class USkeletalMesh*                               BackwardBreakingMesh;                                     // 0x0038(0x0008)
	class UAnimSet*                                    BackwardBreakingAnimSet;                                  // 0x0040(0x0008)
	struct FName                                       BackwardBreakingAnimation;                                // 0x0048(0x0008)
	class USkeletalMesh*                               BackwardBrokenMesh;                                       // 0x0050(0x0008)
	class UAnimSet*                                    BackwardBrokenAnimSet;                                    // 0x0058(0x0008)
	struct FName                                       BackwardBrokenAnimation;                                  // 0x0060(0x0008)
};

// ScriptStruct OLGame.OLDoor.DoorMeshTypeData
// 0x00E8
struct FDoorMeshTypeData
{
	struct FDoorMeshDirData                            NormalData;                                               // 0x0000(0x0068)
	struct FDoorMeshDirData                            ReversedData;                                             // 0x0068(0x0068)
	TArray<class UMaterialInstance*>                   Materials;                                                // 0x00D0(0x0010) (NeedCtorLink)
	TEnumAsByte<EDoorMaterial>                         DoorMaterialForSound;                                     // 0x00E0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	float                                              OcclusionFactor;                                          // 0x00E4(0x0004)
};

// ScriptStruct OLGame.OLDoor.DoorSoundEvents
// 0x0030
struct FDoorSoundEvents
{
	class UAkEvent*                                    SndLocked;                                                // 0x0000(0x0008) (Const)
	class UAkEvent*                                    SndPush;                                                  // 0x0008(0x0008) (Const)
	class UAkEvent*                                    SndOpening;                                               // 0x0010(0x0008) (Const)
	class UAkEvent*                                    SndClosing;                                               // 0x0018(0x0008) (Const)
	class UAkEvent*                                    SndSlowClose;                                             // 0x0020(0x0008) (Const)
	class UAkEvent*                                    SndBash;                                                  // 0x0028(0x0008) (Const)
};

// ScriptStruct OLGame.OLFXManager.BlurData
// 0x001C
struct FBlurData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              Amount;                                                   // 0x0004(0x0004)
	float                                              Duration;                                                 // 0x0008(0x0004)
	float                                              BlendInTime;                                              // 0x000C(0x0004)
	float                                              BlendOutTime;                                             // 0x0010(0x0004)
	float                                              Desaturation;                                             // 0x0014(0x0004)
	float                                              StartTime;                                                // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLFXManager.CameraGlitchData
// 0x0015
struct FCameraGlitchData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              Duration;                                                 // 0x0004(0x0004)
	float                                              StartedTime;                                              // 0x0008(0x0004)
	float                                              NextGlitchDelay;                                          // 0x000C(0x0004)
	float                                              CurrentGlitchEffect;                                      // 0x0010(0x0004)
	TEnumAsByte<ECameraGlitchType>                     GlitchType;                                               // 0x0014(0x0001)
};

// ScriptStruct OLGame.OLFXManager.MovieEffectData
// 0x0030
struct FMovieEffectData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              StartedTime;                                              // 0x0004(0x0004)
	float                                              Intensity;                                                // 0x0008(0x0004)
	class UTextureMovie*                               Movie;                                                    // 0x000C(0x0008)
	class UAkEvent*                                    SndEventStop;                                             // 0x0014(0x0008)
	TArray<struct FVector2D>                           Anim;                                                     // 0x001C(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              Duration;                                                 // 0x002C(0x0004)
};

// ScriptStruct OLGame.OLGameStateList.OLGameState
// 0x0014
struct FOLGameState
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit)
	struct FName                                       AutoActivateOnCheckpointReached;                          // 0x0008(0x0008) (Edit)
	unsigned long                                      bPersistAfterDeath : 1;                                   // 0x0010(0x0004) (Edit)
	unsigned long                                      bActivated : 1;                                           // 0x0010(0x0004) (Transient)
};

// ScriptStruct OLGame.OLHeroCamera.CamView
// 0x0018
struct FCamView
{
	struct FVector                                     Loc;                                                      // 0x0000(0x000C)
	float                                              Yaw;                                                      // 0x000C(0x0004)
	float                                              Pitch;                                                    // 0x0010(0x0004)
	float                                              Roll;                                                     // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLHeroCamera.ViewLimits
// 0x0010
struct FViewLimits
{
	float                                              MinYaw;                                                   // 0x0000(0x0004)
	float                                              MaxYaw;                                                   // 0x0004(0x0004)
	float                                              MinPitch;                                                 // 0x0008(0x0004)
	float                                              MaxPitch;                                                 // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLHeroCamera.SmoothingData
// 0x0024
struct FSmoothingData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	struct FCamView                                    ViewWS;                                                   // 0x0004(0x0018)
	float                                              StartTime;                                                // 0x001C(0x0004)
	float                                              Duration;                                                 // 0x0020(0x0004)
};

// ScriptStruct OLGame.OLHeroCamera.TargettedSmoothingData
// 0x0014
struct FTargettedSmoothingData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              TargetAngleWS;                                            // 0x0004(0x0004)
	float                                              StartAngleWS;                                             // 0x0008(0x0004)
	float                                              StartTime;                                                // 0x000C(0x0004)
	float                                              Duration;                                                 // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLHeroCamera.CameraWaveData
// 0x000C
struct FCameraWaveData
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit)
	float                                              StartPhase;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct OLGame.OLHeroCamera.CameraShakeData
// 0x007C
struct FCameraShakeData
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit)
	float                                              FadeInTime;                                               // 0x0008(0x0004) (Edit)
	float                                              FadeOutTime;                                              // 0x000C(0x0004) (Edit)
	unsigned long                                      bPositionless : 1;                                        // 0x0010(0x0004) (Edit)
	struct FCameraWaveData                             YawWaveA;                                                 // 0x0014(0x000C) (Edit, EditInline)
	struct FCameraWaveData                             YawWaveB;                                                 // 0x0020(0x000C) (Edit, EditInline)
	struct FCameraWaveData                             PitchWaveA;                                               // 0x002C(0x000C) (Edit, EditInline)
	struct FCameraWaveData                             PitchWaveB;                                               // 0x0038(0x000C) (Edit, EditInline)
	struct FCameraWaveData                             RollWaveA;                                                // 0x0044(0x000C) (Edit, EditInline)
	struct FCameraWaveData                             RollWaveB;                                                // 0x0050(0x000C) (Edit, EditInline)
	unsigned long                                      bActive : 1;                                              // 0x005C(0x0004) (Transient)
	float                                              StartedTime;                                              // 0x0060(0x0004) (Transient)
	struct FVector                                     SourceLocation;                                           // 0x0064(0x000C) (Transient)
	float                                              YawOffset;                                                // 0x0070(0x0004) (Transient)
	float                                              PitchOffset;                                              // 0x0074(0x0004) (Transient)
	float                                              RollOffset;                                               // 0x0078(0x0004) (Transient)
};

// ScriptStruct OLGame.OLHUD.SubtitleData
// 0x002C
struct FSubtitleData
{
	struct FString                                     Text;                                                     // 0x0000(0x0010) (NeedCtorLink)
	class AActor*                                      Speaker;                                                  // 0x0010(0x0008)
	class UAkEvent*                                    SoundEvent;                                               // 0x0018(0x0008)
	float                                              EffectiveDistance;                                        // 0x0020(0x0004)
	float                                              TimeFired;                                                // 0x0024(0x0004)
	unsigned long                                      bUseAsImportant : 1;                                      // 0x0028(0x0004)
	unsigned long                                      bOccluded : 1;                                            // 0x0028(0x0004)
};

// ScriptStruct OLGame.OLHUD.GenericMessage
// 0x0015
struct FGenericMessage
{
	struct FString                                     MessageText;                                              // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              RemainingTime;                                            // 0x0010(0x0004)
	TEnumAsByte<EHUDMessageType>                       MessageType;                                              // 0x0014(0x0001)
};

// ScriptStruct OLGame.OLMainHud.MainHudObjects
// 0x0010
struct FMainHudObjects
{
	class UGFxObject*                                  NotificationIcons;                                        // 0x0000(0x0008)
	class UGFxObject*                                  SavingMessage;                                            // 0x0008(0x0008)
};

// ScriptStruct OLGame.OLMainHud.MainHudState
// 0x0004
struct FMainHudState
{
	unsigned long                                      bRecordingNotificationIconVisible : 1;                    // 0x0000(0x0004)
	unsigned long                                      bObjectiveNotificationIconVisible : 1;                    // 0x0000(0x0004)
	unsigned long                                      bCheckpointNotificationIconVisible : 1;                   // 0x0000(0x0004)
	unsigned long                                      bDocumentNotificationIconVisible : 1;                     // 0x0000(0x0004)
};

// ScriptStruct OLGame.OLPawn.GameplayParams
// 0x0038
struct FGameplayParams
{
	TEnumAsByte<ERootMotionMode>                       RMM;                                                      // 0x0000(0x0001)
	TEnumAsByte<ECameraRotationMode>                   CameraMode;                                               // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              MinYaw;                                                   // 0x0004(0x0004)
	float                                              MaxYaw;                                                   // 0x0008(0x0004)
	float                                              MinPitchWS;                                               // 0x000C(0x0004)
	float                                              MaxPitchWS;                                               // 0x0010(0x0004)
	float                                              MinPitchCS;                                               // 0x0014(0x0004)
	float                                              MaxPitchCS;                                               // 0x0018(0x0004)
	float                                              ViewLimitsApproachCoeff;                                  // 0x001C(0x0004)
	float                                              FOVOverride;                                              // 0x0020(0x0004)
	unsigned long                                      DisableCollisions : 1;                                    // 0x0024(0x0004)
	unsigned long                                      IgnorePawnCollisions : 1;                                 // 0x0024(0x0004)
	float                                              CollisionHeight;                                          // 0x0028(0x0004)
	float                                              CollisionRadius;                                          // 0x002C(0x0004)
	TEnumAsByte<EPhysics>                              Physics;                                                  // 0x0030(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	unsigned long                                      BothHandsNeeded : 1;                                      // 0x0034(0x0004)
};

// ScriptStruct OLGame.OLPawn.SpecialMoveParameters
// 0x0058
struct FSpecialMoveParameters
{
	struct FGameplayParams                             GP;                                                       // 0x0000(0x0038)
	TEnumAsByte<ELocomotionMode>                       NextLocomotionMode;                                       // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FName                                       AnimName;                                                 // 0x003C(0x0008)
	unsigned long                                      bNoAnim : 1;                                              // 0x0044(0x0004)
	float                                              AnimBlendInTime;                                          // 0x0048(0x0004)
	unsigned long                                      bExitOnBlendOut : 1;                                      // 0x004C(0x0004)
	unsigned long                                      bPlayAnimWhenPositioned : 1;                              // 0x004C(0x0004)
	unsigned long                                      bTargettedYawSmoothing : 1;                               // 0x004C(0x0004)
	unsigned long                                      bAlwaysInterruptible : 1;                                 // 0x004C(0x0004)
	unsigned long                                      bInterruptibleAfterTrigger : 1;                           // 0x004C(0x0004)
	unsigned long                                      bCollisionChangeOnTrigger : 1;                            // 0x004C(0x0004)
	unsigned long                                      CameraInputEnabled : 1;                                   // 0x004C(0x0004)
	unsigned long                                      PlayerInputEnabled : 1;                                   // 0x004C(0x0004)
	unsigned long                                      KeepLocomotionMode : 1;                                   // 0x004C(0x0004)
	unsigned long                                      AdjustPosition : 1;                                       // 0x004C(0x0004)
	unsigned long                                      AdjustOrientation : 1;                                    // 0x004C(0x0004)
	unsigned long                                      UseAnimTimeForPositionAdjustment : 1;                     // 0x004C(0x0004)
	unsigned long                                      bUsePawnVelocityForPositionning : 1;                      // 0x004C(0x0004)
	float                                              PositionningLinearVelocity;                               // 0x0050(0x0004)
	float                                              PositionningAngularVelocity;                              // 0x0054(0x0004)
};

// ScriptStruct OLGame.OLPawn.AdjustPositionData
// 0x0038
struct FAdjustPositionData
{
	unsigned long                                      Active : 1;                                               // 0x0000(0x0004)
	unsigned long                                      Done : 1;                                                 // 0x0000(0x0004)
	struct FVector                                     PositionError;                                            // 0x0004(0x000C)
	float                                              HeadingError;                                             // 0x0010(0x0004)
	TEnumAsByte<EAdjustPositionTargetType>             TargetType;                                               // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FVector                                     OriginalPosition;                                         // 0x0018(0x000C)
	struct FRotator                                    OriginalRotation;                                         // 0x0024(0x000C)
	float                                              CorrectionTime;                                           // 0x0030(0x0004)
	float                                              ElapsedTime;                                              // 0x0034(0x0004)
};

// ScriptStruct OLGame.OLPawn.ProceduralAnimData
// 0x001C
struct FProceduralAnimData
{
	struct FVector                                     PositionDelta;                                            // 0x0000(0x000C)
	float                                              HeadingDelta;                                             // 0x000C(0x0004)
	unsigned long                                      bWaitForNotify : 1;                                       // 0x0010(0x0004)
	float                                              TotalTime;                                                // 0x0014(0x0004)
	float                                              ElapsedTime;                                              // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLPawn.TurningData
// 0x0028
struct FTurningData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              StartTime;                                                // 0x0004(0x0004)
	float                                              StartYaw;                                                 // 0x0008(0x0004)
	float                                              StartSpeed;                                               // 0x000C(0x0004)
	float                                              InitialDeltaYaw;                                          // 0x0010(0x0004)
	float                                              Duration;                                                 // 0x0014(0x0004)
	float                                              SmoothedTargetYaw;                                        // 0x0018(0x0004)
	struct FVector                                     FocalPoint;                                               // 0x001C(0x000C)
};

// ScriptStruct OLGame.OLHero.HandIKData
// 0x0024
struct FHandIKData
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	TEnumAsByte<EIKTargetType>                         IKTarget;                                                 // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x0008(0x0004)
	float                                              Duration;                                                 // 0x000C(0x0004)
	float                                              FadeInTime;                                               // 0x0010(0x0004)
	float                                              FadeOutTime;                                              // 0x0014(0x0004)
	struct FVector                                     EffectorOffset;                                           // 0x0018(0x000C)
};

// ScriptStruct OLGame.OLHero.CornerPeekData
// 0x006C
struct FCornerPeekData
{
	class AOLCornerMarker*                             CornerMarker;                                             // 0x0000(0x0008)
	TEnumAsByte<ECornerPeekPosition>                   PeekPosition;                                             // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FVector                                     CornerLocation;                                           // 0x000C(0x000C)
	struct FVector                                     FwdDir;                                                   // 0x0018(0x000C)
	struct FVector                                     SideDir;                                                  // 0x0024(0x000C)
	unsigned long                                      bRoundedCorner : 1;                                       // 0x0030(0x0004)
	float                                              IKStrength;                                               // 0x0034(0x0004)
	float                                              LastInterpActivatedTime;                                  // 0x0038(0x0004)
	float                                              LastDisconnectTime;                                       // 0x003C(0x0004)
	unsigned long                                      bDisconnecting : 1;                                       // 0x0040(0x0004)
	struct FVector                                     AnchorPos;                                                // 0x0044(0x000C)
	struct FQuat                                       AnchorRot;                                                // 0x0050(0x0010)
	struct FVector                                     JointTargetPos;                                           // 0x0060(0x000C)
};

// ScriptStruct OLGame.OLHero.AttachmentData
// 0x0060
struct FAttachmentData
{
	class UPrimitiveComponent*                         AttachedComp;                                             // 0x0000(0x0008) (ExportObject, Component, EditInline)
	unsigned long                                      bHideWhenDone : 1;                                        // 0x0008(0x0004)
	float                                              BlendInTime;                                              // 0x000C(0x0004)
	float                                              BlendOutTime;                                             // 0x0010(0x0004)
	float                                              Duration;                                                 // 0x0014(0x0004)
	struct FVector                                     PositionOffset;                                           // 0x0018(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x0024(0x000C)
	unsigned long                                      bActive : 1;                                              // 0x0030(0x0004)
	unsigned long                                      bAttached : 1;                                            // 0x0030(0x0004)
	float                                              StartTimestamp;                                           // 0x0034(0x0004)
	struct FVector                                     BlendStartPos;                                            // 0x0038(0x000C)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
	struct FQuat                                       BlendStartRot;                                            // 0x0050(0x0010)
};

// ScriptStruct OLGame.OLHero.CameraParameters
// 0x0018
struct FCameraParameters
{
	float                                              MinYaw;                                                   // 0x0000(0x0004)
	float                                              MaxYaw;                                                   // 0x0004(0x0004)
	float                                              MinPitchWS;                                               // 0x0008(0x0004)
	float                                              MaxPitchWS;                                               // 0x000C(0x0004)
	float                                              MinPitchCS;                                               // 0x0010(0x0004)
	float                                              MaxPitchCS;                                               // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLHero.NVGlitchData
// 0x001C
struct FNVGlitchData
{
	unsigned long                                      bGlitching : 1;                                           // 0x0000(0x0004)
	float                                              CurrentLevel;                                             // 0x0004(0x0004)
	float                                              NextGlitchTime;                                           // 0x0008(0x0004)
	float                                              StartTime;                                                // 0x000C(0x0004)
	TEnumAsByte<ENVGlitchType>                         GlitchType;                                               // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              TargetLevel;                                              // 0x0014(0x0004)
	float                                              Duration;                                                 // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLHero.LocomotionModeParameters
// 0x0040
struct FLocomotionModeParameters
{
	struct FGameplayParams                             GP;                                                       // 0x0000(0x0038)
	float                                              NeckOffsetSide;                                           // 0x0038(0x0004)
	float                                              NeckOffsetFwd;                                            // 0x003C(0x0004)
};

// ScriptStruct OLGame.OLHero.AIPositionPoint
// 0x002C
struct FAIPositionPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FVector                                     LocationOnNavMesh;                                        // 0x000C(0x000C)
	TArray<class AOLEnemyPawn*>                        PawnsOccupying;                                           // 0x0018(0x0010) (NeedCtorLink)
	unsigned long                                      bValid : 1;                                               // 0x0028(0x0004)
};

// ScriptStruct OLGame.OLHero.AIPositionPawnInfo
// 0x0010
struct FAIPositionPawnInfo
{
	class AOLEnemyPawn*                                Enemy;                                                    // 0x0000(0x0008)
	int                                                PointIndex;                                               // 0x0008(0x0004)
	float                                              TimeToNextChange;                                         // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLProfileSettings.ScreenResolutionInfo
// 0x0008
struct FScreenResolutionInfo
{
	int                                                Width;                                                    // 0x0000(0x0004)
	int                                                Height;                                                   // 0x0004(0x0004)
};

// ScriptStruct OLGame.OLSoundEmitter.SoundEnvVolumeData
// 0x001C
struct FSoundEnvVolumeData
{
	class AOLSoundEnvironmentVolume*                   SoundEnvVolume;                                           // 0x0000(0x0008) (Transient)
	unsigned long                                      bActive : 1;                                              // 0x0008(0x0004)
	unsigned long                                      bFadeFromBorder : 1;                                      // 0x0008(0x0004)
	struct FVector                                     BorderPoint;                                              // 0x000C(0x000C)
	float                                              LastActiveEnvContrib;                                     // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLSoundEmitter.AuxBusInfo
// 0x0014
struct FAuxBusInfo
{
	struct FString                                     BusName;                                                  // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              BusValue;                                                 // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLSoundEmitter.EmitterDebugInfo
// 0x0034
struct FEmitterDebugInfo
{
	struct FString                                     ReverbA;                                                  // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              ReverbAContrib;                                           // 0x0010(0x0004)
	struct FString                                     ReverbB;                                                  // 0x0014(0x0010) (AlwaysInit, NeedCtorLink)
	float                                              ReverbBContrib;                                           // 0x0024(0x0004)
	struct FVector                                     VirtualizationPivot;                                      // 0x0028(0x000C)
};

// ScriptStruct OLGame.OLSoundEnvironmentManager.MultiPositionGroup
// 0x0020
struct FMultiPositionGroup
{
	struct FString                                     EventName;                                                // 0x0000(0x0010) (AlwaysInit, NeedCtorLink)
	TArray<class UOLSoundEmitter*>                     Members;                                                  // 0x0010(0x0010) (Native, AlwaysInit)
};

// ScriptStruct OLGame.OLVoiceManager.VOLine
// 0x0034
struct FVOLine
{
	class UAkEvent*                                    Line;                                                     // 0x0000(0x0008)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008)
	float                                              TimeFired;                                                // 0x0010(0x0004)
	float                                              EndOfLineBuffer;                                          // 0x0014(0x0004)
	int                                                PlayingID;                                                // 0x0018(0x0004)
	unsigned long                                      bSkipForPaused : 1;                                       // 0x001C(0x0004)
	int                                                CallbackFlags;                                            // 0x0020(0x0004)
	struct FPointer                                    CallbackFunction;                                         // 0x0024(0x0008) (Native)
	struct FPointer                                    CallbackCookie;                                           // 0x002C(0x0008) (Native)
};

// ScriptStruct OLGame.OLVoiceManager.LineQueue
// 0x001C
struct FLineQueue
{
	class AActor*                                      Talker;                                                   // 0x0000(0x0008)
	TArray<struct FVOLine>                             Lines;                                                    // 0x0008(0x0010) (Native, AlwaysInit)
	unsigned long                                      IsPlaying : 1;                                            // 0x0018(0x0004)
	unsigned long                                      IsWaiting : 1;                                            // 0x0018(0x0004)
	unsigned long                                      CancelWait : 1;                                           // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLVoiceManager.QueueTimer
// 0x000C
struct FQueueTimer
{
	class AActor*                                      QueueActor;                                               // 0x0000(0x0008)
	float                                              TimeRemaining;                                            // 0x0008(0x0004)
};

// ScriptStruct OLGame.OLVoiceManager.EndOfEventInfo
// 0x000C
struct FEndOfEventInfo
{
	class AActor*                                      QueueActor;                                               // 0x0000(0x0008)
	int                                                PlayingID;                                                // 0x0008(0x0004)
};

// ScriptStruct OLGame.OLVoiceManager.MarkerInfo
// 0x0018
struct FMarkerInfo
{
	class AActor*                                      QueueActor;                                               // 0x0000(0x0008)
	struct FString                                     MarkerText;                                               // 0x0008(0x0010) (NeedCtorLink)
};

// ScriptStruct OLGame.OLWaitPointComponent.WaitPoint
// 0x0024
struct FWaitPoint
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit)
	float                                              ForwardYaw;                                               // 0x000C(0x0004) (Edit)
	unsigned long                                      bForReversed : 1;                                         // 0x0010(0x0004) (Edit)
	unsigned long                                      bIsValid : 1;                                             // 0x0010(0x0004) (Transient)
	struct FVector                                     Point;                                                    // 0x0014(0x000C) (Transient)
	unsigned long                                      bInUse : 1;                                               // 0x0020(0x0004) (Transient)
};

// ScriptStruct OLGame.ActorFactoryOLAI.ShaderValues
// 0x0014
struct FShaderValues
{
	unsigned long                                      bOverride_UniformColor : 1;                               // 0x0000(0x0004)
	struct FLinearColor                                UniformColor;                                             // 0x0004(0x0010) (Edit)
};

// ScriptStruct OLGame.OLEnemyPawn.WeaponTypeData
// 0x0009
struct FWeaponTypeData
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008)
	TEnumAsByte<EWeaponType>                           Type;                                                     // 0x0008(0x0001)
};

// ScriptStruct OLGame.OLEnemyPawn.NanoSwarmEmitter
// 0x0010
struct FNanoSwarmEmitter
{
	class UParticleSystemComponent*                    Emitter;                                                  // 0x0000(0x0008) (ExportObject, Component, EditInline)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008)
};

// ScriptStruct OLGame.OLEnemyPawn.VOInstance
// 0x0014
struct FVOInstance
{
	TArray<unsigned long>                              EventsPlayed;                                             // 0x0000(0x0010) (NeedCtorLink)
	int                                                NumUnplayedEvents;                                        // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLEnemyPawn.DelayedVO
// 0x0005
struct FDelayedVO
{
	float                                              TimeRemaining;                                            // 0x0000(0x0004)
	TEnumAsByte<EVOContext>                            VOContext;                                                // 0x0004(0x0001)
};

// ScriptStruct OLGame.OLEnemyPawn.SpeedValues
// 0x000C
struct FSpeedValues
{
	float                                              PatrolSpeed;                                              // 0x0000(0x0004) (Config)
	float                                              InvestigateSpeed;                                         // 0x0004(0x0004) (Config)
	float                                              ChaseSpeed;                                               // 0x0008(0x0004) (Config)
};

// ScriptStruct OLGame.OLEnemyPawn.VisionCone
// 0x0010
struct FVisionCone
{
	float                                              Distance;                                                 // 0x0000(0x0004) (Config)
	float                                              PeekingDistance;                                          // 0x0004(0x0004) (Config)
	float                                              HorizontalAngle;                                          // 0x0008(0x0004) (Config)
	float                                              VerticalAngle;                                            // 0x000C(0x0004) (Config)
};

// ScriptStruct OLGame.OLEnemyPawn.VisionParameters
// 0x0030
struct FVisionParameters
{
	float                                              WideConeReactionTime;                                     // 0x0000(0x0004) (Config)
	float                                              LoseTargetTime;                                           // 0x0004(0x0004) (Config)
	struct FVisionCone                                 NarrowCone;                                               // 0x0008(0x0010) (Config)
	struct FVisionCone                                 WideCone;                                                 // 0x0018(0x0010) (Config)
	float                                              CloseDistance;                                            // 0x0028(0x0004) (Config)
	float                                              CrouchMultiplier;                                         // 0x002C(0x0004) (Config)
};

// ScriptStruct OLGame.OLEnemyPawn.EnemyModifiers
// 0x0014
struct FEnemyModifiers
{
	unsigned long                                      bShouldAttack : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bUseKillingBlow : 1;                                      // 0x0000(0x0004) (Edit)
	unsigned long                                      bAlwaysLookAtPlayer : 1;                                  // 0x0000(0x0004) (Edit)
	unsigned long                                      bDisableRepulsion : 1;                                    // 0x0000(0x0004) (Edit)
	unsigned long                                      bSpawnWithNavMeshObstacle : 1;                            // 0x0000(0x0004) (Edit)
	unsigned long                                      bUseForMusic : 1;                                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bForceUseForStressBreath : 1;                             // 0x0000(0x0004) (Edit)
	unsigned long                                      bDisableKnockbackFromPlayer : 1;                          // 0x0000(0x0004) (Edit)
	unsigned long                                      bUseGroup : 1;                                            // 0x0000(0x0004) (Edit)
	class UStaticMesh*                                 WeaponMeshToUse;                                          // 0x0004(0x0008) (Deprecated)
	TEnumAsByte<EWeapon>                               WeaponToUse;                                              // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned long                                      bInterruptVOOnChase : 1;                                  // 0x0010(0x0004) (Edit)
	unsigned long                                      bAttackOnProximity : 1;                                   // 0x0010(0x0004) (Edit)
};

// ScriptStruct OLGame.OLBot.MovementData
// 0x0029
struct FMovementData
{
	class AActor*                                      DestinationActor;                                         // 0x0000(0x0008)
	struct FVector                                     DestinationPoint;                                         // 0x0008(0x000C)
	struct FVector                                     ValidatedMovePoint;                                       // 0x0014(0x000C)
	float                                              DestinationBuffer;                                        // 0x0020(0x0004)
	unsigned long                                      bIsDynamic : 1;                                           // 0x0024(0x0004)
	unsigned long                                      bIsInvestigation : 1;                                     // 0x0024(0x0004)
	unsigned long                                      bFocusOnActor : 1;                                        // 0x0024(0x0004)
	TEnumAsByte<EMoveType>                             Type;                                                     // 0x0028(0x0001)
};

// ScriptStruct OLGame.OLBot.AnimationData
// 0x003C
struct FAnimationData
{
	struct FName                                       AnimationName;                                            // 0x0000(0x0008)
	unsigned long                                      bLoop : 1;                                                // 0x0008(0x0004)
	unsigned long                                      bOnWaypoint : 1;                                          // 0x0008(0x0004)
	float                                              Rate;                                                     // 0x000C(0x0004)
	float                                              BlendInTime;                                              // 0x0010(0x0004)
	float                                              BlendOutTime;                                             // 0x0014(0x0004)
	float                                              StartTime;                                                // 0x0018(0x0004)
	float                                              EndTime;                                                  // 0x001C(0x0004)
	unsigned long                                      bAlign : 1;                                               // 0x0020(0x0004)
	struct FVector                                     AlignLocation;                                            // 0x0024(0x000C)
	struct FVector                                     AlignRotation;                                            // 0x0030(0x000C)
};

// ScriptStruct OLGame.OLBot.DelayedNoise
// 0x0018
struct FDelayedNoise
{
	struct FName                                       NoiseType;                                                // 0x0000(0x0008)
	struct FVector                                     Location;                                                 // 0x0008(0x000C)
	float                                              TimeToNoise;                                              // 0x0014(0x0004)
};

// ScriptStruct OLGame.OLBot.Disturbance
// 0x0010
struct FDisturbance
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	float                                              TimeSinceUpdate;                                          // 0x000C(0x0004)
};

// ScriptStruct OLGame.OLBot.InvestigationPoint
// 0x001C
struct FInvestigationPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	class AActor*                                      InteractiveActor;                                         // 0x000C(0x0008)
	TEnumAsByte<EOLInvestigationPointType>             Type;                                                     // 0x0014(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	unsigned long                                      bOccupied : 1;                                            // 0x0018(0x0004)
};

// ScriptStruct OLGame.OLAIContextualVOAsset.VOMapping
// 0x0014
struct FVOMapping
{
	TEnumAsByte<EVOContext>                            VOContext;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<class UAkEvent*>                            Events;                                                   // 0x0004(0x0010) (Edit, NeedCtorLink)
};

// ScriptStruct OLGame.OLBTCompositeNode.OLBTNodeChild
// 0x0014
struct FOLBTNodeChild
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	class UOLBTNode*                                   Node;                                                     // 0x0008(0x0008) (ExportObject, NeedCtorLink, EditInline)
	int                                                DrawY;                                                    // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLBTPlayAnimNode.AnimData
// 0x0020
struct FAnimData
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008) (Edit)
	float                                              Weight;                                                   // 0x0008(0x0004) (Edit)
	float                                              Rate;                                                     // 0x000C(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x0010(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0014(0x0004) (Edit)
	float                                              StartTime;                                                // 0x0018(0x0004) (Edit)
	float                                              EndTime;                                                  // 0x001C(0x0004) (Edit)
};

// ScriptStruct OLGame.OLNavigationHandle.MovePoint
// 0x001C
struct FMovePoint
{
	struct FVector                                     Destination;                                              // 0x0000(0x000C)
	TArray<struct FPointer>                            RelevantEdges;                                            // 0x000C(0x0010) (Native)
};

// ScriptStruct OLGame.OLEnemyNanoCloud.MorphingTransition
// 0x0010
struct FMorphingTransition
{
	float                                              PreValue;                                                 // 0x0000(0x0004)
	float                                              PostValue;                                                // 0x0004(0x0004)
	float                                              StartTime;                                                // 0x0008(0x0004) (Const)
	float                                              EndTime;                                                  // 0x000C(0x0004) (Const)
};

// ScriptStruct OLGame.OLAnimCycleBreaker.CycleBreaker
// 0x0044
struct FCycleBreaker
{
	float                                              MinWeight;                                                // 0x0000(0x0004) (Edit)
	float                                              MaxWeight;                                                // 0x0004(0x0004) (Edit)
	unsigned long                                      bPlayStartToEnd : 1;                                      // 0x0008(0x0004) (Edit)
	float                                              MinDuration;                                              // 0x000C(0x0004) (Edit)
	float                                              MaxDuration;                                              // 0x0010(0x0004) (Edit)
	float                                              MinRate;                                                  // 0x0014(0x0004) (Edit)
	float                                              MaxRate;                                                  // 0x0018(0x0004) (Edit)
	float                                              BlendInSpeed;                                             // 0x001C(0x0004) (Edit)
	float                                              BlendOutSpeed;                                            // 0x0020(0x0004) (Edit)
	float                                              Probability;                                              // 0x0024(0x0004) (Edit)
	float                                              LayerProbability;                                         // 0x0028(0x0004) (Edit)
	TArray<class UClass*>                              SpecificClasses;                                          // 0x002C(0x0010) (Edit, NeedCtorLink)
	float                                              CurrentWeight;                                            // 0x003C(0x0004) (Transient)
	float                                              TargetWeight;                                             // 0x0040(0x0004) (Transient)
};

// ScriptStruct OLGame.OLSeqAct_AnimControl.AnimParams
// 0x0014
struct FAnimParams
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008) (Edit)
	unsigned long                                      bLooping : 1;                                             // 0x0008(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x000C(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0010(0x0004) (Edit)
};

// ScriptStruct OLGame.OLBTBehavior.BehaviorState
// 0x0008
struct FBehaviorState
{
	class UOLBTTask*                                   Task;                                                     // 0x0000(0x0008)
};

// ScriptStruct OLGame.OLUIFrontEnd.ViewInfo
// 0x0028
struct FViewInfo
{
	struct FName                                       ViewName;                                                 // 0x0000(0x0008)
	struct FString                                     SWFName;                                                  // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FName>                               DependantViews;                                           // 0x0018(0x0010) (NeedCtorLink)
};

// ScriptStruct OLGame.OLSoundEnvironmentManager.VirtualizationNode
// 0x0014
struct FVirtualizationNode
{
	class UOLSoundConnectorComponent*                  Connector;                                                // 0x0000(0x0008) (ExportObject, Transient, Component, EditInline)
	float                                              VirtualizableDistance;                                    // 0x0008(0x0004)
	float                                              DistToListener;                                           // 0x000C(0x0004)
	int                                                Level;                                                    // 0x0010(0x0004)
};

// ScriptStruct OLGame.OLTypes.BlendSpaceNode
// 0x0010
struct FBlendSpaceNode
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008) (Edit)
	struct FVector2D                                   Coords;                                                   // 0x0008(0x0008) (Edit)
};

// ScriptStruct OLGame.OLUIFrontEnd_Options.OptionInfo
// 0x0054
struct FOptionInfo
{
	unsigned long                                      bInProfile : 1;                                           // 0x0000(0x0004)
	int                                                ProfileSettingId;                                         // 0x0004(0x0004)
	TEnumAsByte<ENonProfileOption>                     NonProfileId;                                             // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FString                                     SettingDescription;                                       // 0x000C(0x0010) (Const, Localized, NeedCtorLink)
	struct FString                                     SettingTooltip;                                           // 0x001C(0x0010) (Const, Localized, NeedCtorLink)
	TEnumAsByte<EOptionSelectorType>                   Type;                                                     // 0x002C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned long                                      bUsesRawValue : 1;                                        // 0x0030(0x0004)
	float                                              Slider_Minimum;                                           // 0x0034(0x0004)
	float                                              Slider_Maximum;                                           // 0x0038(0x0004)
	int                                                CurrentValueInt;                                          // 0x003C(0x0004) (Transient)
	float                                              CurrentValueFloat;                                        // 0x0040(0x0004) (Transient)
	struct FString                                     CurrentValueString;                                       // 0x0044(0x0010) (Transient, NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
