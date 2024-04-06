#ifndef UE4SS_SDK_WBP_PalCommonInfo_SaveParameter_HPP
#define UE4SS_SDK_WBP_PalCommonInfo_SaveParameter_HPP

class UWBP_PalCommonInfo_SaveParameter_C : public UWBP_PalSaveParameterDisplayWidget_C
{
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x0688 (size: 0x8)

    void DisplaySaveParameter(FPalIndividualCharacterSaveParameter displayParameter);
    void SetSoulRank(int32 SoulRank);
    void SetElement(EPalElementType type1, EPalElementType type2);
    void SetEmpty();
    void SetFoodAmount(int32 FoddAmount);
    void SetupAfterDisplayed();
    void SetGender(EPalGenderType GenderType);
    void SetRank(int32 Rank);
    void SetLevelAndExp(int32 Level, int32 nowExp, int32 NextEXP, double nowExpRate);
    void SetWaza(TArray<EPalWazaID>& wazaArray);
    void SetPassiveSkill(TArray<FName>& PassiveSkillNameArray);
    void SetWorkSuitability(TMap<EPalWorkSuitability, int32> SuitabilityMap);
    void SetNickName(FString NickName);
    void SetHunger(double nowHunger, double maxHunger);
    void SetBaseParameter(int32 MeleeAttack, int32 ShotAttack, int32 Defense, int32 Support, int32 Speed);
    void SetHP(int32 nowHP, int32 MaxHP);
}; // Size: 0x690

#endif
