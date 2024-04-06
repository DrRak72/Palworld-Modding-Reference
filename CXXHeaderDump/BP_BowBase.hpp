#ifndef UE4SS_SDK_BP_BowBase_HPP
#define UE4SS_SDK_BP_BowBase_HPP

class ABP_BowBase_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UCameraShakeSourceComponent* CameraShakeSource;                             // 0x0540 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0548 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0550 (size: 0x8)
    class AActor* RightHandArrow;                                                     // 0x0558 (size: 0x8)
    bool IsSqueeze;                                                                   // 0x0560 (size: 0x1)
    int32 ChargeCount;                                                                // 0x0564 (size: 0x4)
    bool IsAim;                                                                       // 0x0568 (size: 0x1)
    class UAnimSequence* WeaponAnime_Charge;                                          // 0x0570 (size: 0x8)
    class UAnimSequence* WeaponAnime_ChargeLoop;                                      // 0x0578 (size: 0x8)
    class UAnimSequence* WeaponAnime_Fire;                                            // 0x0580 (size: 0x8)
    class UAnimSequence* WeaponAnime_Idle;                                            // 0x0588 (size: 0x8)
    bool PullCancelFlag;                                                              // 0x0590 (size: 0x1)
    TSubclassOf<class ULegacyCameraShake> CameraShake;                                // 0x0598 (size: 0x8)
    class UCurveFloat* EmissiveCurve;                                                 // 0x05A0 (size: 0x8)
    double EmiisiveCurveInput;                                                        // 0x05A8 (size: 0x8)
    class UNiagaraComponent* MaxChargeEffectHandle;                                   // 0x05B0 (size: 0x8)
    int32 ArrowShootNumber;                                                           // 0x05B8 (size: 0x4)
    TSubclassOf<class ULegacyCameraShake> BowChargedCameraShake;                      // 0x05C0 (size: 0x8)
    class UNiagaraSystem* effect_wind;                                                // 0x05C8 (size: 0x8)
    TArray<class APalBullet*> CreatedBullets;                                         // 0x05D0 (size: 0x10)
    class UNiagaraSystem* Effect_Charge;                                              // 0x05E0 (size: 0x8)

    void IsEnableCameraShake(bool& isEnable);
    bool SeekRightHandOpen();
    void PlayFireSound(class UAkAudioEvent* AkEvent);
    void GetShooterAsset(class UBP_ShooterAnime_BowBase_C*& ShooterAnimBow);
    void CreateArrowBullet(int32 Index);
    void PlayMaxChargeEffect();
    void GetMuzle();
    void SetMaxChargeEffect(double CurveInput);
    void GetDynamicMaterial(class UMaterialInstanceDynamic*& Mid);
    float CalcRange();
    float CalcAccuracy();
    float CalcDPS();
    void GetArrowClass(TSubclassOf<class APalBullet>& arrowClass);
    bool SeekLeftHandOpen();
    void ChangeRideAnim_ChargeAndFire();
    void GetFireChargeLoopAnime(class UAnimMontage*& Loop);
    void RightHandArowSetHide(bool Hide);
    void BowAnime_Stop();
    void BowAnime_Fire();
    void BowAnime_ChargeLoop();
    void BowAnime_Charge();
    void StopLoopAnime();
    void ReloadArrow();
    void Shot();
    void GetTargetPosition(FVector& targetPosition);
    void CreateArrowModel();
    bool IsUseLeftHandAttach();
    FName GetEquipSocketName();
    void OnDetachWeapon(class AActor* detachActor);
    void OnPullTrigger();
    void OnStartAim();
    void OnEndAim();
    void OnWeaponNotify(EWeaponNotifyType Type);
    void OnAttachWeapon(class AActor* attachActor);
    void OnPullCancel();
    void ReceiveTick(float DeltaSeconds);
    void OnReleaseTrigger();
    void ExecuteUbergraph_BP_BowBase(int32 EntryPoint);
}; // Size: 0x5E8

#endif
