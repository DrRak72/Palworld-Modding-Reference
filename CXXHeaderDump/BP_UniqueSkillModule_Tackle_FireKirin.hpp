#ifndef UE4SS_SDK_BP_UniqueSkillModule_Tackle_FireKirin_HPP
#define UE4SS_SDK_BP_UniqueSkillModule_Tackle_FireKirin_HPP

class UBP_UniqueSkillModule_Tackle_FireKirin_C : public UBP_UniqueSkillModule_Tackle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0118 (size: 0x8)

    void OnEndAttack();
    void ExecuteUbergraph_BP_UniqueSkillModule_Tackle_FireKirin(int32 EntryPoint);
}; // Size: 0x120

#endif
