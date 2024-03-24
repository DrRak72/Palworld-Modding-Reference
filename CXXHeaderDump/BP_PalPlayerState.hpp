#ifndef UE4SS_SDK_BP_PalPlayerState_HPP
#define UE4SS_SDK_BP_PalPlayerState_HPP

class ABP_PalPlayerState_C : public APalPlayerState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x07C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x07C8 (size: 0x8)

    void LoadTitleLevel(bool bIsSaveSuccess);
    void ExecuteUbergraph_BP_PalPlayerState(int32 EntryPoint);
}; // Size: 0x7D0

#endif
