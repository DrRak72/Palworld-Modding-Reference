#ifndef UE4SS_SDK_BP_BuildObject_BaseCampBattleDirector_HPP
#define UE4SS_SDK_BP_BuildObject_BaseCampBattleDirector_HPP

class ABP_BuildObject_BaseCampBattleDirector_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UBoxComponent* VirtualMeshCollision;                                        // 0x0588 (size: 0x8)
    class UPalSkeletalMeshComponent* PalSkeletalMesh;                                 // 0x0590 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0598 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05A8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05B0 (size: 0x8)

    void OnNotifiedChangeBaseCampBattleType(class UPalMapObjectBaseCampWorkerDirectorModel* Model);
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void ExecuteUbergraph_BP_BuildObject_BaseCampBattleDirector(int32 EntryPoint);
}; // Size: 0x5B8

#endif
