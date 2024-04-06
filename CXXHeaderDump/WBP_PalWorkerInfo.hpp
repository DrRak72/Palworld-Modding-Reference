#ifndef UE4SS_SDK_WBP_PalWorkerInfo_HPP
#define UE4SS_SDK_WBP_PalWorkerInfo_HPP

class UWBP_PalWorkerInfo_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x05A8 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x05B0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_PalWorkIcon;                                  // 0x05B8 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge;                                          // 0x05C0 (size: 0x8)
    class UProgressBar* ProgressBar_HungerGauge;                                      // 0x05C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxSanity;                                         // 0x05D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowSanity;                                         // 0x05D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalLV;                                             // 0x05E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalLVNum;                                          // 0x05E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x05F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_SANTitle;                                          // 0x05F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkerComment;                                     // 0x0600 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkTypeName;                                      // 0x0608 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;          // 0x0610 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_1;        // 0x0618 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_2;        // 0x0620 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_3;        // 0x0628 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_0;                        // 0x0630 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_1;                        // 0x0638 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_2;                        // 0x0640 (size: 0x8)
    class UMaterial* defaultSanityTextMaterial;                                       // 0x0648 (size: 0x8)
    TArray<class UWBP_MainMenu_Pal_State_C*> ConditionWidgetArray;                    // 0x0650 (size: 0x10)
    TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillWidget;              // 0x0660 (size: 0x10)
    TMap<class EPalWorkSuitability, class UWBP_MainMenu_Pal_WorkIcon_C*> WorkSuitabilityWidgetMap; // 0x0670 (size: 0x50)

    void OnUpdateCondition_Binded();
    void SetPassiveSkill(TArray<FName>& PassiveSkills);
    void Set Work Suitability(TMap<EPalWorkSuitability, int32> WorkSuitabilities);
    void Check Valid Work Suitability(EPalWorkSuitability InWorkSuitability, bool& IsValid, EPalWorkSuitability& OutWorkSuitability);
    void UpdateHunger(double nowHunger, double nowMaxHunger);
    void UpdateLevel(int32 NewLevel);
    void UpdateNickname(FString NewNickName);
    void UpdateSanity(double nowSanity, double nowMaxSanity);
    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void SetWorkerComment(class UPalIndividualCharacterHandle* targetHandle);
    void SetWorkType(class UPalIndividualCharacterHandle* targetHandle);
    void Setup(class UPalIndividualCharacterHandle* targetHandle);
    void AnmEvent_Open();
    void AnmEvent_Close();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalWorkerInfo(int32 EntryPoint);
}; // Size: 0x6C0

#endif
