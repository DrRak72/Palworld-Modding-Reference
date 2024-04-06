#ifndef UE4SS_SDK_BP_AIActionBaseCamp_InSpa_HPP
#define UE4SS_SDK_BP_AIActionBaseCamp_InSpa_HPP

class UBP_AIActionBaseCamp_InSpa_C : public UPalAIActionBaseCampInUsingAmusement
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x01B0 (size: 0x8)

    float GetUsingTime();
    void OnFinishedImpl(class AActor* ControlledPawn);
    void OnStartImpl(class AActor* ControlledPawn);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ExecuteUbergraph_BP_AIActionBaseCamp_InSpa(int32 EntryPoint);
}; // Size: 0x1B8

#endif
