#ifndef UE4SS_SDK_BP_MonsterAIController_CapturedCage_HPP
#define UE4SS_SDK_BP_MonsterAIController_CapturedCage_HPP

class ABP_MonsterAIController_CapturedCage_C : public APalAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0520 (size: 0x8)

    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_BP_MonsterAIController_CapturedCage(int32 EntryPoint);
}; // Size: 0x528

#endif
