#ifndef UE4SS_SDK_BP_PenguinLauncher_HPP
#define UE4SS_SDK_BP_PenguinLauncher_HPP

class ABP_PenguinLauncher_C : public ABP_RocketLauncher_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    FName Flag Name;                                                                  // 0x05A8 (size: 0x8)
    class UPalShooterComponent* Shooter;                                              // 0x05B0 (size: 0x8)
    FVector BulletReloadLocationStart;                                                // 0x05B8 (size: 0x18)
    FVector BulletReloadLocationEnd;                                                  // 0x05D0 (size: 0x18)
    FRotator BulletReloadRotationStart;                                               // 0x05E8 (size: 0x18)
    FRotator BulletReloadRotationEnd;                                                 // 0x0600 (size: 0x18)
    bool IsBulletInterpolation;                                                       // 0x0618 (size: 0x1)
    double BulletInterpolTime;                                                        // 0x0620 (size: 0x8)
    int32 WeaponDamageByOutSide;                                                      // 0x0628 (size: 0x4)
    class AActor* Attacker;                                                           // 0x0630 (size: 0x8)
    bool IsShootComplated;                                                            // 0x0638 (size: 0x1)

    class AActor* GetWeaponAttacker();
    void UpdateBulletTransform(double Delta);
    void SetDisplayReloadCompleted();
    void SetDisplayReloadStart(FVector StartLocation, FRotator StartRotation);
    int32 GetWeaponDamage();
    void ChangeTransformForRocketReload(FVector Location, FRotator Rotation);
    void ChangeTransformForRocketWhenReloadIsDone(FVector Location, FRotator Lotation);
    void GetBulletClass(TSubclassOf<class APalBullet>& NewParam);
    void OnPullTrigger();
    void ShootComplated();
    void OnAttachWeapon(class AActor* attachActor);
    void ReceiveTick(float DeltaSeconds);
    void SetWeaponDamage(int32 Damageam);
    void SetAttacker(class AActor* AttackerPal);
    void OnWeaponNotify(EWeaponNotifyType Type);
    void OnReloadStart();
    void ExecuteUbergraph_BP_PenguinLauncher(int32 EntryPoint);
}; // Size: 0x639

#endif
