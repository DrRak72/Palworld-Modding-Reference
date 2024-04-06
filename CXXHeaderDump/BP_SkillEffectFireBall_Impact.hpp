#ifndef UE4SS_SDK_BP_SkillEffectFireBall_Impact_HPP
#define UE4SS_SDK_BP_SkillEffectFireBall_Impact_HPP

class ABP_SkillEffectFireBall_Impact_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* ImpactEffect;                                            // 0x03C8 (size: 0x8)
    class USphereComponent* ImpactDamage;                                             // 0x03D0 (size: 0x8)

    void ReceiveBeginPlay();
    void EndCollision();
    void ExecuteUbergraph_BP_SkillEffectFireBall_Impact(int32 EntryPoint);
}; // Size: 0x3D8

#endif
