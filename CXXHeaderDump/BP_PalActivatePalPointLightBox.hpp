#ifndef UE4SS_SDK_BP_PalActivatePalPointLightBox_HPP
#define UE4SS_SDK_BP_PalActivatePalPointLightBox_HPP

class ABP_PalActivatePalPointLightBox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0298 (size: 0x8)

    void SetActiveDayTimeLight(class AActor* Actor, bool Active);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_PalActivatePalPointLightBox(int32 EntryPoint);
}; // Size: 0x2A0

#endif
