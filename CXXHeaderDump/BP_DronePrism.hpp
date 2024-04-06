#ifndef UE4SS_SDK_BP_DronePrism_HPP
#define UE4SS_SDK_BP_DronePrism_HPP

class ABP_DronePrism_C : public ABP_CapturePrism_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)

    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DronePrism(int32 EntryPoint);
}; // Size: 0x570

#endif
