#ifndef UE4SS_SDK_BP_HeatSourceSphereComponent_HPP
#define UE4SS_SDK_BP_HeatSourceSphereComponent_HPP

class UBP_HeatSourceSphereComponent_C : public UPalHeatSourceSphereComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0570 (size: 0x8)
    int32 HeatLevel_DayTime;                                                          // 0x0578 (size: 0x4)
    int32 HeatLevel_NightTime;                                                        // 0x057C (size: 0x4)

    void ReceiveBeginPlay();
    void Begin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void End(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_HeatSourceSphereComponent(int32 EntryPoint);
}; // Size: 0x580

#endif
