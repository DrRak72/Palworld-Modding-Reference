#ifndef UE4SS_SDK_BP_UniqueSkillModule_Tackle_BlackGriffon_HPP
#define UE4SS_SDK_BP_UniqueSkillModule_Tackle_BlackGriffon_HPP

class UBP_UniqueSkillModule_Tackle_BlackGriffon_C : public UBP_UniqueSkillModule_Tackle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0118 (size: 0x8)
    double RunStartTime;                                                              // 0x0120 (size: 0x8)
    double FlyStartTime;                                                              // 0x0128 (size: 0x8)
    double QuickStartTime;                                                            // 0x0130 (size: 0x8)
    bool EnableQuickStart;                                                            // 0x0138 (size: 0x1)

    void OnNotifyEnd_D7C3DB704C7527A3AB1185859228C85A(FName NotifyName);
    void OnNotifyBegin_D7C3DB704C7527A3AB1185859228C85A(FName NotifyName);
    void OnInterrupted_D7C3DB704C7527A3AB1185859228C85A(FName NotifyName);
    void OnBlendOut_D7C3DB704C7527A3AB1185859228C85A(FName NotifyName);
    void OnCompleted_D7C3DB704C7527A3AB1185859228C85A(FName NotifyName);
    void OnBeginModule();
    void OnEndAttack();
    void ExecuteUbergraph_BP_UniqueSkillModule_Tackle_BlackGriffon(int32 EntryPoint);
}; // Size: 0x139

#endif
