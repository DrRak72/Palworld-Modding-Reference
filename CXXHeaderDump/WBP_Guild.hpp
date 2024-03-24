#ifndef UE4SS_SDK_WBP_Guild_HPP
#define UE4SS_SDK_WBP_Guild_HPP

class UWBP_Guild_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Log_NormalToFocus;                                    // 0x0280 (size: 0x8)
    class UEditableTextBox* EditableTextBox_GuildName;                                // 0x0288 (size: 0x8)
    class UCanvasPanel* GuildMember;                                                  // 0x0290 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_60;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_NameBase;                                                     // 0x02B0 (size: 0x8)
    class UImage* Image_NameBase_1;                                                   // 0x02B8 (size: 0x8)
    class UImage* Image_Symbol;                                                       // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_GuildMemberNum;                                    // 0x02C8 (size: 0x8)
    class UWBP_GuildButton_C* WBP_GuildButton_Leave;                                  // 0x02D0 (size: 0x8)
    class UWBP_GuildButton_C* WBP_GuildButton_Rename;                                 // 0x02D8 (size: 0x8)
    class UWBP_GuildHeadButton_C* WBP_GuildHeadButton;                                // 0x02E0 (size: 0x8)
    class UWBP_GuildHeadButton_C* WBP_GuildHeadButton_GuildLog;                       // 0x02E8 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_Members;                // 0x02F0 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollListLog;                     // 0x02F8 (size: 0x8)
    FWBP_Guild_COnClickedEditGuildNameButton OnClickedEditGuildNameButton;            // 0x0300 (size: 0x10)
    void OnClickedEditGuildNameButton();
    FWBP_Guild_COnChangedGuildLogCategory OnChangedGuildLogCategory;                  // 0x0310 (size: 0x10)
    void OnChangedGuildLogCategory(FString SelectedCategoryName);
    FWBP_Guild_COnClickedGuildMemberButton OnClickedGuildMemberButton;                // 0x0320 (size: 0x10)
    void OnClickedGuildMemberButton(class UWBP_Guild_MemberList_C* Widget);
    TSoftObjectPtr<UWBP_Guild_MemberList_C> LastHoveredSoftGuildButton;               // 0x0330 (size: 0x30)
    FWBP_Guild_COnClickedLeaveButton OnClickedLeaveButton;                            // 0x0360 (size: 0x10)
    void OnClickedLeaveButton();
    FWBP_Guild_COnClickedGuildSettingButton OnClickedGuildSettingButton;              // 0x0370 (size: 0x10)
    void OnClickedGuildSettingButton();
    FWBP_Guild_COnCommiedGuildName OnCommiedGuildName;                                // 0x0380 (size: 0x10)
    void OnCommiedGuildName(FString NewName);
    TMap<class FGuid, class UWBP_Guild_MemberList_C*> DisplayWidgetMap;               // 0x0390 (size: 0x50)

    void SetEnableGuildNameEditButton(bool IsEnableFlag);
    class UWidget* CustomNavi_ToGuildLeaveOrNameEdit(EUINavigation Navigation);
    void IsNameEditMode(bool& IsEditing);
    void SetGuildMemberNum(int32 NowMemberNum, int32 MaxMemberNum);
    void SetFocusToExitGuildButton();
    void SetEnableGuildExitButton(bool CanExit);
    class UWidget* CustomNavi_LastHoveredGuildMember(EUINavigation Navigation);
    void OnHoveredGuildMemberButton_Internal(class UWBP_Guild_MemberList_C* Widget);
    void OnClickedGuildMemberButton_Internal(class UWBP_Guild_MemberList_C* Widget);
    void GetTopMemberFocusTarget(class UWidget*& TopButton);
    void SetGuildLogCategoryOptions(TArray<FString>& Options);
    void EndGuildNameEditMode();
    void StartGuildNameMode();
    void RemoveMemberInfo(FGuid PlayerUId);
    void ClearMemberList();
    void UpdateMemberInfo(FGuid PlayerUId, FPalUIGuildMemberDisplayInfo NewDisplayInfo);
    void AddGuildMemberInfo(FGuid PlayerUId, FPalUIGuildMemberDisplayInfo DisplayInfo);
    void AddGuildMemberInfoMap(TMap<class FGuid, class FPalUIGuildMemberDisplayInfo> DisplayInfoMap);
    void SetGuildName(FString InGuildName);
    void Construct();
    void BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__WBP_Guild_EditableTextBox_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_Guild_WBP_GuildHeadButton_GuildLog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature(FString SelectedOption);
    void BndEvt__WBP_Guild_WBP_GuildButton_Leave_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_Guild_WBP_GuildButton_Rename_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_Guild(int32 EntryPoint);
    void OnCommiedGuildName__DelegateSignature(FString NewName);
    void OnClickedGuildSettingButton__DelegateSignature();
    void OnClickedLeaveButton__DelegateSignature();
    void OnClickedGuildMemberButton__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
    void OnChangedGuildLogCategory__DelegateSignature(FString SelectedCategoryName);
    void OnClickedEditGuildNameButton__DelegateSignature();
}; // Size: 0x3E0

#endif
