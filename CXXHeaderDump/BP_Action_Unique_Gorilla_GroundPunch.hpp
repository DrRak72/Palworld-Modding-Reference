#ifndef UE4SS_SDK_BP_Action_Unique_Gorilla_GroundPunch_HPP
#define UE4SS_SDK_BP_Action_Unique_Gorilla_GroundPunch_HPP

class UBP_Action_Unique_Gorilla_GroundPunch_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    TArray<FReserveMontage> montageList;                                              // 0x0218 (size: 0x10)
    class ABP_SkillEffectBase_C* SkillEffect;                                         // 0x0228 (size: 0x8)
    int32 LastAttackMontageIndex;                                                     // 0x0230 (size: 0x4)
    class UAnimMontage* CurrentMontage_0;                                             // 0x0238 (size: 0x8)
    double RotateSpeed_0;                                                             // 0x0240 (size: 0x8)
    FName flagName_0;                                                                 // 0x0248 (size: 0x8)
    class AActor* ActionTarget;                                                       // 0x0250 (size: 0x8)
    double FindTargetDegree;                                                          // 0x0258 (size: 0x8)
    double FindTargetDistance;                                                        // 0x0260 (size: 0x8)
    double FindTargetHeight;                                                          // 0x0268 (size: 0x8)

    void CreateEffect();
    void RegisterMontageList();
    void OnEndPunch(class UAnimMontage* Montage, FName NotifyName);
    void OnEndAction();
    void TickAction(float DeltaTime);
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_Unique_Gorilla_GroundPunch(int32 EntryPoint);
}; // Size: 0x270

#endif
