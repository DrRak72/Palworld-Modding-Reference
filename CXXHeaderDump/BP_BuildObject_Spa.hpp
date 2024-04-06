#ifndef UE4SS_SDK_BP_BuildObject_Spa_HPP
#define UE4SS_SDK_BP_BuildObject_Spa_HPP

class ABP_BuildObject_Spa_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UNiagaraComponent* NS_PalSpaSteam;                                          // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_PalSpa;                                            // 0x0590 (size: 0x8)
    class UArrowComponent* CharacterOffsetInUsing;                                    // 0x0598 (size: 0x8)
    class UPalMapObjectAmusementParameterComponent* AmusementParameter;               // 0x05A0 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_InteractableCapsule;                          // 0x05A8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05C0 (size: 0x8)
    class UPalMapObjectAmusementModel* AmusementModel;                                // 0x05C8 (size: 0x8)

    void SetActive_Internal(bool bOn);
    void OnUpdateCharacter(class UPalMapObjectAmusementModel* Model);
    void OnStartUsingInServer(class UPalMapObjectAmusementModel* Model, class APalCharacter* Character);
    void ReceiveBeginPlay();
    void CustomEvent(class UPalMapObjectConcreteModelBase* Model);
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void ExecuteUbergraph_BP_BuildObject_Spa(int32 EntryPoint);
}; // Size: 0x5D0

#endif
