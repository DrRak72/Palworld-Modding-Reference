#ifndef UE4SS_SDK_WBP_InventoryEquipment_InventoryTabButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_InventoryTabButton_HPP

class UWBP_InventoryEquipment_InventoryTabButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* TabBase;                                                            // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x0290 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0298 (size: 0x8)
    FDataTableRowHandle MsgId;                                                        // 0x02A0 (size: 0x10)
    TArray<EPalPlayerInventoryType> BindedInventoryType;                              // 0x02B0 (size: 0x10)
    FWBP_InventoryEquipment_InventoryTabButton_COnClicked OnClicked;                  // 0x02C0 (size: 0x10)
    void OnClicked(class UWBP_InventoryEquipment_InventoryTabButton_C* Button);

    void AnmEvent_Normal();
    void AnmEvent_Focus();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_InventoryEquipment_InventoryTabButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_InventoryEquipment_InventoryTabButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button);
}; // Size: 0x2D0

#endif
