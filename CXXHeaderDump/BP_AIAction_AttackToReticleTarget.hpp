#ifndef UE4SS_SDK_BP_AIAction_AttackToReticleTarget_HPP
#define UE4SS_SDK_BP_AIAction_AttackToReticleTarget_HPP

class UBP_AIAction_AttackToReticleTarget_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    class APawn* ControlledPawn;                                                      // 0x0138 (size: 0x8)
    class APalCharacter* OwnerCharacter;                                              // 0x0140 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;                      // 0x0148 (size: 0x8)
    class APalCharacter* PlayerCharacter;                                             // 0x0150 (size: 0x8)
    bool IsAborted;                                                                   // 0x0158 (size: 0x1)
    class APalCharacter* TargetCharacter;                                             // 0x0160 (size: 0x8)
    double FindTargetElapedTime;                                                      // 0x0168 (size: 0x8)
    double FindTargetTimeLimit;                                                       // 0x0170 (size: 0x8)
    bool IsTargetFound;                                                               // 0x0178 (size: 0x1)
    FName flagName;                                                                   // 0x017C (size: 0x8)

    void SetEnableReticleTargetFlag(bool Enable);
    void CanFindTarget(bool& Result);
    FText GetSkillName();
    void AddLogExecute();
    void AddLogTargetNotFound();
    void IsTargetValid(class APalCharacter* Target, bool& IsValid);
    void FinishAction();
    void FindTarget(bool& IsFound, class APalCharacter*& Target);
    void Tick_ObserveTarget(double DeltaTime);
    void Tick_FindTarget(double DeltaTime, bool& TargetFound);
    void SetupAction(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void OnTargetFound(class AActor* TargetActor);
    void OnTargetLost();
    void ExecuteUbergraph_BP_AIAction_AttackToReticleTarget(int32 EntryPoint);
}; // Size: 0x184

#endif
