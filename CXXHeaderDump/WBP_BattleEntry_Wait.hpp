#ifndef UE4SS_SDK_WBP_BattleEntry_Wait_HPP
#define UE4SS_SDK_WBP_BattleEntry_Wait_HPP

class UWBP_BattleEntry_Wait_C : public UPalBossEntryWaitInfoHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_Info;                                   // 0x0428 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BaseCampName;                                      // 0x0430 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelValue;                                        // 0x0438 (size: 0x8)
    class UWBP_BossBattle_Timer_C* WBP_BossBattle_Timer;                              // 0x0440 (size: 0x8)
    FTimerHandle CurrentTimer;                                                        // 0x0448 (size: 0x8)
    FDataTableRowHandle WaitingMsgId;                                                 // 0x0450 (size: 0x10)
    FDataTableRowHandle EnterMsgId;                                                   // 0x0460 (size: 0x10)

    void OnRequestRemove();
    void UpdateCountDown();
    void Count Down();
    void OnSetup();
    void ExecuteUbergraph_WBP_BattleEntry_Wait(int32 EntryPoint);
}; // Size: 0x470

#endif
