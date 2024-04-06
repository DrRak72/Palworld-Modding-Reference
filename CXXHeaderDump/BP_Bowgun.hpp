#ifndef UE4SS_SDK_BP_Bowgun_HPP
#define UE4SS_SDK_BP_Bowgun_HPP

class ABP_Bowgun_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UChildActorComponent* BP_RightHandChildArrow;                               // 0x0580 (size: 0x8)
    class USkeletalMeshComponent* weapon;                                             // 0x0588 (size: 0x8)
    class UNiagaraSystem* MuzzleEffect;                                               // 0x0590 (size: 0x8)
    bool TestPull;                                                                    // 0x0598 (size: 0x1)

    void PlayReloadSound();
    void PlayFireSound();
    float GetDefaultBlurAngle();
    void ShootArrowInternal(bool& IsShoted);
    void ShootArrow();
    void ShootBullet();
    FTransform GetLeftHandTransform();
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
    void ReceiveBeginPlay();
    void OnPullTrigger();
    void OnReloadStart();
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void OnWeaponNotify(EWeaponNotifyType Type);
    void StopReloadWhenRoll(const class UPalActionBase* action);
    void ExecuteUbergraph_BP_Bowgun(int32 EntryPoint);
}; // Size: 0x599

#endif
