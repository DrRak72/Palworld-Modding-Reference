#ifndef UE4SS_SDK_WBP_Control_Settings_HPP
#define UE4SS_SDK_WBP_Control_Settings_HPP

class UWBP_Control_Settings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UVerticalBox* VerticalBox_GP;                                               // 0x0280 (size: 0x8)
    class UVerticalBox* VerticalBox_KM;                                               // 0x0288 (size: 0x8)
    class UVerticalBox* VerticalBox_UI;                                               // 0x0290 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_AIM;                  // 0x0298 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Dash;                 // 0x02A0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_GP_AIM;               // 0x02A8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_GP_Dash;              // 0x02B0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_GP_ToggleLongPress;   // 0x02B8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_HideChat;             // 0x02C0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_LStick_Threshold;     // 0x02C8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_RStick_Sensitivity;   // 0x02D0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_RStick_Threshold;     // 0x02D8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_RStick_X;             // 0x02E0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_RStick_Y;             // 0x02E8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Sensitivity;          // 0x02F0 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_ToggleLongPress;      // 0x02F8 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_DamageScale;       // 0x0300 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_MaxDamageDisplayNum; // 0x0308 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_UI_TutorialDisplay;   // 0x0310 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Vibration;            // 0x0318 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_X;                    // 0x0320 (size: 0x8)
    class UWBP_OptionSettings_ListContent_C* WBP_OptionSettings_Y;                    // 0x0328 (size: 0x8)
    FPalOptionAudioSettings AudioSettingCache;                                        // 0x0330 (size: 0x1C)
    TArray<FDataTableRowHandle> LevelMsgIds;                                          // 0x0350 (size: 0x10)
    bool SomethingChanged;                                                            // 0x0360 (size: 0x1)
    FPalOptionKeyboardSettings KeyboardSettingCache;                                  // 0x0364 (size: 0x14)
    FPalOptionLocalStaticSettings LocalStaticSettingCache;                            // 0x0378 (size: 0x50)
    FPalOptionPadSettings PadSettingCache;                                            // 0x03C8 (size: 0x1C)
    TArray<class UVerticalBox*> VerticalBoxs;                                         // 0x03E8 (size: 0x10)
    TArray<class UWBP_PalCommonButtonBase_C*> FirstRows;                              // 0x03F8 (size: 0x10)
    int32 Current;                                                                    // 0x0408 (size: 0x4)
    FPalOptionUISettings UISettingCache;                                              // 0x040C (size: 0xC)

    void GetDesiredFocusTarget(class UWidget*& Target);
    void Construct();
    void ApplySettings();
    void SetDefault();
    void SwitchTab(bool Next);
    void SwitchPanel(int32 Index);
    void OnDashChanged(bool IsOn);
    void OnMouseSensiChanged(double Value);
    void OnMouseAIMChanged(double Value);
    void OnMouseYChanged(bool IsOn);
    void OnMouseXChanged(bool IsOn);
    void OnGPDashChanged(bool IsOn);
    void OnGPAimChanged(double Value);
    void OnRStickThreChanged(double Value);
    void OnLStickThreChanged(double Value);
    void OnRStickSensiChanged(double Value);
    void OnRStickYChanged(bool IsOn);
    void OnRStickXChanged(bool IsOn);
    void OnVibChanged(bool IsOn);
    void OnHideChatChanged(bool IsOn);
    void OnToggleLongPressChanged_GP(bool IsOn);
    void OnToggleLongPressChanged(bool IsOn);
    void OnChangedDamageTextScale(double Value);
    void OnTutorialDisplayChanged(bool IsOn);
    void OnChangedMaxDamageDisplayNum(double Value);
    void ExecuteUbergraph_WBP_Control_Settings(int32 EntryPoint);
}; // Size: 0x418

#endif
