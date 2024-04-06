#ifndef UE4SS_SDK_BP_Action_Unique_GrassMammoth_Earthquake_HPP
#define UE4SS_SDK_BP_Action_Unique_GrassMammoth_Earthquake_HPP

class UBP_Action_Unique_GrassMammoth_Earthquake_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class ABP_SkillEffectBase_C* SkillEffect;                                         // 0x0218 (size: 0x8)

    void OnNotifyEnd_6A44829442629F9E2C402AAB423252DC(FName NotifyName);
    void OnNotifyBegin_6A44829442629F9E2C402AAB423252DC(FName NotifyName);
    void OnInterrupted_6A44829442629F9E2C402AAB423252DC(FName NotifyName);
    void OnBlendOut_6A44829442629F9E2C402AAB423252DC(FName NotifyName);
    void OnCompleted_6A44829442629F9E2C402AAB423252DC(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Unique_GrassMammoth_Earthquake(int32 EntryPoint);
}; // Size: 0x220

#endif
