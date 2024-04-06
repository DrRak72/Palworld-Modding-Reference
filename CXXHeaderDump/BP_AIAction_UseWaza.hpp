#ifndef UE4SS_SDK_BP_AIAction_UseWaza_HPP
#define UE4SS_SDK_BP_AIAction_UseWaza_HPP

class UBP_AIAction_UseWaza_C : public UBP_AIAction_AttackToReticleTarget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0188 (size: 0x8)
    class ABP_MonsterAIController_Otomo_C* AIController;                              // 0x0190 (size: 0x8)

    void CanFindTarget(bool& Result);
    void GetWazaID(EPalWazaID& WazaID);
    void SetupAction(class APawn* ControlledPawn);
    FText GetSkillName();
    void IsAvailableWaza(bool& Result);
    void ExecAction(class AActor* TargetActor);
    void ActionStart(class APawn* ControlledPawn);
    void OnTargetFound(class AActor* TargetActor);
    void ExecuteUbergraph_BP_AIAction_UseWaza(int32 EntryPoint);
}; // Size: 0x198

#endif
