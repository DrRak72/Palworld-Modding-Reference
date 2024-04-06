#ifndef UE4SS_SDK_BP_ServerReplicator_HPP
#define UE4SS_SDK_BP_ServerReplicator_HPP

class ABP_ServerReplicator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class ABP_RakLogistics_C* RakLogistics;                                           // 0x02A0 (size: 0x8)
    class ABP_ClientReplicator_C* ServerClientRep;                                    // 0x02A8 (size: 0x8)
    TMap<class TSoftObjectPtr<APalPlayerController>, class ABP_ClientReplicator_C*> RepMap; // 0x02B0 (size: 0x50)
    TArray<EPalItemTypeA> Type AFilters;                                              // 0x0300 (size: 0x10)
    TArray<EPalItemTypeB> Type BFilters;                                              // 0x0310 (size: 0x10)
    class ABP_RakLib_C* Rak Lib;                                                      // 0x0320 (size: 0x8)
    TArray<class ABP_ClientReplicator_C*> KeepAlives;                                 // 0x0328 (size: 0x10)

    void GetPlayerByUID(const FGuid& PlayerUId, class APalPlayerCharacter*& Player, bool& Success);
    void GetChestInfo(const FGuid& PlayerUId, FContainerFilterStruct& Value);
    void CheckPlayers();
    void ReceiveBeginPlay();
    void ReplicateSettings();
    void PrintToModLoader(FString Message);
    void PostSettings(FSettingsStruct Settings);
    void RequestSettings(class ABP_ClientReplicator_C* Target);
    void RequestChest(const FGuid& PlayerUId, class ABP_ClientReplicator_C* Target);
    void PostChest(FContainerFilterStruct Filters, FGuid ContainerId, class UPalMapObjectConcreteModelBase* ChestModel);
    void KeepAlive(class ABP_ClientReplicator_C* Target);
    void ExecuteUbergraph_BP_ServerReplicator(int32 EntryPoint);
}; // Size: 0x338

#endif
