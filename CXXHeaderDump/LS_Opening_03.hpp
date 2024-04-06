#ifndef UE4SS_SDK_LS_Opening_03_HPP
#define UE4SS_SDK_LS_Opening_03_HPP

class ULS_Opening_03 (Director BP)_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTLS_Opening_03 (Director BP)(class ABP_CutsceneTerminal_C* BP_Cutscene_Terminal);
    void PlayStartAnim_Widget(class ABP_CutsceneTerminal_C* BP_Cutscene_Terminal);
    void ExecuteUbergraph_LS_Opening_03 (Director BP)(int32 EntryPoint);
}; // Size: 0x40

#endif
