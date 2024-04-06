#ifndef UE4SS_SDK_BP_CaptureRope_HPP
#define UE4SS_SDK_BP_CaptureRope_HPP

class ABP_CaptureRope_C : public ABP_ThrowWeaponBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0558 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0560 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0568 (size: 0x8)
    bool IsAttached;                                                                  // 0x0570 (size: 0x1)
    FRotator AimRotator;                                                              // 0x0578 (size: 0x18)
    FRotator NoAimRotator;                                                            // 0x0590 (size: 0x18)
    FVector AimLocation;                                                              // 0x05A8 (size: 0x18)
    FVector NoAimLocation;                                                            // 0x05C0 (size: 0x18)

    bool DecrementBullet();
    void FollowToOwner();
    void On End Shoot Animation(class UAnimMontage* Montage);
    void On Throw();
    void IsSpawnLeftHandRope(class ABP_CaptureRopeLeftHand_C*& LeftHand);
    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
    FName GetEquipSocketName();
    void ReceiveBeginPlay();
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void OnFollow();
    void OnStartAim();
    void OnEndAim();
    void ExecuteUbergraph_BP_CaptureRope(int32 EntryPoint);
}; // Size: 0x5D8

#endif
