#ifndef UE4SS_SDK_BP_NaughtyCat_HPP
#define UE4SS_SDK_BP_NaughtyCat_HPP

class ABP_NaughtyCat_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UPalSpeedCollisionComponent* PalSpeedCollision1;                            // 0x0A18 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A20 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A28 (size: 0x8)
    class UBP_PalRideMarkerSit_C* BP_PalRideMarkerSit;                                // 0x0A30 (size: 0x8)
    class UMaterialInstanceDynamic* EyeMaterial;                                      // 0x0A38 (size: 0x8)

    void ReceiveBeginPlay();
    void ChangeBattle(bool bIsBattleMode);
    void ExecuteUbergraph_BP_NaughtyCat(int32 EntryPoint);
}; // Size: 0xA40

#endif
