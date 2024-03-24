#ifndef UE4SS_SDK_WBP_WorkerRadialMenu_Overlay_HPP
#define UE4SS_SDK_WBP_WorkerRadialMenu_Overlay_HPP

class UWBP_WorkerRadialMenu_Overlay_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UWBP_WorkerRadialMenu_C* WBP_WorkerRadialMenu;                              // 0x0438 (size: 0x8)
    FName disableCrouchFlagName;                                                      // 0x0440 (size: 0x8)
    FPalDataTableRowName_UIInputAction CloseShortcutINputAction;                      // 0x0448 (size: 0x8)
    FPalDataTableRowName_UIInputAction DecideMenuAction;                              // 0x0450 (size: 0x8)

    void Construct();
    void OnClosed();
    void OnInitialized();
    void OnSelectedEvent(EPalWorkerRadialMenuResult Result);
    void OnAnyUIPushed(const FGuid& pushedWidgetID);
    void Destruct();
    void CancelEvent();
    void ExecuteUbergraph_WBP_WorkerRadialMenu_Overlay(int32 EntryPoint);
}; // Size: 0x458

#endif
