#ifndef UE4SS_SDK_BP_JetDragon_HPP
#define UE4SS_SDK_BP_JetDragon_HPP

class ABP_JetDragon_C : public ABP_MonsterBase_C
{
    class UPalShooterComponent* PalShooter;                                           // 0x0A10 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A18 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere3;                          // 0x0A20 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere2;                          // 0x0A28 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0A30 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A38 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A40 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A48 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A50 (size: 0x8)
    class UNiagaraComponent* WingEffect;                                              // 0x0A58 (size: 0x8)
    class UPalFlyMeshHeightCtrlComponent* PalFlyMeshHeightCtrl;                       // 0x0A60 (size: 0x8)
    class UPalRideMarkerComponent* PalRideMarker;                                     // 0x0A68 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
}; // Size: 0xA70

#endif
