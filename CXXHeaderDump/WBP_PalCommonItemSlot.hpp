#ifndef UE4SS_SDK_WBP_PalCommonItemSlot_HPP
#define UE4SS_SDK_WBP_PalCommonItemSlot_HPP

class UWBP_PalCommonItemSlot_C : public UWBP_PalItemSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A0 (size: 0x8)
    class UImage* Background;                                                         // 0x04A8 (size: 0x8)
    class UImage* Background_circle_b;                                                // 0x04B0 (size: 0x8)
    class UImage* Background_Circle_f;                                                // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_135;                                  // 0x04C0 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x04C8 (size: 0x8)
    FWBP_PalCommonItemSlot_COnAfterSetEmpty OnAfterSetEmpty;                          // 0x04D0 (size: 0x10)
    void OnAfterSetEmpty();
    FWBP_PalCommonItemSlot_COnAfterUpdateSlot OnAfterUpdateSlot;                      // 0x04E0 (size: 0x10)
    void OnAfterUpdateSlot();

    void OnSetValidSlot_Binded();
    void OnSetEmpty_Binded();
    void OnUpdateSlot_Binded(class UPalItemSlot* targetSlot);
    void RegisterItemIconWidget(class UWBP_PalItemIconBase_C*& iconWidget);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonItemSlot(int32 EntryPoint);
    void OnAfterUpdateSlot__DelegateSignature();
    void OnAfterSetEmpty__DelegateSignature();
}; // Size: 0x4F0

#endif
