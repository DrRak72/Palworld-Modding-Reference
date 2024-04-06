#ifndef UE4SS_SDK_BP_BuildObject_CoolerMedieval_HPP
#define UE4SS_SDK_BP_BuildObject_CoolerMedieval_HPP

class ABP_BuildObject_CoolerMedieval_C : public ABP_BuildObject_SwitchHeatSource_C
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0598 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05A8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B0 (size: 0x8)

}; // Size: 0x5B8

#endif
