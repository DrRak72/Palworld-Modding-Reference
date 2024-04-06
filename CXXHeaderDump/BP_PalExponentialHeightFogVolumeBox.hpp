#ifndef UE4SS_SDK_BP_PalExponentialHeightFogVolumeBox_HPP
#define UE4SS_SDK_BP_PalExponentialHeightFogVolumeBox_HPP

class ABP_PalExponentialHeightFogVolumeBox_C : public APalExponentialHeightFogVolume
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_PalExponentialHeightFogVolumeBox(int32 EntryPoint);
}; // Size: 0x2B0

#endif
