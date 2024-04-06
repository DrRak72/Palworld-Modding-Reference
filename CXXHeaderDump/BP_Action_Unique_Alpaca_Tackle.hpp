#ifndef UE4SS_SDK_BP_Action_Unique_Alpaca_Tackle_HPP
#define UE4SS_SDK_BP_Action_Unique_Alpaca_Tackle_HPP

class UBP_Action_Unique_Alpaca_Tackle_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UBP_UniqueSkillModule_Tackle_C* TackleModule;                               // 0x0218 (size: 0x8)

    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnCompletedEndMontage();
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle(int32 EntryPoint);
}; // Size: 0x220

#endif
