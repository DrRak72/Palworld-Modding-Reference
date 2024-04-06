#ifndef UE4SS_SDK_BFL_RakLib_HPP
#define UE4SS_SDK_BFL_RakLib_HPP

class UBFL_RakLib_C : public UBlueprintFunctionLibrary
{

    void CompareStrings(FString StringFirst, FString StringSecond, class UObject* __WorldContext, bool& Str1Less);
    void SortStrArr(const TArray<FString>& SourceArray, class UObject* __WorldContext, TArray<FString>& Sorted);
    void GetReticleChest(class APalPlayerCharacter* Player, class UObject* __WorldContext, class APalBuildObject*& Chest);
    void GetModelSlotCount(class UPalMapObjectConcreteModelBase* Concrete, class UObject* __WorldContext, int32& SlotCt);
    void SortContArray(TArray<class UPalMapObjectConcreteModelBase*>& Array, class UObject* __WorldContext, TArray<class UPalMapObjectConcreteModelBase*>& Sorted);
    void GetBaseCampContainers(class UPalMapObjectConcreteModelBase* Item, class UObject* __WorldContext, TArray<class UPalMapObjectConcreteModelBase*>& FoodConts, TArray<class UPalMapObjectConcreteModelBase*>& Conts);
    void CheckAdminByUID(FGuid PlayerUId, class UObject* __WorldContext, bool& Admin);
    void GetPlayerByUID(const FGuid& PlayerUId, class UObject* __WorldContext, class APalPlayerCharacter*& Player, bool& Success);
    void CheckConcreteValidity(class UPalMapObjectConcreteModelBase* Concrete, class UObject* __WorldContext, bool& Valid, class UPalMapObjectItemContainerModule*& ContainerModule, class UPalItemContainer*& Container, TArray<class UPalItemSlot*>& SlotArray);
    void CheckModelValidity(const class UPalMapObjectModel*& Model, class UObject* __WorldContext, class UPalMapObjectConcreteModelBase*& ConcreteModel, bool& Valid);
    void CheckActorValidity(const class APalMapObject*& Item, class UObject* __WorldContext, class UPalMapObjectConcreteModelBase*& ConcreteModel, bool& Valid);
}; // Size: 0x28

#endif
