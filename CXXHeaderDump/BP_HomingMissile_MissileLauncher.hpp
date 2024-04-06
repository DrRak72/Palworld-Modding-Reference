#ifndef UE4SS_SDK_BP_HomingMissile_MissileLauncher_HPP
#define UE4SS_SDK_BP_HomingMissile_MissileLauncher_HPP

class ABP_HomingMissile_MissileLauncher_C : public ABP_HomingMissile_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HomingMissile_MissileLauncher(int32 EntryPoint);
}; // Size: 0x3A0

#endif
