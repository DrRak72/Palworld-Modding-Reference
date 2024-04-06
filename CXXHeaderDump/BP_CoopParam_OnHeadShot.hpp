#ifndef UE4SS_SDK_BP_CoopParam_OnHeadShot_HPP
#define UE4SS_SDK_BP_CoopParam_OnHeadShot_HPP

class UBP_CoopParam_OnHeadShot_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class UAnimMontage* ClimbAnime;                                                   // 0x00A8 (size: 0x8)
    class UAnimMontage* OnHeadStandAnime;                                             // 0x00B0 (size: 0x8)
    class UAnimMontage* OnHeadAimAnim;                                                // 0x00B8 (size: 0x8)
    class UAnimMontage* OnHeadShootAnim;                                              // 0x00C0 (size: 0x8)
    FVector OnHeadOffset;                                                             // 0x00C8 (size: 0x18)
    FTimerHandle ShootingHandle;                                                      // 0x00E0 (size: 0x8)
    TSubclassOf<class APalBullet> BulletMesh;                                         // 0x00E8 (size: 0x8)
    class UStaticMeshComponent* GunMesh;                                              // 0x00F0 (size: 0x8)
    class AActor* Trainer;                                                            // 0x00F8 (size: 0x8)
    FBP_CoopParam_OnHeadShot_COnShoot OnShoot;                                        // 0x0100 (size: 0x10)
    void OnShoot();
    bool CanShoot;                                                                    // 0x0110 (size: 0x1)
    FShooterSpringCameraAdditionalOffset CameraOffset;                                // 0x0118 (size: 0x30)
    int32 WeaponDamage;                                                               // 0x0148 (size: 0x4)

    void IsShooting(bool& IsShooting);
    void ShootBullet();
    void ReceiveBeginPlay();
    void ShootStart();
    void ShootEnd();
    void ShootExec();
    void ExecuteUbergraph_BP_CoopParam_OnHeadShot(int32 EntryPoint);
    void OnShoot__DelegateSignature();
}; // Size: 0x14C

#endif
