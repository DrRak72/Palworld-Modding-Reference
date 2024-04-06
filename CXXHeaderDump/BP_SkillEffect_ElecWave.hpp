#ifndef UE4SS_SDK_BP_SkillEffect_ElecWave_HPP
#define UE4SS_SDK_BP_SkillEffect_ElecWave_HPP

class ABP_SkillEffect_ElecWave_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03C8 (size: 0x8)
    class UNiagaraComponent* NS_DarkWave;                                             // 0x03D0 (size: 0x8)

    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void ReceiveBeginPlay();
    void DisableCollision();
    void ExecuteUbergraph_BP_SkillEffect_ElecWave(int32 EntryPoint);
}; // Size: 0x3D8

#endif
