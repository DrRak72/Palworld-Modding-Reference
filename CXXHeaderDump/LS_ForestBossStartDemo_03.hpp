#ifndef UE4SS_SDK_LS_ForestBossStartDemo_03_HPP
#define UE4SS_SDK_LS_ForestBossStartDemo_03_HPP

class ULS_ForestBossStartDemo_03 (Director BP)_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTLS_ForestBossStartDemo_03 (Director BP)_2(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_ForestBossStartDemo_03 (Director BP)_1(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_ForestBossStartDemo_03 (Director BP)_0(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_ForestBossStartDemo_03 (Director BP)(class UPalFacialComponent* PalFacial);
    void PalFacial_Event(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void PalFacial_Event_0(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void PalFacial_Event_1(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void PalFacial_Event_2(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void PalFacial_Event_3(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void PalFacial_Event_4(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void ExecuteUbergraph_LS_ForestBossStartDemo_03 (Director BP)(int32 EntryPoint);
}; // Size: 0x40

#endif