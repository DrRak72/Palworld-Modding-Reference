#ifndef UE4SS_SDK_BP_Skill_RootAttack_Road_HPP
#define UE4SS_SDK_BP_Skill_RootAttack_Road_HPP

class ABP_Skill_RootAttack_Road_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* RootAttack;                                              // 0x03C8 (size: 0x8)
    double AttackDestroy;                                                             // 0x03D0 (size: 0x8)
    class AActor* Target;                                                             // 0x03D8 (size: 0x8)

    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_Skill_RootAttack_Road(int32 EntryPoint);
}; // Size: 0x3E0

#endif
