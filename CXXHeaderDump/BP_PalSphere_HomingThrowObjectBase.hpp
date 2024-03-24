#ifndef UE4SS_SDK_BP_PalSphere_HomingThrowObjectBase_HPP
#define UE4SS_SDK_BP_PalSphere_HomingThrowObjectBase_HPP

class ABP_PalSphere_HomingThrowObjectBase_C : public ABP_PalSphere_ThrowObject_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class APalCharacter* TargetPal_0;                                                 // 0x0438 (size: 0x8)
    FVector preLocation_0;                                                            // 0x0440 (size: 0x18)
    bool IsBounce_0;                                                                  // 0x0458 (size: 0x1)
    FRotator ThrowRotator_0;                                                          // 0x0460 (size: 0x18)
    FVector InitVelocity;                                                             // 0x0478 (size: 0x18)
    FVector HomingFowerd;                                                             // 0x0490 (size: 0x18)
    double ZVelocity;                                                                 // 0x04A8 (size: 0x8)
    TMap<class EPalCaptureSphereLevelType, class UMaterialInstance*> MaterialMap;     // 0x04B0 (size: 0x50)
    TMap<class EPalCaptureSphereLevelType, class TSubclassOf<ABP_PalCaptureBodyBase_C>> BodyClassMap; // 0x0500 (size: 0x50)
    EPalCaptureSphereLevelType CaptureLevelType;                                      // 0x0550 (size: 0x1)

    void SetCaptureLevelType(EPalCaptureSphereLevelType LevelType);
    void SetMaterialByType(EPalCaptureSphereLevelType CaptureLevelType);
    void SetAttackTarget(class APalCharacter* Target);
    void GetBodyClass(TSubclassOf<class ABP_PalCaptureBodyBase_C>& bodyClass);
    void Rotate Self(double DeltaTime);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ExecuteUbergraph_BP_PalSphere_HomingThrowObjectBase(int32 EntryPoint);
}; // Size: 0x551

#endif
