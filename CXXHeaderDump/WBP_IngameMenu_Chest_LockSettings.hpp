#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_LockSettings_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_LockSettings_HPP

class UWBP_IngameMenu_Chest_LockSettings_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCheckBox* CheckBox_80;                                                     // 0x0438 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x0440 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_1;                                    // 0x0448 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0450 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0458 (size: 0x8)
    class UPalMapObjectPasswordLockModule* PasswordLockModule;                        // 0x0460 (size: 0x8)
    FName TabActionName;                                                              // 0x0468 (size: 0x8)

    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_CommonButton_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_Menu_btn_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_LockSettings_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_Chest_LockSettings(int32 EntryPoint);
}; // Size: 0x470

#endif
