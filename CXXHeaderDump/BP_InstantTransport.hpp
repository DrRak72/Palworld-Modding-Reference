#ifndef UE4SS_SDK_BP_InstantTransport_HPP
#define UE4SS_SDK_BP_InstantTransport_HPP

class ABP_InstantTransport_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class ABP_RakLogistics_C* RakLogistics;                                           // 0x02A0 (size: 0x8)
    class ABP_RakLib_C* RakLib;                                                       // 0x02A8 (size: 0x8)

    void TryGetItemContainer(class UPalMapObjectConcreteModelBase* Model, TArray<class UPalMapObjectConcreteModelBase*>& ItemConts);
    void TryGetFoodContainer(class UPalMapObjectConcreteModelBase* Model, TArray<class UPalMapObjectConcreteModelBase*>& ItemConts);
    void GetBaseCampContainers(class UPalMapObjectConcreteModelBase* Item, TArray<class UPalMapObjectConcreteModelBase*>& FoodConts, TArray<class UPalMapObjectConcreteModelBase*>& Conts);
    void SortContArray(TArray<class UPalMapObjectConcreteModelBase*>& Array, TArray<class UPalMapObjectConcreteModelBase*>& Sorted);
    void GetModelSlotCount(class UPalMapObjectConcreteModelBase* Concrete, int32& SlotCt);
    void TryFindSlot(TArray<class UPalItemSlot*>& Slots, class UPalMapObjectItemContainerModule* DContainer, class UPalItemSlot* Slot, class APalMapObjectDropItem* Item, bool& merged);
    void GetMaxStack(const FName StaticItemId, int32& MaxStack);
    void CheckConcreteValidity(class UPalMapObjectConcreteModelBase* Concrete, bool& Valid, class UPalMapObjectItemContainerModule*& ContainerModule, class UPalItemContainer*& Container, TArray<class UPalItemSlot*>& SlotArray);
    void CheckModelValidity(const class UPalMapObjectModel*& Model, class UPalMapObjectConcreteModelBase*& ConcreteModel, bool& Valid);
    void MergeStacks(class APalMapObject* Item, class UPalItemSlot* Slot, class UPalItemSlot* DSlot, class UPalMapObjectItemContainerModule* DContainer, bool AllowPartialMerge);
    void ProcessWorldItem(class APalMapObjectDropItem* Item, bool& merged);
    void InstantBaseItem(class APalMapObjectDropItem* Item, bool& Merged1);
    void ReceiveBeginPlay();
    void PrintToModLoader(FString Message);
    void ExecuteUbergraph_BP_InstantTransport(int32 EntryPoint);
}; // Size: 0x2B0

#endif
