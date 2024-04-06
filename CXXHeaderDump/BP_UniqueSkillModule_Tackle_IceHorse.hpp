#ifndef UE4SS_SDK_BP_UniqueSkillModule_Tackle_IceHorse_HPP
#define UE4SS_SDK_BP_UniqueSkillModule_Tackle_IceHorse_HPP

class UBP_UniqueSkillModule_Tackle_IceHorse_C : public UBP_UniqueSkillModule_Tackle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0118 (size: 0x8)
    double QuickStartTime;                                                            // 0x0120 (size: 0x8)

    void OnBeginModule();
    void ExecuteUbergraph_BP_UniqueSkillModule_Tackle_IceHorse(int32 EntryPoint);
}; // Size: 0x128

#endif
