#ifndef UE4SS_SDK_BP_UniqueRideWeapon_Dummy_HPP
#define UE4SS_SDK_BP_UniqueRideWeapon_Dummy_HPP

class ABP_UniqueRideWeapon_Dummy_C : public ABP_UniqueRideWeapon_RapidBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMeshL;                                      // 0x0560 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMeshR;                                      // 0x0568 (size: 0x8)
    FTimerHandle ShootingHandle_0;                                                    // 0x0570 (size: 0x8)
    bool IsRight;                                                                     // 0x0578 (size: 0x1)

    void GetAllMeshComponent(TArray<class UMeshComponent*>& OutMesh);
    void GetShootInterval(double& Time);
    FRotator GetMuzzleRotation();
    TSubclassOf<class APalBullet> GetBulletClass();
    FVector GetMuzzleLocation();
    class UNiagaraSystem* GetMuzzleEffect();
    void GetUseWeaponMesh(class USkeletalMeshComponent*& Mesh);
    void ReceiveBeginPlay();
    void カスタムイベント_0();
    void ExecuteUbergraph_BP_UniqueRideWeapon_Dummy(int32 EntryPoint);
}; // Size: 0x579

#endif
