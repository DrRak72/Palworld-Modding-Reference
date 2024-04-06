#ifndef UE4SS_SDK_BP_MapObject_DeathPenaltyChest_HPP
#define UE4SS_SDK_BP_MapObject_DeathPenaltyChest_HPP

class ABP_MapObject_DeathPenaltyChest_C : public APalMapObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class UNiagaraComponent* NS_MapObject_DroppedCharacter;                           // 0x03B8 (size: 0x8)
    class UPalMapObjectItemChestParameterComponent* PalMapObjectItemChestParameter;   // 0x03C0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x03C8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x03D8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x03E0 (size: 0x8)

    void SetActiveFXInLocal(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnNotifiedGuildUpdateInClient(class UPalMapObjectDeathPenaltyStorageModel* Model);
    void ExecuteUbergraph_BP_MapObject_DeathPenaltyChest(int32 EntryPoint);
}; // Size: 0x3E8

#endif
