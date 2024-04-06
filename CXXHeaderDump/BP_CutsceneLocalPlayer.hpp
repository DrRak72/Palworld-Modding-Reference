#ifndef UE4SS_SDK_BP_CutsceneLocalPlayer_HPP
#define UE4SS_SDK_BP_CutsceneLocalPlayer_HPP

class ABP_CutsceneLocalPlayer_C : public ABP_CutsceneCharacterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UChildActorComponent* BP_CutsceneTerminal;                                  // 0x02B0 (size: 0x8)
    class UPalSkeletalMeshComponent* HairAttachAccessory;                             // 0x02B8 (size: 0x8)
    class UPalSkeletalMeshComponent* HairMesh;                                        // 0x02C0 (size: 0x8)
    class UPalSkeletalMeshComponent* HeadMesh;                                        // 0x02C8 (size: 0x8)
    class UPalSkeletalMeshComponent* PalSkeletalMesh;                                 // 0x02D0 (size: 0x8)

    void LoadLocalPlayerCharaMake();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CutsceneLocalPlayer(int32 EntryPoint);
}; // Size: 0x2D8

#endif
