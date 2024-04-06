#ifndef UE4SS_SDK_BP_Action_Unique_WeaselDragon_FlyingTackle_HPP
#define UE4SS_SDK_BP_Action_Unique_WeaselDragon_FlyingTackle_HPP

class UBP_Action_Unique_WeaselDragon_FlyingTackle_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    bool IsEndCheck;                                                                  // 0x0158 (size: 0x1)
    double StartAttackTime;                                                           // 0x0160 (size: 0x8)
    double EndAttackTime;                                                             // 0x0168 (size: 0x8)
    double RotatSpeed;                                                                // 0x0170 (size: 0x8)

    void GetTargetPosition(FVector& Position);
    void Lookat(double Speed);
    void OnNotifyEnd_F3019064403B31061FF5A2B76E1C395E(FName NotifyName);
    void OnNotifyBegin_F3019064403B31061FF5A2B76E1C395E(FName NotifyName);
    void OnInterrupted_F3019064403B31061FF5A2B76E1C395E(FName NotifyName);
    void OnBlendOut_F3019064403B31061FF5A2B76E1C395E(FName NotifyName);
    void OnCompleted_F3019064403B31061FF5A2B76E1C395E(FName NotifyName);
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Unique_WeaselDragon_FlyingTackle(int32 EntryPoint);
}; // Size: 0x178

#endif
