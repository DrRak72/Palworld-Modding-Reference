#ifndef UE4SS_SDK_BP_InstantAttackCollision_HPP
#define UE4SS_SDK_BP_InstantAttackCollision_HPP

class ABP_InstantAttackCollision_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USphereComponent* AttackCollision;                                          // 0x0298 (size: 0x8)
    double LifeTime;                                                                  // 0x02A0 (size: 0x8)
    FTimerHandle TimerHandle;                                                         // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_InstantAttackCollision(int32 EntryPoint);
}; // Size: 0x2B0

#endif
