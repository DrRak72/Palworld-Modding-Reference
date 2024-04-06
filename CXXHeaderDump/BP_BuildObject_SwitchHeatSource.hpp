#ifndef UE4SS_SDK_BP_BuildObject_SwitchHeatSource_HPP
#define UE4SS_SDK_BP_BuildObject_SwitchHeatSource_HPP

class ABP_BuildObject_SwitchHeatSource_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UBP_HeatSourceSphereComponent_C* BP_HeatSourceComponent;                    // 0x0588 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0590 (size: 0x8)

    void OnUpdateSwitch(class UPalMapObjectSwitchModule* Module);
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void ReceiveBeginPlay();
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void OnAvailableConcreteModel(class UPalMapObjectConcreteModelBase* Model);
    void ExecuteUbergraph_BP_BuildObject_SwitchHeatSource(int32 EntryPoint);
}; // Size: 0x598

#endif
