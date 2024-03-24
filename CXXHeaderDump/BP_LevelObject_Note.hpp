#ifndef UE4SS_SDK_BP_LevelObject_Note_HPP
#define UE4SS_SDK_BP_LevelObject_Note_HPP

class ABP_LevelObject_Note_C : public APalLevelObjectNote
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0310 (size: 0x8)
    class USceneComponent* ObtainFXOrigin;                                            // 0x0318 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh_Base;                                      // 0x0328 (size: 0x8)
    class UNiagaraComponent* AuraEffect;                                              // 0x0330 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0338 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0340 (size: 0x8)

    FVector GetObtainFXLocation();
    void OnUpdatePickupStatus(class APalLevelObjectObtainable* LevelObject);
    void SetActiveSelf(class APalLevelObjectObtainable* LevelObject);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LevelObject_Note(int32 EntryPoint);
}; // Size: 0x348

#endif
