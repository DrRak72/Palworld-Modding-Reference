#ifndef UE4SS_SDK_BP_Action_Unique_Deer_ActionPushupHorn_HPP
#define UE4SS_SDK_BP_Action_Unique_Deer_ActionPushupHorn_HPP

class UBP_Action_Unique_Deer_ActionPushupHorn_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    bool IsEndCheck;                                                                  // 0x0218 (size: 0x1)
    FName flagName_0;                                                                 // 0x021C (size: 0x8)
    double MaxSpeedMultiply;                                                          // 0x0228 (size: 0x8)
    double MaxTackleTime;                                                             // 0x0230 (size: 0x8)
    double YawMultiply;                                                               // 0x0238 (size: 0x8)
    double InputDisableTime;                                                          // 0x0240 (size: 0x8)
    double InputDisableTimer;                                                         // 0x0248 (size: 0x8)
    double MinSpeedMultiply;                                                          // 0x0250 (size: 0x8)
    double HomingRate;                                                                // 0x0258 (size: 0x8)
    class APalCharacter* ActionCharacter;                                             // 0x0260 (size: 0x8)
    class AActor* TargetCharacter;                                                    // 0x0268 (size: 0x8)
    float TackleEndDistance;                                                          // 0x0270 (size: 0x4)
    class UBP_UniqueSkillModule_Tackle_C* TackleModule;                               // 0x0278 (size: 0x8)

    void UpdateVelocity();
    void UpdateYaw();
    void ControllInput(double DeltaTime);
    void OnCompletedEndMontage();
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void CallEndAttack();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Unique_Deer_ActionPushupHorn(int32 EntryPoint);
}; // Size: 0x280

#endif
