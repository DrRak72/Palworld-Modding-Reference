#ifndef UE4SS_SDK_WBP_PalPlayerInventoryScrollList_HPP
#define UE4SS_SDK_WBP_PalPlayerInventoryScrollList_HPP

class UWBP_PalPlayerInventoryScrollList_C : public UWBP_PalItemScrollList_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0500 (size: 0x8)
    class UPalUIInventoryModel* Model;                                                // 0x0508 (size: 0x8)
    TMap<class EPalPlayerInventoryType, class UWBP_PalItemListBlock_C*> CategoryBlockMap; // 0x0510 (size: 0x50)
    TArray<EPalPlayerInventoryType> InventoryTypeArray;                               // 0x0560 (size: 0x10)
    FWBP_PalPlayerInventoryScrollList_COnRequestOpenUseItemPanel OnRequestOpenUseItemPanel; // 0x0570 (size: 0x10)
    void OnRequestOpenUseItemPanel(class UPalItemSlot* SelectedSlot);
    bool CanUseSlot;                                                                  // 0x0580 (size: 0x1)
    FPalDataTableRowName_UIInputAction Handle;                                        // 0x0584 (size: 0x8)
    bool CanQuickEquip;                                                               // 0x058C (size: 0x1)
    bool ShowPrice;                                                                   // 0x058D (size: 0x1)

    void Open Use Item Panel(class UWBP_PalItemSlotButtonBase_C* Button);
    void ScrollToCategoryTop(EPalPlayerInventoryType targetType, class UWidget*& TopFocusTarget);
    void Add Player Inventory Block(EPalPlayerInventoryType inventoryType, class UWBP_PalItemListBlock_C*& createdBlock);
    void ClearFiltering();
    void FilteringFromInventoryType(TArray<EPalPlayerInventoryType>& displayTypes, bool& IsEmptyDisplaySlot);
    void FilteringFromItemTypeB(TArray<EPalItemTypeB>& displayTypesB, bool isEmptySlotDIsplay);
    void FilteringFromItemTypeA(TArray<EPalItemTypeA>& displayTypesA, bool isEmptySlotDIsplay);
    void OnLeftCllicked(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void Setup(class UPalUIInventoryModel* useModel);
    void Construct();
    void ExecuteUbergraph_WBP_PalPlayerInventoryScrollList(int32 EntryPoint);
    void OnRequestOpenUseItemPanel__DelegateSignature(class UPalItemSlot* SelectedSlot);
}; // Size: 0x58E

#endif
