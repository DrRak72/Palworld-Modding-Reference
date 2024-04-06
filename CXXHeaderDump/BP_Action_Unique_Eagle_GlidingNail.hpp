#ifndef UE4SS_SDK_BP_Action_Unique_Eagle_GlidingNail_HPP
#define UE4SS_SDK_BP_Action_Unique_Eagle_GlidingNail_HPP

class UBP_Action_Unique_Eagle_GlidingNail_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    double Const_LoopTime;                                                            // 0x0218 (size: 0x8)
    double Const_MoveSpeed;                                                           // 0x0220 (size: 0x8)
    class UAnimMontage* Montage_Start;                                                // 0x0228 (size: 0x8)
    class UAnimMontage* Montage_Loop;                                                 // 0x0230 (size: 0x8)
    class UAnimMontage* Montage_End;                                                  // 0x0238 (size: 0x8)
    bool IsMoving;                                                                    // 0x0240 (size: 0x1)
    bool IsBreaking;                                                                  // 0x0241 (size: 0x1)
    double BreakTimer;                                                                // 0x0248 (size: 0x8)
    class ABP_SkillEffect_Unique_Eagle_GlidingNail_C* TrailEffectActor;               // 0x0250 (size: 0x8)

    void FadeOutEffect();
    void SetDisableLookat(bool Disable);
    void UpdateHoming();
    void GetMoveSpeed(double& Speed);
    void UpdateVelocity(double DeltaTime);
    void OnMontageNotify(class UAnimMontage* Montage, FName NotifyName);
    void OnNotifyEnd_EDA18BFB417CE49ED186BCB8C436895E(FName NotifyName);
    void OnNotifyBegin_EDA18BFB417CE49ED186BCB8C436895E(FName NotifyName);
    void OnInterrupted_EDA18BFB417CE49ED186BCB8C436895E(FName NotifyName);
    void OnBlendOut_EDA18BFB417CE49ED186BCB8C436895E(FName NotifyName);
    void OnCompleted_EDA18BFB417CE49ED186BCB8C436895E(FName NotifyName);
    void OnNotifyEnd_1A98F1044BF6822D636ED1B6065CD900(FName NotifyName);
    void OnNotifyBegin_1A98F1044BF6822D636ED1B6065CD900(FName NotifyName);
    void OnInterrupted_1A98F1044BF6822D636ED1B6065CD900(FName NotifyName);
    void OnBlendOut_1A98F1044BF6822D636ED1B6065CD900(FName NotifyName);
    void OnCompleted_1A98F1044BF6822D636ED1B6065CD900(FName NotifyName);
    void OnNotifyEnd_047D21A3488F8E09C3818E9481BBE5FB(FName NotifyName);
    void OnNotifyBegin_047D21A3488F8E09C3818E9481BBE5FB(FName NotifyName);
    void OnInterrupted_047D21A3488F8E09C3818E9481BBE5FB(FName NotifyName);
    void OnBlendOut_047D21A3488F8E09C3818E9481BBE5FB(FName NotifyName);
    void OnCompleted_047D21A3488F8E09C3818E9481BBE5FB(FName NotifyName);
    void OnBeginAction();
    void OnLoopEnd();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Unique_Eagle_GlidingNail(int32 EntryPoint);
}; // Size: 0x258

#endif
