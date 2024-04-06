#ifndef UE4SS_SDK_BP_ThunderDragonMan_HPP
#define UE4SS_SDK_BP_ThunderDragonMan_HPP

class ABP_ThunderDragonMan_C : public ABP_MonsterBase_C
{
    class UBP_PalTimerPointLightComponent_C* BP_PalTimerPointLightComponent;          // 0x0A10 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision1;                            // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule6;                        // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A28 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A30 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule5;                        // 0x0A38 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule4;                        // 0x0A40 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;                        // 0x0A48 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A50 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
}; // Size: 0xA58

#endif
