#ifndef UE4SS_SDK_WBP_IngameMenu_RepairAll_HPP
#define UE4SS_SDK_WBP_IngameMenu_RepairAll_HPP

class UWBP_IngameMenu_RepairAll_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_852;                                                          // 0x0290 (size: 0x8)
    class UImage* MaterialBase;                                                       // 0x0298 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x02A0 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_1;                                    // 0x02A8 (size: 0x8)
    class UWrapBox* WrapBox_ItemInfo;                                                 // 0x02B0 (size: 0x8)
    class UWrapBox* WrapBox_ItemSlot;                                                 // 0x02B8 (size: 0x8)
    FWBP_IngameMenu_RepairAll_COnClickedButton OnClickedButton;                       // 0x02C0 (size: 0x10)
    void OnClickedButton(bool IsYes);

    void GetFocusTarget(class UWidget*& FocusTarget);
    void Setup(TArray<class UPalItemSlot*>& TargetItemSlots, TArray<FPalStaticItemIdAndNum>& RequireMaterials);
    void Destruct();
    void BndEvt__WBP_IngameMenu_RepairAll_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_RepairAll_WBP_CommonButton_1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_RepairAll(int32 EntryPoint);
    void OnClickedButton__DelegateSignature(bool IsYes);
}; // Size: 0x2D0

#endif
