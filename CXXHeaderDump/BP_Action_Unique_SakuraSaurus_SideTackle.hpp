#ifndef UE4SS_SDK_BP_Action_Unique_SakuraSaurus_SideTackle_HPP
#define UE4SS_SDK_BP_Action_Unique_SakuraSaurus_SideTackle_HPP

class UBP_Action_Unique_SakuraSaurus_SideTackle_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    double RotateSpeed_0;                                                             // 0x0218 (size: 0x8)
    double PreAttackTime;                                                             // 0x0220 (size: 0x8)
    double AfterAttackTime;                                                           // 0x0228 (size: 0x8)

    void RotateToTarget(double DeltaTime);
    void OnNotifyEnd_0475368F4499CBBD057713BB9BDE7AD6(FName NotifyName);
    void OnNotifyBegin_0475368F4499CBBD057713BB9BDE7AD6(FName NotifyName);
    void OnInterrupted_0475368F4499CBBD057713BB9BDE7AD6(FName NotifyName);
    void OnBlendOut_0475368F4499CBBD057713BB9BDE7AD6(FName NotifyName);
    void OnCompleted_0475368F4499CBBD057713BB9BDE7AD6(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Unique_SakuraSaurus_SideTackle(int32 EntryPoint);
}; // Size: 0x230

#endif
