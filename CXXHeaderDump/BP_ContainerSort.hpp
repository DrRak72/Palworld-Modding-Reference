#ifndef UE4SS_SDK_BP_ContainerSort_HPP
#define UE4SS_SDK_BP_ContainerSort_HPP

class ABP_ContainerSort_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class ABP_RakLib_C* RakLib;                                                       // 0x02A0 (size: 0x8)
    class ABP_RakLogistics_C* RakLogistics;                                           // 0x02A8 (size: 0x8)
    bool Triggered;                                                                   // 0x02B0 (size: 0x1)
    TArray<class APalBuildObject*> NewQueue;                                          // 0x02B8 (size: 0x10)
    TMap<class UPalMapObjectItemContainerModule*, class UPalBaseCampModel*> ModuleBaseMap; // 0x02C8 (size: 0x50)
    TArray<class UPalMapObjectItemContainerModule*> UpdateQueue;                      // 0x0318 (size: 0x10)
    TArray<class UPalBaseCampModel*> SortedBases;                                     // 0x0328 (size: 0x10)
    TMap<class UPalItemContainer*, class bool> ContainerUpdateMap;                    // 0x0338 (size: 0x50)
    TMap<class UPalItemSlot*, class bool> SlotUpdateMap;                              // 0x0388 (size: 0x50)
    TMap<class FGuid, class FContainerFilterStruct> ContainerFilterMap;               // 0x03D8 (size: 0x50)
    int32 TicksSinceLastSort;                                                         // 0x0428 (size: 0x4)
    int32 SortTickDelay;                                                              // 0x042C (size: 0x4)
    TMap<class UPalItemSlot*, class FSlotInfo> SlotMap;                               // 0x0430 (size: 0x50)
    TMap<class FGuid, class FModelArray> BaseMap;                                     // 0x0480 (size: 0x50)
    TMap<class UPalItemSlot*, class FSlotArray> QueuedChecks;                         // 0x04D0 (size: 0x50)
    double LoopStart;                                                                 // 0x0520 (size: 0x8)
    int32 TickCount;                                                                  // 0x0528 (size: 0x4)
    int32 LoopLimit;                                                                  // 0x052C (size: 0x4)
    bool InitAnnounce;                                                                // 0x0530 (size: 0x1)
    bool SlotAnnounce;                                                                // 0x0531 (size: 0x1)
    int64 ComparisonsDone;                                                            // 0x0538 (size: 0x8)
    int32 LastCompAnnounce;                                                           // 0x0540 (size: 0x4)
    bool FirstRunComplete;                                                            // 0x0544 (size: 0x1)
    TArray<EPalItemTypeB> FoodTypes;                                                  // 0x0548 (size: 0x10)
    TArray<class UPalMapObjectItemContainerModule*> ReqSortQueue;                     // 0x0558 (size: 0x10)

    void LoadFilterMap();
    void Sort Slot Container(class UPalItemSlot* Slot);
    void TryAnnounceProgress();
    void GetNumOps(bool Condition, int64& Output_Get);
    void ToggleAnnounce(FString Message, bool Condition, bool& Condition1);
    void LoopUpdatedSlots();
    void CheckNews(TArray<class APalBuildObject*>& Array);
    void GetBaseCampContainers(class UPalMapObjectConcreteModelBase* Item, TArray<class UPalMapObjectConcreteModelBase*>& FoodConts, TArray<class UPalMapObjectConcreteModelBase*>& Conts);
    void SortContArray(TArray<class UPalMapObjectConcreteModelBase*>& Array, TArray<class UPalMapObjectConcreteModelBase*>& Sorted);
    void GetModelSlotCount(class UPalMapObjectConcreteModelBase* Concrete, int32& SlotCt);
    void GetBaseSlots(const class UPalItemSlot*& Slot, TArray<class UPalItemSlot*>& SlotArr);
    void CheckSlots(const class UPalItemSlot*& Source, const class UPalItemSlot*& Dest, bool& Moved, int32& Remainder);
    void ProcessSlot(const class UPalItemSlot*& Source, bool& Moved, bool& Removed);
    void TogglePrint(FString Message, bool Active);
    void SortContainerArr(TArray<class UPalMapObjectConcreteModelBase*>& Array);
    void ClearFilters(const FGuid& ContainerId);
    void RemoveFilterB(const EPalItemTypeB& BFilter, const FGuid& ContainerId);
    void RemoveFilterA(const EPalItemTypeA& AFilter, const FGuid& ContainerId);
    void AddFilterB(const EPalItemTypeB& BFilter, const FGuid& ContainerId);
    void AddFilterA(const EPalItemTypeA& AFilter, const FGuid& ContainerId);
    void TryTickNew();
    void SortBase(class UPalMapObjectConcreteModelBase* Item);
    void SlotUpdated(class UPalItemSlot* Slot);
    void RakLibRegisterNotify(FString ClassName, FString FunctionCallbackName);
    void TryGetMatchingSlot(class UPalItemSlot* Slot, class UPalMapObjectConcreteModelBase* Model, TArray<class UPalMapObjectConcreteModelBase*>& Array, bool& DidMove);
    void ProcessUpdatedContainer(class UPalMapObjectItemContainerModule* Module, bool& DidMove);
    void ContainerUpdated(class UPalMapObjectItemContainerModule* Module);
    void ProcessNewContainer(const class APalBuildObject*& Container, bool& Invalid);
    void NewContainer(const class APalBuildObject*& Container);
    void InitAllContainers();
    void ReceiveBeginPlay();
    void PrintToModLoader(FString Message);
    void TickNew();
    void ExecuteUbergraph_BP_ContainerSort(int32 EntryPoint);
}; // Size: 0x568

#endif
