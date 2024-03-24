#ifndef UE4SS_SDK_WBP_IngameMenu_PalBox_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalBox_HPP

class UWBP_IngameMenu_PalBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_PalBox;                                                // 0x0290 (size: 0x8)
    class UCanvasPanel* Canvas_PalCamp;                                               // 0x0298 (size: 0x8)
    class UButton* CloseButton;                                                       // 0x02A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PageControle;                                 // 0x02A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BaseCampName;                                      // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BoxName;                                           // 0x02B8 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_BaseCampPalList;                         // 0x02C0 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_BoxPalScrollList;                        // 0x02C8 (size: 0x8)
    class UWBP_GuildHeadButton_C* WBP_BoxSortCombo;                                   // 0x02D0 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x02D8 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalList_C* WBP_IngameMenu_PalBox_PalList_0;          // 0x02E0 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalList_C* WBP_IngameMenu_PalBox_PalList_1;          // 0x02E8 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalList_C* WBP_IngameMenu_PalBox_PalList_2;          // 0x02F0 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalList_C* WBP_IngameMenu_PalBox_PalList_3;          // 0x02F8 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalList_C* WBP_IngameMenu_PalBox_PalList_4;          // 0x0300 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0308 (size: 0x8)
    TArray<class UWBP_IngameMenu_PalBox_PalList_C*> PartyPalDetails;                  // 0x0310 (size: 0x10)
    FWBP_IngameMenu_PalBox_COnClickedPartySlot OnClickedPartySlot;                    // 0x0320 (size: 0x10)
    void OnClickedPartySlot(class UPalIndividualCharacterSlot* targetSlot);
    TArray<class UWBP_IngameMenu_PalBox_PageControl_C*> PalBoxPageSelectImage;        // 0x0330 (size: 0x10)
    int32 lastPalBoxPageNum;                                                          // 0x0340 (size: 0x4)
    FWBP_IngameMenu_PalBox_COnClickedPalBoxPal OnClickedPalBoxPal;                    // 0x0348 (size: 0x10)
    void OnClickedPalBoxPal(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    FWBP_IngameMenu_PalBox_COnClickedBaseCampPal OnClickedBaseCampPal;                // 0x0358 (size: 0x10)
    void OnClickedBaseCampPal(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    FWBP_IngameMenu_PalBox_COnClickedPalBoxNextPage OnClickedPalBoxNextPage;          // 0x0368 (size: 0x10)
    void OnClickedPalBoxNextPage();
    FWBP_IngameMenu_PalBox_COnClickedPalBoxPrevPage OnClickedPalBoxPrevPage;          // 0x0378 (size: 0x10)
    void OnClickedPalBoxPrevPage();
    FWBP_IngameMenu_PalBox_COnClickedCloseButton OnClickedCloseButton;                // 0x0388 (size: 0x10)
    void OnClickedCloseButton();
    FWBP_IngameMenu_PalBox_COnAnySlotHovered OnAnySlotHovered;                        // 0x0398 (size: 0x10)
    void OnAnySlotHovered(class UPalIndividualCharacterSlot* Slot);
    FWBP_IngameMenu_PalBox_COnAnySlotUnhovered OnAnySlotUnhovered;                    // 0x03A8 (size: 0x10)
    void OnAnySlotUnhovered();
    FWBP_IngameMenu_PalBox_COnClickedLooseButton OnClickedLooseButton;                // 0x03B8 (size: 0x10)
    void OnClickedLooseButton();
    FWBP_IngameMenu_PalBox_COnHoveredPartySlot OnHoveredPartySlot;                    // 0x03C8 (size: 0x10)
    void OnHoveredPartySlot(class UPalIndividualCharacterSlot* Slot);
    FWBP_IngameMenu_PalBox_COnHoveredBoxSlot OnHoveredBoxSlot;                        // 0x03D8 (size: 0x10)
    void OnHoveredBoxSlot(class UPalIndividualCharacterSlot* Slot);
    FWBP_IngameMenu_PalBox_COnHoveredWorkerSlot OnHoveredWorkerSlot;                  // 0x03E8 (size: 0x10)
    void OnHoveredWorkerSlot(class UPalIndividualCharacterSlot* Slot);
    FDataTableRowHandle BoxNameMsgID;                                                 // 0x03F8 (size: 0x10)
    FWBP_IngameMenu_PalBox_COnRightClickedBoxSlot OnRightClickedBoxSlot;              // 0x0408 (size: 0x10)
    void OnRightClickedBoxSlot(class UPalIndividualCharacterSlot* Slot);
    FWBP_IngameMenu_PalBox_COnRightClickedWorkerSlot OnRightClickedWorkerSlot;        // 0x0418 (size: 0x10)
    void OnRightClickedWorkerSlot(class UPalIndividualCharacterSlot* Slot);
    TMap<class EPalCharacterContainerSortType, class FDataTableRowHandle> BoxSortTypeMsgIDMap; // 0x0428 (size: 0x50)
    TMap<class FString, class EPalCharacterContainerSortType> BoxSortTypeMap;         // 0x0478 (size: 0x50)
    TArray<FString> BoxSortTypeStringArray;                                           // 0x04C8 (size: 0x10)
    FWBP_IngameMenu_PalBox_COnSelectedSortType OnSelectedSortType;                    // 0x04D8 (size: 0x10)
    void OnSelectedSortType(EPalCharacterContainerSortType SortType);

    class UWidget* DoCustomNavigation(EUINavigation Navigation);
    class UWidget* CustomNavi_ToSortButton(EUINavigation Navigation);
    void FocusToWorkerTopSlot();
    void FocusToBoxTopSlot();
    void FocusToPartyTopSlot();
    void Display Pal Detail(class UPalIndividualCharacterSlot* Slot, TEnumAsByte<EPalBoxHoveredSlotType::Type> slotType);
    void SetCurrentPalBoxPageNum(int32 PageNum);
    void SetPalBoxList(TArray<class UPalIndividualCharacterSlot*>& targetSlots, int32 PageNum);
    void SetBaseCampPalList(TArray<class UPalIndividualCharacterSlot*>& Slots);
    void GetFocusTarget(class UWidget*& TargetWidget);
    void Setup Party Pal();
    void Setup();
    void AnmEvent_Open();
    void AnmEvent_Close();
    void OnInitialized();
    void OnClickedPartySlotInternal(class UPalIndividualCharacterSlot* targetSlot);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_0_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_3_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void OnHoveredPartySlot_Internal(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_8_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_4_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnUnhoveredPartySlot_Internal();
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_9_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BaseCampPalList_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_InGameMainMenu_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxSortCombo_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature(FString SelectedOption);
    void Construct();
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxSortCombo_K2Node_ComponentBoundEvent_12_OnOpenedDropDown__DelegateSignature();
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxSortCombo_K2Node_ComponentBoundEvent_13_OnRemovedFocus__DelegateSignature();
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxSortCombo_K2Node_ComponentBoundEvent_14_OnAddFocus__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_PalBox(int32 EntryPoint);
    void OnSelectedSortType__DelegateSignature(EPalCharacterContainerSortType SortType);
    void OnRightClickedWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnRightClickedBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnAnySlotUnhovered__DelegateSignature();
    void OnHoveredWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnHoveredBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnHoveredPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnClickedLooseButton__DelegateSignature();
    void OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnClickedCloseButton__DelegateSignature();
    void OnClickedPalBoxPrevPage__DelegateSignature();
    void OnClickedPalBoxNextPage__DelegateSignature();
    void OnClickedBaseCampPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void OnClickedPalBoxPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* targetSlot);
}; // Size: 0x4E8

#endif
