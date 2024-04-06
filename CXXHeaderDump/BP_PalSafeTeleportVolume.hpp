#ifndef UE4SS_SDK_BP_PalSafeTeleportVolume_HPP
#define UE4SS_SDK_BP_PalSafeTeleportVolume_HPP

class ABP_PalSafeTeleportVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* DeathArea;                                                   // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

    void BndEvt__BP_PalDeathVolume_DeathArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_PalSafeTeleportVolume(int32 EntryPoint);
}; // Size: 0x2A8

#endif
