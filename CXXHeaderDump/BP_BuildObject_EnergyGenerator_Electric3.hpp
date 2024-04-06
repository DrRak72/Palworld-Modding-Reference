#ifndef UE4SS_SDK_BP_BuildObject_EnergyGenerator_Electric3_HPP
#define UE4SS_SDK_BP_BuildObject_EnergyGenerator_Electric3_HPP

class ABP_BuildObject_EnergyGenerator_Electric3_C : public APalBuildObjectGenerateEnergy
{
    class UPalMapObjectGenerateEnergyParameterComponent* GenerateEnergyParameter;     // 0x0590 (size: 0x8)
    class USceneComponent* EffectAttachment;                                          // 0x0598 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x05A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A8 (size: 0x8)
    class USceneComponent* Meshes;                                                    // 0x05B0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05C0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05C8 (size: 0x8)
    class UNiagaraComponent* PlayingFX;                                               // 0x05D0 (size: 0x8)

    void OnEndGenerate();
    void OnStartGenerate();
}; // Size: 0x5D8

#endif
