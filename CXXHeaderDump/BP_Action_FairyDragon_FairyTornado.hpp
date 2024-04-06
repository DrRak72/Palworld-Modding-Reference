#ifndef UE4SS_SDK_BP_Action_FairyDragon_FairyTornado_HPP
#define UE4SS_SDK_BP_Action_FairyDragon_FairyTornado_HPP

class UBP_Action_FairyDragon_FairyTornado_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    TArray<FVector> TornadoOffset;                                                    // 0x0158 (size: 0x10)
    FName flagName;                                                                   // 0x0168 (size: 0x8)
    bool IsShooted;                                                                   // 0x0170 (size: 0x1)

    void SetPalMoveState(bool isDisable);
    void ShootTornado();
    void Get Target Rotation(FRotator& TargetRotation);
    void OnNotifyEnd_F84FD5024F7CF938F6C8628A693873C5(FName NotifyName);
    void OnNotifyBegin_F84FD5024F7CF938F6C8628A693873C5(FName NotifyName);
    void OnInterrupted_F84FD5024F7CF938F6C8628A693873C5(FName NotifyName);
    void OnBlendOut_F84FD5024F7CF938F6C8628A693873C5(FName NotifyName);
    void OnCompleted_F84FD5024F7CF938F6C8628A693873C5(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void ExecuteUbergraph_BP_Action_FairyDragon_FairyTornado(int32 EntryPoint);
}; // Size: 0x171

#endif
