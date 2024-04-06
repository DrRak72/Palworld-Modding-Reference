#ifndef UE4SS_SDK_WBP_Ingame_Signboard_TextInput_HPP
#define UE4SS_SDK_WBP_Ingame_Signboard_TextInput_HPP

class UWBP_Ingame_Signboard_TextInput_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UMultiLineEditableText* MultiLineEditableText;                              // 0x0438 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x0440 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0448 (size: 0x8)
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;                                // 0x0450 (size: 0x8)
    FDataTableRowHandle NoNameMsgID;                                                  // 0x0458 (size: 0x10)
    int32 MaxTextLength;                                                              // 0x0468 (size: 0x4)
    int32 MaxTextLineNum;                                                             // 0x046C (size: 0x4)
    FPalDataTableRowName_UIInputAction EscapeActionName;                              // 0x0470 (size: 0x8)
    FPalUIActionBindData TriggerActionHandle;                                         // 0x0478 (size: 0x4)
    bool IsRegisteredActionInput;                                                     // 0x047C (size: 0x1)

    void ResetInputAction();
    void SetupInputAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void SetEnableConfirmButton(bool isEnable);
    void BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_Ingame_Signboard_TextInput_MultiLineEditableText_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void OnTriggerEscape();
    void OnClosed();
    void OnSetup();
    void BndEvt__WBP_Ingame_Signboard_TextInput_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Ingame_Signboard_TextInput(int32 EntryPoint);
}; // Size: 0x47D

#endif
