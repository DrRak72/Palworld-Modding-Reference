#ifndef UE4SS_SDK_WBP_SelectItemInventory_HPP
#define UE4SS_SDK_WBP_SelectItemInventory_HPP

class UWBP_SelectItemInventory_C : public UPalUISelectItemInventoryBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCanvasPanel* Canvas_Inventory;                                             // 0x0438 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0440 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort_Inventory;           // 0x0448 (size: 0x8)
    class UWBP_PalPlayerInventoryScrollList_C* WBP_PalPlayerInventoryScrollList;      // 0x0450 (size: 0x8)
    class UWBP_PlayerInventoryWeightInfo_C* WBP_PlayerInventoryWeightInfo;            // 0x0458 (size: 0x8)
    bool isRequireSelectNum;                                                          // 0x0460 (size: 0x1)
    class UWBP_PalItemSlotButtonBase_C* selectedButton;                               // 0x0468 (size: 0x8)
    class UBP_PalInventoryModel_C* InventoryModel;                                    // 0x0470 (size: 0x8)
    FDataTableRowHandle BgMsgID;                                                      // 0x0478 (size: 0x10)

    class UWidget* BP_GetDesiredFocusTarget();
    void OnFocusedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void ComplateSelect(FPalItemSlotId SlotID, int32 selectNum);
    void OnComplateSelectNum(EPalUISelectNumResult resultType, int32 selectedNum);
    void DisplaySelectNumWidget();
    void OnLeftClicked(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnInitialized();
    void OnSetup();
    void BndEvt__WBP_SelectItemInventory_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_SelectItemInventory(int32 EntryPoint);
}; // Size: 0x488

#endif
