#ifndef UE4SS_SDK_BP_Action_Unique_VolcanicMonster_MagmaAttack_HPP
#define UE4SS_SDK_BP_Action_Unique_VolcanicMonster_MagmaAttack_HPP

class UBP_Action_Unique_VolcanicMonster_MagmaAttack_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)

    void GetMontage(class UAnimMontage*& NewParam);
    void GetEffect(TSubclassOf<class ABP_SkillEffectBase_C>& NewParam);
    void FindSpawnLocation(FVector& Location);
    void OnNotifyEnd_090DDDA44FFC5FC760FE0895EF53957A(FName NotifyName);
    void OnNotifyBegin_090DDDA44FFC5FC760FE0895EF53957A(FName NotifyName);
    void OnInterrupted_090DDDA44FFC5FC760FE0895EF53957A(FName NotifyName);
    void OnBlendOut_090DDDA44FFC5FC760FE0895EF53957A(FName NotifyName);
    void OnCompleted_090DDDA44FFC5FC760FE0895EF53957A(FName NotifyName);
    void OnEndAction();
    void OnBeginAction();
    void ExecuteUbergraph_BP_Action_Unique_VolcanicMonster_MagmaAttack(int32 EntryPoint);
}; // Size: 0x218

#endif
