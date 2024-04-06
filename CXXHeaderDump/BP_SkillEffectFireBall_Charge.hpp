#ifndef UE4SS_SDK_BP_SkillEffectFireBall_Charge_HPP
#define UE4SS_SDK_BP_SkillEffectFireBall_Charge_HPP

class ABP_SkillEffectFireBall_Charge_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Charge;                                                  // 0x03C8 (size: 0x8)
    double ReadyTime;                                                                 // 0x03D0 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x03D8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffectFireBall_Charge(int32 EntryPoint);
}; // Size: 0x3E0

#endif
