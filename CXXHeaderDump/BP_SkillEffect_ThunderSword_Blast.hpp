#ifndef UE4SS_SDK_BP_SkillEffect_ThunderSword_Blast_HPP
#define UE4SS_SDK_BP_SkillEffect_ThunderSword_Blast_HPP

class ABP_SkillEffect_ThunderSword_Blast_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect;                                           // 0x03C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D0 (size: 0x8)

    void DisableCollision();
    void EffectTimeout();
    void FadeOutEffect(double DeltaSecond);
    void ReceiveBeginPlay();
    void SetLifeTime(double Time);
    void ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast(int32 EntryPoint);
}; // Size: 0x3D8

#endif
