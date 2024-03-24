#ifndef UE4SS_SDK_BP_GrapplingGun_HPP
#define UE4SS_SDK_BP_GrapplingGun_HPP

class ABP_GrapplingGun_C : public APalWeaponBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0538 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0540 (size: 0x8)
    class USkeletalMeshComponent* weapon;                                             // 0x0548 (size: 0x8)
    bool IsShooting;                                                                  // 0x0550 (size: 0x1)
    FHitResult GrappleEnd;                                                            // 0x0558 (size: 0xE8)
    FVector GrappleLocation;                                                          // 0x0640 (size: 0x18)
    bool IsEquip;                                                                     // 0x0658 (size: 0x1)
    double CableMaxLength;                                                            // 0x0660 (size: 0x8)
    double CableShootSpeed;                                                           // 0x0668 (size: 0x8)
    double CableReturnSpeed;                                                          // 0x0670 (size: 0x8)
    double PlayerMoveSpeed;                                                           // 0x0678 (size: 0x8)
    FVector ShootDirection;                                                           // 0x0680 (size: 0x18)
    bool IsPull;                                                                      // 0x0698 (size: 0x1)
    FVector StartLocation;                                                            // 0x06A0 (size: 0x18)
    FVector GrappleMoveEndLocation;                                                   // 0x06B8 (size: 0x18)

    void CalcShootStartParam(FVector& ShootDirection, FVector& StartLocation);
    void PullCable(double DeltaTime, bool& IsEnd);
    void IsGraplingAction(bool& bSuccess);
    void ShotCable();
    void On Grapling Action Start();
    void OnGraplingActionEnd();
    void GetCurrentCableLength(double& CableLength);
    void ShowHitPoint();
    void UpdateCable(double DeltaTime);
    void EndCable(bool IsAnimationCancel);
    void UpdateRopeEndLocation();
    void Start Graplling();
    void ShowLine();
    void OnPullTrigger();
    void ReceiveTick(float DeltaSeconds);
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void ReceiveBeginPlay();
    void OnActionEnd(const class UPalActionBase* action);
    void ExecuteUbergraph_BP_GrapplingGun(int32 EntryPoint);
}; // Size: 0x6D0

#endif
