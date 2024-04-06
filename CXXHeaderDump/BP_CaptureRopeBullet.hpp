#ifndef UE4SS_SDK_BP_CaptureRopeBullet_HPP
#define UE4SS_SDK_BP_CaptureRopeBullet_HPP

class ABP_CaptureRopeBullet_C : public APalBullet
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0370 (size: 0x8)
    class USphereComponent* CaptureHitSphere;                                         // 0x0378 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0380 (size: 0x8)
    bool IsCapture;                                                                   // 0x0388 (size: 0x1)
    class APalCharacter* CaptureCharacter;                                            // 0x0390 (size: 0x8)
    class ABP_CaptureRopeLeftHand_C* LeftHandObject;                                  // 0x0398 (size: 0x8)

    void FindLeftHandRope(class ABP_CaptureRopeLeftHand_C*& left hand object);
    void DestroyCheck();
    void CheckRopeLength();
    void HasWeaponIsRope(bool& Has);
    void GetOwnerWeaponLocation(FVector& Location);
    bool IsDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_CaptureRopeBullet_CaptureHitSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void BndEvt__BP_CaptureRopeBullet_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const FHitResult& ImpactResult);
    void ExecuteUbergraph_BP_CaptureRopeBullet(int32 EntryPoint);
}; // Size: 0x3A0

#endif
