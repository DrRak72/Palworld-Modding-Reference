#ifndef UE4SS_SDK_BP_RakLogistics_HPP
#define UE4SS_SDK_BP_RakLogistics_HPP

class ABP_RakLogistics_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class UPalItemIDManager* IDManager;                                               // 0x02A0 (size: 0x8)
    class ABP_RakLib_C* RakLib;                                                       // 0x02A8 (size: 0x8)
    double MergeDistance;                                                             // 0x02B0 (size: 0x8)
    TEnumAsByte<EnumBaseDrops::Type> EnumBaseDrops;                                   // 0x02B8 (size: 0x1)
    TEnumAsByte<EnumWorldDrops::Type> EnumWorldDrops;                                 // 0x02B9 (size: 0x1)
    float Tick Interval;                                                              // 0x02BC (size: 0x4)
    TMap<APalMapObjectDropItem*, int32> NewItems;                                     // 0x02C0 (size: 0x50)
    bool Triggered;                                                                   // 0x0310 (size: 0x1)
    class ABP_MergeDrops_C* MergeDrops;                                               // 0x0318 (size: 0x8)
    class ABP_InstantTransport_C* InstantTransport;                                   // 0x0320 (size: 0x8)
    bool SortContainers;                                                              // 0x0328 (size: 0x1)
    class ABP_ContainerSort_C* ContainerSort;                                         // 0x0330 (size: 0x8)
    TArray<FString> Commands;                                                         // 0x0338 (size: 0x10)
    TArray<FPalChatMessage> ChatQueue;                                                // 0x0348 (size: 0x10)
    class APalPlayerCharacter* TestPlayer;                                            // 0x0358 (size: 0x8)
    class UWBP_RakLogistics_Main_C* WidgetRef;                                        // 0x0360 (size: 0x8)
    class ABP_ServerReplicator_C* ServerReplicator;                                   // 0x0368 (size: 0x8)

    void SaveFilterMap();
    void LoadFilterMap();
    void SetContainerFilters(const FContainerFilterStruct& Filters, const FGuid& ContainerId, class UPalMapObjectConcreteModelBase* Item);
    void GetContainerFilters(const FGuid& ContainerId, FContainerFilterStruct& Value);
    void GetContainerIDByPlayerID(const FGuid& PlayerUId, FGuid& ContainerId, bool& Owner, class UPalMapObjectConcreteModelBase*& ConcreteModel);
    void GetReticleChest(class APalPlayerCharacter* Player, class APalBuildObject*& Chest);
    void GetStorageActors(TArray<class APalBuildObject*>& OutActors);
    void InitDrops();
    void CheckVars();
    void TryTick();
    void SplitCommand(FString SourceString, TArray<FString>& Command);
    void HandleChatMessage(const FPalChatMessage& Message);
    void HandleChatWrapper(FGuid Message Sender Player UId, FString Message Message);
    void QueueMessage(FString Message, const FGuid& ReceiverPlayerUId);
    void MoveItem(class UPalItemSlot* Slot, class UPalMapObjectItemContainerModule* ContainerModule, class UPalItemSlot* DSlot, class UPalMapObjectItemContainerModule* DContainerModule, bool AllowPartialMerge, bool& Success, int32& Remainder);
    void MoveItemAndDispose(class UPalItemSlot* Slot, class APalMapObject* Item, class UPalItemSlot* DSlot, class UPalMapObjectItemContainerModule* DContainer, bool AllowPartialMerge, bool& Success);
    void GetBaseCampModelContainers(class UPalBaseCampModel* BaseCampModel, TArray<class UPalMapObjectConcreteModelBase*>& FoodConts, TArray<class UPalMapObjectConcreteModelBase*>& ItemConts, TArray<class UPalMapObjectConcreteModelBase*>& AllConts);
    void GetModelSlotCount(class UPalMapObjectConcreteModelBase* Concrete, int32& SlotCt);
    void SortContArray(TArray<class UPalMapObjectConcreteModelBase*>& Array, TArray<class UPalMapObjectConcreteModelBase*>& Sorted);
    void GetBaseCampContainers(class UPalMapObjectConcreteModelBase* Item, TArray<class UPalMapObjectConcreteModelBase*>& FoodConts, TArray<class UPalMapObjectConcreteModelBase*>& Conts);
    void ProcessWorldItem(class APalMapObjectDropItem* Item, class UPalMapObjectConcreteModelBase* Model);
    void ProcessItem(const class APalMapObjectDropItem*& Item);
    void DoTickItems();
    void FoundNewItem(const class APalMapObjectDropItem*& NewItem);
    void Init Items();
    void UpdateConfig();
    void SaveConfigModMenu();
    void LoadConfigModMenu();
    void RakLibHookChat(FString FuncName, FString FunctionCallbackName);
    void RakLibRegisterHook(FString FuncName, FString FunctionCallbackName);
    void RakLibRegisterNotify(FString ClassName, FString FunctionCallbackName);
    void PrintToModLoader(FString Message);
    void TickItems();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RakLogistics(int32 EntryPoint);
}; // Size: 0x370

#endif
