#ifndef UE4SS_SDK_WBP_WorkSuitabilityPreference_HPP
#define UE4SS_SDK_WBP_WorkSuitabilityPreference_HPP

class UWBP_WorkSuitabilityPreference_C : public UPalUIWorkSuitabilitySelect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UWidgetAnimation* Default_In;                                               // 0x0440 (size: 0x8)
    class UWBP_WorkSuitabilityPreferenceMenu_C* WBP_WorkSuitabilityPreferenceMenu;    // 0x0448 (size: 0x8)
    FPalDataTableRowName_UIInputAction ToggleWorkerDetailInputAction;                 // 0x0450 (size: 0x8)
    bool IsDisplayDetail;                                                             // 0x0458 (size: 0x1)

    void OnTrigger_ToggleDetail();
    void Setup();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_1_OnChangedSuitabilitySetting__DelegateSignature(bool IsOn, EPalWorkSuitability Suitability, class UPalIndividualCharacterSlot* targetSlot);
    void BndEvt__WBP_WorkSuitabilityPreference_WBP_WorkSuitabilityPreferenceMenu_K2Node_ComponentBoundEvent_2_OnChangedBattleModeSetting__DelegateSignature(bool CanBattle, class UPalIndividualCharacterSlot* Slot);
    void ExecuteUbergraph_WBP_WorkSuitabilityPreference(int32 EntryPoint);
}; // Size: 0x459

#endif
