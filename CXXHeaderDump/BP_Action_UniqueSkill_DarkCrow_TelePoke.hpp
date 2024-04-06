#ifndef UE4SS_SDK_BP_Action_UniqueSkill_DarkCrow_TelePoke_HPP
#define UE4SS_SDK_BP_Action_UniqueSkill_DarkCrow_TelePoke_HPP

class UBP_Action_UniqueSkill_DarkCrow_TelePoke_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    FTimerHandle TimeHandle;                                                          // 0x0218 (size: 0x8)
    bool HasStartedAttack;                                                            // 0x0220 (size: 0x1)
    double AttackMoveRate;                                                            // 0x0228 (size: 0x8)
    double DistanceFromTeleportEndToTarget;                                           // 0x0230 (size: 0x8)
    float TeleportEndDegreeFromCameraView;                                            // 0x0238 (size: 0x4)
    FVector PreTargetLocation;                                                        // 0x0240 (size: 0x18)

    void GetUniqueActionTarget(class AActor*& TargetActor);
    void CalculateTeleportDestination(FVector& Destination);
    void SetPalMoveState(bool isDisable);
    void OnNotifyEnd_40F06D1240594208BE6E46B53937BB4F(FName NotifyName);
    void OnNotifyBegin_40F06D1240594208BE6E46B53937BB4F(FName NotifyName);
    void OnInterrupted_40F06D1240594208BE6E46B53937BB4F(FName NotifyName);
    void OnBlendOut_40F06D1240594208BE6E46B53937BB4F(FName NotifyName);
    void OnCompleted_40F06D1240594208BE6E46B53937BB4F(FName NotifyName);
    void OnNotifyEnd_80D6B693477BD23E6A9355AA6AFDF271(FName NotifyName);
    void OnNotifyBegin_80D6B693477BD23E6A9355AA6AFDF271(FName NotifyName);
    void OnInterrupted_80D6B693477BD23E6A9355AA6AFDF271(FName NotifyName);
    void OnBlendOut_80D6B693477BD23E6A9355AA6AFDF271(FName NotifyName);
    void OnCompleted_80D6B693477BD23E6A9355AA6AFDF271(FName NotifyName);
    void OnBeginAction();
    void Attack();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_UniqueSkill_DarkCrow_TelePoke(int32 EntryPoint);
}; // Size: 0x258

#endif
