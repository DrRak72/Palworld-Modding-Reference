#ifndef UE4SS_SDK_WBP_InventoryEquipment_StatusUpButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_StatusUpButton_HPP

class UWBP_InventoryEquipment_StatusUpButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_FocusLoop;                                            // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0288 (size: 0x8)
    class UImage* Base;                                                               // 0x0290 (size: 0x8)
    class UImage* BaseFrame;                                                          // 0x0298 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x02A0 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x02A8 (size: 0x8)
    class UImage* Dot_2;                                                              // 0x02B0 (size: 0x8)
    class UImage* Dot_3;                                                              // 0x02B8 (size: 0x8)
    class UImage* Focus;                                                              // 0x02C0 (size: 0x8)
    class UImage* FocusGrd;                                                           // 0x02C8 (size: 0x8)
    class UWBP_PalCommonNewMark_0_C* WBP_PalCommonNewMark_0;                          // 0x02D0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02D8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x02E0 (size: 0x8)
    FWBP_InventoryEquipment_StatusUpButton_COnClicked OnClicked;                      // 0x02E8 (size: 0x10)
    void OnClicked();
    bool IsAlreadyActive;                                                             // 0x02F8 (size: 0x1)

    void AnmEvent_Active();
    void AnmEvent_Deactive();
    void BndEvt__WBP_InventoryEquipment_StatusUpButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_InventoryEquipment_StatusUpButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x2F9

#endif
