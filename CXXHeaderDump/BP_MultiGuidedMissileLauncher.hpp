#ifndef UE4SS_SDK_BP_MultiGuidedMissileLauncher_HPP
#define UE4SS_SDK_BP_MultiGuidedMissileLauncher_HPP

class ABP_MultiGuidedMissileLauncher_C : public ABP_GuidedMissileLauncher_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05B0 (size: 0x8)

    void OnReloadStart();
    void ExecuteUbergraph_BP_MultiGuidedMissileLauncher(int32 EntryPoint);
}; // Size: 0x5B8

#endif
