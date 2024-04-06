#ifndef UE4SS_SDK_BP_AIAction_Toboggan_HPP
#define UE4SS_SDK_BP_AIAction_Toboggan_HPP

class UBP_AIAction_Toboggan_C : public UBP_AIAction_AttackToReticleTarget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0188 (size: 0x8)
    class UPalActionBase* SkillAction;                                                // 0x0190 (size: 0x8)

    void ExecAction(class AActor* TargetActor);
    FText GetSkillName();
    void CanFindTarget(bool& Result);
    void FinishAction();
    void SetupAction(class APawn* ControlledPawn);
    void HasAnyAction(class APalCharacter* Character, bool& HasAction);
    void OnTackleActionFinished();
    void OnTargetFound(class AActor* TargetActor);
    void OnTargetLost();
    void ExecuteUbergraph_BP_AIAction_Toboggan(int32 EntryPoint);
}; // Size: 0x198

#endif
