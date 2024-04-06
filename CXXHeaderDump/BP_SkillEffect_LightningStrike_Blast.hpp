#ifndef UE4SS_SDK_BP_SkillEffect_LightningStrike_Blast_HPP
#define UE4SS_SDK_BP_SkillEffect_LightningStrike_Blast_HPP

class ABP_SkillEffect_LightningStrike_Blast_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_Hedgehog_Grenade;                                     // 0x03C8 (size: 0x8)
    class UCameraShakeSourceComponent* CameraShakeSource;                             // 0x03D0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D8 (size: 0x8)
    double EffectDuration;                                                            // 0x03E0 (size: 0x8)

    void ReceiveBeginPlay();
    void DisableCollision();
    void EffectTimeout();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_LightningStrike_Blast(int32 EntryPoint);
}; // Size: 0x3E8

#endif
