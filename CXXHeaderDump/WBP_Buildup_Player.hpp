#ifndef UE4SS_SDK_WBP_Buildup_Player_HPP
#define UE4SS_SDK_WBP_Buildup_Player_HPP

class UWBP_Buildup_Player_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_RankUp;                                               // 0x0438 (size: 0x8)
    class UHorizontalBox* HorizontalBox_BuildupGauge;                                 // 0x0440 (size: 0x8)
    class UImage* StatusArrow;                                                        // 0x0448 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BuildupStoneNum;                                   // 0x0450 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Caution;                                           // 0x0458 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HaveNum;                                           // 0x0460 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Max;                                               // 0x0468 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNumAfter;                                    // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNumBefore;                                   // 0x0478 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x0480 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn_Close;                                        // 0x0488 (size: 0x8)
    TArray<class UWBP_Buildup_Gauge_C*> BuildupGauges;                                // 0x0490 (size: 0x10)
    int32 TargetRank;                                                                 // 0x04A0 (size: 0x4)
    bool IsBlock;                                                                     // 0x04A4 (size: 0x1)
    FDataTableRowHandle RankupMsgId;                                                  // 0x04A8 (size: 0x10)
    bool ResultSuccess;                                                               // 0x04B8 (size: 0x1)
    bool Replicate_Relic;                                                             // 0x04B9 (size: 0x1)
    bool Replicate_Status;                                                            // 0x04BA (size: 0x1)
    bool Requested;                                                                   // 0x04BB (size: 0x1)
    FName TabActionName;                                                              // 0x04BC (size: 0x8)

    class UWidget* BP_GetDesiredFocusTarget();
    void UpdateRequiredInfos();
    void OnSetup();
    void BndEvt__WBP_Buildup_Player_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnReceiveResult(EPalCharacterStatusOperationResult Result);
    void ConfirmRankup(bool Confirmed);
    void SynchroCheck();
    void Replicated_Relic();
    void Replicated_Status();
    void Destruct();
    void BndEvt__WBP_Buildup_Player_WBP_Menu_btn_Close_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Buildup_Player(int32 EntryPoint);
}; // Size: 0x4C4

#endif
