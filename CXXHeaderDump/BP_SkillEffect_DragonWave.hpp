#ifndef UE4SS_SDK_BP_SkillEffect_DragonWave_HPP
#define UE4SS_SDK_BP_SkillEffect_DragonWave_HPP

class ABP_SkillEffect_DragonWave_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Wave;                                                    // 0x03D0 (size: 0x8)

    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void ReceiveBeginPlay();
    void DisableCollision();
    void ExecuteUbergraph_BP_SkillEffect_DragonWave(int32 EntryPoint);
}; // Size: 0x3D8

#endif
