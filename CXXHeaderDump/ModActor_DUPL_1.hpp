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
    class UWBP_RakLogistics_Main_C* MenuWidget;                                       // 0x02D8 (size: 0x8)
    class APalPlayerController* LocalController;                                      // 0x02E0 (size: 0x8)
    class ABP_ClientReplicator_C* ClientRep;                                          // 0x02E8 (size: 0x8)
    class ABP_RakLogistics_C* RakLogistics;                                           // 0x02F0 (size: 0x8)
    class UWBP_RakLogistics_ChestFilter_C* FilterWidget;                              // 0x02F8 (size: 0x8)

    void RakLibRegisterKeybind(FString KeyName, FString FunctionCallbackName);
    void PreBeginPlay();
    void PostBeginPlay();
    void PrintToModLoader(FString Message);
    void TryInit();
    void DoInit();
    void RakMenuKeyPress();
    void RakChestKeyPress();
    void SendKeepAlive();
    void StartTickKeepAlive();
    void ExecuteUbergraph_ModActor(int32 EntryPoint);
}; // Size: 0x300

#endif
