#ifndef UE4SS_SDK_WBP_IngameMenu_PalBox_PalDetail_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalBox_PalDetail_HPP

class UWBP_IngameMenu_PalBox_PalDetail_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UImage* Background;                                                         // 0x05A8 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_LvText;                                 // 0x05B0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_SoulRank;                               // 0x05B8 (size: 0x8)
    class UCanvasPanel* Canvas_Info;                                                  // 0x05C0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Potencial;                                        // 0x05C8 (size: 0x8)
    class UCanvasPanel* CanvasPanelDebuff;                                            // 0x05D0 (size: 0x8)
    class UProgressBar* Gauge_Exp;                                                    // 0x05D8 (size: 0x8)
    class UProgressBar* Gauge_HP;                                                     // 0x05E0 (size: 0x8)
    class UProgressBar* Gauge_Hunger;                                                 // 0x05E8 (size: 0x8)
    class UHorizontalBox* Horizontal_WorkInfo;                                        // 0x05F0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PalWorkIcon;                                  // 0x05F8 (size: 0x8)
    class UImage* HPGaugeShadow;                                                      // 0x0600 (size: 0x8)
    class UImage* HPIcon;                                                             // 0x0608 (size: 0x8)
    class UImage* HungerGaugeShadow;                                                  // 0x0610 (size: 0x8)
    class UImage* HungerIcon;                                                         // 0x0618 (size: 0x8)
    class UImage* Image_Base_3;                                                       // 0x0620 (size: 0x8)
    class UImage* Image_Line_HP;                                                      // 0x0628 (size: 0x8)
    class UImage* Image_Line_Hunger;                                                  // 0x0630 (size: 0x8)
    class UImage* Image_Rare;                                                         // 0x0638 (size: 0x8)
    class UImage* Image_Strong;                                                       // 0x0640 (size: 0x8)
    class UCanvasPanel* PalStatus;                                                    // 0x0648 (size: 0x8)
    class UBP_PalTextBlock_C* Text_AttackValue;                                       // 0x0650 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DefenseValue;                                      // 0x0658 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelValue;                                        // 0x0660 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHP;                                             // 0x0668 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHunger;                                         // 0x0670 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxSanity;                                         // 0x0678 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NextExp;                                           // 0x0680 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHP;                                             // 0x0688 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHunger;                                         // 0x0690 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowSanity;                                         // 0x0698 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x06A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PunishedLevel_Af;                                  // 0x06A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PunishedLevel_Pre;                                 // 0x06B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkTypeName;                                      // 0x06B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkValue;                                         // 0x06C0 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmount_C* WBP_MainMenu_Pal_FoodAmount;                // 0x06C8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_00;         // 0x06D0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_01;         // 0x06D8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_02;         // 0x06E0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;          // 0x06E8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_1;        // 0x06F0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_2;        // 0x06F8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_3;        // 0x0700 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Unique_C* WBP_MainMenu_Pal_Skill_Unique;            // 0x0708 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_0;                        // 0x0710 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_1;                        // 0x0718 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_2;                        // 0x0720 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar;                  // 0x0728 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_1;                // 0x0730 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_2;                // 0x0738 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_3;                // 0x0740 (size: 0x8)
    class UWBP_Menu_Pal_Potencial_C* WBP_Menu_Pal_Potencial;                          // 0x0748 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData;                                                  // 0x0750 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0758 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon;                                  // 0x0760 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_1;                                // 0x0768 (size: 0x8)
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon;                                    // 0x0770 (size: 0x8)
    class UWBP_StatusBuffTimerContainer_C* WBP_StatusBuffTimerContainer;              // 0x0778 (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterHandle> lastDisplayedHandle;                // 0x0780 (size: 0x30)
    TArray<class UWBP_MainMenu_Pal_Skill_Active_C*> WazaWidgetArray;                  // 0x07B0 (size: 0x10)
    float savedMaxHunger;                                                             // 0x07C0 (size: 0x4)
    TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidgetArray;         // 0x07C8 (size: 0x10)
    TArray<class UWBP_MainMenu_Pal_State_C*> ConditionWidgetArray;                    // 0x07D8 (size: 0x10)
    class UMaterial* DefaultSanityFontMaterial;                                       // 0x07E8 (size: 0x8)
    float savedMaxSanity;                                                             // 0x07F0 (size: 0x4)
    TArray<class UWBP_MainMenu_PalRarityStar_C*> RarityWidgetArray;                   // 0x07F8 (size: 0x10)
    TMap<class EPalWorkSuitability, class UWBP_MainMenu_Pal_WorkIcon_C*> WorkSuitabilityWidgetMap; // 0x0808 (size: 0x50)

    void UpdateTalentBinded();
    void Update Buff Binded();
    void SetRarity(bool IsBoss, bool IsRare);
    void UpdateSoulRank_Binded();
    void SetSoulRank(int32 Rank);
    void SetEmpty();
    void SetGender(EPalGenderType GenderType);
    void Check Valid Work Suitability(EPalWorkSuitability InWorkSuitability, bool& IsValid, EPalWorkSuitability& OutWorkSuitability);
    void SetFoodAmount(int32 FoodAmount);
    void Set Work Suitability(TMap<EPalWorkSuitability, int32> WorkSuitabilities);
    void SetPassiveSkill(TArray<FName>& PassiveSkills);
    void UpdateActiveSkill_Binded(TArray<EPalWazaID>& ActiveSkills);
    void SetRank(int32 Rank);
    void SetElementType(EPalElementType type1, EPalElementType type2);
    void Update Condition Binded();
    void Update Status Parameter(class UPalIndividualCharacterParameter* individualParam);
    void UpdateNickName_Binded(FString NewNickName);
    void UpdateExp_Binded(int32 addExp, int32 oldExp, double nowExpRate);
    void UpdateLevel_Binded(int32 NewLevel);
    void UpdateSanity_Binded(double nowSanity, double nowMaxSanity);
    void UpdateHunger_Binded(double nowHunger, double nowMaxHunger);
    void UpdateHP_Binded(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_IngameMenu_PalBox_PalDetail(int32 EntryPoint);
}; // Size: 0x858

#endif
