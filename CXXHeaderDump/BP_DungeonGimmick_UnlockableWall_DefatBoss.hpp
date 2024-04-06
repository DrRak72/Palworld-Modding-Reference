#ifndef UE4SS_SDK_BP_DungeonGimmick_UnlockableWall_DefatBoss_HPP
#define UE4SS_SDK_BP_DungeonGimmick_UnlockableWall_DefatBoss_HPP

class ABP_DungeonGimmick_UnlockableWall_DefatBoss_C : public APalDungeonGimmickUnlockableDoor_DefeatBoss
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UNiagaraComponent* NS_DungeonGate;                                          // 0x02A0 (size: 0x8)
    class UBoxComponent* BlockEnterCollision;                                         // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Blocker;                                              // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)

    void SetLock(bool bLock);
    void OnChangeBossStateImpl(const EPalDungeonInstanceBossState ToState);
    void ExecuteUbergraph_BP_DungeonGimmick_UnlockableWall_DefatBoss(int32 EntryPoint);
}; // Size: 0x2C0

#endif
