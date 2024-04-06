#ifndef UE4SS_SDK_BP_Arrow_HPP
#define UE4SS_SDK_BP_Arrow_HPP

class ABP_Arrow_C : public ABP_AttackBulletBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class USkeletalMeshComponent* SK_Weapon_Arrow_001;                                // 0x0378 (size: 0x8)
    bool IsHitAble;                                                                   // 0x0380 (size: 0x1)
    double DamageRate;                                                                // 0x0388 (size: 0x8)
    bool BigTrail;                                                                    // 0x0390 (size: 0x1)
    bool Stung;                                                                       // 0x0391 (size: 0x1)
    TSubclassOf<class UPalSoundSlot> PalSoundSlotClass;                               // 0x0398 (size: 0x8)
    class UNiagaraSystem* Effect_Trail_S;                                             // 0x03A0 (size: 0x8)
    class UNiagaraSystem* Effect_Trail_L;                                             // 0x03A8 (size: 0x8)
    class ABP_CommonTrailActor_C* TrailActor;                                         // 0x03B0 (size: 0x8)
    double TrailFadeOutTime;                                                          // 0x03B8 (size: 0x8)
    class UCurveFloat* TrailFadeOutCurve;                                             // 0x03C0 (size: 0x8)

    void OnHitToActor(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ShowHitEffect(FVector Point);
    void SetBulletSpeedRate(double Rate, bool BigTrail);
    void CreateStungArrow(class AActor* OtherActor, FVector HitPoint);
    void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Arrow(int32 EntryPoint);
}; // Size: 0x3C8

#endif
