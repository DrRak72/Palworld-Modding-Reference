#ifndef UE4SS_SDK_BP_SkillEffect_BreathBulletBase_HPP
#define UE4SS_SDK_BP_SkillEffect_BreathBulletBase_HPP

class ABP_SkillEffect_BreathBulletBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Collision;                                                // 0x03C8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D0 (size: 0x8)
    double RootScale;                                                                 // 0x03D8 (size: 0x8)
    class UNiagaraSystem* Const_HitEffect;                                            // 0x03E0 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_BreathBulletBase(int32 EntryPoint);
}; // Size: 0x3E8

#endif
