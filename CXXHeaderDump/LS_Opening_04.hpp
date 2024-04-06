#ifndef UE4SS_SDK_LS_Opening_04_HPP
#define UE4SS_SDK_LS_Opening_04_HPP

class ULS_Opening_04 (Director BP)_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTLS_Opening_04 (Director BP)(class ABP_CutsceneTerminal_C* BP_Cutscene_Terminal);
    void TriggerTerminalWidgetAnim(class ABP_CutsceneTerminal_C* BP_Cutscene_Terminal);
    void ExecuteUbergraph_LS_Opening_04 (Director BP)(int32 EntryPoint);
}; // Size: 0x40

#endif
