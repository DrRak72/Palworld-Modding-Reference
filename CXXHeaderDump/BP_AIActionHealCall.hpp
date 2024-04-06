#ifndef UE4SS_SDK_BP_AIActionHealCall_HPP
#define UE4SS_SDK_BP_AIActionHealCall_HPP

class UBP_AIActionHealCall_C : public UBP_AIAction_CallBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    class UBP_CoopParam_Cover_C* CoopParam;                                           // 0x0180 (size: 0x8)
    double Approach Radius;                                                           // 0x0188 (size: 0x8)

    void DetermineDestination(class AActor* MasterTrainer, double ApproachRadius, FVector& ResultPosition);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIActionHealCall(int32 EntryPoint);
}; // Size: 0x190

#endif
