#ifndef UE4SS_SDK_BP_PalTimeManager_HPP
#define UE4SS_SDK_BP_PalTimeManager_HPP

class UBP_PalTimeManager_C : public UPalTimeManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    double NPCSetTime;                                                                // 0x0138 (size: 0x8)

    void Tick_BP(float DeltaTime);
    void ExecuteUbergraph_BP_PalTimeManager(int32 EntryPoint);
}; // Size: 0x140

#endif
