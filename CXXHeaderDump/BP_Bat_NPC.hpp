#ifndef UE4SS_SDK_BP_Bat_NPC_HPP
#define UE4SS_SDK_BP_Bat_NPC_HPP

class ABP_Bat_NPC_C : public ABP_Bat_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0548 (size: 0x8)
    class USkeletalMeshComponent* Cane_SkeletalMesh;                                  // 0x0550 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0558 (size: 0x8)

    int32 GetNPCWeaponDamage();
    int32 GetWeaponDamage();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Bat_NPC(int32 EntryPoint);
}; // Size: 0x560

#endif
