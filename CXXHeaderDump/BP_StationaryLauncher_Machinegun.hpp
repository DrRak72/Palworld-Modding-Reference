#ifndef UE4SS_SDK_BP_StationaryLauncher_Machinegun_HPP
#define UE4SS_SDK_BP_StationaryLauncher_Machinegun_HPP

class ABP_StationaryLauncher_Machinegun_C : public ABP_NormalStationaryLauncherBase_C
{
    class UPoseableMeshComponent* PoseableMesh;                                       // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* M2HMG_RotatePart;                                     // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* DefenseFacilityMedieval_Sand;                         // 0x05B0 (size: 0x8)
    class UArrowComponent* RotatePartPoint;                                           // 0x05B8 (size: 0x8)
    class UArrowComponent* MuzzleDirection;                                           // 0x05C0 (size: 0x8)
    double PitchRange;                                                                // 0x05C8 (size: 0x8)
    FRotator Rotation;                                                                // 0x05D0 (size: 0x18)
    FName HorizontalBoneName;                                                         // 0x05E8 (size: 0x8)
    FName VerticalBoneName;                                                           // 0x05F0 (size: 0x8)

    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void OnRep_Rotation();
    void RotatePitchToTarget(FVector TargetLocation, double LerpSpeed, double DeltaTime);
    void GetMuzzleRotateLocation(FVector& RotateLocation);
    float GetAttackableDistance();
    void GetRotateMuzzleRef(class UStaticMeshComponent*& Muzzle);
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
}; // Size: 0x5F8

#endif
