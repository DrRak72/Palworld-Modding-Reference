#ifndef UE4SS_SDK_BP_OtomoPalHolderComponentForNPC_HPP
#define UE4SS_SDK_BP_OtomoPalHolderComponentForNPC_HPP

class UBP_OtomoPalHolderComponentForNPC_C : public UBP_OtomoPalHolderComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0188 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC(int32 EntryPoint);
}; // Size: 0x190

#endif
