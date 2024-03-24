#ifndef UE4SS_SDK_WBP_MainMenu_Tab_HPP
#define UE4SS_SDK_WBP_MainMenu_Tab_HPP

class UWBP_MainMenu_Tab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Open_normal;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Focus;                                                // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Open_focus;                                           // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Main;                                              // 0x02A0 (size: 0x8)
    class UWBP_MainMenu_NewDot_C* WBP_MainMenu_NewDot;                                // 0x02A8 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x02B0 (size: 0x8)
    class UWBP_PalCommonNewMark_0_C* WBP_PalCommonNewMark_0;                          // 0x02B8 (size: 0x8)
    FWBP_MainMenu_Tab_COnClicked OnClicked;                                           // 0x02C0 (size: 0x10)
    void OnClicked(class UWBP_MainMenu_Tab_C* selfWidget);
    TEnumAsByte<EPalUIInGameMainMenuTabType::Type> BindMainMenuType;                  // 0x02D0 (size: 0x1)
    TMap<TEnumAsByte<EPalUIInGameMainMenuTabType::Type>, FDataTableRowHandle> MsgIDMap; // 0x02D8 (size: 0x50)

    void SetEnableAttentionDot(bool isEnable);
    void AnmEvent_FirstOpen(bool isFocused);
    void AnmEvent_FocusToNormal();
    void AnmEvent_NormalToFocus();
    void OnInitialized();
    void BndEvt__WBP_MainMenu_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_MainMenu_Tab(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_MainMenu_Tab_C* selfWidget);
}; // Size: 0x328

#endif
