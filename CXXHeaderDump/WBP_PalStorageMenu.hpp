#ifndef UE4SS_SDK_WBP_PalStorageMenu_HPP
#define UE4SS_SDK_WBP_PalStorageMenu_HPP

class UWBP_PalStorageMenu_C : public UPalUIPalBoxBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0450 (size: 0x8)
    class UWBP_IngameMenu_PalBox_C* WBP_IngameMenu_PalBox;                            // 0x0458 (size: 0x8)
    class UBP_UIPalStorageManageModel_C* Model;                                       // 0x0460 (size: 0x8)
    FPalDataTableRowName_UIInputAction nextBoxInput;                                  // 0x0468 (size: 0x8)
    FPalDataTableRowName_UIInputAction prevBoxInput;                                  // 0x0470 (size: 0x8)
    FDataTableRowHandle TitleMsgID;                                                   // 0x0478 (size: 0x10)
    FDataTableRowHandle loosePalCheckMsgId;                                           // 0x0488 (size: 0x10)
    TSoftObjectPtr<UPalIndividualCharacterSlot> CachedLooseSlot;                      // 0x0498 (size: 0x30)
    TEnumAsByte<EPalBoxHoveredSlotType::Type> hoverdSlotType;                         // 0x04C8 (size: 0x1)
    FPalDataTableRowName_UIInputAction prevCursorShortcutInput;                       // 0x04CC (size: 0x8)
    FPalDataTableRowName_UIInputAction nextCursorShortcutInput;                       // 0x04D4 (size: 0x8)
    FPalDataTableRowName_UIInputAction SendSlotInput;                                 // 0x04DC (size: 0x8)
    FPalUIActionBindData SendSlotInputHandle;                                         // 0x04E4 (size: 0x4)
    FPalUIActionBindData ViewDetailInputHandle;                                       // 0x04E8 (size: 0x4)
    class UPalIndividualCharacterSlot* CachedLastHoveredSlot;                         // 0x04F0 (size: 0x8)
    FName TabActionName;                                                              // 0x04F8 (size: 0x8)
    FPalDataTableRowName_UIInputAction ViewDetailInput;                               // 0x0500 (size: 0x8)

    void SelectSlot(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void OnViewDetailInput();
    void OnSendSlotInput();
    void UnregisterPalOperateInput();
    void RegisterPalOperateInput();
    void OnCursorShortcutNext();
    void OnCursorShortcutPrev();
    class UWidget* BP_GetDesiredFocusTarget();
    void RegisterStaticActionInput();
    void OnRecieveLostDialogResponse(bool bResult);
    void CheckLoosePal(class UPalIndividualCharacterSlot* Slot);
    void Setup();
    void OnSetup();
    void OnUpdatePageWorkerList(const TArray<class UPalIndividualCharacterSlot*>& slotList);
    void OnUpdatePagePalBoxList(int32 nowPage, const TArray<class UPalIndividualCharacterSlot*>& slotList);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_4_OnClickedPalBoxPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_5_OnClickedPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* targetSlot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_7_OnClickedBaseCampPal__DelegateSignature(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_6_OnClickedPalBoxNextPage__DelegateSignature();
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_8_OnClickedPalBoxPrevPage__DelegateSignature();
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_9_OnClickedCloseButton__DelegateSignature();
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_10_OnAnySlotHovered__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_11_OnClickedLooseButton__DelegateSignature();
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_0_OnHoveredPartySlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_1_OnHoveredBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_2_OnHoveredWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_3_OnAnySlotUnhovered__DelegateSignature();
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_12_OnRightClickedBoxSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_13_OnRightClickedWorkerSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void BndEvt__WBP_PalStorageMenu_WBP_IngameMenu_PalBox_K2Node_ComponentBoundEvent_14_OnSelectedSortType__DelegateSignature(EPalCharacterContainerSortType SortType);
    void ExecuteUbergraph_WBP_PalStorageMenu(int32 EntryPoint);
}; // Size: 0x508

#endif
