#ifndef UE4SS_SDK_BP_SkillEffect_SeedMine_Seed_HPP
#define UE4SS_SDK_BP_SkillEffect_SeedMine_Seed_HPP

class ABP_SkillEffect_SeedMine_Seed_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_CommonSkill_SeedMine_BAN;                             // 0x03C8 (size: 0x8)
    class UNiagaraComponent* NS_SeedMine_Seed;                                        // 0x03D0 (size: 0x8)
    class USphereComponent* AtackFeeld;                                               // 0x03D8 (size: 0x8)
    class USphereComponent* GetLengBullet;                                            // 0x03E0 (size: 0x8)
    class USphereComponent* GetLengPal;                                               // 0x03E8 (size: 0x8)
    class USphereComponent* coll;                                                     // 0x03F0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03F8 (size: 0x8)
    double MineSpeed;                                                                 // 0x0400 (size: 0x8)
    double MinSpeed;                                                                  // 0x0408 (size: 0x8)
    float RandSpeed;                                                                  // 0x0410 (size: 0x4)
    double HitSec;                                                                    // 0x0418 (size: 0x8)
    double Gravity;                                                                   // 0x0420 (size: 0x8)
    bool HitGround;                                                                   // 0x0428 (size: 0x1)
    bool Is Hit;                                                                      // 0x0429 (size: 0x1)
    bool isMine;                                                                      // 0x042A (size: 0x1)
    bool Attacked;                                                                    // 0x042B (size: 0x1)
    float LimitTime;                                                                  // 0x042C (size: 0x4)
    bool HasExploded;                                                                 // 0x0430 (size: 0x1)

    void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);
    void BndEvt__BP_SkillEffect_SeedMine_Seed_collision_0_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_SkillEffect_SeedMine_Seed_HitLeng_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_SkillEffect_SeedMine_Seed_GetLengBullet_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void OnLimitTime();
    void BndEvt__BP_SkillEffect_SeedMine_Seed_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_SkillEffect_SeedMine_Seed(int32 EntryPoint);
}; // Size: 0x431

#endif
