#ifndef UE4SS_SDK_BP_LazyDragon_HPP
#define UE4SS_SDK_BP_LazyDragon_HPP

class ABP_LazyDragon_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision;                             // 0x0A18 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule2;                        // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule1;                        // 0x0A28 (size: 0x8)
    class UPalRideMarkerComponent* PalRideMarker;                                     // 0x0A30 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A38 (size: 0x8)
    class UPalShooterComponent* PalShooter;                                           // 0x0A40 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_LazyDragon_PalShooter_K2Node_ComponentBoundEvent_0_ChangeStateDelegate__DelegateSignature(bool IsAim, bool IsShoot);
    void ExecuteUbergraph_BP_LazyDragon(int32 EntryPoint);
}; // Size: 0xA48

#endif
