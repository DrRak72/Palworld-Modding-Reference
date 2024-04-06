#ifndef UE4SS_SDK_WBP_WorlSuitabilityPreference_PalList_HPP
#define UE4SS_SDK_WBP_WorlSuitabilityPreference_PalList_HPP

class UWBP_WorlSuitabilityPreference_PalList_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05A0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_PalInfo_Simple;                                   // 0x05A8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_PalInfo_TaskDetail;                               // 0x05B0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_CheckBox;                                     // 0x05B8 (size: 0x8)
    class UImage* Image;                                                              // 0x05C0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x05C8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x05D0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x05D8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x05E0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x05E8 (size: 0x8)
    class UImage* Image_97;                                                           // 0x05F0 (size: 0x8)
    class UImage* Image_203;                                                          // 0x05F8 (size: 0x8)
    class UImage* Image_PalIcon;                                                      // 0x0600 (size: 0x8)
    class UOverlay* Overlay_FixedAssign;                                              // 0x0608 (size: 0x8)
    class UOverlay* Overlay_FreeAssign;                                               // 0x0610 (size: 0x8)
    class UOverlay* Overlay_Night;                                                    // 0x0618 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CurrentTask;                                       // 0x0620 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_LevelValue;                                    // 0x0628 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_name;                                          // 0x0630 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Task_Fix;                                          // 0x0638 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Task_Free;                                         // 0x0640 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Task_Free_1;                                       // 0x0648 (size: 0x8)
    class UWBP_EnemyGauge_SAN_C* WBP_EnemyGauge_SAN;                                  // 0x0650 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_0;                        // 0x0658 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_1;                        // 0x0660 (size: 0x8)
    class UWBP_MainMenu_Pal_State_C* WBP_MainMenu_Pal_State_2;                        // 0x0668 (size: 0x8)
    TArray<class UWBP_MainMenu_Pal_State_C*> ConditionWidgets;                        // 0x0670 (size: 0x10)
    FTimerHandle UpdateWorkDetailTimerHandle;                                         // 0x0680 (size: 0x8)
    TSoftObjectPtr<UPalIndividualCharacterSlot> bindedSlot;                           // 0x0688 (size: 0x30)
    FDataTableRowHandle FixedAssignMsgID;                                             // 0x06B8 (size: 0x10)
    FDataTableRowHandle FreeAssignMsgID;                                              // 0x06C8 (size: 0x10)
    TMap<class EPalWorkSuitability, class UWBP_WorkSuitabilityPreference_CheckBox_0_C*> SuitabilityCheckBoxMap; // 0x06D8 (size: 0x50)
    FWBP_WorlSuitabilityPreference_PalList_COnChangedSuitabilityCheck OnChangedSuitabilityCheck; // 0x0728 (size: 0x10)
    void OnChangedSuitabilityCheck(bool IsChecked, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* targetSlot);
    class UWBP_WorkSuitabilityPreference_CheckBox_0_C* BattleModeCheckBox;            // 0x0738 (size: 0x8)
    FWBP_WorlSuitabilityPreference_PalList_COnChangedBattleModeCheck OnChangedBattleModeCheck; // 0x0740 (size: 0x10)
    void OnChangedBattleModeCheck(bool IsChecked, class UPalIndividualCharacterSlot* targetSlot);
    FWBP_WorlSuitabilityPreference_PalList_COnHoveredCheckBox OnHoveredCheckBox;      // 0x0750 (size: 0x10)
    void OnHoveredCheckBox(class UWBP_WorlSuitabilityPreference_PalList_C* selfWidget);
    int32 LastHoveredCheckBoxIndex;                                                   // 0x0760 (size: 0x4)

    void GetLastHoveredCheckBoxIndex(int32& Index);
    void GetFocusTargetByCheckBoxIndex(int32 Index, class UWidget*& TargetWidget);
    void OnHoveredCheckBox_Internal(class UWBP_WorkSuitabilityPreference_CheckBox_0_C* CheckBox);
    void ArrangeHorizontalSlot_ForCheckBox(class UHorizontalBoxSlot* Slot);
    void OnChangedBattleModeCheckState_Internal(bool IsChecked, EPalWorkSuitability Suitability);
    void Set Work Suitability(TMap<EPalWorkSuitability, int32> WorkSuitabilities);
    void OnChangedSuitabilityCheckState_Internal(bool IsChecked, EPalWorkSuitability Suitability);
    void OnUpdateLevel_binded(int32 NewLevel);
    void SetFixedAssignMode(bool isFixedAssign);
    void OnUpdateSlotHandle(class UPalIndividualCharacterSlot* Slot, class UPalIndividualCharacterHandle* LastHandle);
    void Unbind();
    void BindFromSlot(class UPalIndividualCharacterSlot* targetSlot);
    void UpdateWorkDetail_Timer();
    void OnUpdateNickName_Binded(FString NewNickName);
    void OnUpdateCondition_Binded();
    void OnUpdateWorkSuitabilityOption_Binded(FPalWorkSuitabilityPreferenceInfo Info);
    void OnUpdateSanity_Binded(double nowSanity, double nowMaxSanity);
    void SetupCheckBox();
    void SetEnableTaskDetail(bool isEnable);
    void GetTopFocusTarget(class UWidget*& Target);
    void Construct();
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_WorlSuitabilityPreference_PalList(int32 EntryPoint);
    void OnHoveredCheckBox__DelegateSignature(class UWBP_WorlSuitabilityPreference_PalList_C* selfWidget);
    void OnChangedBattleModeCheck__DelegateSignature(bool IsChecked, class UPalIndividualCharacterSlot* targetSlot);
    void OnChangedSuitabilityCheck__DelegateSignature(bool IsChecked, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* targetSlot);
}; // Size: 0x764

#endif
