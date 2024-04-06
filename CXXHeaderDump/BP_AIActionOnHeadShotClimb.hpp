#ifndef UE4SS_SDK_BP_AIActionOnHeadShotClimb_HPP
#define UE4SS_SDK_BP_AIActionOnHeadShotClimb_HPP

class UBP_AIActionOnHeadShotClimb_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    class UPalCoopClimbPlayer* CoopClimb;                                             // 0x0138 (size: 0x8)
    class APalCharacter* OwnerCharacter;                                              // 0x0140 (size: 0x8)
    EHumanBone EntryBone;                                                             // 0x0148 (size: 0x1)
    class UBP_CoopParam_OnHeadShot_C* CoopParam;                                      // 0x0150 (size: 0x8)

    void OnChildActionFinished(class UPawnAction* action, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void StandAnimeChange_Event();
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIActionOnHeadShotClimb(int32 EntryPoint);
}; // Size: 0x158

#endif
