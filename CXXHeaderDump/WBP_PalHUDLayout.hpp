#ifndef UE4SS_SDK_WBP_PalHUDLayout_HPP
#define UE4SS_SDK_WBP_PalHUDLayout_HPP

class UWBP_PalHUDLayout_C : public UPalUIHUDLayoutBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UCanvasPanel* HUDCanvas;                                                    // 0x03D0 (size: 0x8)
    class UCanvasPanel* WorldHUDCanvas;                                               // 0x03D8 (size: 0x8)

    void AddHUD(class UPalUserWidget* Widget, const int32 ZOrder);
    void RemoveHUD(class UPalUserWidget* Widget);
    void AddWorldHUD(class UPalUserWidgetWorldHUD* Widget);
    void RemoveWorldHUD(class UPalUserWidgetWorldHUD* Widget);
    void ExecuteUbergraph_WBP_PalHUDLayout(int32 EntryPoint);
}; // Size: 0x3E0

#endif
