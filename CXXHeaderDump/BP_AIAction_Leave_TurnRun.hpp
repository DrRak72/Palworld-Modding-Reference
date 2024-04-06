#ifndef UE4SS_SDK_BP_AIAction_Leave_TurnRun_HPP
#define UE4SS_SDK_BP_AIAction_Leave_TurnRun_HPP

class UBP_AIAction_Leave_TurnRun_C : public UPalAIAction_LeaveBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0148 (size: 0x8)
    FVector MoveTargetPos;                                                            // 0x0150 (size: 0x18)
    bool FailureLineTrace;                                                            // 0x0168 (size: 0x1)
    TArray<FVector> MoveVectorCandidate;                                              // 0x0170 (size: 0x10)
    int32 SelectIndex;                                                                // 0x0180 (size: 0x4)

    void LineTrace_forFailure(FVector& MoveTarget);
    void LineTraceMovePosition(bool& Hit);
    void OnFail_30D2F75E48B32C365F20FE998491DC93(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_30D2F75E48B32C365F20FE998491DC93(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_Leave_TurnRun(int32 EntryPoint);
}; // Size: 0x184

#endif
