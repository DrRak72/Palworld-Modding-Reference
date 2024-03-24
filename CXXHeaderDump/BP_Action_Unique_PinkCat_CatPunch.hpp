#ifndef UE4SS_SDK_BP_Action_Unique_PinkCat_CatPunch_HPP
#define UE4SS_SDK_BP_Action_Unique_PinkCat_CatPunch_HPP

class UBP_Action_Unique_PinkCat_CatPunch_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    double AttackTime;                                                                // 0x0218 (size: 0x8)
    TEnumAsByte<EAction_PinkCat_CatPunch::Type> State;                                // 0x0220 (size: 0x1)
    double MoveSpeed;                                                                 // 0x0228 (size: 0x8)
    double HomingOffTrigger;                                                          // 0x0230 (size: 0x8)

    void EndAction();
    void MoveToTarget(double DeltaTime);
    void Get Target Rotation(FRotator& TargetRotation);
    void OnNotifyEnd_BF5F18464CE41760481C058932345CA4(FName NotifyName);
    void OnNotifyBegin_BF5F18464CE41760481C058932345CA4(FName NotifyName);
    void OnInterrupted_BF5F18464CE41760481C058932345CA4(FName NotifyName);
    void OnBlendOut_BF5F18464CE41760481C058932345CA4(FName NotifyName);
    void OnCompleted_BF5F18464CE41760481C058932345CA4(FName NotifyName);
    void OnNotifyEnd_7B37005E4C184523A70797A405F21101(FName NotifyName);
    void OnNotifyBegin_7B37005E4C184523A70797A405F21101(FName NotifyName);
    void OnInterrupted_7B37005E4C184523A70797A405F21101(FName NotifyName);
    void OnBlendOut_7B37005E4C184523A70797A405F21101(FName NotifyName);
    void OnCompleted_7B37005E4C184523A70797A405F21101(FName NotifyName);
    void OnNotifyEnd_6FCC02CF40A11D28BC681A887E620E6F(FName NotifyName);
    void OnNotifyBegin_6FCC02CF40A11D28BC681A887E620E6F(FName NotifyName);
    void OnInterrupted_6FCC02CF40A11D28BC681A887E620E6F(FName NotifyName);
    void OnBlendOut_6FCC02CF40A11D28BC681A887E620E6F(FName NotifyName);
    void OnCompleted_6FCC02CF40A11D28BC681A887E620E6F(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnBreakAction();
    void EndAttack();
    void カスタムイベント_0();
    void ExecuteUbergraph_BP_Action_Unique_PinkCat_CatPunch(int32 EntryPoint);
}; // Size: 0x238

#endif
