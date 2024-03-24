#ifndef UE4SS_SDK_WBP_Main_Menu_Tab_Key_HPP
#define UE4SS_SDK_WBP_Main_Menu_Tab_Key_HPP

class UWBP_Main_Menu_Tab_Key_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Push;                                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x0290 (size: 0x8)
    class UImage* Image;                                                              // 0x0298 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x02A8 (size: 0x8)
    FWBP_Main_Menu_Tab_Key_COnClicked OnClicked;                                      // 0x02B0 (size: 0x10)
    void OnClicked();
    FPalDataTableRowName_UIInputAction bindActionName;                                // 0x02C0 (size: 0x8)

    void AnmEvent_Focus();
    void AnmEvent_Unfocus();
    void AnmEvent_Push();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Main_Menu_Tab_Key_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Main_Menu_Tab_Key(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x2C8

#endif
