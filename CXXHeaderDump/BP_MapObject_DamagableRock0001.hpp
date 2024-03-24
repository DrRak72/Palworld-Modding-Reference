#ifndef UE4SS_SDK_BP_MapObject_DamagableRock0001_HPP
#define UE4SS_SDK_BP_MapObject_DamagableRock0001_HPP

class ABP_MapObject_DamagableRock0001_C : public APalMapObject
{
    class UStaticMeshComponent* Mesh2;                                                // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* Mesh1;                                                // 0x03B8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x03C0 (size: 0x8)
    class UBoxComponent* WorkableBounds;                                              // 0x03C8 (size: 0x8)
    class UArrowComponent* IndicatorOrigin;                                           // 0x03D0 (size: 0x8)
    class UPalMapObjectDropItemParameterComponent* DropItemParameter;                 // 0x03D8 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x03E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03F0 (size: 0x8)

}; // Size: 0x3F8

#endif
