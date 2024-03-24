#ifndef UE4SS_SDK_BP_Action_Grappling_HPP
#define UE4SS_SDK_BP_Action_Grappling_HPP

class UBP_Action_Grappling_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)
    double MoveSpeed;                                                                 // 0x0148 (size: 0x8)
    FVector TargetLocation;                                                           // 0x0150 (size: 0x18)
    FName flagName;                                                                   // 0x0168 (size: 0x8)
    FHitResult Out Hit;                                                               // 0x0170 (size: 0xE8)
    bool IsClimb;                                                                     // 0x0258 (size: 0x1)
    FVector MoveVec;                                                                  // 0x0260 (size: 0x18)
    bool IsJumping;                                                                   // 0x0278 (size: 0x1)
    FVector Move End Location;                                                        // 0x0280 (size: 0x18)
    double DelaySpeedRate;                                                            // 0x0298 (size: 0x8)
    double CurrentTime;                                                               // 0x02A0 (size: 0x8)
    FVector PrevLocation;                                                             // 0x02A8 (size: 0x18)
    FVector currentVelocity;                                                          // 0x02C0 (size: 0x18)
    double JumpPower;                                                                 // 0x02D8 (size: 0x8)
    double ReleaseVelocityRare;                                                       // 0x02E0 (size: 0x8)
    double EasingTime;                                                                // 0x02E8 (size: 0x8)
    bool IsEndCompleted;                                                              // 0x02F0 (size: 0x1)

    void CalcCurrentVelocity(float DeltaTime);
    FVector GetReleaseVelocity();
    void LookAtTargetLocation(float DeltaTime);
    void SetPlayerVelocity(FVector Velocity);
    void IsPlayerFalling(bool& IsFalling);
    void GetCurrentSpeed(double& CurrentSpeed);
    void NotifyStartToWeapon();
    void NotifyFinishToWeapon();
    void CanClamb(bool& Result);
    void IsMoveingEnd(FVector PlayerLocation, double InCapsuleRadius, double InCapsuleHelfHeight, bool& IsMovingEnd);
    void SetGravityDisable(bool isDisable);
    void CalcMoveVector(FVector PlayerLocation, double DeltaTime, FVector& MoveVec);
    void Disable Movement(bool Disable);
    void DisableShooter(bool Disable);
    void UpdateGraplingMove(float DeltaTime);
    void OnNotifyEnd_2F3E188F4888411060D43AB280C66179(FName NotifyName);
    void OnNotifyBegin_2F3E188F4888411060D43AB280C66179(FName NotifyName);
    void OnInterrupted_2F3E188F4888411060D43AB280C66179(FName NotifyName);
    void OnBlendOut_2F3E188F4888411060D43AB280C66179(FName NotifyName);
    void OnCompleted_2F3E188F4888411060D43AB280C66179(FName NotifyName);
    void OnBreakAction();
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Grappling(int32 EntryPoint);
}; // Size: 0x2F1

#endif
