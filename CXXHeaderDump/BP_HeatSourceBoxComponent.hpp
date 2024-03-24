#ifndef UE4SS_SDK_BP_HeatSourceBoxComponent_HPP
#define UE4SS_SDK_BP_HeatSourceBoxComponent_HPP

class UBP_HeatSourceBoxComponent_C : public UPalHeatSourceBoxComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    int32 HeatLevel_DayTime;                                                          // 0x0598 (size: 0x4)
    int32 HeatLevel_NightTime;                                                        // 0x059C (size: 0x4)

    void ReceiveBeginPlay();
    void Begin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void End(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_HeatSourceBoxComponent(int32 EntryPoint);
}; // Size: 0x5A0

#endif
