#ifndef UE4SS_SDK_WBP_Buildup_Pal_StatusContent_HPP
#define UE4SS_SDK_WBP_Buildup_Pal_StatusContent_HPP

class UWBP_Buildup_Pal_StatusContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_RankUp;                                               // 0x0280 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0288 (size: 0x8)
    class UCanvasPanel* Focus;                                                        // 0x0290 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Gauge;                                        // 0x0298 (size: 0x8)
    class UImage* IconItem;                                                           // 0x02A0 (size: 0x8)
    class UImage* IconStatus;                                                         // 0x02A8 (size: 0x8)
    class UCanvasPanel* itemNum;                                                      // 0x02B0 (size: 0x8)
    class UCanvasPanel* Select;                                                       // 0x02B8 (size: 0x8)
    class UImage* StatusArrow;                                                        // 0x02C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_BuildupStoneNum;                                   // 0x02C8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNeme;                                        // 0x02D0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNumAfter;                                    // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_StatusNumBefore;                                   // 0x02E0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02E8 (size: 0x8)
    TArray<class UWBP_Buildup_Gauge_C*> BuildupGauges;                                // 0x02F0 (size: 0x10)
    EPalCharacterStatusOperationName Status;                                          // 0x0300 (size: 0x1)
    bool Clickable;                                                                   // 0x0301 (size: 0x1)
    FWBP_Buildup_Pal_StatusContent_COnClicked OnClicked;                              // 0x0308 (size: 0x10)
    void OnClicked(EPalCharacterStatusOperationName Status, int32 TargetRank);
    int32 Current Rank;                                                               // 0x0318 (size: 0x4)
    int32 TargetRank;                                                                 // 0x031C (size: 0x4)
    bool bLock;                                                                       // 0x0320 (size: 0x1)
    bool IsMax;                                                                       // 0x0321 (size: 0x1)
    int32 Icon Index;                                                                 // 0x0324 (size: 0x4)
    int32 Item Count;                                                                 // 0x0328 (size: 0x4)

    void UpdateSufficiency(bool IsSufficient);
    void Set Info(int32 IconIndex, int32 itemCount, int32 CurrentRank, bool IsSufficent);
    void GetItemAndNum(int32& ItemIndex, int32& Num);
    void Get Status(EPalCharacterStatusOperationName& Status);
    void BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Buildup_Pal_StatusContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void Setup(EPalCharacterStatusOperationName Status);
    void SwitchSelect(bool IsSelect);
    void SetEnable(bool isEnable);
    void AnmEvent_RankUp();
    void ExecuteUbergraph_WBP_Buildup_Pal_StatusContent(int32 EntryPoint);
    void OnClicked__DelegateSignature(EPalCharacterStatusOperationName Status, int32 TargetRank);
}; // Size: 0x32C

#endif
