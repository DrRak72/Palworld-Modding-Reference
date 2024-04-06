#ifndef UE4SS_SDK_BP_SkillEffect_Unique_JumpBeam_Blast_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_JumpBeam_Blast_HPP

class ABP_SkillEffect_Unique_JumpBeam_Blast_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03D0 (size: 0x8)
    float EffectDuration;                                                             // 0x03D8 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void DisableCollision();
    void EffectTimeout();
    void ExecuteUbergraph_BP_SkillEffect_Unique_JumpBeam_Blast(int32 EntryPoint);
}; // Size: 0x3DC

#endif
