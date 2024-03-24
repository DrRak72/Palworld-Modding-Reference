#ifndef UE4SS_SDK_WBP_ItemGet_HPP
#define UE4SS_SDK_WBP_ItemGet_HPP

class UWBP_ItemGet_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0288 (size: 0x8)
    class UImage* Base;                                                               // 0x0290 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_C_128;                          // 0x0298 (size: 0x8)
    class UImage* Eff_00;                                                             // 0x02A0 (size: 0x8)
    class UImage* Eff_01;                                                             // 0x02A8 (size: 0x8)
    class UImage* ItemGet_base_C;                                                     // 0x02B0 (size: 0x8)
    class UImage* ItemGet_base_L;                                                     // 0x02B8 (size: 0x8)
    class UImage* ItemGet_base_R;                                                     // 0x02C0 (size: 0x8)
    class UImage* ItemIcon;                                                           // 0x02C8 (size: 0x8)
    class UImage* ItemIcon_Shadow;                                                    // 0x02D0 (size: 0x8)
    FWBP_ItemGet_COnOpened OnOpened;                                                  // 0x02D8 (size: 0x10)
    void OnOpened();
    FWBP_ItemGet_COnClosed OnClosed;                                                  // 0x02E8 (size: 0x10)
    void OnClosed();

    void SetDefaultFontStyleName(FName StyleName);
    void ChangeBgColor(FLinearColor Color);
    void SetText(FText Text);
    void HideIcon();
    void SetIconTexture(class UTexture2D* Texture);
    void Finished_1F002FD94DF611BBD1EF47BE09B9889B();
    void Finished_841401E94A6018595306E0AC3B421AB7();
    void AnmEvent_Open();
    void AnmEvent_Close();
    void ExecuteUbergraph_WBP_ItemGet(int32 EntryPoint);
    void OnClosed__DelegateSignature();
    void OnOpened__DelegateSignature();
}; // Size: 0x2F8

#endif
