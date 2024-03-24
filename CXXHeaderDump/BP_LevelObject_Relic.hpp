#ifndef UE4SS_SDK_BP_LevelObject_Relic_HPP
#define UE4SS_SDK_BP_LevelObject_Relic_HPP

class ABP_LevelObject_Relic_C : public APalLevelObjectRelic
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x0310 (size: 0x8)
    class USceneComponent* ObtainFXOrigin;                                            // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_Base;                                      // 0x0320 (size: 0x8)
    class UNiagaraComponent* AuraEffect;                                              // 0x0328 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0330 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_Gem;                                       // 0x0338 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0340 (size: 0x8)

    FVector GetObtainFXLocation();
    void OnUpdatePickupStatus(class APalLevelObjectObtainable* LevelObject);
    void SetActiveSelf(class APalLevelObjectObtainable* LevelObject);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LevelObject_Relic(int32 EntryPoint);
}; // Size: 0x348

#endif
