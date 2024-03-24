#ifndef UE4SS_SDK_BP_PalSphere_ThrowObject_HPP
#define UE4SS_SDK_BP_PalSphere_ThrowObject_HPP

class ABP_PalSphere_ThrowObject_C : public ABP_ThrowCaptureObjectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class UNiagaraComponent* Trail;                                                   // 0x03B8 (size: 0x8)
    class USkeletalMeshComponent* SK_Weapon_PalSphere_001;                            // 0x03C0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03C8 (size: 0x8)
    class APalCharacter* TargetPal;                                                   // 0x03D0 (size: 0x8)
    FVector preLocation;                                                              // 0x03D8 (size: 0x18)
    bool IsBounce;                                                                    // 0x03F0 (size: 0x1)
    FRotator ThrowRotator;                                                            // 0x03F8 (size: 0x18)
    class UNiagaraSystem* sneakEffect;                                                // 0x0410 (size: 0x8)
    bool tempCaptureAble;                                                             // 0x0418 (size: 0x1)
    FPalDataTableRowName_SoundID SoundId_Bounce;                                      // 0x041C (size: 0x8)
    FPalDataTableRowName_SoundID SoundId_HitPal;                                      // 0x0424 (size: 0x8)
    bool IsLocalControlled;                                                           // 0x042C (size: 0x1)
    bool IsInServer;                                                                  // 0x042D (size: 0x1)
    bool IsSneakHit;                                                                  // 0x042E (size: 0x1)

    void GetOwnerCharacterOrRidingCharacter(class AActor*& RidingCharacter);
    void IsOwnerLocalControlActor(bool& IsLocalControlActor);
    void OnSpawnJudgeBall(FGuid SpawnGUID, class AActor* SpawnActor);
    void Play Sound Bounce(FHitResult HitResult);
    void IsCountDestroy(bool& IsDestroy);
    void Capture Start Process After Delay(class ABP_PalCaptureBodyBase_C* Body, class APalCharacter* TargetActor, bool SneakAttack);
    void SetProjectileMovement(class AActor* HitActor);
    void CaptureStartProcess();
    void IsCaptureablePal(class AActor* TargetActor, bool& Captureable, class APalCharacter*& TargetPalCharacter);
    void GetMaxBoundCount(int32& Count);
    void GetBodyClass(TSubclassOf<class ABP_PalCaptureBodyBase_C>& bodyClass);
    void UpdateRotator(double DeltaTime);
    void BndEvt__BP_CaptureDrone_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_CaptureDrone_ThrowObject_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void DelayCaptureBodyStart(class ABP_PalCaptureBodyBase_C* BodyActor, class APalCharacter* Target, double Delay, bool SneakAttack);
    void ExecuteUbergraph_BP_PalSphere_ThrowObject(int32 EntryPoint);
}; // Size: 0x42F

#endif
