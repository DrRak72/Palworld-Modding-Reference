#ifndef UE4SS_SDK_WBP_PalItemScrollList_HPP
#define UE4SS_SDK_WBP_PalItemScrollList_HPP

class UWBP_PalItemScrollList_C : public UWBP_PalCommonScrollList_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    FWBP_PalItemScrollList_COnLeftClickedSlot OnLeftClickedSlot;                      // 0x0448 (size: 0x10)
    void OnLeftClickedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    FWBP_PalItemScrollList_COnMiddleClickedSlot OnMiddleClickedSlot;                  // 0x0458 (size: 0x10)
    void OnMiddleClickedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemScrollList_COnRightClickedSlot OnRightClickedSlot;                    // 0x0468 (size: 0x10)
    void OnRightClickedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    FWBP_PalItemScrollList_COnHoveredSlot OnHoveredSlot;                              // 0x0478 (size: 0x10)
    void OnHoveredSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemScrollList_COnEndHoveredSlot OnEndHoveredSlot;                        // 0x0488 (size: 0x10)
    void OnEndHoveredSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemScrollList_COnFocusedSlot OnFocusedSlot;                              // 0x0498 (size: 0x10)
    void OnFocusedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    FWBP_PalItemScrollList_COnUnfocusedSlot OnUnfocusedSlot;                          // 0x04A8 (size: 0x10)
    void OnUnfocusedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    TSubclassOf<class UWBP_PalItemListBlock_C> BlockClass;                            // 0x04B8 (size: 0x8)
    FWBP_PalItemScrollList_COnDragDetectedSlot OnDragDetectedSlot;                    // 0x04C0 (size: 0x10)
    void OnDragDetectedSlot(class UWBP_PalItemSlotButtonBase_C* Widget);
    bool IsDisplayItemInfo;                                                           // 0x04D0 (size: 0x1)
    bool IsEnableQuickMoveSlot;                                                       // 0x04D1 (size: 0x1)
    class UWBP_PalItemSlotButtonBase_C* CachedLastHoveredSlotButton;                  // 0x04D8 (size: 0x8)
    class UWBP_PalItemSlotButtonBase_C* CachedNowHoveringSlotButton;                  // 0x04E0 (size: 0x8)
    class UPalItemContainer* QuickMoveTargetContainer;                                // 0x04E8 (size: 0x8)
    FWBP_PalItemScrollList_COnRequestUseItem OnRequestUseItem;                        // 0x04F0 (size: 0x10)
    void OnRequestUseItem(class UWBP_PalItemSlotButtonBase_C* Button);

    void GetAllItemSlotButton(TArray<class UWBP_PalItemSlotButtonBase_C*>& Slots);
    void SetQuickMoveTargetContainer(class UPalItemContainer* TargetContainer);
    void GetLastHoveredSlotButton(class UWBP_PalItemSlotButtonBase_C*& SlotButton);
    void ClearAllChildren();
    void OnDragDetected_Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnRequestUseItem_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void FilteringBySellableItemDataMap(TMap<FName, double> SellableItemDataMap);
    void HiddenEmptySlot();
    void GetFocusTarget(class UWidget*& Target);
    void CreateEmptyBlock(class UWBP_PalItemListBlock_C*& createdBlock);
    void OnUnfocused_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnFocused_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void InitializeArrowVisibility();
    void Focus();
    void OnEndHovered_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnHovered_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnRightClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnMiddleClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnLeftClicked_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void CreateBlock(class UPalItemContainer* TargetContainer, FText DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C*& createdBlock);
    void AddItemContainer(class UPalItemContainer* TargetContainer, FText DisplayName, bool IgnoreEmptySlot, class UWBP_PalItemListBlock_C*& createdBlock);
    void Construct();
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_PalItemScrollList(int32 EntryPoint);
    void OnRequestUseItem__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Button);
    void OnMiddleClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnDragDetectedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget);
    void OnUnfocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnFocusedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void OnRightClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
}; // Size: 0x500

#endif
