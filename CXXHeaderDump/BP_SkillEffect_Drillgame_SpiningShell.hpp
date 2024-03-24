#ifndef UE4SS_SDK_BP_SkillEffect_Drillgame_SpiningShell_HPP
#define UE4SS_SDK_BP_SkillEffect_Drillgame_SpiningShell_HPP

class ABP_SkillEffect_Drillgame_SpiningShell_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_UniqueSkill_DrillGame_ShellAttack_loop;               // 0x03C8 (size: 0x8)

    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_Drillgame_SpiningShell(int32 EntryPoint);
}; // Size: 0x3D0

#endif
