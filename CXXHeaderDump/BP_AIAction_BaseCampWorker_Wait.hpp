#ifndef UE4SS_SDK_BP_AIAction_BaseCampWorker_Wait_HPP
#define UE4SS_SDK_BP_AIAction_BaseCampWorker_Wait_HPP

class UBP_AIAction_BaseCampWorker_Wait_C : public UBP_AIAction_Work_Wait_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0158 (size: 0x8)
    double RandomPositionRadius;                                                      // 0x0160 (size: 0x8)
    FVector To Location;                                                              // 0x0168 (size: 0x18)

    void OnTickForWait(float DeltaTime);
    void GetBaseCampRandomLocation(bool& bResult, FVector& ToLocation);
    void ActionStart(class APawn* ControlledPawn);
    void ExecuteUbergraph_BP_AIAction_BaseCampWorker_Wait(int32 EntryPoint);
}; // Size: 0x180

#endif
