#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_FilterContent_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_FilterContent_HPP

class UWBP_IngameMenu_Chest_FilterContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x0280 (size: 0x8)
    class UPalCheckBox* PalCheckBox_43;                                               // 0x0288 (size: 0x8)
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;                          // 0x0290 (size: 0x8)
    FWBP_IngameMenu_Chest_FilterContent_COnClickedCheckButton OnClickedCheckButton;   // 0x0298 (size: 0x10)
    void OnClickedCheckButton(FName FilterId, bool bChecked);
    FName FilterId;                                                                   // 0x02A8 (size: 0x8)

    void OnChangedStateInternal(bool IsChecked);
    void OnUpdateFilterPreference(class UPalMapObjectItemContainerModule* Module);
    void RegisterEvents(class UPalUIItemChestFilterModel* Model);
    void SetupUI(FName FilterId, FName TextId);
    void BndEvt__WBP_IngameMenu_Chest_FilterContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_IngameMenu_Chest_FilterContent(int32 EntryPoint);
    void OnClickedCheckButton__DelegateSignature(FName FilterId, bool bChecked);
}; // Size: 0x2B0

#endif
