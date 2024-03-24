#ifndef UE4SS_SDK_WBP_Map_IconCustom_HPP
#define UE4SS_SDK_WBP_Map_IconCustom_HPP

class UWBP_Map_IconCustom_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UImage* Icon;                                                               // 0x0460 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0468 (size: 0x8)

    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconCustom_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetTexture(class UTexture2D* Texture);
    void ExecuteUbergraph_WBP_Map_IconCustom(int32 EntryPoint);
}; // Size: 0x470

#endif
