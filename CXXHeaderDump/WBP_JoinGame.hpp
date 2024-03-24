#ifndef UE4SS_SDK_WBP_JoinGame_HPP
#define UE4SS_SDK_WBP_JoinGame_HPP

class UWBP_JoinGame_C : public UPalUIJoinGameBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0468 (size: 0x8)
    class UImage* Image_69;                                                           // 0x0470 (size: 0x8)
    class UWBP_PalDebugInfo_C* WBP_PalDebugInfo;                                      // 0x0478 (size: 0x8)
    class UWBP_Title_WorldMenu_Head_C* WBP_Title_WorldMenu_Head;                      // 0x0480 (size: 0x8)
    class UWBP_Title_WorldSelect_C* WBP_Title_WorldSelect;                            // 0x0488 (size: 0x8)
    EPalUIServerListSortType SortType;                                                // 0x0490 (size: 0x1)
    EPalUIServerListFilterType ServerFilterType;                                      // 0x0491 (size: 0x1)
    FPalUIServerDisplayData ClickedServerInfo;                                        // 0x0498 (size: 0x1A0)
    FDataTableRowHandle JoinServerDialogMsgID;                                        // 0x0638 (size: 0x10)
    TSoftObjectPtr<UWBP_Title_WorldSelect_ListContent_C> LastClickedServerButton;     // 0x0648 (size: 0x30)
    TArray<FString> OfficialServerAddress;                                            // 0x0678 (size: 0x10)

    void RequestGetServerListBP(EPalUIServerListFilterType Type, FString Region, bool IsCleanCache, bool NextPage, FString Word);
    void OnCloseJoinServerDialog(bool bResult);
    void OpenJoinServerDialog();
    void OnCancelAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void DisplayServer();
    void Completed_B0C690024643A528EA9A2B9DAEA567A3(const FString ResponseBody, bool bResponseOK, int32 ResponseCode);
    void Password入力後(class UPalHUDDispatchParameterBase* Param);
    void OnCompleteGetServerListEvent();
    void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_2_OnClickedServerList_OfficialButton__DelegateSignature();
    void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_7_OnClickedServerList_CommunityButton__DelegateSignature();
    void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_11_OnClickedServerList_HistoryButton__DelegateSignature();
    void OnChangeVersionIgnoreCheckbox(bool bIsChecked);
    void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_6_OnClickedServerButton__DelegateSignature(class UWBP_Title_WorldSelect_ListContent_C* Widget);
    void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_5_OnClickedServerSearchButton__DelegateSignature(FString SearchWord);
    void NextButton();
    void OnClicked_JoinByIPButton(FString Address);
    void カスタムイベント(bool bResult);
    void Construct();
    void BndEvt__WBP_JoinGame_WBP_Title_WorldSelect_K2Node_ComponentBoundEvent_3_OnSelectedServerSortType__DelegateSignature(EPalUIServerListSortType SortType);
    void カスタムイベント_0(bool bResult);
    void OnInitialized();
    void パスワード手動入力(class UPalHUDDispatchParameterBase* Param);
    void ExecuteUbergraph_WBP_JoinGame(int32 EntryPoint);
}; // Size: 0x688

#endif
