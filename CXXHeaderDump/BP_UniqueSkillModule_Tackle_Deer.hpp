#ifndef UE4SS_SDK_BP_UniqueSkillModule_Tackle_Deer_HPP
#define UE4SS_SDK_BP_UniqueSkillModule_Tackle_Deer_HPP

class UBP_UniqueSkillModule_Tackle_Deer_C : public UBP_UniqueSkillModule_Tackle_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0118 (size: 0x8)

    void OnNotifyEnd_F25B6FF046ECCC92AD6B569983A3096F(FName NotifyName);
    void OnNotifyBegin_F25B6FF046ECCC92AD6B569983A3096F(FName NotifyName);
    void OnInterrupted_F25B6FF046ECCC92AD6B569983A3096F(FName NotifyName);
    void OnBlendOut_F25B6FF046ECCC92AD6B569983A3096F(FName NotifyName);
    void OnCompleted_F25B6FF046ECCC92AD6B569983A3096F(FName NotifyName);
    void OnBeginModule();
    void ExecuteUbergraph_BP_UniqueSkillModule_Tackle_Deer(int32 EntryPoint);
}; // Size: 0x120

#endif
