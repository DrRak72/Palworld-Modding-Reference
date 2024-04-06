#ifndef UE4SS_SDK_WBP_Talk_ChoiceButtonList_HPP
#define UE4SS_SDK_WBP_Talk_ChoiceButtonList_HPP

class UWBP_Talk_ChoiceButtonList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UVerticalBox* VerticalBox_Button;                                           // 0x0280 (size: 0x8)
    FWBP_Talk_ChoiceButtonList_COnSelectedChoice OnSelectedChoice;                    // 0x0288 (size: 0x10)
    void OnSelectedChoice(int32 Index);

    void GetButtonByIndex(int32 Index, class UWBP_TalkSelectButton_C*& NewParam);
    void ClearButtons();
    void FocusToIndex(int32 Index);
    void ShowChoice(TArray<FName>& choiceTextIDList);
    void OnChoiced(int32 Index);
    void Construct();
    void ExecuteUbergraph_WBP_Talk_ChoiceButtonList(int32 EntryPoint);
    void OnSelectedChoice__DelegateSignature(int32 Index);
}; // Size: 0x298

#endif
