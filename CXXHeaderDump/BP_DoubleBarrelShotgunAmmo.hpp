#ifndef UE4SS_SDK_BP_DoubleBarrelShotgunAmmo_HPP
#define UE4SS_SDK_BP_DoubleBarrelShotgunAmmo_HPP

class ABP_DoubleBarrelShotgunAmmo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Ammo;                                                 // 0x0298 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02A0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DoubleBarrelShotgunAmmo(int32 EntryPoint);
}; // Size: 0x2A8

#endif
