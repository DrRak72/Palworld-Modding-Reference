#ifndef UE4SS_SDK_BP_ActionDroneStun_HPP
#define UE4SS_SDK_BP_ActionDroneStun_HPP

class UBP_ActionDroneStun_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0140 (size: 0x8)
    bool IsRagdoll;                                                                   // 0x0148 (size: 0x1)
    FVector StartPos;                                                                 // 0x0150 (size: 0x18)

    void Ragdoll();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_ActionDroneStun(int32 EntryPoint);
}; // Size: 0x168

#endif
