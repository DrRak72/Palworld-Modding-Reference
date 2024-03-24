#ifndef UE4SS_SDK_WBP_DroppedPalInfoWIdget_HPP
#define UE4SS_SDK_WBP_DroppedPalInfoWIdget_HPP

class UWBP_DroppedPalInfoWIdget_C : public UWBP_PalSaveParameterDisplayWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class UImage* EXP_Gauge;                                                          // 0x0628 (size: 0x8)
    class UProgressBar* HP;                                                           // 0x0630 (size: 0x8)
    class UProgressBar* Hunger;                                                       // 0x0638 (size: 0x8)
    class UImage* Image_HP_Line;                                                      // 0x0640 (size: 0x8)
    class UImage* Image_Hunger_Line;                                                  // 0x0648 (size: 0x8)
    class UCanvasPanel* PalStatus;                                                    // 0x0650 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DefenseValue;                                      // 0x0658 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HP_Slash;                                          // 0x0660 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Hunger_Slash;                                      // 0x0668 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelValue;                                        // 0x0670 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHP;                                             // 0x0678 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHunger;                                         // 0x0680 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MelleAttackValue;                                  // 0x0688 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHP;                                             // 0x0690 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHunger;                                         // 0x0698 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x06A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RangeAttackValue;                                  // 0x06A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SpeedValue;                                        // 0x06B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SupportValue;                                      // 0x06B8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_00;         // 0x06C0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_01;         // 0x06C8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_02;         // 0x06D0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;          // 0x06D8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_1;        // 0x06E0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_2;        // 0x06E8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_3;        // 0x06F0 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x06F8 (size: 0x8)
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon;                                    // 0x0700 (size: 0x8)
    class UMaterialInstanceDynamic* expGaugeMaterial;                                 // 0x0708 (size: 0x8)
    TArray<class UWBP_MainMenu_Pal_Skill_Active_C*> WazaWidgetArray;                  // 0x0710 (size: 0x10)
    TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidgetArray;         // 0x0720 (size: 0x10)

    void SetGender(EPalGenderType GenderType);
    void SetNickName(FString NickName);
    void SetPassiveSkill(TArray<FName>& passiveSkillnameArray);
    void SetWaza(TArray<EPalWazaID>& wazaArray);
    void SetBaseParameter(int32 MeleeAttack, int32 ShotAttack, int32 Defense, int32 Support, int32 Speed);
    void SetLevelAndExp(int32 Level, int32 nowExp, int32 NextEXP, double nowExpRate);
    void SetupAfterDisplayed();
    void SetHunger(double nowHunger, double maxHunger);
    void SetHP(int32 nowHP, int32 MaxHP);
    void OnInitialized();
    void ExecuteUbergraph_WBP_DroppedPalInfoWIdget(int32 EntryPoint);
}; // Size: 0x730

#endif
