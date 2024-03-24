#ifndef UE4SS_SDK_WBP_Warning_HPP
#define UE4SS_SDK_WBP_Warning_HPP

class UWBP_Warning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0288 (size: 0x8)
    class UImage* Base;                                                               // 0x0290 (size: 0x8)
    class UImage* Base_Red;                                                           // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x02A0 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_122;                                  // 0x02A8 (size: 0x8)
    class UImage* Image_260;                                                          // 0x02B0 (size: 0x8)
    class UImage* Line_L;                                                             // 0x02B8 (size: 0x8)
    class UImage* Line_R;                                                             // 0x02C0 (size: 0x8)
    class UImage* LineFlare_L;                                                        // 0x02C8 (size: 0x8)
    class UImage* LineFlare_R;                                                        // 0x02D0 (size: 0x8)
    class UImage* SubLine_L;                                                          // 0x02D8 (size: 0x8)
    class UImage* SubLine_R;                                                          // 0x02E0 (size: 0x8)
    class UImage* SubLineFlare_L;                                                     // 0x02E8 (size: 0x8)
    class UImage* SubLineFlare_R;                                                     // 0x02F0 (size: 0x8)

    void SetInfoText(FText Text);
    void SetTitleText(FText Text);
    void AnmEvent_Open();
    void AnmEvent_Close();
    void ExecuteUbergraph_WBP_Warning(int32 EntryPoint);
}; // Size: 0x2F8

#endif
