#ifndef UE4SS_SDK_BP_Action_CapturedCage_HPP
#define UE4SS_SDK_BP_Action_CapturedCage_HPP

class UBP_Action_CapturedCage_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)

    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_CapturedCage(int32 EntryPoint);
}; // Size: 0x148

#endif
