#ifndef UE4SS_SDK_BP_DungeonAreaVolume_HPP
#define UE4SS_SDK_BP_DungeonAreaVolume_HPP

class ABP_DungeonAreaVolume_C : public APalDungeonAreaVolume
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02A0 (size: 0x8)

    FBox GetBoundingBox();
    void Develop_SetupSize(FVector Extent);
    void BndEvt__BP_DungeonAreaVolume_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_DungeonAreaVolume(int32 EntryPoint);
}; // Size: 0x2A8

#endif
