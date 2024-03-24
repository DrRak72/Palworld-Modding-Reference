#ifndef UE4SS_SDK_WBP_PalCommonCharacterSlot_HPP
#define UE4SS_SDK_WBP_PalCommonCharacterSlot_HPP

class UWBP_PalCommonCharacterSlot_C : public UWBP_PalCharacterSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0520 (size: 0x8)
    class UWidgetAnimation* Anm_SeedIcon;                                             // 0x0528 (size: 0x8)
    class UWidgetAnimation* Anm_LowHealthLoop;                                        // 0x0530 (size: 0x8)
    class UWidgetAnimation* Anm_SleepIcon;                                            // 0x0538 (size: 0x8)
    class UWidgetAnimation* Anm_MealIcon;                                             // 0x0540 (size: 0x8)
    class UWidgetAnimation* Anm_WorkIcon;                                             // 0x0548 (size: 0x8)
    class UImage* Background;                                                         // 0x0550 (size: 0x8)
    class UImage* Background_circle_b;                                                // 0x0558 (size: 0x8)
    class UImage* Image_64;                                                           // 0x0560 (size: 0x8)
    class UImage* Image_229;                                                          // 0x0568 (size: 0x8)
    class UImage* Image_IconPalWork;                                                  // 0x0570 (size: 0x8)
    class UImage* Image_Meal;                                                         // 0x0578 (size: 0x8)
    class UImage* Image_PalBattleImage;                                               // 0x0580 (size: 0x8)
    class UImage* Image_PalDying;                                                     // 0x0588 (size: 0x8)
    class UImage* Image_PalLowHealth;                                                 // 0x0590 (size: 0x8)
    class UImage* Image_PalSleep;                                                     // 0x0598 (size: 0x8)
    class UImage* Image_Rare;                                                         // 0x05A0 (size: 0x8)
    class UImage* Image_Strong;                                                       // 0x05A8 (size: 0x8)
    class UOverlay* Overlay_Revive;                                                   // 0x05B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HPPercent;                                         // 0x05B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ReviveTimer;                                       // 0x05C0 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x05C8 (size: 0x8)
    bool lastWorkDetail;                                                              // 0x05D0 (size: 0x1)
    bool isBattleModeDisplay;                                                         // 0x05D1 (size: 0x1)
    bool isLowHealthBlink;                                                            // 0x05D2 (size: 0x1)
    bool isDisplayHealthPercent;                                                      // 0x05D3 (size: 0x1)
    bool isDisplayRarity;                                                             // 0x05D4 (size: 0x1)
    double chachedLastHPPercent;                                                      // 0x05D8 (size: 0x8)

    void OnUpdateReviveTimer_Binded(double NowTimer);
    void On Set Rarity Binded(bool IsBoss, bool IsRare);
    void OnTargetCharacterEndEat();
    void OnTargetCharacterBeginEat();
    void OnTargetCharcaterEndSleep();
    void OnTargetCharcaterBeginSleep();
    void OnNotifyBattleModeChanged_Binded(bool IsBattleMode);
    void OnNotifyWorkDetail_Binded(bool IsWorking);
    void OnUpdateHP_Binded(int64 nowHP, int64 nowMaxHP);
    void RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C*& iconWidget);
    void OnUpdateSlot_Binded(class UPalIndividualCharacterSlot* targetSlot);
    void OnSetValidSlot_Binded();
    void OnSetEmpty_Binded();
    void AnmEvent_StartLowHealthLoop();
    void AnmEvent_StopLowHeathLoop();
    void AnmEvent_BeginSleep();
    void AnmEvent_EndSleep();
    void AnmEvent_StartWork();
    void AnmEvent_EndWork();
    void AnmEvent_BeginEat();
    void AnmEvent_EndEat();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonCharacterSlot(int32 EntryPoint);
}; // Size: 0x5E0

#endif
