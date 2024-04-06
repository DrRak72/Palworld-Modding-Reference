#ifndef UE4SS_SDK_BP_SkillEffect_Inferno_Bullet_HPP
#define UE4SS_SDK_BP_SkillEffect_Inferno_Bullet_HPP

class ABP_SkillEffect_Inferno_Bullet_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* SphereCollision;                                          // 0x03C8 (size: 0x8)
    class UNiagaraComponent* ExplosionEffect;                                         // 0x03D0 (size: 0x8)
    class UNiagaraComponent* OmenEffect;                                              // 0x03D8 (size: 0x8)
    double CollisionTime;                                                             // 0x03E0 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x03E8 (size: 0x8)

    void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);
    void Explosion();
    void InitializeEffect();
    void OnInitialize();
    void OnExplosion();
    void OnEndCollision();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Inferno_Bullet(int32 EntryPoint);
}; // Size: 0x3F0

#endif
