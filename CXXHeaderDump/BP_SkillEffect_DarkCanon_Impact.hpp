#ifndef UE4SS_SDK_BP_SkillEffect_DarkCanon_Impact_HPP
#define UE4SS_SDK_BP_SkillEffect_DarkCanon_Impact_HPP

class ABP_SkillEffect_DarkCanon_Impact_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* ImpactEffect;                                            // 0x03C8 (size: 0x8)
    class USphereComponent* ImpactDamage;                                             // 0x03D0 (size: 0x8)
    float MaxEffectDuration;                                                          // 0x03D8 (size: 0x4)
    float CollisionEnableTime;                                                        // 0x03DC (size: 0x4)

    void ReceiveBeginPlay();
    void EndEffect();
    void FadeOutEffect(double DeltaSecond);
    void CollisionDisable();
    void ExecuteUbergraph_BP_SkillEffect_DarkCanon_Impact(int32 EntryPoint);
}; // Size: 0x3E0

#endif
