#ifndef UE4SS_SDK_BP_Action_SpawnItemBase_HPP
#define UE4SS_SDK_BP_Action_SpawnItemBase_HPP

class UBP_Action_SpawnItemBase_C : public UPalActionSpawnItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0170 (size: 0x8)
    class UAnimInstance* AnimInst;                                                    // 0x0178 (size: 0x8)
    class APalCharacter* ActionCharacter;                                             // 0x0180 (size: 0x8)
    class UAnimMontage* ChargeMontage;                                                // 0x0188 (size: 0x8)
    bool IsFnishByAbortMontage;                                                       // 0x0190 (size: 0x1)
    class UPalFacialComponent* Facial;                                                // 0x0198 (size: 0x8)
    EPalFacialEyeType ChargeFacialEye;                                                // 0x01A0 (size: 0x1)
    FTimerHandle ChargeTimer;                                                         // 0x01A8 (size: 0x8)
    class UAnimMontage* FunMontage;                                                   // 0x01B0 (size: 0x8)
    EPalFacialEyeType FunFacialEye;                                                   // 0x01B8 (size: 0x1)

    void EndProc();
    void StopFunMontage();
    void StopChargeMontage();
    void OnNotifyEnd_2FFE26C44850576E346494ABF0A5DD9A(FName NotifyName);
    void OnNotifyBegin_2FFE26C44850576E346494ABF0A5DD9A(FName NotifyName);
    void OnInterrupted_2FFE26C44850576E346494ABF0A5DD9A(FName NotifyName);
    void OnBlendOut_2FFE26C44850576E346494ABF0A5DD9A(FName NotifyName);
    void OnCompleted_2FFE26C44850576E346494ABF0A5DD9A(FName NotifyName);
    void OnNotifyEnd_06AF58594525DF9FB23A808FEC71D691(FName NotifyName);
    void OnNotifyBegin_06AF58594525DF9FB23A808FEC71D691(FName NotifyName);
    void OnInterrupted_06AF58594525DF9FB23A808FEC71D691(FName NotifyName);
    void OnBlendOut_06AF58594525DF9FB23A808FEC71D691(FName NotifyName);
    void OnCompleted_06AF58594525DF9FB23A808FEC71D691(FName NotifyName);
    void StartFun();
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_SpawnItemBase(int32 EntryPoint);
}; // Size: 0x1B9

#endif
