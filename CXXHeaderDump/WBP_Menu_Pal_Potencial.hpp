#ifndef UE4SS_SDK_WBP_Menu_Pal_Potencial_HPP
#define UE4SS_SDK_WBP_Menu_Pal_Potencial_HPP

class UWBP_Menu_Pal_Potencial_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BPPalTextBlock_HP_1;                                    // 0x0278 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_16;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_47;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_96;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image_145;                                                          // 0x02A8 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x02B0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_ATK;                                               // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DEF;                                               // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_HP;                                                // 0x02C8 (size: 0x8)

    void GetRankText(int32 TalentValue, FText& RankText);
    void SetupByParameter(class UPalIndividualCharacterParameter* targetParameter);
    void SetupByNum(int32 Talent_HP, int32 Talent_Attack, int32 Talent_Defense);
}; // Size: 0x2D0

#endif
