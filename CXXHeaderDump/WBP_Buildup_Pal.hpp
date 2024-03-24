#ifndef UE4SS_SDK_WBP_Buildup_Pal_HPP
#define UE4SS_SDK_WBP_Buildup_Pal_HPP

class UWBP_Buildup_Pal_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Tab;                                          // 0x0438 (size: 0x8)
    class UImage* Select;                                                             // 0x0440 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item;                              // 0x0448 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_1;                            // 0x0450 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_2;                            // 0x0458 (size: 0x8)
    class UWBP_Buildup_Pal_Status_C* WBP_Buildup_Pal_Status;                          // 0x0460 (size: 0x8)
    class UWBP_Buildup_TabButton_C* WBP_Buildup_TabButton_Reset;                      // 0x0468 (size: 0x8)
    class UWBP_Buildup_TabButton_C* WBP_Buildup_TabButton_Upgrade;                    // 0x0470 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x0478 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0480 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList;                                      // 0x0488 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_1;                                    // 0x0490 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_2;                                    // 0x0498 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_3;                                    // 0x04A0 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_4;                                    // 0x04A8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon_1;                              // 0x04B0 (size: 0x8)
    TArray<class UWBP_Menu_PalList_C*> PalList;                                       // 0x04B8 (size: 0x10)
    TArray<class UWBP_Buildup_Pal_Item_C*> UpgradeItems;                              // 0x04C8 (size: 0x10)
    TArray<FName> UpgradeItemIds;                                                     // 0x04D8 (size: 0x10)
    FDataTableRowHandle PreTabMsgId;                                                  // 0x04E8 (size: 0x10)
    FDataTableRowHandle NextTabMsgId;                                                 // 0x04F8 (size: 0x10)
    class UPalIndividualCharacterHandle* CurrentHandle;                               // 0x0508 (size: 0x8)
    bool PinDetail;                                                                   // 0x0510 (size: 0x1)
    bool Hovering;                                                                    // 0x0511 (size: 0x1)
    int32 CurrentTab;                                                                 // 0x0514 (size: 0x4)
    bool ResultSuccess;                                                               // 0x0518 (size: 0x1)
    bool Replicate_Status;                                                            // 0x0519 (size: 0x1)
    bool Requested;                                                                   // 0x051A (size: 0x1)
    FTimerHandle ItemUpdateTimer;                                                     // 0x0520 (size: 0x8)
    FName TabActionName;                                                              // 0x0528 (size: 0x8)

    void UpdateItemInfo();
    class UWidget* BP_GetDesiredFocusTarget();
    void ReciveResult(EPalCharacterStatusOperationResult Result);
    void Refresh Info();
    void InvokeReset();
    void InvokeRankUp(EPalCharacterStatusOperationName Status, int32 TargetRank);
    void CloseAction();
    void OnClickPalList(class UPalIndividualCharacterHandle* Handle);
    void OnUnhoverPalList();
    void OnHoverPalList(class UPalIndividualCharacterHandle* Handle);
    void Setup();
    void OnSetup();
    void Destruct();
    void SwitchUpgrade();
    void SwitchReset();
    void SwitchTab(int32 Tab);
    void SynchroCheck();
    void Replicated_Status();
    void BndEvt__WBP_Buildup_Pal_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Buildup_Pal(int32 EntryPoint);
}; // Size: 0x530

#endif
