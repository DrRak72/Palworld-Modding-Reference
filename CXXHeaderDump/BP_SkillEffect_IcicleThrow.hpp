#ifndef UE4SS_SDK_BP_SkillEffect_IcicleThrow_HPP
#define UE4SS_SDK_BP_SkillEffect_IcicleThrow_HPP

class ABP_SkillEffect_IcicleThrow_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Effect_Charge;                                           // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Effect_MainBullet;                                       // 0x03D0 (size: 0x8)
    class UCapsuleComponent* AttackCollision;                                         // 0x03D8 (size: 0x8)
    class USphereComponent* ChildSpawnPosition;                                       // 0x03E0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03E8 (size: 0x8)
    double AttachEffectScale;                                                         // 0x03F0 (size: 0x8)
    double ShotStartTime;                                                             // 0x03F8 (size: 0x8)
    double ExplosionTime;                                                             // 0x0400 (size: 0x8)
    int32 Explosion_volume;                                                           // 0x0408 (size: 0x4)
    int32 Explosion_Num;                                                              // 0x040C (size: 0x4)
    double Explosion_Rot_Y;                                                           // 0x0410 (size: 0x8)
    double BulletExtent;                                                              // 0x0418 (size: 0x8)
    FVector BulletPos;                                                                // 0x0420 (size: 0x18)
    FRotator BulletRot;                                                               // 0x0438 (size: 0x18)
    bool IsHit;                                                                       // 0x0450 (size: 0x1)
    bool HitGround;                                                                   // 0x0451 (size: 0x1)
    bool OnRide;                                                                      // 0x0452 (size: 0x1)
    bool EndWait;                                                                     // 0x0453 (size: 0x1)
    class UNiagaraComponent* AttachedEffect;                                          // 0x0458 (size: 0x8)
    double Rate of ImpactPoint;                                                       // 0x0460 (size: 0x8)
    int32 RandSeedNum;                                                                // 0x0468 (size: 0x4)
    bool IsCharging;                                                                  // 0x046C (size: 0x1)
    double MainBulletSize;                                                            // 0x0470 (size: 0x8)
    double CurrentTime;                                                               // 0x0478 (size: 0x8)
    double MainBulletSpeed;                                                           // 0x0480 (size: 0x8)

    void ShootMainBullet();
    void UpdateMainBulletScale();
    void UpdateMainBulletRotation();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ExplosionMainBullet();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_SkillEffect_IcicleThrow_MovementSphereRoot_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_IcicleThrow(int32 EntryPoint);
}; // Size: 0x488

#endif
