#ifndef UE4SS_SDK_BP_CutsceneCharacterBase_HPP
#define UE4SS_SDK_BP_CutsceneCharacterBase_HPP

class ABP_CutsceneCharacterBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CutsceneCharacterBase(int32 EntryPoint);
}; // Size: 0x2A8

#endif
