#ifndef UE4SS_SDK_BP_PalQuestBlock_TutorialOpenSurvivalGuide_HPP
#define UE4SS_SDK_BP_PalQuestBlock_TutorialOpenSurvivalGuide_HPP

class UBP_PalQuestBlock_TutorialOpenSurvivalGuide_C : public UPalQuestBlock_OpenSurvivalGuide
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0058 (size: 0x8)

    void OnInputMethodChanged(ECommonInputType bNewInputType);
    void GetDescriptionText(FText& OutText);
    void OnSetup_ForBP();
    void OnComplete_ForBP();
    void ExecuteUbergraph_BP_PalQuestBlock_TutorialOpenSurvivalGuide(int32 EntryPoint);
}; // Size: 0x60

#endif
