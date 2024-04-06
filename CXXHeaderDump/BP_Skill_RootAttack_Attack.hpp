#ifndef UE4SS_SDK_BP_Skill_RootAttack_Attack_HPP
#define UE4SS_SDK_BP_Skill_RootAttack_Attack_HPP

class ABP_Skill_RootAttack_Attack_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03C8 (size: 0x8)
    class UNiagaraComponent* RootAttack_2;                                            // 0x03D0 (size: 0x8)
    double destroyTime;                                                               // 0x03D8 (size: 0x8)
    class AActor* Target;                                                             // 0x03E0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Skill_RootAttack_Attack(int32 EntryPoint);
}; // Size: 0x3E8

#endif
