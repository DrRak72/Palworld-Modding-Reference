#ifndef UE4SS_SDK_WBP_WorkSuitabilityPreferenceMenu_HPP
#define UE4SS_SDK_WBP_WorkSuitabilityPreferenceMenu_HPP

class UWBP_WorkSuitabilityPreferenceMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UHorizontalBox* HorizontalBox_WorkIcon;                                     // 0x0280 (size: 0x8)
    class UImage* Image_Icon_Change;                                                  // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* Text_WorkerNum;                                         // 0x0290 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x0298 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn_Close;                                        // 0x02A0 (size: 0x8)
    class UWBP_NoData_C* WBP_NoData;                                                  // 0x02A8 (size: 0x8)
    class UWBP_PalCommonScrollList_C* WBP_PalCommonScrollList_PalList;                // 0x02B0 (size: 0x8)
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;                                // 0x02B8 (size: 0x8)
    FWBP_WorkSuitabilityPreferenceMenu_COnClickedCloseButton OnClickedCloseButton;    // 0x02C0 (size: 0x10)
    void OnClickedCloseButton();
    TArray<class UWBP_IconPalWork_C*> SuitabilityIconArray;                           // 0x02D0 (size: 0x10)
    TSoftObjectPtr<UPalIndividualCharacterContainer> SoftTargetContainer;             // 0x02E0 (size: 0x30)
    FWBP_WorkSuitabilityPreferenceMenu_COnChangedSuitabilitySetting OnChangedSuitabilitySetting; // 0x0310 (size: 0x10)
    void OnChangedSuitabilitySetting(bool IsOn, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* targetSlot);
    FWBP_WorkSuitabilityPreferenceMenu_COnChangedBattleModeSetting OnChangedBattleModeSetting; // 0x0320 (size: 0x10)
    void OnChangedBattleModeSetting(bool CanBattle, class UPalIndividualCharacterSlot* Slot);
    TSoftObjectPtr<UPalIndividualCharacterHandle> NowDisplayingCharacterHandle;       // 0x0330 (size: 0x30)
    class UWBP_WorlSuitabilityPreference_PalList_C* LastHoveredListWidget;            // 0x0360 (size: 0x8)

    class UWidget* GetNextListFocusTarget(int32 TargetListDistance);
    class UWidget* CustomNavi_DownList(EUINavigation Navigation);
    class UWidget* CustomNavi_UpList(EUINavigation Navigation);
    void OnHoveredAnyCheckBox_Internal(class UWBP_WorlSuitabilityPreference_PalList_C* selfWidget);
    void ArrangeHorizontalBoxSlot_ForSuitabilityIcon(class UHorizontalBoxSlot* Slot);
    void OnChangedBattleModeCheck_Internal(bool IsChecked, class UPalIndividualCharacterSlot* targetSlot);
    void OnChangedSuitabilityCheck_Internal(bool IsChecked, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* targetSlot);
    void UpdateWorkerNum();
    void OnUpdateSlotHandle(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void SetEnableWorkerInfo(bool IsEnableInfo);
    void SetupSuitabilityIcon();
    void GetTopFocusTarget_PalList(class UWidget*& Target);
    void GetTopFocusTarget(class UWidget*& TargetWidget);
    void SetTargetContainer(class UPalIndividualCharacterContainer* Container);
    void Construct();
    void Destruct();
    void BndEvt__WBP_WorkSuitabilityPreferenceMenu_WBP_Menu_btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void OnInitialized();
    void ExecuteUbergraph_WBP_WorkSuitabilityPreferenceMenu(int32 EntryPoint);
    void OnChangedBattleModeSetting__DelegateSignature(bool CanBattle, class UPalIndividualCharacterSlot* Slot);
    void OnChangedSuitabilitySetting__DelegateSignature(bool IsOn, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* targetSlot);
    void OnClickedCloseButton__DelegateSignature();
}; // Size: 0x368

#endif
