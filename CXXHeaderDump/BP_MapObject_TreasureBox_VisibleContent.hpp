#ifndef UE4SS_SDK_BP_MapObject_TreasureBox_VisibleContent_HPP
#define UE4SS_SDK_BP_MapObject_TreasureBox_VisibleContent_HPP

class ABP_MapObject_TreasureBox_VisibleContent_C : public APalMapObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x03B8 (size: 0x8)
    class UChildActorComponent* VisualActor;                                          // 0x03C0 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x03C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D0 (size: 0x8)

    void SetupEventToItemContainer(class UPalItemContainer* ItemContainer);
    bool IsShowOutlineInReticleTargetting();
    void OnReadyItemContainerModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void TryGetStaticItemId(class UPalMapObjectPickupItemOnLevelModel* PickupItemModel, FName& StaticItemId);
    void SetupVisual(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OnLoaded_5B64A48B4D131A93CE43F0A15F0EF12B(UClass* Loaded);
    void LoadVisualActor(TSoftClassPtr<AActor> BlueprintClassSoft);
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void ExecuteUbergraph_BP_MapObject_TreasureBox_VisibleContent(int32 EntryPoint);
}; // Size: 0x3D8

#endif
