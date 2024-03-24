#ifndef UE4SS_SDK_WBP_Notice_HPP
#define UE4SS_SDK_WBP_Notice_HPP

class UWBP_Notice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Visit_Close;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Visit_Open;                                           // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Raid_Close;                                           // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Raid_Open;                                            // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_84;                                   // 0x02A0 (size: 0x8)
    class UImage* Icon_notice;                                                        // 0x02A8 (size: 0x8)
    class UImage* Icon_notice_Shadow;                                                 // 0x02B0 (size: 0x8)
    class UImage* Notice_base_C;                                                      // 0x02B8 (size: 0x8)
    class UImage* Notice_base_C_1;                                                    // 0x02C0 (size: 0x8)
    class UImage* Notice_base_L;                                                      // 0x02C8 (size: 0x8)
    class UImage* Notice_base_L_1;                                                    // 0x02D0 (size: 0x8)
    class UImage* Notice_base_R;                                                      // 0x02D8 (size: 0x8)
    class UImage* Notice_base_R_1;                                                    // 0x02E0 (size: 0x8)
    FWBP_Notice_COnOpened OnOpened;                                                   // 0x02E8 (size: 0x10)
    void OnOpened();
    FWBP_Notice_COnClosed OnClosed;                                                   // 0x02F8 (size: 0x10)
    void OnClosed();

    void SetText(FText Text);
    void HideIcon();
    void SetIconTexture(class UTexture2D* Texture);
    void Finished_77B22E4B4836BC8AB8B4A08F2691F416();
    void Finished_6DE1EEED4A47BC160DDFEBA700165427();
    void Finished_6F0CFBFE4FFC647FC29A08AD10869738();
    void Finished_1C35836941B88D2824102B8E8EC65295();
    void AnmEvent_Open_Negative();
    void AnmEvent_Close_Negative();
    void AnmEvent_Open_Positive();
    void AnmEvent_Close_Positive();
    void ExecuteUbergraph_WBP_Notice(int32 EntryPoint);
    void OnClosed__DelegateSignature();
    void OnOpened__DelegateSignature();
}; // Size: 0x308

#endif
