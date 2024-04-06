#ifndef UE4SS_SDK_WBP_CommonButton_1_HPP
#define UE4SS_SDK_WBP_CommonButton_1_HPP

class UWBP_CommonButton_1_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_OpenFocus;                                            // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x0298 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A0 (size: 0x8)
    FWBP_CommonButton_1_COnClicked OnClicked;                                         // 0x02A8 (size: 0x10)
    void OnClicked();
    bool Is First Focus Target;                                                       // 0x02B8 (size: 0x1)
    FWBP_CommonButton_1_COnHovered OnHovered;                                         // 0x02C0 (size: 0x10)
    void OnHovered();
    FWBP_CommonButton_1_COnUnhovered OnUnhovered;                                     // 0x02D0 (size: 0x10)
    void OnUnhovered();
    FDataTableRowHandle InitializeMsgID;                                              // 0x02E0 (size: 0x10)
    bool OverrideHover;                                                               // 0x02F0 (size: 0x1)
    class UAkAudioEvent* WWiseHoverAudio;                                             // 0x02F8 (size: 0x8)
    class UAkAudioEvent* UnhoverAKAudioEvent;                                         // 0x0300 (size: 0x8)
    class UAkAudioEvent* ClickAKAudioEvent;                                           // 0x0308 (size: 0x8)

    void GetFocusTarget(class UWidget*& Widget);
    void Setup(bool isFirstFocusTarget);
    void SetText(FText Text);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void Construct();
    void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void ExecuteUbergraph_WBP_CommonButton_1(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature();
    void OnClicked__DelegateSignature();
}; // Size: 0x310

#endif
