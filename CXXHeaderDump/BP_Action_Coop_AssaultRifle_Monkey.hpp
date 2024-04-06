#ifndef UE4SS_SDK_BP_Action_Coop_AssaultRifle_Monkey_HPP
#define UE4SS_SDK_BP_Action_Coop_AssaultRifle_Monkey_HPP

class UBP_Action_Coop_AssaultRifle_Monkey_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)
    double AimRotSpeed;                                                               // 0x0148 (size: 0x8)
    bool IsShooting;                                                                  // 0x0150 (size: 0x1)
    int32 ShootCount;                                                                 // 0x0154 (size: 0x4)
    int32 ShootStopCount;                                                             // 0x0158 (size: 0x4)
    double ShootElapsedTime;                                                          // 0x0160 (size: 0x8)
    double ShootInterval;                                                             // 0x0168 (size: 0x8)
    TSubclassOf<class APalBullet> BulletMesh;                                         // 0x0170 (size: 0x8)
    class UBP_CoopParam_AssaultRifleMode_C* CoopParam;                                // 0x0178 (size: 0x8)
    bool IsMoving;                                                                    // 0x0180 (size: 0x1)

    void UpdateAnimation();
    void ChangeAnime(class UAnimMontage* NewAnime, class UAnimMontage* StopAnime, class UAnimMontage* StopAnime2);
    void SetGunMeshTransform();
    void SetLookAtTarget(bool IsLookAt);
    void GetGunMesh(class USkeletalMeshComponent*& Output);
    void SetGunVisibility(bool IsVisible);
    void ShootBullet();
    void UpdateShoot(double DeltaTime);
    void Is Aim Sufficiently (bool& Result);
    void Turn to Target(double DeltaTime);
    void SetMovementDisable(bool isDisable);
    void UpdateAim(double DeltaTime);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Coop_AssaultRifle_Monkey(int32 EntryPoint);
}; // Size: 0x181

#endif
