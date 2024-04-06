#ifndef UE4SS_SDK_BP_BuildObjectFactoryConveyorComponent_HPP
#define UE4SS_SDK_BP_BuildObjectFactoryConveyorComponent_HPP

class UBP_BuildObjectFactoryConveyorComponent_C : public UPalItemFlowSplineComponent
{
    class UMaterialInstanceDynamic* ConveyerDynamicMaterialInstance;                  // 0x0660 (size: 0x8)
    double ConveyorSpeed;                                                             // 0x0668 (size: 0x8)
    FName ScrollMaterialParametername;                                                // 0x0670 (size: 0x8)

    void SetRunningConveyor(bool bOn);
    void OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model);
    void OnUpdateCurrentEnergyState(class UPalMapObjectEnergyModule* Module);
    void OnReadyOwnerEnergyModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void SetupByOwner(class UPalMapObjectConcreteModelBase* ConcreteModel, class UMaterialInstanceDynamic* ConveyorMaterialInstance);
}; // Size: 0x678

#endif
