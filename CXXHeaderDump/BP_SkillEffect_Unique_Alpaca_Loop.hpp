#ifndef UE4SS_SDK_BP_SkillEffect_Unique_Alpaca_Loop_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_Alpaca_Loop_HPP

class ABP_SkillEffect_Unique_Alpaca_Loop_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect;                                           // 0x03C8 (size: 0x8)

    void FadeOutEffect(double DeltaSecond);
    void OnEndAction();
    void ExecuteUbergraph_BP_SkillEffect_Unique_Alpaca_Loop(int32 EntryPoint);
}; // Size: 0x3D0

#endif
