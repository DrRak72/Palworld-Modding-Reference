#ifndef UE4SS_SDK_BP_SkillEffect_Unique_BlackCentaur_Tackle_Rush_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_BlackCentaur_Tackle_Rush_HPP

class ABP_SkillEffect_Unique_BlackCentaur_Tackle_Rush_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03C8 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect;                                           // 0x03D0 (size: 0x8)
    FName TargetSocket;                                                               // 0x03D8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Unique_BlackCentaur_Tackle_Rush(int32 EntryPoint);
}; // Size: 0x3E0

#endif
