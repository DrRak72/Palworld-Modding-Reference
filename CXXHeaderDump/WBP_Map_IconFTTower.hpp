#ifndef UE4SS_SDK_WBP_Map_IconFTTower_HPP
#define UE4SS_SDK_WBP_Map_IconFTTower_HPP

class UWBP_Map_IconFTTower_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UImage* Icon;                                                               // 0x0460 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x0468 (size: 0x8)
    bool IsEnabled;                                                                   // 0x0470 (size: 0x1)
    FName Fast Travel Point ID;                                                       // 0x0474 (size: 0x8)

    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void ClickEvent();
    void SetEnable(bool Enable);
    void BndEvt__WBP_Map_IconFTTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconFTTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Map_IconFTTower_WBP_PalCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Map_IconFTTower(int32 EntryPoint);
}; // Size: 0x47C

#endif
