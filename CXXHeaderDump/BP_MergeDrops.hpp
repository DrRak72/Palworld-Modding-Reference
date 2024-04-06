#ifndef UE4SS_SDK_BP_MergeDrops_HPP
#define UE4SS_SDK_BP_MergeDrops_HPP

class ABP_MergeDrops_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class ABP_RakLib_C* RakLib;                                                       // 0x02A0 (size: 0x8)
    class ABP_RakLogistics_C* RakLogistics;                                           // 0x02A8 (size: 0x8)
    TMap<class FString, class FMapObjectArray> ItemMap;                               // 0x02B0 (size: 0x50)

    void MergeItems(class APalMapObjectDropItem* Source, class APalMapObjectDropItem* Destination, class UPalItemSlot*& Slot);
    void MergeItem(class APalMapObjectDropItem* Item, bool& Continue);
    void CheckMerge(class APalMapObjectDropItem* ITEM1, class APalMapObjectDropItem* ITEM2, class APalMapObjectDropItem*& TItem1, class APalMapObjectDropItem*& TItem2, bool& Into2, bool& Into1);
    double TryGetBaseBounds(class APalMapObjectDropItem* Item);
    void CheckTPItem(class APalMapObjectDropItem* Item);
    void ReceiveBeginPlay();
    void PrintToModLoader(FString Message);
    void ExecuteUbergraph_BP_MergeDrops(int32 EntryPoint);
}; // Size: 0x300

#endif
