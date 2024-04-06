#ifndef UE4SS_SDK_BP_SkillEffect_PoisonFog_HPP
#define UE4SS_SDK_BP_SkillEffect_PoisonFog_HPP

class ABP_SkillEffect_PoisonFog_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* AttackCollision;                                          // 0x03C8 (size: 0x8)
    double destroyTime;                                                               // 0x03D0 (size: 0x8)

    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_SkillEffect_GrassTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, FPalDamageInfo DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_PoisonFog(int32 EntryPoint);
}; // Size: 0x3D8

#endif
