#ifndef UE4SS_SDK_BP_AIActionFunnelSkill_ReticleTargetAttack_HPP
#define UE4SS_SDK_BP_AIActionFunnelSkill_ReticleTargetAttack_HPP

class UBP_AIActionFunnelSkill_ReticleTargetAttack_C : public UPalAIActionFunnelSkillBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    class UPalFunnelSkillModuleReticleTargetAttack* ModuleReticleAttack;              // 0x0140 (size: 0x8)
    TSubclassOf<class UPalActionWazaBase> WazaAction;                                 // 0x0148 (size: 0x8)

    void SetCoolTime(EPalWazaID WazaID);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void OnActionEnd();
    void ExecuteUbergraph_BP_AIActionFunnelSkill_ReticleTargetAttack(int32 EntryPoint);
}; // Size: 0x150

#endif
