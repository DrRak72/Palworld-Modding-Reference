#ifndef UE4SS_SDK_WBP_IngameMenu_PalBox_PageControl_HPP
#define UE4SS_SDK_WBP_IngameMenu_PalBox_PageControl_HPP

class UWBP_IngameMenu_PalBox_PageControl_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_NormalToFocus;                                        // 0x0280 (size: 0x8)
    class UImage* BoxPageImage_00;                                                    // 0x0288 (size: 0x8)
    bool IsSelected;                                                                  // 0x0290 (size: 0x1)

    void AnmEvent_Select();
    void AnmEvent_Unselect();
    void ExecuteUbergraph_WBP_IngameMenu_PalBox_PageControl(int32 EntryPoint);
}; // Size: 0x291

#endif
