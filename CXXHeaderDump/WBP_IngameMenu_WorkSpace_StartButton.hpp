#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_StartButton_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_StartButton_HPP

class UWBP_IngameMenu_WorkSpace_StartButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocusToPush;                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_DisableToEnable;                                      // 0x0288 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0290 (size: 0x8)
    bool CurrentEnable;                                                               // 0x0298 (size: 0x1)
    FWBP_IngameMenu_WorkSpace_StartButton_COnClicked OnClicked;                       // 0x02A0 (size: 0x10)
    void OnClicked();

    void SetEnable(bool Enable);
    void BndEvt__WBP_IngameMenu_WorkSpace_StartButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace_StartButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x2B0

#endif
