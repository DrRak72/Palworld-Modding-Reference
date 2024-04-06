#ifndef UE4SS_SDK_BP_UniqueRideWeapon_Minigun_HPP
#define UE4SS_SDK_BP_UniqueRideWeapon_Minigun_HPP

class ABP_UniqueRideWeapon_Minigun_C : public ABP_UniqueRideWeapon_RapidBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh_0;                                     // 0x0560 (size: 0x8)
    bool IsRotateBarrel;                                                              // 0x0568 (size: 0x1)

    void StopFireLoopSound();
    void PlayFireLoopSound();
    void GetAllMeshComponent(TArray<class UMeshComponent*>& OutMesh);
    FTransform GetAmmoEjectTransform();
    TSubclassOf<class AActor> GetAmmoClass();
    void ShootBulletBP();
    float GetBulrAngle();
    TSubclassOf<class APalBullet> GetBulletClass();
    class UNiagaraSystem* GetMuzzleEffect();
    FRotator GetMuzzleRotation();
    FVector GetMuzzleLocation();
    void GetShootInterval(double& Time);
    void OnReleaseTrigger();
    void OnPullTrigger();
    void ReceiveTick(float DeltaSeconds);
    void OnPlayFireLoopSound();
    void ExecuteUbergraph_BP_UniqueRideWeapon_Minigun(int32 EntryPoint);
}; // Size: 0x569

#endif
