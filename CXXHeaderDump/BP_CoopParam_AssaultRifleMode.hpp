#ifndef UE4SS_SDK_BP_CoopParam_AssaultRifleMode_HPP
#define UE4SS_SDK_BP_CoopParam_AssaultRifleMode_HPP

class UBP_CoopParam_AssaultRifleMode_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class UAnimMontage* MovingAnim;                                                   // 0x00A8 (size: 0x8)
    class UAnimMontage* ShootingAnim;                                                 // 0x00B0 (size: 0x8)
    class UAnimMontage* IdleAnim;                                                     // 0x00B8 (size: 0x8)
    TSubclassOf<class APalBullet> BulletMesh;                                         // 0x00C0 (size: 0x8)
    class USkeletalMeshComponent* GunMesh;                                            // 0x00C8 (size: 0x8)
    class AActor* Trainer;                                                            // 0x00D0 (size: 0x8)
    FBP_CoopParam_AssaultRifleMode_COnShoot OnShoot;                                  // 0x00D8 (size: 0x10)
    void OnShoot();
    FVector AimStartPoint;                                                            // 0x00E8 (size: 0x18)
    double AimBlurAngle;                                                              // 0x0100 (size: 0x8)

    void CalcShootBlurRotator(double BlurAngle, FRotator& BlurRotator);
    void GetWeaponDamage(int32& Damage);
    void ShootBullet();
    void ReceiveBeginPlay();
    void ShootStart();
    void ExecuteUbergraph_BP_CoopParam_AssaultRifleMode(int32 EntryPoint);
    void OnShoot__DelegateSignature();
}; // Size: 0x108

#endif
