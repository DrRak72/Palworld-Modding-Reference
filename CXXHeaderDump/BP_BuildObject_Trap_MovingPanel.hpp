#ifndef UE4SS_SDK_BP_BuildObject_Trap_MovingPanel_HPP
#define UE4SS_SDK_BP_BuildObject_Trap_MovingPanel_HPP

class ABP_BuildObject_Trap_MovingPanel_C : public ABP_BuildObject_Trap_Base_C
{
    class UStaticMeshComponent* Mesh;                                                 // 0x05E8 (size: 0x8)

    void OnEndTrap_ForServer(class AActor* Target);
    void OnTriggerTrap_ForServer(class AActor* TargetActor);
}; // Size: 0x5F0

#endif
