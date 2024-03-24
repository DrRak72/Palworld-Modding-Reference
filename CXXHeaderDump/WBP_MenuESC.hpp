#ifndef UE4SS_SDK_WBP_MenuESC_HPP
#define UE4SS_SDK_WBP_MenuESC_HPP

class UWBP_MenuESC_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_Clipboard_InToOut;                                    // 0x0438 (size: 0x8)
    class UWidgetAnimation* Anm_Copy_NormalToFocus;                                   // 0x0440 (size: 0x8)
    class UCheckBox* AimAssistKeyboard_CheckBox;                                      // 0x0448 (size: 0x8)
    class UCheckBox* AimAssistPad_CheckBox;                                           // 0x0450 (size: 0x8)
    class UCheckBox* bActiveUNKO_CheckBox;                                            // 0x0458 (size: 0x8)
    class UCheckBox* bEnableFriendlyFire_CheckBox;                                    // 0x0460 (size: 0x8)
    class UCheckBox* bEnableInvaderEnemy_CheckBox;                                    // 0x0468 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_MultiTips;                      // 0x0470 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_JitterNum;                               // 0x0478 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_JoinNum;                                 // 0x0480 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_PacketlossNum;                           // 0x0488 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_RTTNum;                                  // 0x0490 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_ServerFPSNum;                            // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_WorldExplain;                            // 0x04A0 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_WorldName;                               // 0x04A8 (size: 0x8)
    class USpinBox* BuildObjectDamageRate_SpinBox;                                    // 0x04B0 (size: 0x8)
    class UCanvasPanel* Canvas_Buttons;                                               // 0x04B8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_MultiTips;                                        // 0x04C0 (size: 0x8)
    class USpinBox* CollectionDropRate_SpinBox;                                       // 0x04C8 (size: 0x8)
    class USpinBox* CollectionObjectHpRate_SpinBox;                                   // 0x04D0 (size: 0x8)
    class USpinBox* CollectionObjectRespawnSpeedRate;                                 // 0x04D8 (size: 0x8)
    class USpinBox* DayTimeSpeedRateValue_SpinBox;                                    // 0x04E0 (size: 0x8)
    class UComboBoxString* DeathPenalty_ComboBox;                                     // 0x04E8 (size: 0x8)
    class UComboBoxString* Difficulty_ComboBox;                                       // 0x04F0 (size: 0x8)
    class USpinBox* DropItemMaxNum_SpinBox;                                           // 0x04F8 (size: 0x8)
    class USpinBox* DropItemMaxNum_UNKO_SpinBox;                                      // 0x0500 (size: 0x8)
    class USpinBox* EnemyDropItemRate_SpinBox;                                        // 0x0508 (size: 0x8)
    class USpinBox* ExpRate_SpinBox;                                                  // 0x0510 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Jitter;                                       // 0x0518 (size: 0x8)
    class UHorizontalBox* HorizontalBox_JoinNum;                                      // 0x0520 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PacketLoss;                                   // 0x0528 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RTT;                                          // 0x0530 (size: 0x8)
    class UHorizontalBox* HorizontalBox_ServerFPS;                                    // 0x0538 (size: 0x8)
    class UImage* IconShowHide;                                                       // 0x0540 (size: 0x8)
    class UImage* Image_115;                                                          // 0x0548 (size: 0x8)
    class UImage* Image_CautionBase;                                                  // 0x0550 (size: 0x8)
    class UHorizontalBox* InviteCode_HorizontalBox;                                   // 0x0558 (size: 0x8)
    class USpinBox* NightTimeSpeedRate_SpinBox;                                       // 0x0560 (size: 0x8)
    class UOverlay* Overlay_WorldExplain;                                             // 0x0568 (size: 0x8)
    class USpinBox* PalAutoHPRegeneRate_SpinBox;                                      // 0x0570 (size: 0x8)
    class USpinBox* PalAutoHpRegeneRateInSleep_SpinBOx;                               // 0x0578 (size: 0x8)
    class USpinBox* PalCaptureRateAdd_SpinBox;                                        // 0x0580 (size: 0x8)
    class USpinBox* PalDamageRateAttack_SpinBox;                                      // 0x0588 (size: 0x8)
    class USpinBox* PalDamageRateDefense_SpinBox;                                     // 0x0590 (size: 0x8)
    class USpinBox* PalSpawnNumRate_SpinBox;                                          // 0x0598 (size: 0x8)
    class USpinBox* PalStaminaDecreaceRate;                                           // 0x05A0 (size: 0x8)
    class USpinBox* PalStomachDecreaceRate_SpinBox;                                   // 0x05A8 (size: 0x8)
    class USpinBox* PlayerAutoHPRegeneRate_SpinBox;                                   // 0x05B0 (size: 0x8)
    class USpinBox* PlayerAutoHpRegeneRateInSleep_SpinBox;                            // 0x05B8 (size: 0x8)
    class USpinBox* PlayerDamageRateAttack_SpinBox;                                   // 0x05C0 (size: 0x8)
    class USpinBox* PlayerDamageRateDefense_SpinBox;                                  // 0x05C8 (size: 0x8)
    class USpinBox* PlayerStaminaDecreaceRate;                                        // 0x05D0 (size: 0x8)
    class USpinBox* PlayerStomachDecreaceRate_SpinBox;                                // 0x05D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_InviteCode;                                        // 0x05E0 (size: 0x8)
    class UVerticalBox* VerticalBox_ServerInfo;                                       // 0x05E8 (size: 0x8)
    class UVerticalBox* VerticalBoxWorld;                                             // 0x05F0 (size: 0x8)
    class UWBP_MenuESC_Button_C* WBP_MenuESC_Button;                                  // 0x05F8 (size: 0x8)
    class UWBP_MenuESC_Button_C* WBP_MenuESC_Button_1;                                // 0x0600 (size: 0x8)
    class UWBP_MenuESC_Button_C* WBP_MenuESC_Button_2;                                // 0x0608 (size: 0x8)
    class UWBP_MenuESC_Button_C* WBP_MenuESC_Button_3;                                // 0x0610 (size: 0x8)
    class UWBP_MenuESC_Button_C* WBP_MenuESC_Button_4;                                // 0x0618 (size: 0x8)
    class UWBP_MenuESC_Button_C* WBP_MenuESC_Button_5;                                // 0x0620 (size: 0x8)
    class UWBP_MenuESC_Button_C* WBP_MenuESC_Button_6;                                // 0x0628 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_Members;                // 0x0630 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_CopyCode;                 // 0x0638 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_ShoiwHideInviteCode;      // 0x0640 (size: 0x8)
    class UCanvasPanel* WorldOptionCanvas;                                            // 0x0648 (size: 0x8)
    FPalOptionWorldSettings OptionWorldSettingsCache;                                 // 0x0650 (size: 0x138)
    FPalOptionAudioSettings AudioSettingsCache;                                       // 0x0788 (size: 0x1C)
    FPalOptionKeyboardSettings KeyboardSettingsCache;                                 // 0x07A4 (size: 0x14)
    FPalOptionPadSettings PadSettingsCache;                                           // 0x07B8 (size: 0x1C)
    FPalOptionGraphicsSettings GraphicsSettingsCache;                                 // 0x07D4 (size: 0x54)
    FDataTableRowHandle KillDialogMsgId;                                              // 0x0828 (size: 0x10)
    FDataTableRowHandle ToTitleDialogMsgId;                                           // 0x0838 (size: 0x10)
    bool bShowInviteCode;                                                             // 0x0848 (size: 0x1)

    class UWidget* CustomNavi_ToLeftMenuBottom(EUINavigation Navigation);
    class UWidget* CustomNavi_ToLeftMenuTop(EUINavigation Navigation);
    class UWidget* CustomNavi_ToInviteCode(EUINavigation Navigation);
    void ProcessSaveReturn();
    void SetInviteCodeText();
    void ShowHideInviteCode();
    void CopyInviteCode();
    class UWidget* BP_GetDesiredFocusTarget();
    void ApplyWorldPreset(FString Difficulty);
    void InitOptionFieldBool(class UCheckBox* CheckBox, bool& CurrentValue);
    void InitOptionFieldInt(FPalOptionValueInt MinMaxValue, class USpinBox* SpinBox, int32& CurrentValue);
    void ApplyWorldSettings();
    void InitOptionFieldFloat(FPalOptionValueFloat MinMaxValue, class USpinBox* SpinBox, double& CurrentValue);
    void SetupWorldOptions();
    void OnInitialized();
    void OnClickedButton(TEnumAsByte<E_PalEscMenuType::Type> MenuType);
    void BndEvt__WBP_MenuESC_DayTimeSpeedRateValue_SpinBox_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_NightTimeSpeedRate_SpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_ExpRate_SpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalCaptureRateAdd_SpinBox_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_Value_4_K2Node_ComponentBoundEvent_6_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_8_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PlayerDamageRateAttack_SpinBox_K2Node_ComponentBoundEvent_9_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PlayerDamageRateDefense_SpinBox_K2Node_ComponentBoundEvent_10_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PlayerStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_Value_9_K2Node_ComponentBoundEvent_12_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PlayerAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_13_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PlayerAutoHpRegenRateInSleep_SpinBox_K2Node_ComponentBoundEvent_14_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalStomachDecreaceRate_SpinBox_K2Node_ComponentBoundEvent_15_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_Value_13_K2Node_ComponentBoundEvent_16_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalAutoHPRegeneRate_SpinBox_K2Node_ComponentBoundEvent_17_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_PalAutoHpRegenRateInSleep_SpinBOx_K2Node_ComponentBoundEvent_18_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_BuildObjectDamageRate_SpinBox_K2Node_ComponentBoundEvent_19_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_CollectionDropRate_SpinBox_K2Node_ComponentBoundEvent_20_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_CollectionObjectHpRate_SpinBox_K2Node_ComponentBoundEvent_21_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_Value_15_K2Node_ComponentBoundEvent_22_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_EnemyDropItemRate_SpinBox_K2Node_ComponentBoundEvent_23_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_bActiveUNKO_CheckBox_K2Node_ComponentBoundEvent_24_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_MenuESC_AimAssistPad_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_MenuESC_AimAssistKeyboard_CheckBox_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_MenuESC_ComboBoxString_153_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__WBP_MenuESC_bEnableFriendlyFire_CheckBox_K2Node_ComponentBoundEvent_51_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_MenuESC_bEnableInvaderEnemy_CheckBox_K2Node_ComponentBoundEvent_55_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__WBP_MenuESC_DropItemMaxNum_SpinBox_K2Node_ComponentBoundEvent_56_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_MenuESC_DropItemMaxNum_UNKO_SpinBox_K2Node_ComponentBoundEvent_57_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnKillExecute();
    void ConfirmKill(bool Confirm);
    void OnReturn2Title();
    void ConfirmReturnTitle(bool Confirm);
    void BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MenuESC_WBP_PalInvisibleButton_CopyCode_K2Node_ComponentBoundEvent_25_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void UpdateRTT();
    void ExecuteUbergraph_WBP_MenuESC(int32 EntryPoint);
}; // Size: 0x849

#endif
