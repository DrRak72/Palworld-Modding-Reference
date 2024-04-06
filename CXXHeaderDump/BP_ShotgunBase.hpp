#ifndef UE4SS_SDK_BP_ShotgunBase_HPP
#define UE4SS_SDK_BP_ShotgunBase_HPP

class ABP_ShotgunBase_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class USkeletalMeshComponent* weapon;                                             // 0x0540 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0548 (size: 0x8)
    double ShotInterval;                                                              // 0x0550 (size: 0x8)
    double ScatteredAngle;                                                            // 0x0558 (size: 0x8)
    bool CanShootFlag;                                                                // 0x0560 (size: 0x1)
    bool DirectionForReticle;                                                         // 0x0561 (size: 0x1)
    bool IsIntervalTimeEnded;                                                         // 0x0562 (size: 0x1)

    float GetDefaultBlurAngle();
    void PlayFireSound();
    float CalcRange();
    float CalcAccuracy();
    float CalcDPS();
    void OnshotInternal(bool& IsShoted);
    void GetEjectionPort(FTransform& EjectionTransform);
    FTransform GetLeftHandTransform();
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetTargetPosition(FVector& TargetLocation);
    void GetShootTransformList(double BaseAngle, double BlurAngle, TArray<FTransform>& ShootTransformList);
    bool IsUseLeftHandAttach();
    FName GetEquipSocketName();
    void GetMuzzleTransform(FTransform& Transform);
    void OnShot();
    void CanShoot(bool& can);
    void ReceiveTick(float DeltaSeconds);
    void OnPullTrigger();
    void OnReleaseTrigger();
    void CountShotInterval();
    void ShootIntervalEvent();
    void OnAttachWeapon(class AActor* attachActor);
    void StopReloadWhenRoll(const class UPalActionBase* action);
    void OnDetachWeapon(class AActor* detachActor);
    void ExecuteUbergraph_BP_ShotgunBase(int32 EntryPoint);
}; // Size: 0x563

#endif
