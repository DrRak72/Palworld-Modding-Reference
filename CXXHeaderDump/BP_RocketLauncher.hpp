#ifndef UE4SS_SDK_BP_RocketLauncher_HPP
#define UE4SS_SDK_BP_RocketLauncher_HPP

class ABP_RocketLauncher_C : public ABP_AssaultRifleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0580 (size: 0x8)
    class UChildActorComponent* BP_Ammo_Rocket;                                       // 0x0588 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0590 (size: 0x8)
    class UMaterialInstanceDynamic* RocketMask;                                       // 0x0598 (size: 0x8)

    void OnShoot();
    void StopReloadSound();
    void PlayReloadSound();
    void PlayFireSound();
    void ShootBullet();
    void ChangeTransformForRocketWhenReloadIsDone(FVector Location, FRotator Lotation);
    void ChangeTransformForRocketReload(FVector Location, FRotator Rotation);
    FTransform GetLeftHandTransform();
    void OnEndShootAnimation(class UAnimMontage* Montage);
    void GetAimingBlurAngle(double& Angle);
    void GetBlurAngle(double& Angle);
    void isUseRightHandAttach(bool& isUse);
    void Get Right Hand Location(FVector& RightHandLocation);
    bool IsUseLeftHandAttach();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetInitializeInterval(double& Time);
    void GetShootInterval(double& Time);
    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void ReceiveTick(float DeltaSeconds);
    void OnReload(int32 bulletsNum);
    void OnReloadStart();
    void OnPullTrigger();
    void ReceiveBeginPlay();
    void OnDetachWeapon(class AActor* detachActor);
    void OnAttachWeapon(class AActor* attachActor);
    void ExecuteUbergraph_BP_RocketLauncher(int32 EntryPoint);
}; // Size: 0x5A0

#endif
