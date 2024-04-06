#ifndef UE4SS_SDK_BP_StationaryLauncher_Minigun_HPP
#define UE4SS_SDK_BP_StationaryLauncher_Minigun_HPP

class ABP_StationaryLauncher_Minigun_C : public ABP_NormalStationaryLauncherBase_C
{
    class UArrowComponent* MuzzleDirection;                                           // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* M2HMG_BulletBelt;                                     // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* M2HMG_Gun;                                            // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* M2HMG_RotatePart;                                     // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* M2HMG_Bipod;                                          // 0x05C0 (size: 0x8)
    double PitchRange;                                                                // 0x05C8 (size: 0x8)
    double ShootInterval;                                                             // 0x05D0 (size: 0x8)

    void GetRotateMuzzleRef(class UStaticMeshComponent*& Muzzle);
    float GetAttackableDistance();
    float GetAttackableAngle();
    void GetPullTriggerInterval(double& PullTriggerInterval);
    void GetShootNumMax(int32& ShootNumMax);
    void CalcBarrelDirection(FVector TargetLocation, FVector OriginWorldLocation, double BarrelUpOffset, FVector& Direction);
    void OnShoot();
    int32 GetWeaponDamage();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetShootInterval(double& Time);
    void GetBlurAngle(double& Angle);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void RotatePitchToTarget(FVector TargetLocation, double LerpSpeed, double DeltaTime);
}; // Size: 0x5D8

#endif
