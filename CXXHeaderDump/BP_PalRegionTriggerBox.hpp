#ifndef UE4SS_SDK_BP_PalRegionTriggerBox_HPP
#define UE4SS_SDK_BP_PalRegionTriggerBox_HPP

class ABP_PalRegionTriggerBox_C : public APalRegionAreaTriggerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_PalRegionTriggerBox(int32 EntryPoint);
}; // Size: 0x2B0

#endif
