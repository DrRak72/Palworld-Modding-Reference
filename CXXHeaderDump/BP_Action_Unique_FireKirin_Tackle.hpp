#ifndef UE4SS_SDK_BP_Action_Unique_FireKirin_Tackle_HPP
#define UE4SS_SDK_BP_Action_Unique_FireKirin_Tackle_HPP

class UBP_Action_Unique_FireKirin_Tackle_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    double EndAnimTime;                                                               // 0x0218 (size: 0x8)
    bool IsInputMoveForward;                                                          // 0x0220 (size: 0x1)
    bool IsInputMoveForwardController;                                                // 0x0221 (size: 0x1)
    class ABP_SkillEffectBase_C* SkillEffect_Collision;                               // 0x0228 (size: 0x8)
    class ABP_SkillEffectBase_C* SkillEffect_Loop;                                    // 0x0230 (size: 0x8)
    double EndSkillEffectAdjustTime;                                                  // 0x0238 (size: 0x8)
    FTimerHandle EffectEndTimerHandle;                                                // 0x0240 (size: 0x8)
    class UBP_UniqueSkillModule_Tackle_C* TackleModule;                               // 0x0248 (size: 0x8)

    void GetCollisionEffect(TSubclassOf<class ABP_SkillEffectBase_C>& CollisionEffect);
    void OnNotifyEnd_B06334994682E13BB2BB40B2F0D0FD23(FName NotifyName);
    void OnNotifyBegin_B06334994682E13BB2BB40B2F0D0FD23(FName NotifyName);
    void OnInterrupted_B06334994682E13BB2BB40B2F0D0FD23(FName NotifyName);
    void OnBlendOut_B06334994682E13BB2BB40B2F0D0FD23(FName NotifyName);
    void OnCompleted_B06334994682E13BB2BB40B2F0D0FD23(FName NotifyName);
    void OnInputMoveForward(float InputValue, bool IsController);
    void OnEndSkillEffect();
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void OnEndAttack();
    void OnSpawnedLoopEffect(class ABP_SkillEffectBase_C* LoopEffect);
    void ExecuteUbergraph_BP_Action_Unique_FireKirin_Tackle(int32 EntryPoint);
}; // Size: 0x250

#endif
