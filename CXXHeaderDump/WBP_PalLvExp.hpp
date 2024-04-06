#ifndef UE4SS_SDK_WBP_PalLvExp_HPP
#define UE4SS_SDK_WBP_PalLvExp_HPP

class UWBP_PalLvExp_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UWidgetAnimation* Anm_GetSkill;                                             // 0x05A8 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x05B0 (size: 0x8)
    class UWidgetAnimation* Anm_LVUP;                                                 // 0x05B8 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x05C0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x05C8 (size: 0x8)
    class UImage* Image_SkillEffBase;                                                 // 0x05D0 (size: 0x8)
    class UProgressBar* ProgressBar_Exp;                                              // 0x05D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_AddExp;                                            // 0x05E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_LvUP;                                              // 0x05E8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Skill;                                             // 0x05F0 (size: 0x8)
    class UWBP_LvNum_C* WBP_LvNum;                                                    // 0x05F8 (size: 0x8)
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;      // 0x0600 (size: 0x8)
    double LevelUpAnimeDelay;                                                         // 0x0608 (size: 0x8)
    double NewMoveAnimeDelay;                                                         // 0x0610 (size: 0x8)
    double closeAnimeDelay;                                                           // 0x0618 (size: 0x8)
    FTimerHandle LevelUpAnimeTimerHandle;                                             // 0x0620 (size: 0x8)
    FTimerHandle NewMoveAnimeTimerHandle;                                             // 0x0628 (size: 0x8)
    FTimerHandle CloseAnimeTimerHandle;                                               // 0x0630 (size: 0x8)
    bool IsLevelUp;                                                                   // 0x0638 (size: 0x1)
    bool IsNewMove;                                                                   // 0x0639 (size: 0x1)
    bool isDisplaying;                                                                // 0x063A (size: 0x1)
    int32 LastLevel;                                                                  // 0x063C (size: 0x4)
    FDataTableRowHandle LevelUpMsgID;                                                 // 0x0640 (size: 0x10)
    FDataTableRowHandle NewMoveMsgID;                                                 // 0x0650 (size: 0x10)
    FName CachedCharacterID;                                                          // 0x0660 (size: 0x8)
    int32 StackExp;                                                                   // 0x0668 (size: 0x4)
    TArray<EPalWazaID> NewWazaIDArray;                                                // 0x0670 (size: 0x10)

    void OnTriggerCloseAnime();
    void OnTriggerNewMoveAnime();
    void OnTriggerLevelUpAnime();
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void OnUpdateSlot(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void BindFromSlot(class UPalIndividualCharacterSlot* targetSlot);
    void On Update Level Binded(int32 NewLevel);
    void On Update Exp Binded(int32 addExp, int32 oldExp, double nowExpRate);
    void SetupCloseAnimeTimer();
    void SetupNewMoveAnimeTimer();
    void SetupLevelUpAnimeTimer();
    void ClearAnimeTimer();
    void Set Level(int32 Level);
    void SetAddExp(int32 addExp);
    void Set Exp Percent(double Percent);
    void AnmEvent_Close_UI();
    void AnmEvent_Levelup();
    void AnmEvent_NewMove(EPalWazaID newWazaID);
    void AnmEvent_Open_UI();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalLvExp(int32 EntryPoint);
}; // Size: 0x680

#endif
