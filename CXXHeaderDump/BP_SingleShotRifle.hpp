#ifndef UE4SS_SDK_BP_SingleShotRifle_HPP
#define UE4SS_SDK_BP_SingleShotRifle_HPP

class ABP_SingleShotRifle_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class USkeletalMeshComponent* weapon;                                             // 0x0580 (size: 0x8)

    float GetDefaultBlurAngle();
    void PlayAnimOnEquip();
    void GetAmmoClass(TSubclassOf<class AActor>& AmmoClass);
    FTransform GetLeftHandTransform();
    void GetAimingBlurAngle(double& Angle);
    void Is UseEjectionPort(bool& isUse);
    void GeyEjectionPortTransform(FTransform& Transform);
    void GetShotAnimation();
    bool IsUseLeftHandAttach();
    void OnShoot();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetShootInterval(double& Time);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    FName GetEquipSocketName();
    void OnReloadStart();
    void OnAttachWeapon(class AActor* attachActor);
    void OnPullTrigger();
    void OnDetachWeapon(class AActor* detachActor);
    void ExecuteUbergraph_BP_SingleShotRifle(int32 EntryPoint);
}; // Size: 0x588

#endif
