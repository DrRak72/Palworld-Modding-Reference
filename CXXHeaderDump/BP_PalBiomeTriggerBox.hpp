#ifndef UE4SS_SDK_BP_PalBiomeTriggerBox_HPP
#define UE4SS_SDK_BP_PalBiomeTriggerBox_HPP

class ABP_PalBiomeTriggerBox_C : public APalBiomeAreaTriggerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBP_PalBiomeEffectController_C* BP_PalBiomeEffectController;                // 0x02A0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_PalBiomeTriggerBox(int32 EntryPoint);
}; // Size: 0x2B0

#endif
