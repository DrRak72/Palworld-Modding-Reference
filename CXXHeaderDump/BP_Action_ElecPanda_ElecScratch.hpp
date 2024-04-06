#ifndef UE4SS_SDK_BP_Action_ElecPanda_ElecScratch_HPP
#define UE4SS_SDK_BP_Action_ElecPanda_ElecScratch_HPP

class UBP_Action_ElecPanda_ElecScratch_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    TArray<FReserveMontage> montageList;                                              // 0x0158 (size: 0x10)
    class UAnimMontage* CurrentMontage;                                               // 0x0168 (size: 0x8)
    double RotateSpeed;                                                               // 0x0170 (size: 0x8)
    FName flagName;                                                                   // 0x0178 (size: 0x8)
    double FindTargetDegree;                                                          // 0x0180 (size: 0x8)
    double FindTargetDistance;                                                        // 0x0188 (size: 0x8)
    double FindTargetHeight;                                                          // 0x0190 (size: 0x8)
    class AActor* ActionTarget;                                                       // 0x0198 (size: 0x8)

    void FindActionTarget();
    void GetRotation(double DeltaTime, FRotator& Rotation);
    void SetPalMoveState(bool isDisable);
    void RegisterMontageList();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void OnBeginAction();
    void OnEndPunch(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_Action_ElecPanda_ElecScratch(int32 EntryPoint);
}; // Size: 0x1A0

#endif
