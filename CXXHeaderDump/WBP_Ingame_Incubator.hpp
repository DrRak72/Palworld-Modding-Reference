#ifndef UE4SS_SDK_WBP_Ingame_Incubator_HPP
#define UE4SS_SDK_WBP_Ingame_Incubator_HPP

class UWBP_Ingame_Incubator_C : public UPalUIMapObjectStatusIndicatorBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UWidgetAnimation* Anm_DetailToSimple;                                       // 0x0410 (size: 0x8)
    class UWidgetAnimation* Anm_Buff_OnToOff;                                         // 0x0418 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_HatchState;                     // 0x0420 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour;                // 0x0428 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Hour_1;              // 0x0430 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute;              // 0x0438 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Minute_1;            // 0x0440 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second;              // 0x0448 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_RemainTime_Second_1;            // 0x0450 (size: 0x8)
    class UImage* CircleGauge_Progress;                                               // 0x0458 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RemainTime;                                   // 0x0460 (size: 0x8)
    class UOverlay* OverlayBuff;                                                      // 0x0468 (size: 0x8)
    class UOverlay* OverlayStatus;                                                    // 0x0470 (size: 0x8)
    class UImage* StatusBase;                                                         // 0x0478 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Buff_Value;                                        // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* Text_EggName;                                           // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Status;                                            // 0x0490 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x0498 (size: 0x8)
    class UWBP_RequirePalInfo_C* WBP_RequirePalInfo;                                  // 0x04A0 (size: 0x8)
    class UPalMapObjectHatchingEggModel* Model;                                       // 0x04A8 (size: 0x8)
    int32 LastNum;                                                                    // 0x04B0 (size: 0x4)
    FDataTableRowHandle UnusedMsgId;                                                  // 0x04B8 (size: 0x10)
    FDataTableRowHandle completeMsgID;                                                // 0x04C8 (size: 0x10)
    FTimerHandle DisplayCheckTimer;                                                   // 0x04D8 (size: 0x8)
    bool isDisplayedDetail;                                                           // 0x04E0 (size: 0x1)
    FName CachedItemId;                                                               // 0x04E4 (size: 0x8)
    TArray<FDataTableRowHandle> TemperatureMsgIds;                                    // 0x04F0 (size: 0x10)
    bool HasEgg;                                                                      // 0x0500 (size: 0x1)
    bool HasChara;                                                                    // 0x0501 (size: 0x1)
    bool LackPower;                                                                   // 0x0502 (size: 0x1)

    void UpdatePowerSuffcient(class UPalMapObjectEnergyModule* Module);
    void RatioToPersentOffsetText(double Ratio, FText& Persent);
    void UpdateEggDisplay();
    void Set Second(int32 RemainingSecond);
    void OnUpdateHatchTemperature(int32 TempDiff);
    void OnUpdateHatchedCharacter(class UPalMapObjectHatchingEggModel* Model);
    void OnUpdateItemContainer(class UPalItemContainer* Container);
    void On Update Work Amount(class UPalWorkProgress* WorkProgress);
    void OnSetup();
    void DisplayCheck();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_Ingame_Incubator(int32 EntryPoint);
}; // Size: 0x503

#endif
