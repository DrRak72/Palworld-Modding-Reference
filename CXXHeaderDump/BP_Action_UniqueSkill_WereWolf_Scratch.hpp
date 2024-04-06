#ifndef UE4SS_SDK_BP_Action_UniqueSkill_WereWolf_Scratch_HPP
#define UE4SS_SDK_BP_Action_UniqueSkill_WereWolf_Scratch_HPP

class UBP_Action_UniqueSkill_WereWolf_Scratch_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    TArray<FReserveMontage> montageList;                                              // 0x0218 (size: 0x10)
    bool IsHomingMode;                                                                // 0x0228 (size: 0x1)

    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_UniqueSkill_WereWolf_Scratch(int32 EntryPoint);
}; // Size: 0x229

#endif
