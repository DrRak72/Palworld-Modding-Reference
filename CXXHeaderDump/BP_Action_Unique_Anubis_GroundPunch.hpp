#ifndef UE4SS_SDK_BP_Action_Unique_Anubis_GroundPunch_HPP
#define UE4SS_SDK_BP_Action_Unique_Anubis_GroundPunch_HPP

class UBP_Action_Unique_Anubis_GroundPunch_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    double DefaultJumpZ;                                                              // 0x0218 (size: 0x8)
    double JumpZVelocity;                                                             // 0x0220 (size: 0x8)
    double GravityRate;                                                               // 0x0228 (size: 0x8)
    FName flagName_0;                                                                 // 0x0230 (size: 0x8)
    TEnumAsByte<EAction_Anubis_GroundPunchState::Type> State;                         // 0x0238 (size: 0x1)
    FVector2D TargetLocation;                                                         // 0x0240 (size: 0x10)
    FVector2D StartLocation;                                                          // 0x0250 (size: 0x10)
    double MovementTimer;                                                             // 0x0260 (size: 0x8)
    double MovementTime;                                                              // 0x0268 (size: 0x8)
    double StateChangeVelocityZ;                                                      // 0x0270 (size: 0x8)
    double StateChangeGroundRange;                                                    // 0x0278 (size: 0x8)
    double AdditionalTargetingTime;                                                   // 0x0280 (size: 0x8)
    class UNiagaraComponent* OmenEffect;                                              // 0x0288 (size: 0x8)

    void StopMontage();
    void ActivateOmenEffect();
    void Update Effect Location(double DeltaTime);
    void Set Target Location();
    void TerminateMovementState();
    void MovementActor(double DeltaTime);
    void OnNotifyEnd_3EAF69114CDC3D3144F4EBB8A4E9DFF5(FName NotifyName);
    void OnNotifyBegin_3EAF69114CDC3D3144F4EBB8A4E9DFF5(FName NotifyName);
    void OnInterrupted_3EAF69114CDC3D3144F4EBB8A4E9DFF5(FName NotifyName);
    void OnBlendOut_3EAF69114CDC3D3144F4EBB8A4E9DFF5(FName NotifyName);
    void OnCompleted_3EAF69114CDC3D3144F4EBB8A4E9DFF5(FName NotifyName);
    void TickAction(float DeltaTime);
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_Unique_Anubis_GroundPunch(int32 EntryPoint);
}; // Size: 0x290

#endif
