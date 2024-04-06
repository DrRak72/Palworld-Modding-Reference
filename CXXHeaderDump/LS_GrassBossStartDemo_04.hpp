#ifndef UE4SS_SDK_LS_GrassBossStartDemo_04_HPP
#define UE4SS_SDK_LS_GrassBossStartDemo_04_HPP

class ULS_GrassBossStartDemo_04 (Director BP)_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTLS_GrassBossStartDemo_04 (Director BP)_6(class ABP_PalCutsceneCamera_C* BP_Pal_Cutscene_Camera);
    void SequenceEvent__ENTRYPOINTLS_GrassBossStartDemo_04 (Director BP)_5(class ABP_PalCutsceneCamera_C* BP_Pal_Cutscene_Camera);
    void SequenceEvent__ENTRYPOINTLS_GrassBossStartDemo_04 (Director BP)_4(class ABP_PalCutsceneCamera_C* BP_Pal_Cutscene_Camera);
    void SequenceEvent__ENTRYPOINTLS_GrassBossStartDemo_04 (Director BP)_3(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_GrassBossStartDemo_04 (Director BP)_2(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_GrassBossStartDemo_04 (Director BP)_1(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_GrassBossStartDemo_04 (Director BP)_0(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_GrassBossStartDemo_04 (Director BP)(class UPalFacialComponent* PalFacial);
    void PalFacial_Event_0(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void PalFacial_Event_1(class UPalFacialComponent* PalFacial, EPalFacialMouthType Mouth);
    void PalFacial_Event_2(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void PalFacial_Event_3(class UPalFacialComponent* PalFacial, EPalFacialMouthType Mouth);
    void PalFacial_Event_4(class UPalFacialComponent* PalFacial, EPalFacialMouthType Mouth);
    void StartCapture(class ABP_PalCutsceneCamera_C* BP_Pal_Cutscene_Camera);
    void StopCapture(class ABP_PalCutsceneCamera_C* BP_Pal_Cutscene_Camera);
    void PreSetupBossDemoWidget(class ABP_PalCutsceneCamera_C* BP_Pal_Cutscene_Camera);
    void ExecuteUbergraph_LS_GrassBossStartDemo_04 (Director BP)(int32 EntryPoint);
}; // Size: 0x40

#endif
