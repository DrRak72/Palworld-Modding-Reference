#ifndef UE4SS_SDK_WBP_Paldex_ForDisplay_HPP
#define UE4SS_SDK_WBP_Paldex_ForDisplay_HPP

class UWBP_Paldex_ForDisplay_C : public UPalUIPaldex
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)
    class UWBP_Paldex_C* WBP_Paldex;                                                  // 0x0498 (size: 0x8)
    FPalDataTableRowName_UIInputAction ToModelInputAction;                            // 0x04A0 (size: 0x8)
    FPalDataTableRowName_UIInputAction ToDistributionInputAction;                     // 0x04A8 (size: 0x8)
    FPalUIActionBindData ToModelInputHandle;                                          // 0x04B0 (size: 0x4)
    FPalUIActionBindData ToDistributionInputHandle;                                   // 0x04B4 (size: 0x4)
    bool isDisplayDistribution;                                                       // 0x04B8 (size: 0x1)
    FName NowDisplayCharacterID;                                                      // 0x04BC (size: 0x8)
    double mapControllWeight_Gamepad;                                                 // 0x04C8 (size: 0x8)
    double mapControllWeight_Mouse;                                                   // 0x04D0 (size: 0x8)
    FRotator captureCameraRotator;                                                    // 0x04D8 (size: 0x18)
    double modelRotationControllWeight_Gamepad;                                       // 0x04F0 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChangeDistributionTimeAction;                  // 0x04F8 (size: 0x8)
    FPalUIActionBindData ChangeDistributionTimeActionHandle;                          // 0x0500 (size: 0x4)
    TEnumAsByte<E_PaldexDistributionTimeType::Type> nowDisplayDistributionTimeType;   // 0x0504 (size: 0x1)
    double distributionZoomWeight_Mouse;                                              // 0x0508 (size: 0x8)
    FPalDataTableRowName_UIInputAction ChangeDistributionZoomAction;                  // 0x0510 (size: 0x8)
    FPalUIActionBindData ChangeDistributionZoomActionHandle;                          // 0x0518 (size: 0x4)
    FWBP_Paldex_ForDisplay_COnAllNewFlagCleared OnAllNewFlagCleared;                  // 0x0520 (size: 0x10)
    void OnAllNewFlagCleared();
    FPalDataTableRowName_UIInputAction RandomCryAction;                               // 0x0530 (size: 0x8)
    FPalUIActionBindData RandomCryActionHandle;                                       // 0x0538 (size: 0x4)
    FName TmpDelayScrollTargetCharacetr;                                              // 0x053C (size: 0x8)

    void SetEnableRandomCryAction(bool IsEnableFlag);
    void PlayRandomCry();
    void UpdateNewFlag(FName CharacterID);
    void OnChangeDistributionInput();
    void OnChangeModelInput();
    void Change Map Zoom Rate();
    void SwitchDistributionTime(TEnumAsByte<E_PaldexDistributionTimeType::Type> TimeType);
    void ChangeDistributionTime();
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void ToDistributionDisplayMode();
    void ToModelDisplayMode();
    class UWidget* BP_GetDesiredFocusTarget();
    void Setup();
    void Construct();
    void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_1_OnClickedModelTab__DelegateSignature();
    void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_2_OnClickedDistributionTab__DelegateSignature();
    void BndEvt__WBP_Paldex_ForDisplay_WBP_Paldex_K2Node_ComponentBoundEvent_3_OnClickedAnyPalPanel__DelegateSignature(FName CharacterID);
    void DelayScrollToCharacterID(FName CharacterID);
    void ExecuteUbergraph_WBP_Paldex_ForDisplay(int32 EntryPoint);
    void OnAllNewFlagCleared__DelegateSignature();
}; // Size: 0x544

#endif
