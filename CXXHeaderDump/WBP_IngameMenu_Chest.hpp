#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_HPP

class UWBP_IngameMenu_Chest_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_Inventory;                                             // 0x0280 (size: 0x8)
    class UCanvasPanel* Canvas_TargetContainer;                                       // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TargetContainerName;                               // 0x0290 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0298 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_QuickMove;                // 0x02A0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort_Inventory;           // 0x02A8 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort_TargetContainer;     // 0x02B0 (size: 0x8)
    class UWBP_PalItemScrollList_C* WBP_PalItemScrollList;                            // 0x02B8 (size: 0x8)
    class UWBP_PalPlayerInventoryScrollList_C* WBP_PalPlayerInventoryScrollList;      // 0x02C0 (size: 0x8)
    class UWBP_PlayerInventoryWeightInfo_C* WBP_PlayerInventoryWeightInfo;            // 0x02C8 (size: 0x8)
    class UBP_PalInventoryModel_C* Model;                                             // 0x02D0 (size: 0x8)
    FWBP_IngameMenu_Chest_COnClickedInventorySortButton OnClickedInventorySortButton; // 0x02D8 (size: 0x10)
    void OnClickedInventorySortButton();
    FWBP_IngameMenu_Chest_COnClickedQuickMoveButton OnClickedQuickMoveButton;         // 0x02E8 (size: 0x10)
    void OnClickedQuickMoveButton();
    FWBP_IngameMenu_Chest_COnClickedTargetContainerSortButton OnClickedTargetContainerSortButton; // 0x02F8 (size: 0x10)
    void OnClickedTargetContainerSortButton();
    FWBP_IngameMenu_Chest_COnHoveredInventorySlot OnHoveredInventorySlot;             // 0x0308 (size: 0x10)
    void OnHoveredInventorySlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    FWBP_IngameMenu_Chest_COnUnhoveredInventorySlot OnUnhoveredInventorySlot;         // 0x0318 (size: 0x10)
    void OnUnhoveredInventorySlot();
    FWBP_IngameMenu_Chest_COnHoveredTargetContainerSlot OnHoveredTargetContainerSlot; // 0x0328 (size: 0x10)
    void OnHoveredTargetContainerSlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    FWBP_IngameMenu_Chest_COnUnhoveredTargetContainerSlot OnUnhoveredTargetContainerSlot; // 0x0338 (size: 0x10)
    void OnUnhoveredTargetContainerSlot();
    FWBP_IngameMenu_Chest_COnClickedCloseButton OnClickedCloseButton;                 // 0x0348 (size: 0x10)
    void OnClickedCloseButton();
    FWBP_IngameMenu_Chest_COnClickedPreferenceButton OnClickedPreferenceButton;       // 0x0358 (size: 0x10)
    void OnClickedPreferenceButton();

    class UWidget* CustomNavi_ToPreferenceOrCloseButton(EUINavigation Navigation);
    void GetTargetContainerLastHoveredFocusTarget(class UWidget*& Widget);
    void GetInventoryLastHoveredFocusTarget(class UWidget*& Widget);
    class UWidget* CustomNavi_ToTargetContainerSortButton(EUINavigation Navigation);
    class UWidget* CustomNavi_ToCloseButton(EUINavigation Navigation);
    void GetTargetContainerTopFocustTarget(class UWidget*& FocusTarget);
    void GetInventoryTopFocustTarget(class UWidget*& FocusTarget);
    void OnLeftClickedTargetContainerSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void Setup(class UBP_PalInventoryModel_C* Model, class UPalItemContainer* TargetContainer);
    void SetTagetContainerDisplayName(FText TargetContainerName);
    void SetupTargetItemContainer(class UPalItemContainer* TargetContainer);
    void FilteringInventoryByInventoryType(TArray<EPalPlayerInventoryType>& inventoryType);
    void SetupInventory();
    void Construct();
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_QuickMove_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_5_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_3_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_6_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Chest(int32 EntryPoint);
    void OnClickedPreferenceButton__DelegateSignature();
    void OnClickedCloseButton__DelegateSignature();
    void OnUnhoveredTargetContainerSlot__DelegateSignature();
    void OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void OnUnhoveredInventorySlot__DelegateSignature();
    void OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void OnClickedTargetContainerSortButton__DelegateSignature();
    void OnClickedQuickMoveButton__DelegateSignature();
    void OnClickedInventorySortButton__DelegateSignature();
}; // Size: 0x368

#endif
