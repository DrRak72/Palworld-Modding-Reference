#ifndef UE4SS_SDK_BP_StationaryLauncher_BowGun_HPP
#define UE4SS_SDK_BP_StationaryLauncher_BowGun_HPP

class ABP_StationaryLauncher_BowGun_C : public ABP_NormalStationaryLauncherBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UArrowComponent* MuzzleDirection;                                           // 0x05A8 (size: 0x8)
    class UArrowComponent* RotatePartPoint;                                           // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* DefenseFacilityMedieval_Bolt;                         // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* DefenseFacilityMedieval_Sand;                         // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* RotatePart;                                           // 0x05C8 (size: 0x8)
    class USkeletalMeshComponent* DefenseFacilityMedieval_Base;                       // 0x05D0 (size: 0x8)
    double PitchRange;                                                                // 0x05D8 (size: 0x8)
    class UABP_DefenseFacilityMedieval_Base_Skeleton_C* ABP_BowGun;                   // 0x05E0 (size: 0x8)
    class UAnimMontage* ShootMontage;                                                 // 0x05E8 (size: 0x8)
    FRotator Rotation;                                                                // 0x05F0 (size: 0x18)

    void GetMuzzleEffect(class UNiagaraSystem*& NewParam);
    void GetMuzzleRotateLocation(FVector& RotateLocation);
    void GetMontagePlayRate(double& PlayRate);
    void OnRep_Rotation();
    float GetAttackableDistance();
    void GetRotateMuzzleRef(class UStaticMeshComponent*& Muzzle);
    float GetAttackableAngle();
    void GetPullTriggerInterval(double& PullTriggerInterval);
    void GetShootNumMax(int32& ShootNumMax);
    void CalcBarrelDirection(FVector TargetLocation, FVector OriginWorldLocation, double BarrelUpOffset, FVector& Direction);
    int32 GetWeaponDamage();
    void GetMuzzleRotator(FRotator& Rotator);
    void GetShootInterval(double& Time);
    void GetBlurAngle(double& Angle);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void RotatePitchToTarget(FVector TargetLocation, double LerpSpeed, double DeltaTime);
    void OnNotifyEnd_7A4E4031410EE30F3A946787672F311A(FName NotifyName);
    void OnNotifyBegin_7A4E4031410EE30F3A946787672F311A(FName NotifyName);
    void OnInterrupted_7A4E4031410EE30F3A946787672F311A(FName NotifyName);
    void OnBlendOut_7A4E4031410EE30F3A946787672F311A(FName NotifyName);
    void OnCompleted_7A4E4031410EE30F3A946787672F311A(FName NotifyName);
    void ReceiveBeginPlay();
    void OnShoot();
    void ExecuteUbergraph_BP_StationaryLauncher_BowGun(int32 EntryPoint);
}; // Size: 0x608

#endif
