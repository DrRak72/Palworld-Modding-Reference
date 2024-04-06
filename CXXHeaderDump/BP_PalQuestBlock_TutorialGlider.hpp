#ifndef UE4SS_SDK_BP_PalQuestBlock_TutorialGlider_HPP
#define UE4SS_SDK_BP_PalQuestBlock_TutorialGlider_HPP

class UBP_PalQuestBlock_TutorialGlider_C : public UPalQuestBlock
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0050 (size: 0x8)

    void GetDescriptionText(FText& OutText);
    void BP_PalQuestBlock_TutorialGlider_AutoGenFunc();
    void OnSetup_ForBP();
    void OnComplete_ForBP();
    void ExecuteUbergraph_BP_PalQuestBlock_TutorialGlider(int32 EntryPoint);
}; // Size: 0x58

#endif
