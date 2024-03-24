#ifndef UE4SS_SDK_WBP_InventoryEquipment_TrashButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_TrashButton_HPP

class UWBP_InventoryEquipment_TrashButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_EnableToDisable;                                      // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0288 (size: 0x8)
    class UImage* Icon;                                                               // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x0298 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A0 (size: 0x8)
    FDataTableRowHandle MsgId;                                                        // 0x02A8 (size: 0x10)
    FWBP_InventoryEquipment_TrashButton_COnClicked OnClicked;                         // 0x02B8 (size: 0x10)
    void OnClicked();
    class UTexture2D* OverrideTexture;                                                // 0x02C8 (size: 0x8)
    bool IsItemDragging;                                                              // 0x02D0 (size: 0x1)

    void CheckDragging(bool& isDragging);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void SetEnableButton(bool isEnable);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_InventoryEquipment_TrashButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_TrashButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_TrashButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void OnUpdateEvent();
    void ExecuteUbergraph_WBP_InventoryEquipment_TrashButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x2D1

#endif
