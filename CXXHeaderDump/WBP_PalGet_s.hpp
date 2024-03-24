#ifndef UE4SS_SDK_WBP_PalGet_s_HPP
#define UE4SS_SDK_WBP_PalGet_s_HPP

class UWBP_PalGet_s_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0288 (size: 0x8)
    class UCanvasPanel* Canvas_Title;                                                 // 0x0290 (size: 0x8)
    class UImage* Dot_0;                                                              // 0x0298 (size: 0x8)
    class UImage* Dot_1;                                                              // 0x02A0 (size: 0x8)
    class UImage* Dot_2;                                                              // 0x02A8 (size: 0x8)
    class UImage* Dot_3;                                                              // 0x02B0 (size: 0x8)
    class UImage* Dot_4;                                                              // 0x02B8 (size: 0x8)
    class UImage* Dot_5;                                                              // 0x02C0 (size: 0x8)
    class UImage* Line;                                                               // 0x02C8 (size: 0x8)
    class UImage* Line_0;                                                             // 0x02D0 (size: 0x8)
    class URetainerBox* RetainerBox_0;                                                // 0x02D8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_PalName;                                           // 0x02E0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Title;                                             // 0x02E8 (size: 0x8)
    class UWBP_AttentionEffect_C* WBP_AttentionEffect;                                // 0x02F0 (size: 0x8)
    class UWBP_LvNum_C* WBP_LvNum;                                                    // 0x02F8 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0300 (size: 0x8)
    FDataTableRowHandle firstCaptureMsgHandle;                                        // 0x0308 (size: 0x10)
    FDataTableRowHandle captureMsgHandle;                                             // 0x0318 (size: 0x10)

    void ClearAdditionalText();
    void SetAdditionalText(FText Text);
    void SetupByCaptureInfo(FPalUIPalCaptureInfo CaptureInfo);
    void DisplayCaptureMessage(bool isFirstCapture);
    void SetupByTargetHandle(class UPalIndividualCharacterHandle* Handle, bool isVisibleLevel);
    void AnmEvent_Open();
    void AnmEvent_Close();
    void OnOpenAnimeFinished();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalGet_s(int32 EntryPoint);
}; // Size: 0x328

#endif
