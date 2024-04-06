#ifndef UE4SS_SDK_BP_AIActionCoop_AssignPassiveSkill_HPP
#define UE4SS_SDK_BP_AIActionCoop_AssignPassiveSkill_HPP

class UBP_AIActionCoop_AssignPassiveSkill_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    class APawn* Controlled Pawn;                                                     // 0x0138 (size: 0x8)
    TSubclassOf<class UPalCoopSkillModuleBase> Skill Module Class;                    // 0x0140 (size: 0x8)

    void StartSkill();
    void ActionStart(class APawn* ControlledPawn);
    void OnActionNotify(const class UPalActionBase* action, FName NotifyName);
    void ExecuteUbergraph_BP_AIActionCoop_AssignPassiveSkill(int32 EntryPoint);
}; // Size: 0x148

#endif
