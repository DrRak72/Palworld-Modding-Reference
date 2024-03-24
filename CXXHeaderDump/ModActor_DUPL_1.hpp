#ifndef UE4SS_SDK_ModActor_DUPL_1_HPP
#define UE4SS_SDK_ModActor_DUPL_1_HPP

class AModActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    FString ModAuthor;                                                                // 0x02A0 (size: 0x10)
    FString ModDescription;                                                           // 0x02B0 (size: 0x10)
    FString ModVersion;                                                               // 0x02C0 (size: 0x10)
    bool Initializing;                                                                // 0x02D0 (size: 0x1)
    TMap<APalMapObjectDropItem*, int32> NewItems;                                     // 0x02D8 (size: 0x50)
    class UPalItemContainerManager* ContainerManager;                                 // 0x0328 (size: 0x8)
    class UPalItemIDManager* IDManager;                                               // 0x0330 (size: 0x8)
    class UPalCharacterImportanceManager* ImportanceManager;                          // 0x0338 (size: 0x8)
    TMap<class UPalItemContainer*, class UPalMapObjectItemContainerModule*> ContainerMap; // 0x0340 (size: 0x50)
    bool PickupOutsideBase;                                                           // 0x0390 (size: 0x1)
    bool ContainerArr;                                                                // 0x0391 (size: 0x1)
    bool B;                                                                           // 0x0392 (size: 0x1)
    TMap<class UPalBaseCampModel*, class UPalBaseCampModuleItemStorage*> BaseItemStorage; // 0x0398 (size: 0x50)
    bool StorageActors;                                                               // 0x03E8 (size: 0x1)
    TArray<class APalBuildObject*> ItemContainers;                                    // 0x03F0 (size: 0x10)
    TArray<class APalBuildObject*> FoodContainers;                                    // 0x0400 (size: 0x10)

    void TryGetItemContainer(class UPalMapObjectConcreteModelBase* Model, TArray<class APalBuildObject*>& OutContainers1);
    void TryGetFoodContainer(class UPalMapObjectConcreteModelBase* Model, TArray<class APalBuildObject*>& OutContainers1);
    void TryGetBaseStorage(const class UPalBaseCampModel*& BaseCampModel, class UPalBaseCampModuleItemStorage*& Storage);
    void UpdateContainers();
    void GetConfig();
    void TryGetContainerModule(class UPalItemContainer* Container, class UPalMapObjectItemContainerModule*& ContainerModule);
    void GetMaxStack(const FName StaticItemId, int32& MaxStack);
    void TryPlaceItem(class APalMapObjectDropItem* Item, class UPalItemContainer* Container);
    void ProcessWorldItem(class APalMapObjectDropItem* Item, class UPalMapObjectConcreteModelBase* Model);
    void ProcessBaseItem(class APalMapObjectDropItem* Item, class UPalMapObjectConcreteModelBase* Model);
    void CheckValidity(const class APalMapObject*& Item, class UPalMapObjectConcreteModelBase*& ConcreteModel, bool& Valid);
    void ProcessItem(const class APalMapObjectDropItem*& Item);
    void TickItems();
    void FoundNewItem(class APalMapObjectDropItem* Item);
    void RakLibRegisterNotify(FString ClassName, FString FunctionCallbackName);
    void SetStaticVars();
    void InitFunc();
    void ReceiveTick(float DeltaSeconds);
    void PreBeginPlay();
    void PostBeginPlay();
    void PrintToModLoader(FString Message);
    void TryInit();
    void DoInit();
    void UpdateContainerss();
    void ExecuteUbergraph_ModActor(int32 EntryPoint);
}; // Size: 0x410

#endif
