#ifndef UE4SS_SDK_BP_Action_Unique_GrassPanda_Electric_ElectricPunch_HPP
#define UE4SS_SDK_BP_Action_Unique_GrassPanda_Electric_ElectricPunch_HPP

class UBP_Action_Unique_GrassPanda_Electric_ElectricPunch_C : public UBP_Action_Unique_GrassPanda_MusclePunch_C
{

    void GetMontageEnd(class UAnimMontage*& NewParam);
    void GetMontageLoop(class UAnimMontage*& NewParam);
    void GetMontageStart(class UAnimMontage*& NewParam);
    void GetEffect(TSubclassOf<class ABP_SkillEffectBase_C>& NewParam);
}; // Size: 0x288

#endif
