#ifndef UE4SS_SDK_WBP_ItemChest_HPP
#define UE4SS_SDK_WBP_ItemChest_HPP

class UWBP_ItemChest_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0438 (size: 0x8)
    class UWBP_IngameMenu_Chest_C* WBP_IngameMenu_Chest;                              // 0x0440 (size: 0x8)
    class UBP_PalInventoryModel_C* InventoryModel;                                    // 0x0448 (size: 0x8)
    FPalDataTableRowName_UIInputAction LeftFocusInput;                                // 0x0450 (size: 0x8)
    FPalDataTableRowName_UIInputAction RightFocusInput;                               // 0x0458 (size: 0x8)
    FPalDataTableRowName_UIInputAction FastGetInput;                                  // 0x0460 (size: 0x8)
    class UPalItemSlot* CachedLastFocusedInventorySlot;                               // 0x0468 (size: 0x8)
    class UPalItemSlot* CachedLastFocusedTargetContainerSlot;                         // 0x0470 (size: 0x8)
    FPalDataTableRowName_UIInputAction AllGetInput;                                   // 0x0478 (size: 0x8)
    TArray<EPalPlayerInventoryType> DisplayInventoryType;                             // 0x0480 (size: 0x10)
    FName TabActionName;                                                              // 0x0490 (size: 0x8)
    FPalDataTableRowName_UIInputAction RefillInput;                                   // 0x0498 (size: 0x8)
    FPalContainerId TargetContainerId;                                                // 0x04A0 (size: 0x10)
    FPalDataTableRowName_UIInputAction SortInput;                                     // 0x04B0 (size: 0x8)

    void Sort();
    void Refill();
    class UWidget* BP_GetDesiredFocusTarget();
    void AllGet();
    void FastMove();
    void Setup();
    void OnSetup();
    void Construct();
    void ChangeFocus_Inv_Pad();
    void ChangeFocus_Chest_Pad();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_3_OnClickedQuickMoveButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_8_OnClickedInventorySortButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_12_OnClickedTargetContainerSortButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_13_OnUnhoveredInventorySlot__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_15_OnUnhoveredTargetContainerSlot__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_16_OnClickedCloseButton__DelegateSignature();
    void ExecuteUbergraph_WBP_ItemChest(int32 EntryPoint);
}; // Size: 0x4B8

#endif
