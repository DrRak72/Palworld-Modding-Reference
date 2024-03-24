#ifndef UE4SS_SDK_BP_JetDragon_HPP
#define UE4SS_SDK_BP_JetDragon_HPP

class ABP_JetDragon_C : public ABP_MonsterBase_C
{
    class UPalShooterComponent* PalShooter;                                           // 0x08F0 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x08F8 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere3;                          // 0x0900 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere2;                          // 0x0908 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere1;                          // 0x0910 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0918 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0920 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0928 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0930 (size: 0x8)
    class UNiagaraComponent* WingEffect;                                              // 0x0938 (size: 0x8)
    class UPalFlyMeshHeightCtrlComponent* PalFlyMeshHeightCtrl;                       // 0x0940 (size: 0x8)
    class UPalRideMarkerComponent* PalRideMarker;                                     // 0x0948 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
}; // Size: 0x950

#endif
