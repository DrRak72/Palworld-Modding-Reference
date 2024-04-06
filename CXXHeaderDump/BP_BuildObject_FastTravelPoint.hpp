#ifndef UE4SS_SDK_BP_BuildObject_FastTravelPoint_HPP
#define UE4SS_SDK_BP_BuildObject_FastTravelPoint_HPP

class ABP_BuildObject_FastTravelPoint_C : public APalBuildObject
{
    class UNiagaraComponent* Glow;                                                    // 0x0580 (size: 0x8)
    class UPalMapObjectLocationComponent* Location;                                   // 0x0588 (size: 0x8)
    class UArrowComponent* WarpPoint;                                                 // 0x0590 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0598 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x05A8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05C0 (size: 0x8)

}; // Size: 0x5C8

#endif
