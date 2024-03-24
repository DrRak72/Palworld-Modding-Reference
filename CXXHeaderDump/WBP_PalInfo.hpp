#ifndef UE4SS_SDK_WBP_PalInfo_HPP
#define UE4SS_SDK_WBP_PalInfo_HPP

class UWBP_PalInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_TextToBonus;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_BonusToText;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0298 (size: 0x8)
    class UCanvasPanel* Canvas_Passive;                                               // 0x02A0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_Info;                                      // 0x02A8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;          // 0x02B0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_1;        // 0x02B8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_2;        // 0x02C0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_3;        // 0x02C8 (size: 0x8)
    class UWBP_Paldex_Task_C* WBP_Paldex_Task;                                        // 0x02D0 (size: 0x8)
    class UWBP_PalGet_s_C* WBP_PalGet_s;                                              // 0x02D8 (size: 0x8)
    bool isDisplaying;                                                                // 0x02E0 (size: 0x1)
    TArray<FName> stackedCharacterId;                                                 // 0x02E8 (size: 0x10)
    TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidgetArray;         // 0x02F8 (size: 0x10)
    TArray<FFPalUIPalInfoDisplayData> stackedGetInfo;                                 // 0x0308 (size: 0x10)
    TMap<TEnumAsByte<EPalUIPalInfoType::Type>, double> displayTimeMap;                // 0x0318 (size: 0x50)
    FTimerHandle CloseTimerHandle;                                                    // 0x0368 (size: 0x8)
    FDataTableRowHandle captureTitleMagId;                                            // 0x0370 (size: 0x10)
    FDataTableRowHandle firstCaptureTitleMagId;                                       // 0x0380 (size: 0x10)
    FDataTableRowHandle firstActivatedTitleMagId;                                     // 0x0390 (size: 0x10)
    FTimerHandle DetailChangeTimer;                                                   // 0x03A0 (size: 0x8)
    bool IsAfterOpenedBonusActivate;                                                  // 0x03A8 (size: 0x1)

    void OnDescToBonus();
    void DisplayFirstActivatedInfo(class APalCharacter* Character);
    void Create Default Get Info(FPalUIPalCaptureInfo CaptureInfo, FFPalUIPalInfoDisplayData& getInfoData, bool& isSuccessed);
    void ClearPassiveList();
    void DisplayPassiveSkill(TArray<FName>& passiveList);
    void DisplayShorDesc(FName CharacterID);
    void TryDIsplayStackedCharacter(bool& displayed);
    void Setup(FFPalUIPalInfoDisplayData getInfo);
    void Finished_DDDBAAA14AFFC8A46E31C0A4BCAC3C07();
    void Finished_8AC905F6491806EF04F1E58EE1398650();
    void AnmEvent_OpenAndSetTimer(TEnumAsByte<EPalUIPalInfoType::Type> infoType);
    void TryDisplayNextInfoEvent();
    void AnmEvent_ForceDesc();
    void AnmEvent_ForceBonus();
    void AnmEvent_BonusToDesc();
    void AnmEvent_DescToBonus();
    void OnInitialized();
    void SetupCapturePalInfo(FPalUIPalCaptureInfo CaptureInfo);
    void SetupFirstActivatedPalInfo(class UPalIndividualCharacterHandle* Handle);
    void ExecuteUbergraph_WBP_PalInfo(int32 EntryPoint);
}; // Size: 0x3A9

#endif
