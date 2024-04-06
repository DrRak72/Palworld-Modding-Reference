#ifndef UE4SS_SDK_WBP_BossBattle_BattleInfo_HPP
#define UE4SS_SDK_WBP_BossBattle_BattleInfo_HPP

class UWBP_BossBattle_BattleInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_BossBattle_BossEliminated_C* WBP_BossBattle_BossEliminated;            // 0x0280 (size: 0x8)
    class UWBP_BossBattle_TimeOut_C* WBP_BossBattle_TimeOut;                          // 0x0288 (size: 0x8)
    class UWBP_BossBattle_Timer_C* WBP_BossBattle_Timer;                              // 0x0290 (size: 0x8)
    class APalBossTower* CurrentBossTower;                                            // 0x0298 (size: 0x8)
    FTimerHandle CurrentTimer;                                                        // 0x02A0 (size: 0x8)
    class UBP_PalRaidBossComponent_C* CurrentRaid;                                    // 0x02A8 (size: 0x8)
    TArray<class UBP_PalRaidBossComponent_C*> CachedRaids;                            // 0x02B0 (size: 0x10)

    void Finished_3EF5F8014E85067431DFCC89EED868D4();
    void Finished_8C451D0644B19738D91CB8BD4A008BD2();
    void Finished_C4E7DBA04E1A39E6670703A0D0184F95();
    void Finished_413432514DE4FC814BDA5192337698D2();
    void ActUICombatResult(EPalBossBattleCombatResult CombatResult);
    void StartCombatTimer();
    void GetBossTower(class APalBossTower* BossTower);
    void CountDown_TowerBoss();
    void CloseTimer();
    void OnRaidBossBattleStart(FGuid CampID);
    void OnRaidBossBattleEnd(FGuid CampID, EPalRaidBossBattleFinishType EndType);
    void CountDown_Raid();
    void ExecuteUbergraph_WBP_BossBattle_BattleInfo(int32 EntryPoint);
}; // Size: 0x2C0

#endif
