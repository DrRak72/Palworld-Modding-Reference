#ifndef UE4SS_SDK_BP_SimpleMonsterController_HPP
#define UE4SS_SDK_BP_SimpleMonsterController_HPP

class ABP_SimpleMonsterController_C : public APalAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0528 (size: 0x8)
    double SelfDestroyTime;                                                           // 0x0530 (size: 0x8)
    FTimerHandle DestroyTimerHandle;                                                  // 0x0538 (size: 0x8)
    class APalCharacter* AttackTarget;                                                // 0x0540 (size: 0x8)
    bool IsEnableEnemySearch;                                                         // 0x0548 (size: 0x1)

    void ResetTarget();
    void AttackTick();
    void UpdateTarget();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void RequestDestroy();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_SimpleMonsterController(int32 EntryPoint);
}; // Size: 0x549

#endif
