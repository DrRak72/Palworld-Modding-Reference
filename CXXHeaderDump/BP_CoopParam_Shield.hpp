#ifndef UE4SS_SDK_BP_CoopParam_Shield_HPP
#define UE4SS_SDK_BP_CoopParam_Shield_HPP

class UBP_CoopParam_Shield_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class APalCharacter* ProtectTarget;                                               // 0x00A8 (size: 0x8)
    FName AttachSocketName;                                                           // 0x00B0 (size: 0x8)
    FTransform StandAttachTransform;                                                  // 0x00C0 (size: 0x60)
    class UAnimMontage* StandMontage;                                                 // 0x0120 (size: 0x8)
    FTransform ReadyAttachTransform;                                                  // 0x0130 (size: 0x60)
    class UAnimMontage* ReadyMontage;                                                 // 0x0190 (size: 0x8)
    class UAnimMontage* AttachStartMontage;                                           // 0x0198 (size: 0x8)
    class UAnimMontage* DetachStartMontage;                                           // 0x01A0 (size: 0x8)
    FName ShieldCollisionComponentTag;                                                // 0x01A8 (size: 0x8)
    bool IsGrabed;                                                                    // 0x01B0 (size: 0x1)

    void OnCompleteCharacterInitialize(class APalCharacter* InCharacter);
    void ChangeFacial(bool IsCoopActionFace);
    void LaunchSheep(double SpeedRate);
    void StopShieldAnimation();
    void PlayShieldAnimation();
    void ChangeAnimationByWeaponState(bool IsAim, bool IsShoot);
    void OnChangeWeaponState(bool IsAim, bool IsShooting);
    void UnbindFromShooterDelegate();
    void BindToShooterDelegate();
    void SetOwnerCollision(bool isEnable);
    void DoDetach(bool IsThrowShield);
    void DoAttach(class APalCharacter* AttachTarget);
    void OnNotifyEnd_E5EB2B1E4F79E35A9836F8942DE27180(FName NotifyName);
    void OnNotifyBegin_E5EB2B1E4F79E35A9836F8942DE27180(FName NotifyName);
    void OnInterrupted_E5EB2B1E4F79E35A9836F8942DE27180(FName NotifyName);
    void OnBlendOut_E5EB2B1E4F79E35A9836F8942DE27180(FName NotifyName);
    void OnCompleted_E5EB2B1E4F79E35A9836F8942DE27180(FName NotifyName);
    void OnNotifyEnd_8FC8CA8643E4463FC59843B864E9D2AD(FName NotifyName);
    void OnNotifyBegin_8FC8CA8643E4463FC59843B864E9D2AD(FName NotifyName);
    void OnInterrupted_8FC8CA8643E4463FC59843B864E9D2AD(FName NotifyName);
    void OnBlendOut_8FC8CA8643E4463FC59843B864E9D2AD(FName NotifyName);
    void OnCompleted_8FC8CA8643E4463FC59843B864E9D2AD(FName NotifyName);
    void PlayAttachStartAnimation();
    void DelayEnableCollision();
    void DetachProcess();
    void ReceiveTick(float DeltaSeconds);
    void DoAttach_ToAll(class APalCharacter* TargetPlayer);
    void ReceiveBeginPlay();
    void DoDetach_ToAll(bool IsThrow);
    void ExecuteUbergraph_BP_CoopParam_Shield(int32 EntryPoint);
}; // Size: 0x1B1

#endif
