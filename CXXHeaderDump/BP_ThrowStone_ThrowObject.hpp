#ifndef UE4SS_SDK_BP_ThrowStone_ThrowObject_HPP
#define UE4SS_SDK_BP_ThrowStone_ThrowObject_HPP

class ABP_ThrowStone_ThrowObject_C : public ABP_ThrowObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03A0 (size: 0x8)
    class APalCharacter* TargetPal;                                                   // 0x03A8 (size: 0x8)
    FVector preLocation;                                                              // 0x03B0 (size: 0x18)
    bool IsBounce;                                                                    // 0x03C8 (size: 0x1)
    FRotator ThrowRotator;                                                            // 0x03D0 (size: 0x18)

    void UpdateRotator(double DeltaTime);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ExecuteUbergraph_BP_ThrowStone_ThrowObject(int32 EntryPoint);
}; // Size: 0x3E8

#endif
