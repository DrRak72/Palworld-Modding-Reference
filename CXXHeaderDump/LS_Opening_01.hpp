#ifndef UE4SS_SDK_LS_Opening_01_HPP
#define UE4SS_SDK_LS_Opening_01_HPP

class ULS_Opening_01 (Director BP)_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    class UWBP_DemoOP_EyeTransition_C* EyeWBP;                                        // 0x0040 (size: 0x8)

    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_18(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_17(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_16(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_15(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_14(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_13(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_12(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_11(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_10(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_9(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_8(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_7(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_6(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_5(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_4(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_3(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_2(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_1(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)_0(class UPalFacialComponent* PalFacial);
    void SequenceEvent__ENTRYPOINTLS_Opening_01 (Director BP)();
    void StartEyeTransition();
    void PalFacial_Event_0(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void PalFacial_Event_1(class UPalFacialComponent* PalFacial, EPalFacialMouthType Mouth);
    void PalFacial_Event_2(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void PalFacial_Event_3(class UPalFacialComponent* PalFacial, EPalFacialEyeType Eye);
    void PalFacial_Event_4(class UPalFacialComponent* PalFacial, EPalFacialMouthType Mouth);
    void PalFacial_Event_5(class UPalFacialComponent* PalFacial, EPalFacialMouthType Mouth);
    void AnimFinished();
    void OnCreated();
    void OnStop();
    void ExecuteUbergraph_LS_Opening_01 (Director BP)(int32 EntryPoint);
}; // Size: 0x48

#endif
