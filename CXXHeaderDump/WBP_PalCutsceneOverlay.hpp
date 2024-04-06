#ifndef UE4SS_SDK_WBP_PalCutsceneOverlay_HPP
#define UE4SS_SDK_WBP_PalCutsceneOverlay_HPP

class UWBP_PalCutsceneOverlay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    FPalDataTableRowName_UIInputAction SkipInput;                                     // 0x0438 (size: 0x8)
    FTimerHandle HideTimerHandle;                                                     // 0x0440 (size: 0x8)
    FPalUIActionBindData InputActionHandle;                                           // 0x0448 (size: 0x4)
    bool isDisplaying;                                                                // 0x044C (size: 0x1)

    class UWidget* BP_GetDesiredFocusTarget();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Hide();
    void Display();
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Skip();
    void Construct();
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_PalCutsceneOverlay(int32 EntryPoint);
}; // Size: 0x44D

#endif
