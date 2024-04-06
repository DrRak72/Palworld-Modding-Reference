#ifndef UE4SS_SDK_BP_BuildObject_Trap_MineBase_HPP
#define UE4SS_SDK_BP_BuildObject_Trap_MineBase_HPP

class ABP_BuildObject_Trap_MineBase_C : public ABP_BuildObject_Trap_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x05F0 (size: 0x8)

    void GetExClass(TSubclassOf<class ABP_ExplosionAttackBase_C>& ExClass);
    void OnTriggerTrap_ForAll(class AActor* TargetActor);
    void ExecuteUbergraph_BP_BuildObject_Trap_MineBase(int32 EntryPoint);
}; // Size: 0x5F8

#endif
