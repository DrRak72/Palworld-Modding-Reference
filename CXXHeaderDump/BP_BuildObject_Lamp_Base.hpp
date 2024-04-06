#ifndef UE4SS_SDK_BP_BuildObject_Lamp_Base_HPP
#define UE4SS_SDK_BP_BuildObject_Lamp_Base_HPP

class ABP_BuildObject_Lamp_Base_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0588 (size: 0x8)

    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void OnUpdateSwitchStateInternal(class UPalMapObjectSwitchModule* SwitchModule);
    void SetActiveLight(bool bActive);
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildObject_Lamp_Base(int32 EntryPoint);
}; // Size: 0x590

#endif
