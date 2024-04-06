#ifndef UE4SS_SDK_BP_Action_Unique_NaughtyCat_CatPress_HPP
#define UE4SS_SDK_BP_Action_Unique_NaughtyCat_CatPress_HPP

class UBP_Action_Unique_NaughtyCat_CatPress_C : public UBP_ActionUniqueAttackBase_C
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
    double ForceEndCheckTime;                                                         // 0x0298 (size: 0x8)
    bool IsHitEnemy;                                                                  // 0x02A0 (size: 0x1)
    double ForceEndCheckTimer;                                                        // 0x02A8 (size: 0x8)

    void UpdateForceEndTimer(double DeltaTime);
    void IsEndJump(bool& IsEnd);
    void GetJumpSpeedRate(double& SpeedRate);
    void GetJumpLocation(FVector& Location);
    void Set Target Location();
    void MovementActor(double DeltaTime);
    void TerminateMovementState();
    void OnNotifyEnd_CC9045824F32DE9BEC8F35B630D8A5C4(FName NotifyName);
    void OnNotifyBegin_CC9045824F32DE9BEC8F35B630D8A5C4(FName NotifyName);
    void OnInterrupted_CC9045824F32DE9BEC8F35B630D8A5C4(FName NotifyName);
    void OnBlendOut_CC9045824F32DE9BEC8F35B630D8A5C4(FName NotifyName);
    void OnCompleted_CC9045824F32DE9BEC8F35B630D8A5C4(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_BP_Action_Unique_NaughtyCat_CatPress(int32 EntryPoint);
}; // Size: 0x2B0

#endif
