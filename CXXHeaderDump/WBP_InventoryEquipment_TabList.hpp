#ifndef UE4SS_SDK_WBP_InventoryEquipment_TabList_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_TabList_HPP

class UWBP_InventoryEquipment_TabList_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UCanvasPanel* Canvas_InventoryTab;                                          // 0x0468 (size: 0x8)
    class UCanvasPanel* Canvas_SortButton;                                            // 0x0470 (size: 0x8)
    class UHorizontalBox* HorizontalBox_1;                                            // 0x0478 (size: 0x8)
    class UImage* Image_368;                                                          // 0x0480 (size: 0x8)
    class UImage* TabIconBase;                                                        // 0x0488 (size: 0x8)
    class UWBP_InventoryEquipment_InventoryTabButton_C* WBP_InventoryEquipment_InventoryTabButton_Essential; // 0x0490 (size: 0x8)
    class UWBP_InventoryEquipment_InventoryTabButton_C* WBP_InventoryEquipment_InventoryTabButton_Inventory; // 0x0498 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort;                     // 0x04A0 (size: 0x8)
    FWBP_InventoryEquipment_TabList_COnClickedSortButton OnClickedSortButton;         // 0x04A8 (size: 0x10)
    void OnClickedSortButton();

    void OnChangedIndex_Binded(int32 OldIndex, int32 newIndex, class UWidget* FocusTargetWidget);
    void OnPrev_Binded(int32 OldIndex, int32 newIndex);
    void OnNext_Binded(int32 OldIndex, int32 newIndex);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void OnInitialized();
    void BndEvt__WBP_InventoryEquipment_TabList_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Essential_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button);
    void BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Inventory_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button);
    void ExecuteUbergraph_WBP_InventoryEquipment_TabList(int32 EntryPoint);
    void OnClickedSortButton__DelegateSignature();
}; // Size: 0x4B8

#endif
