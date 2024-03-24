#ifndef UE4SS_SDK_WBP_PalCharacterScrollList_HPP
#define UE4SS_SDK_WBP_PalCharacterScrollList_HPP

class UWBP_PalCharacterScrollList_C : public UWBP_PalCommonScrollList_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    TSubclassOf<class UWBP_PalCharacterSlotButtonBase_C> slotWidgetClass;             // 0x0448 (size: 0x8)
    FWBP_PalCharacterScrollList_COnLeftClickedSlot OnLeftClickedSlot;                 // 0x0450 (size: 0x10)
    void OnLeftClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    FWBP_PalCharacterScrollList_COnRightClickedSlot OnRightClickedSlot;               // 0x0460 (size: 0x10)
    void OnRightClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterScrollList_COnHoveredSlot OnHoveredSlot;                         // 0x0470 (size: 0x10)
    void OnHoveredSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterScrollList_COnUnhoveredSlot OnUnhoveredSlot;                     // 0x0480 (size: 0x10)
    void OnUnhoveredSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterScrollList_COnFocusedSlot OnFocusedSlot;                         // 0x0490 (size: 0x10)
    void OnFocusedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterScrollList_COnUnfocusedSlot OnUnfocusedSlot;                     // 0x04A0 (size: 0x10)
    void OnUnfocusedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterScrollList_COnCreatedSlot OnCreatedSlot;                         // 0x04B0 (size: 0x10)
    void OnCreatedSlot(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    class UWBP_CharacterScrollListBlock_C* MyBlock;                                   // 0x04C0 (size: 0x8)

    void GetTopFocusTarget(class UWidget*& Widget);
    void Get All Children(TArray<class UWidget*>& widgets);
    void RemoveChild(class UWBP_PalCharacterSlotButtonBase_C* targetChild);
    void FocusPreviousButton(class UWBP_PalCharacterSlotButtonBase_C* rootSlotButton);
    void ClearAllChildren();
    void FocusToTopContent();
    void ChangeChildrenPadding(FVector2D Padding);
    void ClearInnnerChildren();
    void AddCharacterSlots(TArray<class UPalIndividualCharacterSlot*>& targetSlots);
    void OnUnfocused_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnFocused_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnUnhovered_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHovered_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void On Right Clicked Internal(class UWBP_PalCharacterSlotButtonBase_C* ButtonBase);
    void OnLeftClicked_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void AddSlotButtonToScrollList(class UWBP_PalCharacterSlotButtonBase_C* createdSlotButton);
    void BindButtonEvents(class UWBP_PalCharacterSlotButtonBase_C* createdSlotButton);
    void CreateSlotWidget(class UPalIndividualCharacterSlot* targetSlot, class UWBP_PalCharacterSlotButtonBase_C*& createdSlotButton);
    void AddCharacterSlot(class UPalIndividualCharacterSlot* targetSlot);
    void AddCharacterContainer(class UPalIndividualCharacterContainer* Container);
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCharacterScrollList(int32 EntryPoint);
    void OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void OnUnfocusedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnFocusedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
}; // Size: 0x4C8

#endif
