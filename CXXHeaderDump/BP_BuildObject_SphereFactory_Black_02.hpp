#ifndef UE4SS_SDK_BP_BuildObject_SphereFactory_Black_02_HPP
#define UE4SS_SDK_BP_BuildObject_SphereFactory_Black_02_HPP

class ABP_BuildObject_SphereFactory_Black_02_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UBP_BuildObjectFactoryConveyorComponent_C* FactoryConveyorComponent;        // 0x0588 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing1;                                       // 0x0590 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing2;                                       // 0x0598 (size: 0x8)
    class UPalWorkFacingComponent* WorkFacing;                                        // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x05A8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05B0 (size: 0x8)
    class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;       // 0x05B8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05C0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05C8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05D0 (size: 0x8)

    void OnAvailable_BlueprintImpl();
    void OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model);
    void ExecuteUbergraph_BP_BuildObject_SphereFactory_Black_02(int32 EntryPoint);
}; // Size: 0x5D8

#endif
