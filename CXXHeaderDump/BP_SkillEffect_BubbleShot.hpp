#ifndef UE4SS_SDK_BP_SkillEffect_BubbleShot_HPP
#define UE4SS_SDK_BP_SkillEffect_BubbleShot_HPP

class ABP_SkillEffect_BubbleShot_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Collision;                                                // 0x03C8 (size: 0x8)
    class UNiagaraComponent* BubbleShot;                                              // 0x03D0 (size: 0x8)
    class USphereComponent* SpawnPos;                                                 // 0x03D8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03E0 (size: 0x8)
    int32 Shot_volume;                                                                // 0x03E8 (size: 0x4)
    double Shot_extent;                                                               // 0x03F0 (size: 0x8)
    double ShotSpan;                                                                  // 0x03F8 (size: 0x8)
    double Temp time;                                                                 // 0x0400 (size: 0x8)
    int32 Shot_Count;                                                                 // 0x0408 (size: 0x4)

    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Explosion();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_BubbleShot(int32 EntryPoint);
}; // Size: 0x40C

#endif
