#ifndef UE4SS_SDK_BP_MapObject_DroppedCharacter_HPP
#define UE4SS_SDK_BP_MapObject_DroppedCharacter_HPP

class ABP_MapObject_DroppedCharacter_C : public APalMapObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_InteractableCapsule;                          // 0x03B8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x03C0 (size: 0x8)
    class UNiagaraComponent* NS_MapObject_DroppedCharacter;                           // 0x03C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D0 (size: 0x8)
    double ReleasePower;                                                              // 0x03D8 (size: 0x8)
    class AActor* InteractOther;                                                      // 0x03E0 (size: 0x8)
    bool Auto Picked Up;                                                              // 0x03E8 (size: 0x1)
    bool bEnableInteract;                                                             // 0x03E9 (size: 0x1)

    void GetInteractWidget(class UPalUserWidget*& createdWidget);
    void SetActiveFXInLocal(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnNotifiedGuildUpdateInClient(class UPalMapObjectDeathDroppedCharacterModel* Model);
    void ExecuteUbergraph_BP_MapObject_DroppedCharacter(int32 EntryPoint);
}; // Size: 0x3EA

#endif
