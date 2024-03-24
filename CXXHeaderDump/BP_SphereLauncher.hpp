#ifndef UE4SS_SDK_BP_SphereLauncher_HPP
#define UE4SS_SDK_BP_SphereLauncher_HPP

class ABP_SphereLauncher_C : public ABP_RocketLauncher_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    double ScatteredAngle;                                                            // 0x05A8 (size: 0x8)
    TArray<FName> ItemNameList;                                                       // 0x05B0 (size: 0x10)
    TArray<class TSubclassOf<ABP_PalSphere_ThrowObject_C>> bulletClass;               // 0x05C0 (size: 0x10)
    int32 CurrentBallIndex;                                                           // 0x05D0 (size: 0x4)
    TMap<class FName, class EPalCaptureSphereLevelType> ItemName_LevelTypeMap;        // 0x05D8 (size: 0x50)
    FBP_SphereLauncher_COnLaunchPalSphere OnLaunchPalSphere;                          // 0x0628 (size: 0x10)
    void OnLaunchPalSphere(class AActor* Bullet);
    double Const_BulletSpeed;                                                         // 0x0638 (size: 0x8)

    void GetMuzzleTransform(FTransform& Transform);
    void GetShootTransformList(double BaseAnglePitch, double BaseAngleYaw, double BlurAngle, TArray<FTransform>& ShootTransformList);
    void GetAimingBlurAngle(double& Angle);
    void GetBlurAngle(double& Angle);
    void OnShoot();
    void GetShootInterval(double& Time);
    void GetMuzzleRotator(FRotator& Rotator);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void ShootBullet();
    void ChangeTransformForRocketWhenReloadIsDone(FVector Location, FRotator Lotation);
    void ChangeTransformForRocketReload(FVector Location, FRotator Rotation);
    void ReceiveBeginPlay();
    void CustomEvent(int32 bulletsNum);
    void ExecuteUbergraph_BP_SphereLauncher(int32 EntryPoint);
    void OnLaunchPalSphere__DelegateSignature(class AActor* Bullet);
}; // Size: 0x640

#endif
