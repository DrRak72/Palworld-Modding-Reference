#ifndef UE4SS_SDK_BP_ClientReplicator_HPP
#define UE4SS_SDK_BP_ClientReplicator_HPP

class ABP_ClientReplicator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class ABP_ServerReplicator_C* ServerReplicator;                                   // 0x02A0 (size: 0x8)
    class APalPlayerController* Controller;                                           // 0x02A8 (size: 0x8)
    double Merge Distance;                                                            // 0x02B0 (size: 0x8)
    TEnumAsByte<EnumBaseDrops::Type> Base Items;                                      // 0x02B8 (size: 0x1)
    TEnumAsByte<EnumWorldDrops::Type> World Items;                                    // 0x02B9 (size: 0x1)
    double Tick Interval;                                                             // 0x02C0 (size: 0x8)
    bool Sort Containers;                                                             // 0x02C8 (size: 0x1)
    FSettingsStruct Settings;                                                         // 0x02D0 (size: 0x20)
    class UWBP_RakLogistics_Main_C* Menu Widget;                                      // 0x02F0 (size: 0x8)
    class UWBP_RakLogistics_ChestFilter_C* Filter Widget;                             // 0x02F8 (size: 0x8)
    bool InitComplete;                                                                // 0x0300 (size: 0x1)

    void CompareStrings(FString S, FString S1, bool& Str1Less);
    void SortStrArr(const TArray<FString>& SourceArray, TArray<FString>& Sorted);
    void RakLibRegisterKeybind(FString KeyName, FString FunctionCallbackName);
    void ReceiveBeginPlay();
    void Client_ReceiveSettings(FSettingsStruct Settings);
    void Server_PostSettings(FSettingsStruct Settings);
    void PrintToModLoader(FString Message);
    void Server_RequestSettings(class ABP_ClientReplicator_C* Rep);
    void Client_ReceiveChest(FContainerFilterStruct Filters, FGuid ContainerId, class UPalMapObjectConcreteModelBase* ChestModel);
    void Server_RequestChest(const FGuid& PlayerUId);
    void Server_PostChest(FContainerFilterStruct Filters, FGuid ContainerId, class UPalMapObjectConcreteModelBase* ChestModel);
    void Server_KeepAlive();
    void ExecuteUbergraph_BP_ClientReplicator(int32 EntryPoint);
}; // Size: 0x301

#endif
