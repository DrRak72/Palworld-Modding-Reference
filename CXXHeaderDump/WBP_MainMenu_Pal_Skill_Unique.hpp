#ifndef UE4SS_SDK_WBP_MainMenu_Pal_Skill_Unique_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_Skill_Unique_HPP

class UWBP_MainMenu_Pal_Skill_Unique_C : public UUserWidget
{
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0278 (size: 0x8)
    class UImage* Image_63;                                                           // 0x0280 (size: 0x8)
    class UImage* SkillBase;                                                          // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WazaLv;                                            // 0x0290 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WazaLvNum;                                         // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WazaName;                                          // 0x02A0 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;                                // 0x02A8 (size: 0x8)

    void SetupBySaveParameter(FPalIndividualCharacterSaveParameter Parameter, bool ShowLv);
    void SetupFromHandle(class UPalIndividualCharacterHandle* IndividualHandle);
}; // Size: 0x2B0

#endif
