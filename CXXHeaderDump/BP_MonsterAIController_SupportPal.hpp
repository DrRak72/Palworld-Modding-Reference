#ifndef UE4SS_SDK_BP_MonsterAIController_SupportPal_HPP
#define UE4SS_SDK_BP_MonsterAIController_SupportPal_HPP

class ABP_MonsterAIController_SupportPal_C : public ABP_MonsterAIControllerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0550 (size: 0x8)
    FTimerHandle RegeneTimer;                                                         // 0x0558 (size: 0x8)

    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Regene_CustomEvent();
    void ReceivePossess(class APawn* PossessedPawn);
    void OnDeadDelegate_イベント_0(FPalDeadInfo DeadInfo);
    void ExecuteUbergraph_BP_MonsterAIController_SupportPal(int32 EntryPoint);
}; // Size: 0x560

#endif
