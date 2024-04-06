#ifndef UE4SS_SDK_WBP_RepairAllWindow_HPP
#define UE4SS_SDK_WBP_RepairAllWindow_HPP

class UWBP_RepairAllWindow_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UImage* Image_35;                                                           // 0x0438 (size: 0x8)
    class UWBP_IngameMenu_RepairAll_C* WBP_IngameMenu_RepairAll;                      // 0x0440 (size: 0x8)

    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void BndEvt__WBP_RepairAllWindow_WBP_IngameMenu_RepairAll_K2Node_ComponentBoundEvent_0_OnClickedButton__DelegateSignature(bool IsYes);
    void ExecuteUbergraph_WBP_RepairAllWindow(int32 EntryPoint);
}; // Size: 0x448

#endif
