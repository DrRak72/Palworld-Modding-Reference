#ifndef UE4SS_SDK_WBP_Shop_SellListContent_HPP
#define UE4SS_SDK_WBP_Shop_SellListContent_HPP

class UWBP_Shop_SellListContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Icon_Target;                                                        // 0x0280 (size: 0x8)
    class UImage* IconMoney;                                                          // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ItemHaveNum;                                       // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Price;                                             // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_TargetName;                                        // 0x02A0 (size: 0x8)
    class UPalItemSlot* MyTargetItemSlot;                                             // 0x02A8 (size: 0x8)
    FWBP_Shop_SellListContent_COnUpdatedItemSlot OnUpdatedItemSlot;                   // 0x02B0 (size: 0x10)
    void OnUpdatedItemSlot(class UPalItemSlot* Slot);
    class UPalIndividualCharacterSlot* MyTargetCharacterSlot;                         // 0x02C0 (size: 0x8)
    FWBP_Shop_SellListContent_COnUpdatedCharacterSlot OnUpdatedCharacterSlot;         // 0x02C8 (size: 0x10)
    void OnUpdatedCharacterSlot(class UPalIndividualCharacterSlot* Slot);

    void BindCharacterSlotEvent();
    void OnUpdateCharacterSlot_Internal(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void UnbindCharacterSlotEvent();
    void SetupByCharacterSlot(class UPalIndividualCharacterSlot* CharacterSlot);
    void OnUpdateItemSlot_Internal(class UPalItemSlot* Slot);
    void BindItemSlotEvent();
    void UnbindItemSlotEvent();
    void SetupBySlot(class UPalItemSlot* TargetItemSlot);
    void Destruct();
    void ExecuteUbergraph_WBP_Shop_SellListContent(int32 EntryPoint);
    void OnUpdatedCharacterSlot__DelegateSignature(class UPalIndividualCharacterSlot* Slot);
    void OnUpdatedItemSlot__DelegateSignature(class UPalItemSlot* Slot);
}; // Size: 0x2D8

#endif
