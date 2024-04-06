#ifndef UE4SS_SDK_BP_DecalGun_Base_HPP
#define UE4SS_SDK_BP_DecalGun_Base_HPP

class ABP_DecalGun_Base_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class USkeletalMeshComponent* weapon;                                             // 0x0580 (size: 0x8)
    bool IsCoolTime;                                                                  // 0x0588 (size: 0x1)

    float GetDefaultBlurAngle();
    void GetAmmoClass(TSubclassOf<class AActor>& AmmoClass);
    void PlayReloadAnimation();
    FTransform GetLeftHandTransform();
    void GetBlurAngle(double& Angle);
    void Is UseEjectionPort(bool& isUse);
    void GeyEjectionPortTransform(FTransform& Transform);
    void GetShotAnimation();
    bool IsUseLeftHandAttach();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetInitializeInterval(double& Time);
    void GetShootInterval(double& Time);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void OnAttachWeapon(class AActor* attachActor);
    void OnPullTrigger();
    void ResetCoolTime();
    void OnReleaseTrigger();
    void ExecuteUbergraph_BP_DecalGun_Base(int32 EntryPoint);
}; // Size: 0x589

#endif
