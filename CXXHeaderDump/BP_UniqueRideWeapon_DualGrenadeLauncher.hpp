#ifndef UE4SS_SDK_BP_UniqueRideWeapon_DualGrenadeLauncher_HPP
#define UE4SS_SDK_BP_UniqueRideWeapon_DualGrenadeLauncher_HPP

class ABP_UniqueRideWeapon_DualGrenadeLauncher_C : public ABP_UniqueRideWeapon_OneShotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMeshL;                                      // 0x0560 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMeshR;                                      // 0x0568 (size: 0x8)
    bool IsRight;                                                                     // 0x0570 (size: 0x1)

    void ShootBulletBP();
    void GetAllMeshComponent(TArray<class UMeshComponent*>& OutMesh);
    TSubclassOf<class APalBullet> GetBulletClass();
    FRotator GetMuzzleRotation();
    FVector GetMuzzleLocation();
    class UNiagaraSystem* GetMuzzleEffect();
    void GetUseWeaponMesh(class USkeletalMeshComponent*& Mesh);
    void OnAttachWeapon(class AActor* attachActor);
    void ExecuteUbergraph_BP_UniqueRideWeapon_DualGrenadeLauncher(int32 EntryPoint);
}; // Size: 0x571

#endif
