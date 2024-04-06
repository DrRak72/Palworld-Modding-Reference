#ifndef UE4SS_SDK_BP_SkillEffect_Psychokinesis_HPP
#define UE4SS_SDK_BP_SkillEffect_Psychokinesis_HPP

class ABP_SkillEffect_Psychokinesis_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Wave;                                                    // 0x03D0 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D8 (size: 0x8)

    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_Psychokinesis(int32 EntryPoint);
}; // Size: 0x3E0

#endif
