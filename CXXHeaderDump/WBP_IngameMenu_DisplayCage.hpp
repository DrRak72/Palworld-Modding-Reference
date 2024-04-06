#ifndef UE4SS_SDK_WBP_IngameMenu_DisplayCage_HPP
#define UE4SS_SDK_WBP_IngameMenu_DisplayCage_HPP

class UWBP_IngameMenu_DisplayCage_C : public UPalUIPalBoxBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_BoxName;                                // 0x0450 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PageControle;                                 // 0x0458 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_BoxPalScrollList;                        // 0x0460 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_DisplayCharacterScrollList;              // 0x0468 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x0470 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;      // 0x0478 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_1;    // 0x0480 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_2;    // 0x0488 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_3;    // 0x0490 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_4;    // 0x0498 (size: 0x8)
    FDataTableRowHandle BoxNameMsgID;                                                 // 0x04A0 (size: 0x10)
    TArray<class UWBP_IngameMenu_PalBox_PageControl_C*> PalBoxPageControls;           // 0x04B0 (size: 0x10)
    int32 lastPalBoxPageNum;                                                          // 0x04C0 (size: 0x4)
    FName InputActionPrevBox;                                                         // 0x04C4 (size: 0x8)
    FName InputActionNextBox;                                                         // 0x04CC (size: 0x8)
    FName TabActionName;                                                              // 0x04D4 (size: 0x8)
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> PartyPalSlots;                 // 0x04E0 (size: 0x10)
    class UPalMapObjectDisplayCharacterModel* Model;                                  // 0x04F0 (size: 0x8)
    FPalUIActionBindData SendSlotInputHandle;                                         // 0x04F8 (size: 0x4)
    FPalUIActionBindData ViewDetailInputHandle;                                       // 0x04FC (size: 0x4)
    FPalDataTableRowName_UIInputAction SendSlotInput;                                 // 0x0500 (size: 0x8)
    FPalDataTableRowName_UIInputAction ViewDetailInput;                               // 0x0508 (size: 0x8)
    class UPalIndividualCharacterSlot* CachedLastHoveredSlot;                         // 0x0510 (size: 0x8)
    TEnumAsByte<EPalBoxHoveredSlotType::Type> hoverdSlotType;                         // 0x0518 (size: 0x1)

    void OnHoverPartyPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnSendSlotInput();
    void OnViewDetailInput();
    void UnregisterPalOperateInput();
    void RegisterPalOperateInput();
    void SelectSlot(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void OnClickSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnUnhoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnHoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void Set Current Pal Box Page Num(int32 PageNum);
    void Setup();
    void OnSetup();
    void OnUpdatePagePalBoxList(int32 nowPage, const TArray<class UPalIndividualCharacterSlot*>& slotList);
    void BndEvt__WBP_IngameMenu_PalBox_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_1_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_0_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_PalCondense_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_2_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void Destruct();
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_DisplayCharacterScrollList_K2Node_ComponentBoundEvent_3_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_DisplayCharacterScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_DisplayCharacterScrollList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_DisplayCharacterScrollList_K2Node_ComponentBoundEvent_6_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_BoxPalScrollList_K2Node_ComponentBoundEvent_7_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_DisplayCharacterScrollList_K2Node_ComponentBoundEvent_8_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void ExecuteUbergraph_WBP_IngameMenu_DisplayCage(int32 EntryPoint);
}; // Size: 0x519

#endif
