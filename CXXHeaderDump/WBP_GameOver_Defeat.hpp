#ifndef UE4SS_SDK_WBP_GameOver_Defeat_HPP
#define UE4SS_SDK_WBP_GameOver_Defeat_HPP

class UWBP_GameOver_Defeat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0288 (size: 0x8)
    class UHorizontalBox* HorizontalBox_DropPal;                                      // 0x0290 (size: 0x8)
    class UHorizontalBox* HorizontalBox_RespawnTimer;                                 // 0x0298 (size: 0x8)
    class UImage* Image_Scroll;                                                       // 0x02A0 (size: 0x8)
    class UImage* Image_Scroll_0;                                                     // 0x02A8 (size: 0x8)
    class UImage* Image_Scroll_1;                                                     // 0x02B0 (size: 0x8)
    class UImage* Image_Scroll_2;                                                     // 0x02B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_DropItemInfo;                                      // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Second;                                            // 0x02C8 (size: 0x8)
    class UVerticalBox* VerticalBox_DropInfo;                                         // 0x02D0 (size: 0x8)
    class UVerticalBox* VerticalBox_DropPalIcon;                                      // 0x02D8 (size: 0x8)
    class UWBP_CommonButton_C* WBP_CommonButton;                                      // 0x02E0 (size: 0x8)
    FWBP_GameOver_Defeat_COnFinishedOpen OnFinishedOpen;                              // 0x02E8 (size: 0x10)
    void OnFinishedOpen();
    FWBP_GameOver_Defeat_COnFinishedClose OnFinishedClose;                            // 0x02F8 (size: 0x10)
    void OnFinishedClose();
    FWBP_GameOver_Defeat_COnClickedRespawn OnClickedRespawn;                          // 0x0308 (size: 0x10)
    void OnClickedRespawn();
    FDataTableRowHandle DropInventoryMsgID;                                           // 0x0318 (size: 0x10)
    FDataTableRowHandle DropAllItemMsgID;                                             // 0x0328 (size: 0x10)

    void SetDeathPenaltyMode(EPalOptionWorldDeathPenalty PenaltyMode);
    void SetDropPalInfo(TArray<FPalLogInfo_DropPal>& DropPalInfo);
    void HideRespawnTimer();
    void SetRemainingTime(int32 RemainingSecond);
    void Set Focus to Respawn Button();
    void Finished_58EC9B6A4AC75462EDBD71B398D95E41();
    void Finished_D92A1E7344709CE3A6F44587549DFD19();
    void AnmEvent_Open();
    void AnmEvent_Close();
    void Construct();
    void Destruct();
    void BndEvt__WBP_GameOver_Defeat_WBP_CommonButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_GameOver_Defeat(int32 EntryPoint);
    void OnClickedRespawn__DelegateSignature();
    void OnFinishedClose__DelegateSignature();
    void OnFinishedOpen__DelegateSignature();
}; // Size: 0x338

#endif
