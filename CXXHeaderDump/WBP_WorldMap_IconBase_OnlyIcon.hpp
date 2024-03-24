#ifndef UE4SS_SDK_WBP_WorldMap_IconBase_OnlyIcon_HPP
#define UE4SS_SDK_WBP_WorldMap_IconBase_OnlyIcon_HPP

class UWBP_WorldMap_IconBase_OnlyIcon_C : public UWBP_WorldMap_IconBase_NoDesign_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UWidgetAnimation* Focus;                                                    // 0x0460 (size: 0x8)
    class UImage* Image_130;                                                          // 0x0468 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0470 (size: 0x8)
    class UTexture2D* IconTexture;                                                    // 0x0478 (size: 0x8)

    void Setup_Internal(class UPalLocationPoint* LocationPoint);
    void ChangeTexture(class UTexture2D* NewTexture);
    void BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_WorldMap_IconBase_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_WorldMap_IconBase_OnlyIcon(int32 EntryPoint);
}; // Size: 0x480

#endif
