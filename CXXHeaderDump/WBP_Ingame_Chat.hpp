#ifndef UE4SS_SDK_WBP_Ingame_Chat_HPP
#define UE4SS_SDK_WBP_Ingame_Chat_HPP

class UWBP_Ingame_Chat_C : public UPalUIChat
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class UWidgetAnimation* Anm_OpenToClose;                                          // 0x0430 (size: 0x8)
    class UWidgetAnimation* Anm_SendToLog;                                            // 0x0438 (size: 0x8)
    class UEditableText* EditableText_ChatInput;                                      // 0x0440 (size: 0x8)
    class UImage* Image;                                                              // 0x0448 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0450 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0458 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0460 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0468 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0470 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0478 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0480 (size: 0x8)
    class UImage* Image_256;                                                          // 0x0488 (size: 0x8)
    class UImage* Image_356;                                                          // 0x0490 (size: 0x8)
    class UVerticalBox* InputVisualBox;                                               // 0x0498 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ChatSendCategory;                                  // 0x04A0 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList;                        // 0x04A8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x04B0 (size: 0x8)
    FWBP_Ingame_Chat_COnCompleteInput OnCompleteInput;                                // 0x04B8 (size: 0x10)
    void OnCompleteInput();
    FPalUIActionBindData OpenInventoryActionHandle;                                   // 0x04C8 (size: 0x4)
    EPalChatCategory SelectCategory;                                                  // 0x04CC (size: 0x1)
    FTimerHandle ChatCloseTimer;                                                      // 0x04D0 (size: 0x8)
    FDataTableRowHandle ChatHintTextMsgID;                                            // 0x04D8 (size: 0x10)

    void CanChat(bool& Result);
    void ChangeCategory();
    void OnRecivedChat(const FPalChatMessage& Message);
    void Hide Chat Log UI();
    void Construct();
    void BndEvt__WBP_Ingame_Chat_EditableText_ChatInput_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ShowChatInputUI();
    void HideChatInputUI();
    void OpenChatUI();
    void Destruct();
    void ExecuteUbergraph_WBP_Ingame_Chat(int32 EntryPoint);
    void OnCompleteInput__DelegateSignature();
}; // Size: 0x4E8

#endif
