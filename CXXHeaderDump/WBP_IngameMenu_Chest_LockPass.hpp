#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_LockPass_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_LockPass_HPP

class UWBP_IngameMenu_Chest_LockPass_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_Wrong;                                                // 0x0438 (size: 0x8)
    class UWidgetAnimation* Anm_Correct;                                              // 0x0440 (size: 0x8)
    class UWidgetAnimation* Anm_Setting;                                              // 0x0448 (size: 0x8)
    class UImage* SettingsBase;                                                       // 0x0450 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Message;                                           // 0x0458 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x0460 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_0;            // 0x0468 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_1;            // 0x0470 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_2;            // 0x0478 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_3;            // 0x0480 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_4;            // 0x0488 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_5;            // 0x0490 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_6;            // 0x0498 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_7;            // 0x04A0 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_8;            // 0x04A8 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNum_C* WBP_IngameMenu_Chest_LockNum_9;            // 0x04B0 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNumInput_C* WBP_IngameMenu_Chest_LockNumInput;    // 0x04B8 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNumInput_C* WBP_IngameMenu_Chest_LockNumInput_1;  // 0x04C0 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNumInput_C* WBP_IngameMenu_Chest_LockNumInput_2;  // 0x04C8 (size: 0x8)
    class UWBP_IngameMenu_Chest_LockNumInput_C* WBP_IngameMenu_Chest_LockNumInput_3;  // 0x04D0 (size: 0x8)
    class UPalMapObjectPasswordLockModule* PasswordLockModule;                        // 0x04D8 (size: 0x8)
    TArray<class UWBP_IngameMenu_Chest_LockNum_C*> Numpads;                           // 0x04E0 (size: 0x10)
    TArray<class UWBP_IngameMenu_Chest_LockNumInput_C*> InputNums;                    // 0x04F0 (size: 0x10)
    TArray<int32> InputNumbers;                                                       // 0x0500 (size: 0x10)
    FDataTableRowHandle SettingMsgId;                                                 // 0x0510 (size: 0x10)
    FDataTableRowHandle CorrectMsgId;                                                 // 0x0520 (size: 0x10)
    FDataTableRowHandle WrongMsgId;                                                   // 0x0530 (size: 0x10)
    FName TabActionName;                                                              // 0x0540 (size: 0x8)
    bool Is Authentication;                                                           // 0x0548 (size: 0x1)

    class UWidget* BP_GetDesiredFocusTarget();
    FString GetInputNumberStr();
    void OnSetup();
    void OnNumpadClicked(int32 ClickedNum);
    void OnInitialized();
    void CloseAction();
    void Destruct();
    void NotifyAuthenticationResult(bool passed);
    void ResetInput();
    void BndEvt__WBP_IngameMenu_Chest_LockPass_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Chest_LockPass(int32 EntryPoint);
}; // Size: 0x549

#endif
