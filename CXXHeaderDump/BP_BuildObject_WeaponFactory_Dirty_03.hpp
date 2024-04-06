#ifndef UE4SS_SDK_BP_BuildObject_WeaponFactory_Dirty_03_HPP
#define UE4SS_SDK_BP_BuildObject_WeaponFactory_Dirty_03_HPP

class ABP_BuildObject_WeaponFactory_Dirty_03_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0588 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0590 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0598 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing3;                                       // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x05B8 (size: 0x8)
    class UBP_BuildObjectFactoryConveyorComponent_C* FactoryConveyorComponent;        // 0x05C0 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing1;                                       // 0x05C8 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing2;                                       // 0x05D0 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing;                                        // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x05E0 (size: 0x8)
    class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;       // 0x05E8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05F0 (size: 0x8)

    void OnAvailable_BlueprintImpl();
    void OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model);
    void ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_03(int32 EntryPoint);
}; // Size: 0x5F8

#endif
