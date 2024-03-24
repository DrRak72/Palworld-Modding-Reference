#ifndef UE4SS_SDK_WBP_Guild_ForDisplay_HPP
#define UE4SS_SDK_WBP_Guild_ForDisplay_HPP

class UWBP_Guild_ForDisplay_C : public UPalUIGuildMenu
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UCircularThrobber* CircularThrobber_11;                                     // 0x0438 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0440 (size: 0x8)
    class UOverlay* Overlay_Waiting;                                                  // 0x0448 (size: 0x8)
    class UWBP_Guild_C* WBP_Guild;                                                    // 0x0450 (size: 0x8)
    class UWBP_GuildMemberMenu_C* WBP_GuildMemberMenu;                                // 0x0458 (size: 0x8)
    TMap<TEnumAsByte<E_PalUIGuildMenuLogCategory::Type>, FDataTableRowHandle> GuildLogCategoryTextMap; // 0x0460 (size: 0x50)
    TMap<FString, TEnumAsByte<E_PalUIGuildMenuLogCategory::Type>> GuildLogStringCategoryMap; // 0x04B0 (size: 0x50)
    FDataTableRowHandle GuildExitDialogMsgID_Admin;                                   // 0x0500 (size: 0x10)
    FDataTableRowHandle GuildExitDialogMsgID_Warning;                                 // 0x0510 (size: 0x10)
    FTimerHandle WaitingExitGuildTimeoutTimerHandle;                                  // 0x0520 (size: 0x8)
    FTimerHandle CheckNewGroupTimerHandle;                                            // 0x0528 (size: 0x8)
    bool IsSelectingMemberMenu;                                                       // 0x0530 (size: 0x1)
    FDataTableRowHandle BanPlayerDialogMsgID;                                         // 0x0538 (size: 0x10)
    FDataTableRowHandle ChangeAdminDialogMsgID;                                       // 0x0548 (size: 0x10)
    TSoftObjectPtr<UWBP_Guild_MemberList_C> SelectionPlayerWidget;                    // 0x0558 (size: 0x30)
    FTimerHandle CheckBanPlayerTimerHandle;                                           // 0x0588 (size: 0x8)
    FTimerHandle CheckbanPlayerTimeoutTimerHandle;                                    // 0x0590 (size: 0x8)
    FGuid BanPlayerUId;                                                               // 0x0598 (size: 0x10)
    FTimerHandle ChangeAdminTimeoutTimerHandle;                                       // 0x05A8 (size: 0x8)
    FTimerHandle CheckChangeAdminTimerHandle;                                         // 0x05B0 (size: 0x8)

    void CanClose(bool& CanCloseFlag);
    void OnTimer_CheckChangeAdmin();
    void OnTimer_TimeoutChangeAdmin();
    void OnTimer_CheckBanPlayer();
    void OnTimer_TimeoutBanPlayer();
    void CloseWaitingWindow();
    void OpenWaitingWindow();
    void OnCloseChangeAdminDialog(bool bResult);
    void OpenChangeAdminDialog();
    void OnCloseBanPlayerDialog(bool bResult);
    void OpenBanPlayerDialog();
    void CloseMemberSettingWindow();
    void OnTimer_CheckNewGroup_WaitingExitGuild();
    void OnUpdateGroupId_WaitingExitGuild(const FGuid& NewGroupId);
    void OnTimer_TimeoutExitGuild();
    void OnClosed_GuildExitDialog(bool bResult);
    void OnClosed_GuildExitFailedDialog_Admin(bool bResult);
    void OpenExitGuildDialog();
    void OnUpdatedGuildName(FString NewGuildName);
    class UWidget* BP_GetDesiredFocusTarget();
    void SetupGuildLogCategoryButton();
    void Setup();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_0_OnClickedEditGuildNameButton__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_3_OnClickedGuildMemberButton__DelegateSignature(class UWBP_Guild_MemberList_C* Widget);
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_4_OnClickedLeaveButton__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_Guild_K2Node_ComponentBoundEvent_2_OnCommiedGuildName__DelegateSignature(FString NewName);
    void Destruct();
    void OnUpdatedMemberInfo(const FGuid& PlayerUId, const FPalUIGuildMemberDisplayInfo& PlayerInfo);
    void OnRemovedMemberInfo(const FGuid& PlayerUId);
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_6_OnClickedChangeAdmin__DelegateSignature();
    void BndEvt__WBP_Guild_ForDisplay_WBP_GuildMemberMenu_K2Node_ComponentBoundEvent_7_OnClickedBanPlayer__DelegateSignature();
    void ExecuteUbergraph_WBP_Guild_ForDisplay(int32 EntryPoint);
}; // Size: 0x5B8

#endif
