#ifndef UE4SS_SDK_BP_SkillEffect_SeedMine_HPP
#define UE4SS_SDK_BP_SkillEffect_SeedMine_HPP

class ABP_SkillEffect_SeedMine_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* SpawnPos;                                                 // 0x03C8 (size: 0x8)
    class USphereComponent* StopPos;                                                  // 0x03D0 (size: 0x8)
    class UCapsuleComponent* Collision;                                               // 0x03D8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03E0 (size: 0x8)
    class UNiagaraComponent* NS_FirstEffect;                                          // 0x03E8 (size: 0x8)
    double Gravity;                                                                   // 0x03F0 (size: 0x8)
    double AttachEffectScale;                                                         // 0x03F8 (size: 0x8)
    double ShotStartTime;                                                             // 0x0400 (size: 0x8)
    double ExplosionTime;                                                             // 0x0408 (size: 0x8)
    int32 Explosion_volume;                                                           // 0x0410 (size: 0x4)
    int32 Explosion_Num;                                                              // 0x0414 (size: 0x4)
    double Explosion_Rot_Y;                                                           // 0x0418 (size: 0x8)
    double BulletExtent;                                                              // 0x0420 (size: 0x8)
    FVector BulletPos;                                                                // 0x0428 (size: 0x18)
    FRotator BulletRot;                                                               // 0x0440 (size: 0x18)
    float Arc Param;                                                                  // 0x0458 (size: 0x4)
    double MineSpeedConstant;                                                         // 0x0460 (size: 0x8)
    bool IsHit;                                                                       // 0x0468 (size: 0x1)
    bool HitGround;                                                                   // 0x0469 (size: 0x1)
    bool OnRide;                                                                      // 0x046A (size: 0x1)
    bool EndWait;                                                                     // 0x046B (size: 0x1)
    class UNiagaraComponent* AttachedEffect;                                          // 0x0470 (size: 0x8)
    double MineSpeed;                                                                 // 0x0478 (size: 0x8)
    bool Attacked;                                                                    // 0x0480 (size: 0x1)

    void SetTarget();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Explosion();
    void ReceiveBeginPlay();
    void BndEvt__BP_SkillEffect_IcicleThrow_SpawnPos_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void OnAttackDelegate_イベント_0(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void BndEvt__BP_SkillEffect_SeedMine_MovementSphereRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_SeedMine(int32 EntryPoint);
}; // Size: 0x481

#endif
