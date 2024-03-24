#ifndef UE4SS_SDK_ModActor_HPP
#define UE4SS_SDK_ModActor_HPP

class AModActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    FString ModAuthor;                                                                // 0x02A0 (size: 0x10)
    FString ModDescription;                                                           // 0x02B0 (size: 0x10)
    FString ModVersion;                                                               // 0x02C0 (size: 0x10)
    bool Initializing;                                                                // 0x02D0 (size: 0x1)

    void RakLibRegisterNotify(FString ClassName, FString FunctionCallbackName);
    void ReceiveTick(float DeltaSeconds);
    void PreBeginPlay();
    void PostBeginPlay();
    void PrintToModLoader(FString Message);
    void RakLibTick();
    void TryInit();
    void RakLibInit();
    void ExecuteUbergraph_ModActor(int32 EntryPoint);
}; // Size: 0x2D1

#endif
