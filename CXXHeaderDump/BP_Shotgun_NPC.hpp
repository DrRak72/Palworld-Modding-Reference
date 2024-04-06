#ifndef UE4SS_SDK_BP_Shotgun_NPC_HPP
#define UE4SS_SDK_BP_Shotgun_NPC_HPP

class ABP_Shotgun_NPC_C : public ABP_PumpActionShotgun_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0570 (size: 0x8)
    int32 ReloadCount;                                                                // 0x0578 (size: 0x4)

    int32 GetNPCWeaponDamage();
    int32 GetWeaponDamage();
    void OnWeaponNotify(EWeaponNotifyType Type);
    void ExecuteUbergraph_BP_Shotgun_NPC(int32 EntryPoint);
}; // Size: 0x57C

#endif
