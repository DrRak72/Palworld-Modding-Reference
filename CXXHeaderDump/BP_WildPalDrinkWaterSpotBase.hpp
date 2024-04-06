#ifndef UE4SS_SDK_BP_WildPalDrinkWaterSpotBase_HPP
#define UE4SS_SDK_BP_WildPalDrinkWaterSpotBase_HPP

class ABP_WildPalDrinkWaterSpotBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* DebugMesh;                                            // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    TArray<FVector> Goal Locations;                                                   // 0x02A8 (size: 0x10)

    void DeleteChild();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase(int32 EntryPoint);
}; // Size: 0x2B8

#endif
