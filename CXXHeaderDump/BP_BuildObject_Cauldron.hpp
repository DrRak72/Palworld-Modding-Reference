#ifndef UE4SS_SDK_BP_BuildObject_Cauldron_HPP
#define UE4SS_SDK_BP_BuildObject_Cauldron_HPP

class ABP_BuildObject_Cauldron_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UNiagaraComponent* NS_Caldron;                                              // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_Caldron;                                           // 0x0590 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0598 (size: 0x8)
    class UPalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent* BaseCampPassiveEffectWorkSpeedParameter; // 0x05A0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05B0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05B8 (size: 0x8)

    void SetActive_Internal(bool bOn);
    void ReceiveBeginPlay();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void CustomEvent(class UPalMapObjectConcreteModelBase* Model);
    void ExecuteUbergraph_BP_BuildObject_Cauldron(int32 EntryPoint);
}; // Size: 0x5C0

#endif
