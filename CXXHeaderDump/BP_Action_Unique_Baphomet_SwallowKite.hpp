#ifndef UE4SS_SDK_BP_Action_Unique_Baphomet_SwallowKite_HPP
#define UE4SS_SDK_BP_Action_Unique_Baphomet_SwallowKite_HPP

class UBP_Action_Unique_Baphomet_SwallowKite_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    bool IsHoming;                                                                    // 0x0218 (size: 0x1)

    void GetMontage(class UAnimMontage*& Montage);
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void OnNotifyEnd_7005D59D448F88E6383CA38524775CD3(FName NotifyName);
    void OnNotifyBegin_7005D59D448F88E6383CA38524775CD3(FName NotifyName);
    void OnInterrupted_7005D59D448F88E6383CA38524775CD3(FName NotifyName);
    void OnBlendOut_7005D59D448F88E6383CA38524775CD3(FName NotifyName);
    void OnCompleted_7005D59D448F88E6383CA38524775CD3(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Unique_Baphomet_SwallowKite(int32 EntryPoint);
}; // Size: 0x219

#endif
