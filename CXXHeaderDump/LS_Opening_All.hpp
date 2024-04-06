#ifndef UE4SS_SDK_LS_Opening_All_HPP
#define UE4SS_SDK_LS_Opening_All_HPP

class ULS_Opening_All (Director BP)_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void StartEyeTransition();
    void AnimFinished();
    void ExecuteUbergraph_LS_Opening_All (Director BP)(int32 EntryPoint);
}; // Size: 0x40

#endif
