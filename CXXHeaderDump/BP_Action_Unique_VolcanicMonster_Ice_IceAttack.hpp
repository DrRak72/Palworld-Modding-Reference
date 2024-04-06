#ifndef UE4SS_SDK_BP_Action_Unique_VolcanicMonster_Ice_IceAttack_HPP
#define UE4SS_SDK_BP_Action_Unique_VolcanicMonster_Ice_IceAttack_HPP

class UBP_Action_Unique_VolcanicMonster_Ice_IceAttack_C : public UBP_Action_Unique_VolcanicMonster_MagmaAttack_C
{

    void GetMontage(class UAnimMontage*& NewParam);
    void GetEffect(TSubclassOf<class ABP_SkillEffectBase_C>& NewParam);
}; // Size: 0x218

#endif
