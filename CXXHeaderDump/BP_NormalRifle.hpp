#ifndef UE4SS_SDK_BP_NormalRifle_HPP
#define UE4SS_SDK_BP_NormalRifle_HPP

class ABP_NormalRifle_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class USkeletalMeshComponent* weapon;                                             // 0x0580 (size: 0x8)
    FVector NewLocalVar_0;                                                            // 0x0588 (size: 0x18)

    float GetDefaultBlurAngle();
    void PlayEndFireSound_Callback(bool IsPlaying);
    void PlayEndFireSound();
    void StopFireSound();
    void PlayFireSound();
    void PlayReloadAnimation();
    FTransform GetLeftHandTransform();
    void GetAimingBlurAngle(double& Angle);
    void Is UseEjectionPort(bool& isUse);
    void GeyEjectionPortTransform(FTransform& Transform);
    void GetShotAnimation();
    bool IsUseLeftHandAttach();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetShootInterval(double& Time);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    FName GetEquipSocketName();
    void OnReleaseTrigger();
    void OnDetachWeapon(class AActor* detachActor);
    void カスタムイベント_0(EWeaponNotifyType NotifyType);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnAttachWeapon(class AActor* attachActor);
    void OnShoot();
    void OnPullTrigger();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_NormalRifle(int32 EntryPoint);
}; // Size: 0x5A0

#endif
