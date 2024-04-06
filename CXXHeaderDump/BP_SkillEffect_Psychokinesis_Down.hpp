#ifndef UE4SS_SDK_BP_SkillEffect_Psychokinesis_Down_HPP
#define UE4SS_SDK_BP_SkillEffect_Psychokinesis_Down_HPP

class ABP_SkillEffect_Psychokinesis_Down_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* DownWave;                                                // 0x03C8 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x03D0 (size: 0x8)
    TArray<class USphereComponent*> AttachedAttackCollisions;                         // 0x03D8 (size: 0x10)
    class AActor* CollisionOwner;                                                     // 0x03E8 (size: 0x8)

    void ApplyDamageWithAttackCollision(class AActor* Target);
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_Psychokinesis_Down(int32 EntryPoint);
}; // Size: 0x3F0

#endif
