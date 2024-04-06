#ifndef UE4SS_SDK_BP_Action_Unique_KingAlpaca_BodyPress_HPP
#define UE4SS_SDK_BP_Action_Unique_KingAlpaca_BodyPress_HPP

class UBP_Action_Unique_KingAlpaca_BodyPress_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    double JumpHeight;                                                                // 0x0218 (size: 0x8)
    FVector StartLocation;                                                            // 0x0220 (size: 0x18)
    FVector TargetLocation;                                                           // 0x0238 (size: 0x18)
    double JumpTime;                                                                  // 0x0250 (size: 0x8)
    double JumpTimer;                                                                 // 0x0258 (size: 0x8)
    TEnumAsByte<EAction_KingAlpaca_BodyPress::Type> State;                            // 0x0260 (size: 0x1)
    double CheckGroundHeight;                                                         // 0x0268 (size: 0x8)
    double TargetLocationOffset;                                                      // 0x0270 (size: 0x8)
    class UCurveVector* CurveVector;                                                  // 0x0278 (size: 0x8)
    double DefaultDistance;                                                           // 0x0280 (size: 0x8)
    double OverFallGravityRate;                                                       // 0x0288 (size: 0x8)
    double JumpSpeedRate;                                                             // 0x0290 (size: 0x8)
    double CheckTargetDistance;                                                       // 0x0298 (size: 0x8)
    bool IsHitEnemy;                                                                  // 0x02A0 (size: 0x1)
    double ForceEndCheckTimer;                                                        // 0x02A8 (size: 0x8)
    double ForceEndCheckTime;                                                         // 0x02B0 (size: 0x8)

    void UpdateForceEndTimer(double DeltaTime);
    void IsEndJump(bool& IsEnd);
    void GetJumpSpeedRate(double& SpeedRate);
    void GetJumpLocation(FVector& Location);
    void Set Target Location();
    void MovementActor(double DeltaTime);
    void TerminateMovementState();
    void OnNotifyEnd_27055C004F56CE994DAE09AFF2AE50AA(FName NotifyName);
    void OnNotifyBegin_27055C004F56CE994DAE09AFF2AE50AA(FName NotifyName);
    void OnInterrupted_27055C004F56CE994DAE09AFF2AE50AA(FName NotifyName);
    void OnBlendOut_27055C004F56CE994DAE09AFF2AE50AA(FName NotifyName);
    void OnCompleted_27055C004F56CE994DAE09AFF2AE50AA(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_BP_Action_Unique_KingAlpaca_BodyPress(int32 EntryPoint);
}; // Size: 0x2B8

#endif
