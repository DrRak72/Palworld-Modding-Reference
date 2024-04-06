#ifndef UE4SS_SDK_BP_Action_Unique_QueenBee_SpinLance_HPP
#define UE4SS_SDK_BP_Action_Unique_QueenBee_SpinLance_HPP

class UBP_Action_Unique_QueenBee_SpinLance_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class ABP_SkillEffectBase_C* SkillEffect;                                         // 0x0218 (size: 0x8)

    void OnNotifyEnd_83A5B13745C9E4212483D8AC2CF98717(FName NotifyName);
    void OnNotifyBegin_83A5B13745C9E4212483D8AC2CF98717(FName NotifyName);
    void OnInterrupted_83A5B13745C9E4212483D8AC2CF98717(FName NotifyName);
    void OnBlendOut_83A5B13745C9E4212483D8AC2CF98717(FName NotifyName);
    void OnCompleted_83A5B13745C9E4212483D8AC2CF98717(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Unique_QueenBee_SpinLance(int32 EntryPoint);
}; // Size: 0x220

#endif
