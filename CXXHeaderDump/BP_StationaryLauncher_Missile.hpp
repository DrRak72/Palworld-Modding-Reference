#ifndef UE4SS_SDK_BP_StationaryLauncher_Missile_HPP
#define UE4SS_SDK_BP_StationaryLauncher_Missile_HPP

class ABP_StationaryLauncher_Missile_C : public ABP_NormalStationaryLauncherBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* DefenseFacilityMedieval_Sand;                         // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* M2HMG_RotatePart;                                     // 0x05B0 (size: 0x8)
    class UPoseableMeshComponent* PoseableMesh;                                       // 0x05B8 (size: 0x8)
    class UArrowComponent* RotatePartPoint;                                           // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* SM_MultiMissle_Launcher_R;                            // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* SM_MultiMissle_Launcher_L;                            // 0x05D0 (size: 0x8)
    class UStaticMeshComponent* SM_Missile6;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* SM_Missile1;                                          // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* SM_Missile2;                                          // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* SM_Missile3;                                          // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* SM_Missile4;                                          // 0x05F8 (size: 0x8)
    class UStaticMeshComponent* SM_Missile5;                                          // 0x0600 (size: 0x8)
    class UStaticMeshComponent* SM_Missile8;                                          // 0x0608 (size: 0x8)
    class UStaticMeshComponent* SM_Missile10;                                         // 0x0610 (size: 0x8)
    class UStaticMeshComponent* SM_Missile11;                                         // 0x0618 (size: 0x8)
    class UStaticMeshComponent* SM_Missile12;                                         // 0x0620 (size: 0x8)
    class UStaticMeshComponent* SM_Missile13;                                         // 0x0628 (size: 0x8)
    class UStaticMeshComponent* SM_Missile7;                                          // 0x0630 (size: 0x8)
    class UArrowComponent* MuzzleDirection;                                           // 0x0638 (size: 0x8)
    double PitchRange;                                                                // 0x0640 (size: 0x8)
    double ShootInterval;                                                             // 0x0648 (size: 0x8)
    TArray<FFMissileMuzzleList> MuzzleList;                                           // 0x0650 (size: 0x10)
    int32 MuzzleIndex;                                                                // 0x0660 (size: 0x4)
    double MissileBlur;                                                               // 0x0668 (size: 0x8)
    TArray<FFMissileMuzzleList> MuzzleList_Multi;                                     // 0x0670 (size: 0x10)
    FRotator Rotation;                                                                // 0x0680 (size: 0x18)
    FName HorizontalBoneName;                                                         // 0x0698 (size: 0x8)
    FName VerticalBoneName;                                                           // 0x06A0 (size: 0x8)

    void OnRep_Rotation();
    void GetMuzzleRotateLocation(FVector& RotateLocation);
    void ShootBullet();
    void ShootMiso();
    void OnSpawnedBullet(class APalBullet* Bullet);
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
    void OnReleaseTrigger();
    void ExecuteUbergraph_BP_StationaryLauncher_Missile(int32 EntryPoint);
}; // Size: 0x6A8

#endif
