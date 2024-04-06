#ifndef UE4SS_SDK_BP_Action_Unique_ChickenPal_ChickenPeck_HPP
#define UE4SS_SDK_BP_Action_Unique_ChickenPal_ChickenPeck_HPP

class UBP_Action_Unique_ChickenPal_ChickenPeck_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    double RotateSpeed_0;                                                             // 0x0218 (size: 0x8)
    double PreAttackTime;                                                             // 0x0220 (size: 0x8)
    double AfterAttackTime;                                                           // 0x0228 (size: 0x8)

    void RotateToTarget(double DeltaTime);
    void OnNotifyEnd_1E7C304942F556D76DE16F9CBBB0C542(FName NotifyName);
    void OnNotifyBegin_1E7C304942F556D76DE16F9CBBB0C542(FName NotifyName);
    void OnInterrupted_1E7C304942F556D76DE16F9CBBB0C542(FName NotifyName);
    void OnBlendOut_1E7C304942F556D76DE16F9CBBB0C542(FName NotifyName);
    void OnCompleted_1E7C304942F556D76DE16F9CBBB0C542(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_Unique_ChickenPal_ChickenPeck(int32 EntryPoint);
}; // Size: 0x230

#endif
