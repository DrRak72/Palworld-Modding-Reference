#ifndef UE4SS_SDK_BP_LevelObject_StaticRespawnPoint_HPP
#define UE4SS_SDK_BP_LevelObject_StaticRespawnPoint_HPP

class ABP_LevelObject_StaticRespawnPoint_C : public APalLevelObjectRespawnPoint
{
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x02B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02C0 (size: 0x8)

}; // Size: 0x2C8

#endif
