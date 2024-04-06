#ifndef UE4SS_SDK_BP_Ammo_Penguin_HPP
#define UE4SS_SDK_BP_Ammo_Penguin_HPP

class ABP_Ammo_Penguin_C : public ABP_Ammo_Rocket_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Ammo_Penguin(int32 EntryPoint);
}; // Size: 0x318

#endif
