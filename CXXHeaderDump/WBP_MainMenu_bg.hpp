#ifndef UE4SS_SDK_WBP_MainMenu_bg_HPP
#define UE4SS_SDK_WBP_MainMenu_bg_HPP

class UWBP_MainMenu_bg_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_bg_Open;                                              // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x0288 (size: 0x8)

    void SetText(FText Text);
    void Anm_Open();
    void ExecuteUbergraph_WBP_MainMenu_bg(int32 EntryPoint);
}; // Size: 0x290

#endif
