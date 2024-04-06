#ifndef UE4SS_SDK_WBP_MainMenu_Pal_00_HPP
#define UE4SS_SDK_WBP_MainMenu_Pal_00_HPP

class UWBP_MainMenu_Pal_00_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UWidgetAnimation* Anm_NoPal;                                                // 0x05A8 (size: 0x8)
    class UWidgetAnimation* Anm_Close_Status;                                         // 0x05B0 (size: 0x8)
    class UWidgetAnimation* Anm_Open_Status;                                          // 0x05B8 (size: 0x8)
    class UWidgetAnimation* Anm_Open_List;                                            // 0x05C0 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_Lock;                                       // 0x05C8 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_Lock_1;                                     // 0x05D0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_2;                                    // 0x05D8 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_LvText;                                 // 0x05E0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_NickName;                               // 0x05E8 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_SoulRank;                               // 0x05F0 (size: 0x8)
    class UCanvasPanel* Canvas_DropGuide;                                             // 0x05F8 (size: 0x8)
    class UCanvasPanel* Canvas_PalName;                                               // 0x0600 (size: 0x8)
    class UCanvasPanel* Canvas_PalStatus;                                             // 0x0608 (size: 0x8)
    class UCanvasPanel* Canvas_SkillInfo;                                             // 0x0610 (size: 0x8)
    class UCanvasPanel* CanvasPanel_PartnerSkill;                                     // 0x0618 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Potencial;                                        // 0x0620 (size: 0x8)
    class UCanvasPanel* CanvasPanelDebuff;                                            // 0x0628 (size: 0x8)
    class UCanvasPanel* CanvasPanelLock_1;                                            // 0x0630 (size: 0x8)
    class UCanvasPanel* CanvasPanelLockText;                                          // 0x0638 (size: 0x8)
    class UCanvasPanel* CanvasPanelLockText_1;                                        // 0x0640 (size: 0x8)
    class UProgressBar* Gauge_Exp;                                                    // 0x0648 (size: 0x8)
    class UProgressBar* Gauge_HP;                                                     // 0x0650 (size: 0x8)
    class UProgressBar* Gauge_Hunger;                                                 // 0x0658 (size: 0x8)
    class UImage* IconRankArrow_Attack;                                               // 0x0660 (size: 0x8)
    class UImage* IconRankArrow_Defence;                                              // 0x0668 (size: 0x8)
    class UImage* IconRankArrow_Work;                                                 // 0x0670 (size: 0x8)
    class UImage* Image_PartnerSkill;                                                 // 0x0678 (size: 0x8)
    class UImage* Image_PartnerSkill_Sq;                                              // 0x0680 (size: 0x8)
    class UImage* Image_PartnerSkillIcon;                                             // 0x0688 (size: 0x8)
    class UImage* Image_PartnerSkillIcon_Sq;                                          // 0x0690 (size: 0x8)
    class UImage* Image_Rare;                                                         // 0x0698 (size: 0x8)
    class UImage* Image_Strong;                                                       // 0x06A0 (size: 0x8)
    class UOverlay* Overlay_Circle;                                                   // 0x06A8 (size: 0x8)
    class UOverlay* Overlay_Icon_Circle;                                              // 0x06B0 (size: 0x8)
    class UOverlay* Overlay_Icon_sq;                                                  // 0x06B8 (size: 0x8)
    class UOverlay* Overlay_sq;                                                       // 0x06C0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_PartnerSkillDesc;                          // 0x06C8 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_PartnerSkillDesc_1;                        // 0x06D0 (size: 0x8)
    class UBP_PalRichTextBlock_C* RichText_PartnerSkillName;                          // 0x06D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DefenseValue;                                      // 0x06E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LevelValue;                                        // 0x06E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHP;                                             // 0x06F0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHunger;                                         // 0x06F8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NextExp;                                           // 0x0700 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHP;                                             // 0x0708 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHunger;                                         // 0x0710 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowSanity;                                         // 0x0718 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PartnerSkillLevel_Value;                           // 0x0720 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PartnerSkillLevel_Value_1;                         // 0x0728 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PartnerSkillLockItem;                              // 0x0730 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PartnerSkillName_1;                                // 0x0738 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PunishedLevel_Af;                                  // 0x0740 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PunishedLevel_Pre;                                 // 0x0748 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RangeAttackValue;                                  // 0x0750 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkSpeedValue;                                    // 0x0758 (size: 0x8)
    class UUniformGridPanel* UniformGrid_Suitability;                                 // 0x0760 (size: 0x8)
    class UVerticalBox* VerticalBox_Pal_List;                                         // 0x0768 (size: 0x8)
    class UVerticalBox* VerticalBox_Skill;                                            // 0x0770 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton_NameEdit;                             // 0x0778 (size: 0x8)
    class UWBP_MainMenu_Pal_FoodAmount_C* WBP_MainMenu_Pal_FoodAmount;                // 0x0780 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active;            // 0x0788 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_1;          // 0x0790 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* WBP_MainMenu_Pal_Skill_Active_2;          // 0x0798 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive;          // 0x07A0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_1;        // 0x07A8 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_2;        // 0x07B0 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Passive_C* WBP_MainMenu_Pal_Skill_Passive_3;        // 0x07B8 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State;                          // 0x07C0 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_0;                        // 0x07C8 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_1;                        // 0x07D0 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_2;                        // 0x07D8 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_3;                        // 0x07E0 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_4;                        // 0x07E8 (size: 0x8)
    class UWBP_MainMenu_Pal_StatusElement_C* WBP_MainMenu_Pal_StatusElement_000;      // 0x07F0 (size: 0x8)
    class UWBP_MainMenu_Pal_StatusElement_C* WBP_MainMenu_Pal_StatusElement_001;      // 0x07F8 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar;                  // 0x0800 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_1;                // 0x0808 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_2;                // 0x0810 (size: 0x8)
    class UWBP_MainMenu_PalRarityStar_C* WBP_MainMenu_PalRarityStar_3;                // 0x0818 (size: 0x8)
    class UWBP_MainMenu_PalSkillInfo_C* WBP_MainMenu_PalSkillInfo;                    // 0x0820 (size: 0x8)
    class UWBP_Menu_Pal_Potencial_C* WBP_Menu_Pal_Potencial;                          // 0x0828 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList;                                      // 0x0830 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_1;                                    // 0x0838 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_2;                                    // 0x0840 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_3;                                    // 0x0848 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_4;                                    // 0x0850 (size: 0x8)
    class UWBP_Menu_PalList_C* WBP_Menu_PalList_5;                                    // 0x0858 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData;                                                  // 0x0860 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton_HP;                             // 0x0868 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton_Hunger;                         // 0x0870 (size: 0x8)
    class UWBP_PalCommonButton_C* WBP_PalCommonButton_SAN;                            // 0x0878 (size: 0x8)
    class UWBP_PalGenderIcon_C* WBP_PalGenderIcon;                                    // 0x0880 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Atk;                      // 0x0888 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Def;                      // 0x0890 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_LevelSync;                // 0x0898 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Lock;                     // 0x08A0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Work;                     // 0x08A8 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x08B0 (size: 0x8)
    class UWBP_StatusBuffTimerContainer_C* WBP_StatusBuffTimerContainer;              // 0x08B8 (size: 0x8)
    TArray<class UWBP_Menu_PalList_C*> PalPanels;                                     // 0x08C0 (size: 0x10)
    FWBP_MainMenu_Pal_00_COnClickedAnyPalPanel OnClickedAnyPalPanel;                  // 0x08D0 (size: 0x10)
    void OnClickedAnyPalPanel(class UPalIndividualCharacterHandle* Handle);
    FWBP_MainMenu_Pal_00_COnHoveredAnyPalPanel OnHoveredAnyPalPanel;                  // 0x08E0 (size: 0x10)
    void OnHoveredAnyPalPanel(class UPalIndividualCharacterHandle* Handle);
    bool isShowStatusWithList;                                                        // 0x08F0 (size: 0x1)
    TArray<class UWBP_MainMenu_Pal_Skill_Active_C*> ActiveSkillPanelArray;            // 0x08F8 (size: 0x10)
    TArray<class UWBP_MainMenu_Pal_Skill_Passive_C*> PassiveSkillPanelArray;          // 0x0908 (size: 0x10)
    FWBP_MainMenu_Pal_00_COnUnhoveredAnyPalPanel OnUnhoveredAnyPalPanel;              // 0x0918 (size: 0x10)
    void OnUnhoveredAnyPalPanel();
    FWBP_MainMenu_Pal_00_COnCommitedNickName OnCommitedNickName;                      // 0x0928 (size: 0x10)
    void OnCommitedNickName(FText NewNickName);
    FWBP_MainMenu_Pal_00_COnChangedNickname OnChangedNickname;                        // 0x0938 (size: 0x10)
    void OnChangedNickname(FText editingNickName);
    TArray<class UWBP_MainMenu_Pal_State_C*> ConditionWidgetArray;                    // 0x0948 (size: 0x10)
    FDataTableRowHandle HPParameterTitleMsgID;                                        // 0x0958 (size: 0x10)
    FDataTableRowHandle HPParameterDescMsgID;                                         // 0x0968 (size: 0x10)
    FDataTableRowHandle HungerParameterTitleMsgID;                                    // 0x0978 (size: 0x10)
    FDataTableRowHandle HungerParameterDescMsgID;                                     // 0x0988 (size: 0x10)
    FDataTableRowHandle SanityParameterTitleMsgID;                                    // 0x0998 (size: 0x10)
    FDataTableRowHandle SanityParameterDescMsgID;                                     // 0x09A8 (size: 0x10)
    FDataTableRowHandle GenusCategoryDescMsgID;                                       // 0x09B8 (size: 0x10)
    TArray<class UWBP_MainMenu_Pal_State_C*> SindeInfoConditionWidgetArray;           // 0x09C8 (size: 0x10)
    FDataTableRowHandle NoPalMsgID;                                                   // 0x09D8 (size: 0x10)
    FWBP_MainMenu_Pal_00_COnSelectedChangeActiveSkill OnSelectedChangeActiveSkill;    // 0x09E8 (size: 0x10)
    void OnSelectedChangeActiveSkill(class UPalIndividualCharacterHandle* targetHandle, EPalWazaID changeWazaID, EPalWazaID newWazaID);
    FDataTableRowHandle SkillUnlockMsgID;                                             // 0x09F8 (size: 0x10)
    class UPalIndividualCharacterHandle* CachedIndividualHandle;                      // 0x0A08 (size: 0x8)
    class UWBP_MainMenu_Pal_Skill_Active_C* LastSelectedSkillPanel;                   // 0x0A10 (size: 0x8)
    TArray<class UWBP_MainMenu_PalRarityStar_C*> RarityWidgetArray;                   // 0x0A18 (size: 0x10)
    FDataTableRowHandle PartnerSkillLockMsgID;                                        // 0x0A28 (size: 0x10)
    FDataTableRowHandle DefTitleMsgID;                                                // 0x0A38 (size: 0x10)
    FDataTableRowHandle DefDescMsgID;                                                 // 0x0A48 (size: 0x10)
    FDataTableRowHandle AtkTitleMsgID;                                                // 0x0A58 (size: 0x10)
    FDataTableRowHandle AtkDescMsgID;                                                 // 0x0A68 (size: 0x10)
    FPalDataTableRowName_UIInputAction RemoveWazaInputAction;                         // 0x0A78 (size: 0x8)
    FPalUIActionBindData RemoveWazaActionHandle;                                      // 0x0A80 (size: 0x4)
    EPalWazaID CachedSelectedWazaID;                                                  // 0x0A84 (size: 0x1)
    FWBP_MainMenu_Pal_00_COnRequestedRemoveWaza OnRequestedRemoveWaza;                // 0x0A88 (size: 0x10)
    void OnRequestedRemoveWaza(EPalWazaID WazaID, class UPalIndividualCharacterHandle* targetHandle);
    FDataTableRowHandle WorkTitleMsgID;                                               // 0x0A98 (size: 0x10)
    FDataTableRowHandle WorkDescMsgID;                                                // 0x0AA8 (size: 0x10)
    FDataTableRowHandle LevelSyncMsgID;                                               // 0x0AB8 (size: 0x10)
    FDataTableRowHandle LevelSyncDescMsgID;                                           // 0x0AC8 (size: 0x10)
    bool IsEditingNickName;                                                           // 0x0AD8 (size: 0x1)

    void Update Talent Binded();
    void UpdateNickName_Binded(FString NewNickName);
    void SetRarity(bool IsBoss, bool IsRare);
    void SetPartnerSkillLock(FName CharacterID);
    void OnCloseNameEditWindow(class UPalHUDDispatchParameterBase* Param);
    void OpenNameEditWindow(FText DefaultName);
    class UWidget* CustomNavi_ToHPGuide(EUINavigation Navigation);
    class UWidget* CustomNavi_ToFirstPassiveButton(EUINavigation Navigation);
    void SetPartnerSkillIcon(FName CharacterID);
    void SetSoulRank(int32 Rank);
    void UpdateOverlaySkillInfoWindow();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnTriggeredRemoveWazaAction();
    void OnUnhoveredPalButtonEvent();
    void OnHoveredPalButtonEvent(class UPalIndividualCharacterHandle* Handle);
    void OnClickedPalButtonEvent(class UPalIndividualCharacterHandle* Handle);
    void OnUnhoveredConditionButtonEvent(class UWBP_MainMenu_Pal_State_C* selfWidget);
    void OnHoveredConditionButtonEvent(class UWBP_MainMenu_Pal_State_C* StateWidget);
    void OnUnhoveredPassiveSkillButtonEvent(class UWBP_MainMenu_Pal_Skill_Passive_C* selfWidget);
    void OnHoveredPassiveSkillButtonEvent(class UWBP_MainMenu_Pal_Skill_Passive_C* selfWidget);
    void OnUnhoveredActiveSkillButtonEvent(class UWBP_MainMenu_Pal_Skill_Active_C* selfWidget);
    void SetGender(EPalGenderType GenderType);
    void Update Buff Status(class UPalIndividualCharacterParameter* Individual);
    void Get Partner Skill Lock Item Name(FName ItemId, FText& ReturnText);
    void Check Valid Work Suitability(EPalWorkSuitability InWorkSuitability, bool& IsValid, EPalWorkSuitability& OutWorkSuitability, TArray<EPalMapObjectMaterialSubType>& MaterialSubTypes);
    void SetFoodAmount(int32 FoodAmount);
    void Set Work Suitability(TMap<EPalWorkSuitability, int32> WorkSuitabilities);
    void Update Soul Rank Binded();
    void Update Buff Binded();
    void UpdateExp_Binded(int32 addExp, int32 oldExp, double nowExpRate);
    void SetRank(int32 Rank);
    void Update Condition Binded();
    void SetElementType(EPalElementType type1, EPalElementType type2);
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void UpdateActiveSkill_Binded(TArray<EPalWazaID>& ActiveSkills);
    void SetPassiveSkill(TArray<FName>& PassiveSkills);
    void Update Level Binded(int32 NewLevel);
    void UpdateSanity_Binded(double nowSanity, double nowMaxSanity);
    void UpdateHunger_Binded(double nowHunger, double nowMaxHunger);
    void UpdateHP_Binded(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void SetupEvent();
    void CloseChangeActiveSkillList(class UPalHUDDispatchParameterBase* UPalHUDDispatchParam);
    void OpenChangeActiveSkillList(class UWBP_MainMenu_Pal_Skill_Active_C* SkillPanelWidget);
    void Close Overlay Info Window();
    void OpenOverlayStatusInfo(class UWidget* RelativeWidget, FVector2D AnchorPosition, FVector2D overrideInfoWidgetAlignment, FText Title, FText Desc, TEnumAsByte<E_PalUIStatusDIsplayParameter::Type> Status);
    void OpenOverlaySkillInfoWindow(class UWBP_MainMenu_Pal_Skill_Active_C* RelativeWidget, FVector2D AnchorPosition, FVector2D overrideInfoWidgetAlignment);
    void Open Overlay Info Window(class UWidget* RelativeWidget, FVector2D AnchorPosition, FVector2D overrideInfoWidgetAlignment, FText Title, FText Info, FText SubInfo);
    class UWidget* CustomNavi_ToActiveSkillTop(EUINavigation Navigation);
    void IsShowingStatusWithList(bool& isShowing);
    void Back to List();
    void ListToStatus(class UPalIndividualCharacterHandle* Handle);
    void FocusToParameterPanel();
    void GetRestoreFocusSkillPanelTarget(class UWidget*& TargetWidget);
    void FocusToSkillPanel();
    void FocusToPalPanel(int32 Index);
    void Setup Status(class UPalIndividualCharacterHandle* Handle);
    void Set Pal Handles(TArray<class UPalIndividualCharacterHandle*>& Handles);
    void OnHoveredActiveSkillButtonEvent(class UWBP_MainMenu_Pal_Skill_Active_C* selfWidget);
    void Finished_3B3110DC440BFBD5CFED78B55117839E();
    void Finished_F11D370F4605F1875DFE3B9E5A74FBB3();
    void AnmEvent_OpenList();
    void AnmEvent_ToStatus();
    void AnmEvent_ToList();
    void AnmEvent_ToStatus_WithSetup(class UPalIndividualCharacterHandle* Handle);
    void AnmEvent_NoPal();
    void AnmEvent_ShowSideInfo();
    void AnmEvent_HideSideInfo();
    void OnInitialized();
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_HP_K2Node_ComponentBoundEvent_14_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_HP_K2Node_ComponentBoundEvent_15_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_Hunger_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_Hunger_K2Node_ComponentBoundEvent_17_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_SAN_K2Node_ComponentBoundEvent_18_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalCommonButton_SAN_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* selfWidget);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* selfWidget);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_MainMenu_Pal_Skill_Active_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWBP_MainMenu_Pal_Skill_Active_C* selfWidget);
    void OnSelectedSkill(EPalWazaID WazaID);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Def_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Def_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Atk_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Atk_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Work_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_Work_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_LevelSync_K2Node_ComponentBoundEvent_22_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_PalInvisibleButton_LevelSync_K2Node_ComponentBoundEvent_23_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_MainMenu_Pal_00_WBP_CommonButton_NameEdit_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_WBP_MainMenu_Pal_00(int32 EntryPoint);
    void OnUnhoveredAnyPalPanel__DelegateSignature();
    void OnRequestedRemoveWaza__DelegateSignature(EPalWazaID WazaID, class UPalIndividualCharacterHandle* targetHandle);
    void OnSelectedChangeActiveSkill__DelegateSignature(class UPalIndividualCharacterHandle* targetHandle, EPalWazaID changeWazaID, EPalWazaID newWazaID);
    void OnChangedNickname__DelegateSignature(FText editingNickName);
    void OnCommitedNickName__DelegateSignature(FText NewNickName);
    void OnHoveredAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
    void OnClickedAnyPalPanel__DelegateSignature(class UPalIndividualCharacterHandle* Handle);
}; // Size: 0xAD9

#endif
