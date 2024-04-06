#ifndef UE4SS_SDK_BP_SniperRifleBase_HPP
#define UE4SS_SDK_BP_SniperRifleBase_HPP

class ABP_SniperRifleBase_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0540 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0548 (size: 0x8)
    double ShotInterval;                                                              // 0x0550 (size: 0x8)
    bool CanShootFlag;                                                                // 0x0558 (size: 0x1)
    class AActor* Camera;                                                             // 0x0560 (size: 0x8)
    bool IsLocalPlayer;                                                               // 0x0568 (size: 0x1)
    TArray<TSoftObjectPtr<UMeshComponent>> HideMesh;                                  // 0x0570 (size: 0x10)
    class UWBP_SniperScopeSight_C* ScopeWight;                                        // 0x0580 (size: 0x8)
    bool IsAiming;                                                                    // 0x0588 (size: 0x1)
    double tempPlusPich;                                                              // 0x0590 (size: 0x8)
    double AddPich;                                                                   // 0x0598 (size: 0x8)
    FPalDataTableRowName_SoundID FireSoundId;                                         // 0x05A0 (size: 0x8)

    void PlayFireSound();
    void GetBulletClass(TSubclassOf<class APalBullet>& Bullet);
    float CalcRange();
    float CalcAccuracy();
    float CalcDPS();
    bool SeekLeftHandOpen();
    bool IsEnableAutoAim();
    FTransform GetLeftHandTransform();
    void CalcDeltaPich2(double& Degree);
    void CalcDeltaPich(double& Degree);
    void CalcDeltaPich3(double& deltaDegree);
    void GetTargetPosition(FVector& targetPosition);
    void OnShot();
    bool IsUseLeftHandAttach();
    FName GetEquipSocketName();
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void OnPullTrigger();
    void OnEndAim();
    void OnStartAim();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SniperRifleBase(int32 EntryPoint);
}; // Size: 0x5A8

#endif
