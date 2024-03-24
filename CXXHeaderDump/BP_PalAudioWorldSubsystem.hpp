#ifndef UE4SS_SDK_BP_PalAudioWorldSubsystem_HPP
#define UE4SS_SDK_BP_PalAudioWorldSubsystem_HPP

class UBP_PalAudioWorldSubsystem_C : public UPalAudioWorldSubsystem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0080 (size: 0x8)
    bool IsDead;                                                                      // 0x0088 (size: 0x1)
    class AActor* DeubugModel;                                                        // 0x0090 (size: 0x8)
    class AActor* LastOneEnemy;                                                       // 0x0098 (size: 0x8)
    TArray<FGuid> ExecRaid;                                                           // 0x00A0 (size: 0x10)
    TArray<FGuid> ArrivedRaid;                                                        // 0x00B0 (size: 0x10)
    bool IsLocalPlayerInsideBaseCamp;                                                 // 0x00C0 (size: 0x1)
    TArray<class APalSpotAreaBase*> SpotList;                                         // 0x00C8 (size: 0x10)
    TArray<class APalAmbientSoundAreaBase*> AmbientSoundList;                         // 0x00D8 (size: 0x10)
    TArray<class APalAmbientSoundAreaBase*> AmbientSoundListPrev;                     // 0x00E8 (size: 0x10)
    TArray<int32> AmbinetSoundPlayingIdList;                                          // 0x00F8 (size: 0x10)
    TMap<class EPalBattleBGMType, class EPalAudioStateGroup> BattleBGMMap;            // 0x0108 (size: 0x50)
    FPalAmbientSoundAreaData CurrentAmbientData;                                      // 0x0158 (size: 0x28)

    void FindMaxPriorityAmbientSoundArea(class APalAmbientSoundAreaBase*& AmbinetSoundArea);
    bool IsPlayingArea(class APalAmbientSoundAreaBase* AmbientSoundArea);
    void ChangeBattleBGMType(EPalBattleBGMType GameType, EPalAudioStateGroup& AudioType);
    void OnAddRemoveEnemy(EPalBattleBGMType Rank, bool IsAdd);
    void OnPlayerEnterAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea);
    void OnPlayerExitAmbientArea(class APalPlayerCharacter* Player, class APalAmbientSoundAreaBase* AmbientSoundArea);
    void PlayAmbientSounds(EPalOneDayTimeType OneDayTimeType);
    void OnChangeOneDayTimeType(EPalOneDayTimeType OneDayTimeType);
    void OnNightEnd();
    void OnNightStart();
    void UpdateAmbient();
    void OnBattleRankDown(EPalPlayerBattleFinishType Finish);
    void OnPlayerExitSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea);
    void OnPlayerEnterSpotArea(class APalPlayerCharacter* Player, class APalSpotAreaBase* SpotArea);
    void UpdateSpot();
    void OnPlayerExitBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel);
    void OnPlayerEnterBaseCamp(class APalPlayerCharacter* Player, class UPalBaseCampModel* BaseCampModel);
    void UpdateRaid();
    void OnArrivedRaid(const FPalIncidentBroadcastParameter& Param);
    void OnEndRaid(const FPalIncidentBroadcastParameter& Parameter);
    void OnStartRaid(const FPalIncidentBroadcastParameter& Parameter);
    void CreateDebugModel(class AActor*& NewParam);
    void OnBattleModeChanged(bool IsBattleMode);
    void UpdateDebugDisplay();
    void UpdateWorldLocation();
    void UpdateWorldTime();
    void UpdateStatePlayerAlive();
    void SetDefaultState();
    void Tick_BP(float DeltaTime);
    void OnEndOfEvent();
    void DeathPlayer();
    void RespawnPlayer(class APalPlayerCharacter* Player);
    void OnSpawnedLocalPlayerCharacter(class APawn* Pawn, class AController* Controller);
    void ExecuteUbergraph_BP_PalAudioWorldSubsystem(int32 EntryPoint);
}; // Size: 0x180

#endif
