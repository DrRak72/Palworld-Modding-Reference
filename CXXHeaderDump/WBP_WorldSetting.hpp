#ifndef UE4SS_SDK_WBP_WorldSetting_HPP
#define UE4SS_SDK_WBP_WorldSetting_HPP

class UWBP_WorldSetting_C : public UPalUIWorldSettingBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UImage* Image_69;                                                           // 0x0580 (size: 0x8)
    class UWBP_CommonWaiting_C* WBP_CommonWaiting;                                    // 0x0588 (size: 0x8)
    class UWBP_Title_WorldMenu_Head_C* WBP_Title_WorldMenu_Head;                      // 0x0590 (size: 0x8)
    class UWBP_Title_WorldSettings_C* WBP_Title_WorldSettings;                        // 0x0598 (size: 0x8)
    FDataTableRowHandle WaitingSaveMsgID;                                             // 0x05A0 (size: 0x10)
    bool Is New World;                                                                // 0x05B0 (size: 0x1)
    class UBP_HUDDispatchParameter_WorldNameInput_C* WorldNameInputDispatchParameter; // 0x05B8 (size: 0x8)

    void OnClosedWorldNameInputWindow(class UPalHUDDispatchParameterBase* Param);
    void OpenWorldNameInputWindow();
    void OnClosedStartGameDialog(bool bResult);
    void OpenStartGameCheckDialog();
    void StartNewGame(FPalOptionWorldSettings Option);
    void OnClosedSaveSettingDialog(bool bResult);
    void OpenCheckSaveSettingDialog();
    void OnCancelAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_0_OnClickedCancel__DelegateSignature();
    void BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_1_OnClickedConfirm__DelegateSignature();
    void OnCompletedSaveSetting(bool IsSuccess);
    void Construct();
    void Destruct();
    void BndEvt__WBP_WorldSetting_WBP_Title_WorldSettings_K2Node_ComponentBoundEvent_2_OnClickedWorldNameInputButton__DelegateSignature();
    void OnFilteredWorldName(FString NewWorldName);
    void ExecuteUbergraph_WBP_WorldSetting(int32 EntryPoint);
}; // Size: 0x5C0

#endif
