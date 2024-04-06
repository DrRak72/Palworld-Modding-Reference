#ifndef UE4SS_SDK_WBP_IngameMenu_PalCondense_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalCondense_HPP

class UWBP_IngameMenu_PalCondense_C : public UPalUIPalBoxBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UWidgetAnimation* Anm_SelectFull;                                           // 0x0450 (size: 0x8)
    class UWidgetAnimation* Anm_SelectMaterialPal;                                    // 0x0458 (size: 0x8)
    class UWidgetAnimation* Anm_SelectMainPal;                                        // 0x0460 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_BoxName;                                // 0x0468 (size: 0x8)
    class UCanvasPanel* CanvasPanelGet;                                               // 0x0470 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PageControle;                                 // 0x0478 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PalWorkIcon;                                  // 0x0480 (size: 0x8)
    class UProgressBar* ProgressBar_Extract;                                          // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelValue;                                        // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalExtractNum;                                     // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RegisterPalNumValue;                               // 0x04A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_AftAtk;                                  // 0x04B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_AftDef;                                  // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_AftHp;                                   // 0x04C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_PreDef;                                  // 0x04C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_PrevAtk;                                 // 0x04D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNum_PrevHP;                                  // 0x04D8 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_BoxPalScrollList;                        // 0x04E0 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x04E8 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x04F0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Unique_C* WBP_MainMenu_Pal_Skill_Unique;            // 0x04F8 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_0;                // 0x0500 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_1;                // 0x0508 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_2;                // 0x0510 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_3;                // 0x0518 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0520 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0528 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;      // 0x0530 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_1;    // 0x0538 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_2;    // 0x0540 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_3;    // 0x0548 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_4;    // 0x0550 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_211;                            // 0x0558 (size: 0x8)
    FDataTableRowHandle BoxNameMsgID;                                                 // 0x0560 (size: 0x10)
    FDataTableRowHandle ConfirmMsgID;                                                 // 0x0570 (size: 0x10)
    FDataTableRowHandle SuccessMsgID;                                                 // 0x0580 (size: 0x10)
    class UPalUIPalCharacterRankUpModel* Model;                                       // 0x0590 (size: 0x8)
    TArray<class UWBP_IngameMenu_PalBox_PageControl_C*> PalBoxPageControls;           // 0x0598 (size: 0x10)
    int32 lastPalBoxPageNum;                                                          // 0x05A8 (size: 0x4)
    FName InputActionPrevBox;                                                         // 0x05AC (size: 0x8)
    FName InputActionNextBox;                                                         // 0x05B4 (size: 0x8)
    FName InputActionControllerInvokeName;                                            // 0x05BC (size: 0x8)
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> PartyPalSlots;                 // 0x05C8 (size: 0x10)
    TArray<class UWBP_MainMenu_PalRarityStar_C*> RarityStars;                         // 0x05D8 (size: 0x10)
    class UPalIndividualCharacterHandle* BasePalHandle;                               // 0x05E8 (size: 0x8)
    TMap<class UPalIndividualCharacterSlot*, class UWBP_PalCommonCharacterSlotButton_C*> CurrentPalBoxSlots; // 0x05F0 (size: 0x50)
    class UWBP_PalCommonCharacterSlotButton_C* BasePalSlot;                           // 0x0640 (size: 0x8)
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> CurrentConsumePalSlots;        // 0x0648 (size: 0x10)
    bool CanInvoke;                                                                   // 0x0658 (size: 0x1)
    TArray<class UPalIndividualCharacterSlot*> TempSlots;                             // 0x0660 (size: 0x10)
    FDataTableRowHandle HighRankMsgID;                                                // 0x0670 (size: 0x10)
    FDataTableRowHandle MaxRankMsgID;                                                 // 0x0680 (size: 0x10)
    int32 WarningLevel;                                                               // 0x0690 (size: 0x4)
    FDataTableRowHandle OverflowRankUpExpMsgID;                                       // 0x0698 (size: 0x10)

    void GetWarningLevel();
    void UpdateBaseCharacterSimulateStatus();
    void UpdateGauge();
    void UpdateSimulation();
    void OnClickSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void Cancel Condense();
    void GetConsumeablePal();
    void SetWorkSuitability(class UPalIndividualCharacterParameter* individualParam);
    void SetRank(int32 Rank, int32 ToRank);
    void SetBasePal(class UPalIndividualCharacterHandle* IndividualHandle);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnUnhoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnHoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void Set Current Pal Box Page Num(int32 PageNum);
    void Setup();
    void OnCancelAction();
    void OnSetup();
    void OnUpdatePagePalBoxList(int32 nowPage, const TArray<class UPalIndividualCharacterSlot*>& slotList);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_0_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void Destruct();
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_CommonButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void ReceiveConfirmInvokeRankup(bool IsConfirmed);
    void RankupSuccessed(int32 NewRank, int32 oldRank);
    void ConfirmSuccess(bool bResult);
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_Menu_btn_K2Node_ComponentBoundEvent_4_OnButtonClicked__DelegateSignature();
    void MaxRankConfirm(bool bResult);
    void ReceiveConfirmOverflowRankUpExp(bool bResult);
    void ActionInvokeRankUp();
    void ConfirmInvokeRankUp();
    void ExecuteUbergraph_WBP_IngameMenu_PalCondense(int32 EntryPoint);
}; // Size: 0x6A8

#endif
