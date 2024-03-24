#ifndef UE4SS_SDK_WBP_IngameMenuConstruction_Tab_HPP
#define UE4SS_SDK_WBP_IngameMenuConstruction_Tab_HPP

class UWBP_IngameMenuConstruction_Tab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Category;                                          // 0x0290 (size: 0x8)
    class UWBP_IngameMenuConstruction_TabSub_C* WBP_IngameMenuConstruction_TabSub;    // 0x0298 (size: 0x8)
    class UWBP_PalCommonNewMark_0_C* WBP_PalCommonNewMark;                            // 0x02A0 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x02A8 (size: 0x8)
    TArray<class UWBP_IngameMenuConstruction_TabSub_C*> Tabs;                         // 0x02B0 (size: 0x10)
    int32 TabNum;                                                                     // 0x02C0 (size: 0x4)
    FWBP_IngameMenuConstruction_Tab_CSwitchTab SwitchTab;                             // 0x02C8 (size: 0x10)
    void SwitchTab(EPalBuildObjectTypeA TypeA);
    EPalBuildObjectTypeA Type A;                                                      // 0x02D8 (size: 0x1)
    bool NowActive;                                                                   // 0x02D9 (size: 0x1)
    int32 LastIndex;                                                                  // 0x02DC (size: 0x4)
    TMap<class EPalBuildObjectTypeA, class TSoftObjectPtr<UTexture2D>> IconMap;       // 0x02E0 (size: 0x50)

    void SetActiveNewMark(bool Active);
    void SwitchToTab();
    void ResetActiveTab();
    void SetActiveTab(int32 Index);
    void GetTabNum(int32& TabNum);
    void SetupTabs();
    void SetTab(int32 Num, EPalBuildObjectTypeA TypeA);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__WBP_IngameMenuConstruction_Tab_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenuConstruction_Tab(int32 EntryPoint);
    void SwitchTab__DelegateSignature(EPalBuildObjectTypeA TypeA);
}; // Size: 0x330

#endif
