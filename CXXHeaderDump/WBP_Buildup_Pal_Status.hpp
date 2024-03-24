#ifndef UE4SS_SDK_WBP_Buildup_Pal_Status_HPP
#define UE4SS_SDK_WBP_Buildup_Pal_Status_HPP

class UWBP_Buildup_Pal_Status_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UCanvasPanel* Canvas_ResetInfo;                                             // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PossessedMoney_Num;                                // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_RequireMoney_Num;                                  // 0x0290 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item;                              // 0x0298 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_1;                            // 0x02A0 (size: 0x8)
    class UWBP_Buildup_Pal_Item_C* WBP_Buildup_Pal_Item_2;                            // 0x02A8 (size: 0x8)
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent;            // 0x02B0 (size: 0x8)
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent_1;          // 0x02B8 (size: 0x8)
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent_2;          // 0x02C0 (size: 0x8)
    class UWBP_Buildup_Pal_StatusContent_C* WBP_Buildup_Pal_StatusContent_3;          // 0x02C8 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x02D0 (size: 0x8)
    TArray<class UWBP_Buildup_Pal_StatusContent_C*> StatusContents;                   // 0x02D8 (size: 0x10)
    TArray<EPalCharacterStatusOperationName> StatusTypes;                             // 0x02E8 (size: 0x10)
    EPalCharacterStatusOperationName CurrentStatus;                                   // 0x02F8 (size: 0x1)
    FDataTableRowHandle RankupMsgId;                                                  // 0x0300 (size: 0x10)
    FDataTableRowHandle ResetMsgId;                                                   // 0x0310 (size: 0x10)
    FDataTableRowHandle RankupButtonMsgID;                                            // 0x0320 (size: 0x10)
    FDataTableRowHandle ResetButtonMsgID;                                             // 0x0330 (size: 0x10)
    FDataTableRowHandle ResetResultMsgId;                                             // 0x0340 (size: 0x10)
    int32 Target Rank;                                                                // 0x0350 (size: 0x4)
    FWBP_Buildup_Pal_Status_CInvokeRankUp InvokeRankUp;                               // 0x0358 (size: 0x10)
    void InvokeRankup(EPalCharacterStatusOperationName Status, int32 TargetRank);
    bool BlockInvoke;                                                                 // 0x0368 (size: 0x1)
    bool Is Upgrade;                                                                  // 0x0369 (size: 0x1)
    TArray<class UWBP_Buildup_Pal_Item_C*> Upgrade Items;                             // 0x0370 (size: 0x10)
    int32 RequiredMoney;                                                              // 0x0380 (size: 0x4)
    FWBP_Buildup_Pal_Status_CInvokeReset InvokeReset;                                 // 0x0388 (size: 0x10)
    void InvokeReset();
    TArray<FName> Item Ids;                                                           // 0x0398 (size: 0x10)

    void UpdateItemSufficiency(class UPalIndividualCharacterHandle* Handle);
    void Predict Status(EPalCharacterStatusOperationName Status, int32 TargetRank);
    void Update Confirm Button State();
    void GetFocusTarget(class UUserWidget*& Widget);
    void On Money Changed(int64 NewMoney);
    void Setup(class UPalIndividualCharacterHandle* Handle, const TArray<FName>& ItemIds);
    void SwitchPanel(bool IsUpgrade);
    void Construct();
    void BndEvt__WBP_Buildup_Pal_Status_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ConfirmDialog(bool Confirmed);
    void EmptyEvent(bool bResult);
    void ShowResult();
    void ExecuteUbergraph_WBP_Buildup_Pal_Status(int32 EntryPoint);
    void InvokeReset__DelegateSignature();
    void InvokeRankup__DelegateSignature(EPalCharacterStatusOperationName Status, int32 TargetRank);
}; // Size: 0x3A8

#endif
