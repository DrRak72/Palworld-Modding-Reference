#ifndef UE4SS_SDK_WBP_EquipmentSelectListBlock_HPP
#define UE4SS_SDK_WBP_EquipmentSelectListBlock_HPP

class UWBP_EquipmentSelectListBlock_C : public UWBP_PalItemListBlock_C
{

    void GetAllItemSlotButtons(TArray<class UWBP_PalItemSlotButtonBase_C*>& slotButtons);
    void GetFocusTarget(class UWidget*& NewParam);
    void EditCreatedSlotWidget(class UWBP_PalItemSlotButtonBase_C* createdSlotWidget, class UWidget*& editedWidget);
}; // Size: 0x4D0

#endif
