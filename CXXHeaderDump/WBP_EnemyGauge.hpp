#ifndef UE4SS_SDK_WBP_EnemyGauge_HPP
#define UE4SS_SDK_WBP_EnemyGauge_HPP

class UWBP_EnemyGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_WorkIcon_2;                                           // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_WorkIcon_1;                                           // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_WorkIcon;                                             // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_BattleIN;                                             // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_Hunger;                                               // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Anm_Party;                                                // 0x02A8 (size: 0x8)
    class UWidgetAnimation* Anm_Pinch;                                                // 0x02B0 (size: 0x8)
    class UWidgetAnimation* Anm_Damage;                                               // 0x02B8 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x02C0 (size: 0x8)
    class UWidgetAnimation* Anm_BattleFlare;                                          // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_ATK;                                     // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_DEF;                                     // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_HP;                                      // 0x02E0 (size: 0x8)
    class UCanvasPanel* Canvas_PalCommonDetail;                                       // 0x02E8 (size: 0x8)
    class UCanvasPanel* Canvas_Pinch;                                                 // 0x02F0 (size: 0x8)
    class UCanvasPanel* CanvasPanelBattleIcon;                                        // 0x02F8 (size: 0x8)
    class UCanvasPanel* CanvasPanelWork;                                              // 0x0300 (size: 0x8)
    class UCanvasPanel* IconGroupWork_1;                                              // 0x0308 (size: 0x8)
    class UImage* IconPalWork;                                                        // 0x0310 (size: 0x8)
    class UImage* IconPalWork_2;                                                      // 0x0318 (size: 0x8)
    class UImage* IconSleeping;                                                       // 0x0320 (size: 0x8)
    class UImage* Image;                                                              // 0x0328 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_145;                                                          // 0x0338 (size: 0x8)
    class UImage* Image_Base;                                                         // 0x0340 (size: 0x8)
    class UImage* Image_Frame;                                                        // 0x0348 (size: 0x8)
    class UImage* Image_Rank;                                                         // 0x0350 (size: 0x8)
    class UImage* Image_Strong_Rare;                                                  // 0x0358 (size: 0x8)
    class UOverlay* Overlay_Potencial;                                                // 0x0360 (size: 0x8)
    class UImage* PalEnemyBase_Hunger;                                                // 0x0368 (size: 0x8)
    class UProgressBar* ProgressBar_Back;                                             // 0x0370 (size: 0x8)
    class UProgressBar* ProgressBar_HP;                                               // 0x0378 (size: 0x8)
    class URetainerBox* RetainerBox_CommonDetail;                                     // 0x0380 (size: 0x8)
    class USizeBox* SizeBox_Gender;                                                   // 0x0388 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildName;                                         // 0x0390 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelNum;                                          // 0x0398 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelTitle;                                        // 0x03A0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Name;                                              // 0x03A8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkName;                                          // 0x03B0 (size: 0x8)
    class UWBP_EnemyGauge_SAN_C* WBP_EnemyGauge_SAN;                                  // 0x03B8 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State;                          // 0x03C0 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Double_00;                        // 0x03C8 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Double_01;                        // 0x03D0 (size: 0x8)
    class UWBP_PalElementIcon_C* WBP_PalElementIcon_Single;                           // 0x03D8 (size: 0x8)
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon;                                    // 0x03E0 (size: 0x8)
    TMap<int32, UTexture2D*> RankIconMap;                                             // 0x03E8 (size: 0x50)
    FColor enemyColor;                                                                // 0x0438 (size: 0x4)
    FColor friendColor;                                                               // 0x043C (size: 0x4)
    class UPalUIDelayGaugeCalculator* delayGaugeCalculator;                           // 0x0440 (size: 0x8)
    class UMaterial* savedDefaultFontMat;                                             // 0x0448 (size: 0x8)
    double lowHealthPercent;                                                          // 0x0450 (size: 0x8)
    bool IsLowHealthNoticeDisplay;                                                    // 0x0458 (size: 0x1)
    double cachedHPPercent;                                                           // 0x0460 (size: 0x8)
    bool isFriendBg;                                                                  // 0x0468 (size: 0x1)
    bool CachedBattleMode;                                                            // 0x0469 (size: 0x1)
    bool CachedIsWork;                                                                // 0x046A (size: 0x1)
    EPalBaseCampWorkerEventType CachedCampEvent;                                      // 0x046B (size: 0x1)
    class UWidgetAnimation* CurrentIconAnm;                                           // 0x0470 (size: 0x8)
    FDataTableRowHandle SleepMsgId;                                                   // 0x0478 (size: 0x10)

    void Set Enable Talent Detail(bool isEnable, class UPalIndividualCharacterParameter* Parameter);
    void SetHungryCondition(TArray<EPalUIConditionType>& Conditions);
    void SetGender(EPalGenderType GenderType);
    void SetGuildName(FString NewGuildName);
    void SetVisibilitySanityGauge(ESlateVisibility Visibility);
    void SetSanityValue(double NowSanityValue, double MaxSanityValue);
    void Set Work Event Info(class UPalIndividualCharacterHandle* Handle, bool NotBattle);
    void SetVisibilityBattleIcon(ESlateVisibility Visibiliy);
    void SetVisibilityStrongRareMark(ESlateVisibility Visibility);
    void ChangeStrongPalMark();
    void ChangeRarePalMark();
    void SetWorkSuitability(TArray<EPalWorkSuitability>& Suitability);
    void RetainCommonDetail();
    void UpdateForTick(double DeltaTime);
    void TryDisplayLowHealthNotice(double nowPercent);
    void SetLowHealthNoticeDisplayFlag(bool isDisplay);
    void Trigger Damage Animation();
    void Set Battle Mode(bool IsBattleMode);
    void SetHPPercent_Force(double Percent);
    void ChangeEnemyMode();
    void ChangeFriendMode();
    void SetHPPercent(double Percent);
    void Set Level(int32 Level, bool GetLevelPenalty);
    void SetElement(EPalElementType type1, EPalElementType type2);
    void SetRank(int32 Rank);
    void SetTargetName(FText Name);
    void Finished_3A40E20A4EEEDB096D18D9BCA7FB77D2();
    void Finished_5FBBBD124EDCCC07BA9CB28F5BB90BA8();
    void AnmEvent_StartBattleLoop();
    void AnmEvent_StopBattleLoop();
    void AnmEvent_Damage();
    void AnmEvent_LowHealth(bool isDisplay);
    void AnmEvent_BgChange_Enemy();
    void AnmEvent_BgChange_Party();
    void AnmEvent_WorkLoop();
    void AnmEvent_StopWorkLoop();
    void AnmEvent_Starvation();
    void AnmEvent_StopStarvation();
    void OnInitialized();
    void ExecuteUbergraph_WBP_EnemyGauge(int32 EntryPoint);
}; // Size: 0x488

#endif
