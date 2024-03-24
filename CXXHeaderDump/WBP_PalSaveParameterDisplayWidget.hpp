#ifndef UE4SS_SDK_WBP_PalSaveParameterDisplayWidget_HPP
#define UE4SS_SDK_WBP_PalSaveParameterDisplayWidget_HPP

class UWBP_PalSaveParameterDisplayWidget_C : public UPalUserWidget
{
    FPalIndividualCharacterSaveParameter CachedSaveParameter;                         // 0x0408 (size: 0x218)

    void SetSoulRank(int32 SoulRank);
    void SetElement(EPalElementType type1, EPalElementType type2);
    void SetFoodAmount(int32 FoddAmount);
    void SetGender(EPalGenderType GenderType);
    void SetWorkSuitability(TMap<EPalWorkSuitability, int32> SuitabilityMap);
    void SetupAfterDisplayed();
    void GetSaveParameter(FPalIndividualCharacterSaveParameter& Parameter);
    void SetBaseParameter(int32 MeleeAttack, int32 ShotAttack, int32 Defense, int32 Support, int32 Speed);
    void SetHunger(double nowHunger, double maxHunger);
    void SetPassiveSkill(TArray<FName>& passiveSkillnameArray);
    void CalcHP();
    void SetHP(int32 nowHP, int32 MaxHP);
    void SetWaza(TArray<EPalWazaID>& wazaArray);
    void CalcExp(int32 Level, int32 Exp, bool IsPlayer);
    void SetLevelAndExp(int32 Level, int32 nowExp, int32 NextEXP, double nowExpRate);
    void SetNickName(FString NickName);
    void SetRank(int32 Rank);
    void Hide();
    void DisplaySaveParameter(FPalIndividualCharacterSaveParameter displayParameter);
}; // Size: 0x620

#endif
