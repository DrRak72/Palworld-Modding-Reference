#ifndef UE4SS_SDK_BP_BuildObject_Trap_LegHold_HPP
#define UE4SS_SDK_BP_BuildObject_Trap_LegHold_HPP

class ABP_BuildObject_Trap_LegHold_C : public ABP_BuildObject_Trap_Base_C
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x05E8 (size: 0x8)

    void GetTrapTime(class AActor* HitTarget, double& Time);
    void OnEndTrap_ForAll(class AActor* TargetActor);
    void OnTriggerTrap_ForAll(class AActor* TargetActor);
    void OnEndTrap_ForServer(class AActor* Target);
    void OnTriggerTrap_ForServer(class AActor* TargetActor);
}; // Size: 0x5F0

#endif
