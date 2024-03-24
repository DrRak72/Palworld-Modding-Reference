#ifndef UE4SS_SDK_BP_MapObject_TreasureBox_HPP
#define UE4SS_SDK_BP_MapObject_TreasureBox_HPP

class ABP_MapObject_TreasureBox_C : public APalMapObjectTreasureBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UChildActorComponent* VisualActor;                                          // 0x03E8 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x03F0 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x03F8 (size: 0x8)
    TMap<class EPalMapObjectTreasureGradeType, class TSubclassOf<AActor>> VisualMap;  // 0x0400 (size: 0x50)

    void SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void TriggerOpen();
    void OnFinishOpenVisual();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnNotifiedStartOpen();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_TreasureBox(int32 EntryPoint);
}; // Size: 0x450

#endif
