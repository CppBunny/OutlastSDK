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

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
enum class ESteamMatchmakingType : uint8_t
{
	SMT_Invalid                    = 0,
	SMT_LAN                        = 1,
	SMT_Internet                   = 2,
	SMT_MAX                        = 3
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
enum class ELeaderboardSortType : uint8_t
{
	LST_Ascending                  = 0,
	LST_Descending                 = 1,
	LST_MAX                        = 2
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
enum class ELeaderboardRequestType : uint8_t
{
	LRT_Global                     = 0,
	LRT_Player                     = 1,
	LRT_Friends                    = 2,
	LRT_MAX                        = 3
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
enum class ELeaderboardFormat : uint8_t
{
	LF_Number                      = 0,
	LF_Seconds                     = 1,
	LF_Milliseconds                = 2,
	LF_MAX                         = 3
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
enum class ELeaderboardUpdateType : uint8_t
{
	LUT_KeepBest                   = 0,
	LUT_Force                      = 1,
	LUT_MAX                        = 2
};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EMuteType
enum class EMuteType : uint8_t
{
	MUTE_None                      = 0,
	MUTE_AllButFriends             = 1,
	MUTE_All                       = 2,
	MUTE_MAX                       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x000C
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                                    // 0x0000(0x0004)
	struct FPointer                                    Response;                                                 // 0x0004(0x0008) (Native)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x000C
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                                    // 0x0000(0x0004)
	struct FPointer                                    Response;                                                 // 0x0004(0x0008) (Native)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClientFilterORClause
// 0x0048
struct FClientFilterORClause
{
	struct FMultiMap_Mirror                            OrParams;                                                 // 0x0000(0x0048) (Native, Transient)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.MatchmakingQueryState
// 0x0074
struct FMatchmakingQueryState
{
	class UOnlineGameSearch*                           GameSearch;                                               // 0x0000(0x0008) (Const)
	TArray<struct FServerQueryToRulesResponseMapping>  QueryToRulesResponseMap;                                  // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FServerQueryToPingResponseMapping>   QueryToPingResponseMap;                                   // 0x0018(0x0010) (NeedCtorLink)
	struct FPointer                                    ServerListResponse;                                       // 0x0028(0x0008) (Native)
	TEnumAsByte<ESteamMatchmakingType>                 CurrentMatchmakingType;                                   // 0x0030(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FPointer                                    CurrentMatchmakingQuery;                                  // 0x0034(0x0008) (Native)
	TArray<struct FClientFilterORClause>               ActiveClientsideFilters;                                  // 0x003C(0x0010) (Native, Transient)
	TArray<class UOnlineGameSettings*>                 PendingRulesSearchSettings;                               // 0x004C(0x0010) (NeedCtorLink)
	TArray<class UOnlineGameSettings*>                 PendingPingSearchSettings;                                // 0x005C(0x0010) (NeedCtorLink)
	unsigned long                                      bIgnoreRefreshComplete : 1;                               // 0x006C(0x0004)
	float                                              LastActivityTimestamp;                                    // 0x0070(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x003C
struct FFilterKeyToSteamKeyMapping
{
	int                                                KeyId;                                                    // 0x0000(0x0004)
	TEnumAsByte<EOnlineGameSearchEntryType>            KeyType;                                                  // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     RawKey;                                                   // 0x0008(0x0010) (NeedCtorLink)
	struct FString                                     SteamKey;                                                 // 0x0018(0x0010) (NeedCtorLink)
	unsigned long                                      bReverseFilter : 1;                                       // 0x0028(0x0004)
	struct FString                                     IgnoreValue;                                              // 0x002C(0x0010) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0020
struct FSteamPlayerClanData
{
	struct FString                                     ClanName;                                                 // 0x0000(0x0010) (Const, NeedCtorLink)
	struct FString                                     ClanTag;                                                  // 0x0010(0x0010) (Const, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LocalTalkerSteam
// 0x0001 (0x0005 - 0x0004)
struct FLocalTalkerSteam : public FLocalTalker
{
	TEnumAsByte<EMuteType>                             MuteType;                                                 // 0x0004(0x0001)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x0018
struct FPlayerStat
{
	int                                                ViewId;                                                   // 0x0000(0x0004)
	int                                                ColumnId;                                                 // 0x0004(0x0004)
	struct FSettingsData                               Data;                                                     // 0x0008(0x0010) (Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x0068
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                                   // 0x0000(0x0010) (Const)
	struct FString                                     PlayerName;                                               // 0x0010(0x0010) (Const, NeedCtorLink)
	struct FString                                     StatGuid;                                                 // 0x0020(0x0010) (Const, NeedCtorLink)
	TArray<struct FPlayerStat>                         Stats;                                                    // 0x0030(0x0010) (Const, NeedCtorLink)
	struct FOnlinePlayerScore                          Score;                                                    // 0x0040(0x0018) (Const)
	struct FString                                     Place;                                                    // 0x0058(0x0010) (Const, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0038
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                                  // 0x0000(0x0008)
	TArray<struct FScriptDelegate>                     ReadDelegates;                                            // 0x0008(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteDelegates;                                           // 0x0018(0x0010) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ProfileDataChangedDelegates;                              // 0x0028(0x0010) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0014
struct FOnlineStatusMapping
{
	int                                                StatusId;                                                 // 0x0000(0x0004)
	struct FString                                     StatusString;                                             // 0x0004(0x0010) (Const, Localized, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloud
// 0x0020
struct FSteamUserCloud
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FTitleFile>                          UserCloudFileData;                                        // 0x0010(0x0010) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamUserCloudMetadata
// 0x0020
struct FSteamUserCloudMetadata
{
	struct FString                                     UserId;                                                   // 0x0000(0x0010) (NeedCtorLink)
	TArray<struct FEmsFile>                            UserCloudMetadata;                                        // 0x0010(0x0010) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x002C
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                                // 0x0000(0x0004) (Const)
	int                                                NumberOfAttempts;                                         // 0x0004(0x0004) (Const)
	struct FUniqueNetId                                PlayerNetId;                                              // 0x0008(0x0010) (Const)
	int                                                Size;                                                     // 0x0018(0x0004) (Const)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                         // 0x001C(0x0010) (Const, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                            // 0x0000(0x0004)
	struct FName                                       AchievementName;                                          // 0x0004(0x0008)
	int                                                ViewId;                                                   // 0x000C(0x0004)
	int                                                ProgressCount;                                            // 0x0010(0x0004)
	int                                                MaxProgress;                                              // 0x0014(0x0004)
	unsigned long                                      bAutoUnlock : 1;                                          // 0x0018(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int                                                AchievementId;                                            // 0x0000(0x0004)
	int                                                Progress;                                                 // 0x0004(0x0004)
	int                                                MaxProgress;                                              // 0x0008(0x0004)
	unsigned long                                      bUnlock : 1;                                              // 0x000C(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	struct FQWord                                      Dud;                                                      // 0x0000(0x0008) (Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x0028
struct FLeaderboardTemplate
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x0010) (NeedCtorLink)
	TEnumAsByte<ELeaderboardUpdateType>                UpdateType;                                               // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                LeaderboardSize;                                          // 0x0014(0x0004) (Const)
	TEnumAsByte<ELeaderboardSortType>                  SortType;                                                 // 0x0018(0x0001) (Const)
	TEnumAsByte<ELeaderboardFormat>                    DisplayFormat;                                            // 0x0019(0x0001) (Const)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	struct FLeaderboardHandle                          LeaderboardRef;                                           // 0x001C(0x0008) (Const)
	unsigned long                                      bLeaderboardInitializing : 1;                             // 0x0024(0x0004) (Const)
	unsigned long                                      bLeaderboardInitiated : 1;                                // 0x0024(0x0004) (Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x002C
struct FDeferredLeaderboardRead
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x0010) (NeedCtorLink)
	unsigned char                                      RequestType;                                              // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                Start;                                                    // 0x0014(0x0004)
	int                                                End;                                                      // 0x0018(0x0004)
	TArray<struct FUniqueNetId>                        PlayerList;                                               // 0x001C(0x0010) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x0024
struct FDeferredLeaderboardWrite
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x0010) (NeedCtorLink)
	int                                                Score;                                                    // 0x0010(0x0004)
	TArray<int>                                        LeaderboardData;                                          // 0x0014(0x0010) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0014
struct FViewIdToLeaderboardName
{
	int                                                ViewId;                                                   // 0x0000(0x0004)
	struct FString                                     LeaderboardName;                                          // 0x0004(0x0010) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x0028
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                                // 0x0000(0x0010)
	int                                                Rank;                                                     // 0x0010(0x0004)
	int                                                Score;                                                    // 0x0014(0x0004)
	TArray<int>                                        LeaderboardData;                                          // 0x0018(0x0010) (NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
