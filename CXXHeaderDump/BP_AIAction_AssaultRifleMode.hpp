#ifndef UE4SS_SDK_BP_AIAction_AssaultRifleMode_HPP
#define UE4SS_SDK_BP_AIAction_AssaultRifleMode_HPP

class UBP_AIAction_AssaultRifleMode_C : public UPalAIActionCoopAssaultrifleMode
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01E8 (size: 0x8)
    class APalCharacter* PlayerCharacter;                                             // 0x01F0 (size: 0x8)
    class UBP_CoopParam_AssaultRifleMode_C* CoopParam;                                // 0x01F8 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;                      // 0x0200 (size: 0x8)
    bool IsAborted;                                                                   // 0x0208 (size: 0x1)
    bool IsMoving;                                                                    // 0x0209 (size: 0x1)
    bool IsCoolDown;                                                                  // 0x020A (size: 0x1)
    double CoolDownElapsedTIme;                                                       // 0x0210 (size: 0x8)
    double CoolDownTime;                                                              // 0x0218 (size: 0x8)
    class UPalActionComponent* ActionComponent;                                       // 0x0220 (size: 0x8)
    class UPalActionBase* ShootAction;                                                // 0x0228 (size: 0x8)
    FVector ShootLocation;                                                            // 0x0230 (size: 0x18)
    class UPalCharacterMovementComponent* Movement;                                   // 0x0248 (size: 0x8)
    FName Flag Name;                                                                  // 0x0250 (size: 0x8)
    double BlockedTimeSec;                                                            // 0x0258 (size: 0x8)
    FVector PrevLocation;                                                             // 0x0260 (size: 0x18)

    void UpdateCheckIdleAction(double DeltaTime);
    void IsShooting(bool& Result);
    void Update Proc(double DeltaTime);
    bool Is Near Shooting Location();
    void UpdateCoolDown(double DeltaTime);
    void UpdateLocation(double DeltaTime);
    void UpdateTargetActor();
    void FinishAction();
    void SetupAction(class APawn* ControlledPawn);
    void BindCoopRegisterEvent();
    void UnbindCoopRegisterEvent();
    void CoopRelease();
    void StartPartnerSkill();
    void StopPartnerSkill();
    void OnOverheat();
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionAbort(class APawn* ControlledPawn);
    void CoopFinish();
    void OnShootActionFinished();
    void OnUpdateShootingLocation(class APalCharacter* Target, const FVector& ShootLocation);
    void ExecuteUbergraph_BP_AIAction_AssaultRifleMode(int32 EntryPoint);
}; // Size: 0x278

#endif
