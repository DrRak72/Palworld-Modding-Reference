#ifndef UE4SS_SDK_BP_BuildObject_CookingStove_HPP
#define UE4SS_SDK_BP_BuildObject_CookingStove_HPP

class ABP_BuildObject_CookingStove_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UNiagaraComponent* NS_CookingSmoke;                                         // 0x0588 (size: 0x8)
    class UPalWorkFacingComponent* PalWorkFacing1;                                    // 0x0590 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0598 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x05A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A8 (size: 0x8)
    class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;       // 0x05B0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05C0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05C8 (size: 0x8)

    void SetActive_Internal(bool bOn);
    void ReceiveBeginPlay();
    void OnAvailable_BlueprintImpl();
    void ExecuteUbergraph_BP_BuildObject_CookingStove(int32 EntryPoint);
}; // Size: 0x5D0

#endif
