#ifndef UE4SS_SDK_BP_AIActionOnHeadShotCall_HPP
#define UE4SS_SDK_BP_AIActionOnHeadShotCall_HPP

class UBP_AIActionOnHeadShotCall_C : public UBP_AIAction_CallBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0178 (size: 0x8)
    EHumanBone NearHumanBone;                                                         // 0x0180 (size: 0x1)

    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionOnHeadShotCall(int32 EntryPoint);
}; // Size: 0x181

#endif
