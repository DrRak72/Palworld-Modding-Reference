#ifndef UE4SS_SDK_WBP_MapMarker_Content_HPP
#define UE4SS_SDK_WBP_MapMarker_Content_HPP

class UWBP_MapMarker_Content_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* FrameFlare;                                                         // 0x0280 (size: 0x8)
    class UImage* Icon;                                                               // 0x0288 (size: 0x8)
    class UCanvasPanel* Select;                                                       // 0x0290 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0298 (size: 0x8)
    int32 Index;                                                                      // 0x02A0 (size: 0x4)
    FWBP_MapMarker_Content_COnClicked OnClicked;                                      // 0x02A8 (size: 0x10)
    void OnClicked(int32 Index);

    void BndEvt__WBP_MapMarker_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MapMarker_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MapMarker_Content_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void SetIndex(int32 Index, class UTexture2D* Texture);
    void SetSelected(bool IsSelected);
    void SetUnhovered();
    void ExecuteUbergraph_WBP_MapMarker_Content(int32 EntryPoint);
    void OnClicked__DelegateSignature(int32 Index);
}; // Size: 0x2B8

#endif
