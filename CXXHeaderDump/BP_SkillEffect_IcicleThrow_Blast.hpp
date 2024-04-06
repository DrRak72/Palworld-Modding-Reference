#ifndef UE4SS_SDK_BP_SkillEffect_IcicleThrow_Blast_HPP
#define UE4SS_SDK_BP_SkillEffect_IcicleThrow_Blast_HPP

class ABP_SkillEffect_IcicleThrow_Blast_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Effect_Fragment;                                         // 0x03C8 (size: 0x8)
    class UBoxComponent* AttackTrigger_Height;                                        // 0x03D0 (size: 0x8)
    class USphereComponent* AttackTrigger_Inner;                                      // 0x03D8 (size: 0x8)
    class USphereComponent* AttackTrigger_Outer;                                      // 0x03E0 (size: 0x8)
    class USceneComponent* Group_Collision;                                           // 0x03E8 (size: 0x8)
    class UNiagaraComponent* Effect_Blast;                                            // 0x03F0 (size: 0x8)
    double ExpandSpeed;                                                               // 0x03F8 (size: 0x8)
    TArray<class USphereComponent*> AttachedAttackCollisions;                         // 0x0400 (size: 0x10)
    TArray<class AActor*> ActorsInTrigger_Inner;                                      // 0x0410 (size: 0x10)
    TArray<class AActor*> ActorsInTrigger_Outer;                                      // 0x0420 (size: 0x10)
    TArray<class AActor*> ActorsInTrigger_Height;                                     // 0x0430 (size: 0x10)
    bool DrawDebugBlast;                                                              // 0x0440 (size: 0x1)
    bool StartExpandInnerTrigger;                                                     // 0x0441 (size: 0x1)
    class UCurveFloat* ExpandSpeedRateCurve;                                          // 0x0448 (size: 0x8)
    double Timer;                                                                     // 0x0450 (size: 0x8)
    float CollisionLifetime;                                                          // 0x0458 (size: 0x4)

    void UpdateTimer(double DeltaTime);
    void CheckAttackTriggers();
    void DrawDebug();
    void ExpandAttackTrigger(double DeltaTime);
    void DisableAttachedAttackCollision(class AActor* Target);
    void DestroyAllAttachedAttackCollisions();
    void AttachOrEnableAttackCollisionToTarget(class AActor* Target);
    void EndBlast();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Outer_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Inner_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_SkillEffect_IcicleThrow_Blast_AttackTrigger_Height_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void カスタムイベント_0();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_IcicleThrow_Blast(int32 EntryPoint);
}; // Size: 0x45C

#endif
