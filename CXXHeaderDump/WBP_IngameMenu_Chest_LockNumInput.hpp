#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_LockNumInput_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_LockNumInput_HPP

class UWBP_IngameMenu_Chest_LockNumInput_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Wrong;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Correct;                                              // 0x0288 (size: 0x8)
    class UImage* InputBase;                                                          // 0x0290 (size: 0x8)
    class UImage* On;                                                                 // 0x0298 (size: 0x8)

    void SetOn(bool IsOn);
    void PlayAuthAnm(bool PlayPass);
    void ExecuteUbergraph_WBP_IngameMenu_Chest_LockNumInput(int32 EntryPoint);
}; // Size: 0x2A0

#endif
