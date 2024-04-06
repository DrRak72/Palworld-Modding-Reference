#ifndef UE4SS_SDK_BP_AIAction_SideStep_HPP
#define UE4SS_SDK_BP_AIAction_SideStep_HPP

class UBP_AIAction_SideStep_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    double Right;                                                                     // 0x0138 (size: 0x8)
    double Power;                                                                     // 0x0140 (size: 0x8)
    double Front;                                                                     // 0x0148 (size: 0x8)

    void GetTargetPos(FVector& Pos);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIAction_SideStep(int32 EntryPoint);
}; // Size: 0x150

#endif
