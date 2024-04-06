#ifndef UE4SS_SDK_BP_Action_Unique_CaptainPenguin_BodySlide_HPP
#define UE4SS_SDK_BP_Action_Unique_CaptainPenguin_BodySlide_HPP

class UBP_Action_Unique_CaptainPenguin_BodySlide_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UBP_UniqueSkillModule_Tackle_C* TackleModule;                               // 0x0218 (size: 0x8)
    double TackleEndDistance;                                                         // 0x0220 (size: 0x8)
    class ABP_SkillEffectBase_C* SkillEffect_Loop;                                    // 0x0228 (size: 0x8)
    FTimerHandle EffectEndTimerHandle;                                                // 0x0230 (size: 0x8)
    double EndSkillEffectAdjustTime;                                                  // 0x0238 (size: 0x8)

    void OnCompletedEndMontage();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void CallEndAttack();
    void OnEndSkillEffect();
    void OnSpawnedLoopEffect(class ABP_SkillEffectBase_C* LoopEffect);
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_Action_Unique_CaptainPenguin_BodySlide(int32 EntryPoint);
}; // Size: 0x240

#endif
