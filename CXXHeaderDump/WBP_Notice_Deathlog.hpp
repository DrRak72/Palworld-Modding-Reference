#ifndef UE4SS_SDK_WBP_Notice_Deathlog_HPP
#define UE4SS_SDK_WBP_Notice_Deathlog_HPP

class UWBP_Notice_Deathlog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_out;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_In;                                                   // 0x0288 (size: 0x8)
    class UBP_PalRichTextBlock_C* BP_PalRichTextBlock_LogText;                        // 0x0290 (size: 0x8)
    class UImage* Image_PalIcon;                                                      // 0x0298 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Pal_Level;                                         // 0x02A0 (size: 0x8)
    bool Is Short;                                                                    // 0x02A8 (size: 0x1)
    bool NowDisplayed;                                                                // 0x02A9 (size: 0x1)
    bool ShortDisplayEnd;                                                             // 0x02AA (size: 0x1)
    bool LongDisplayEnd;                                                              // 0x02AB (size: 0x1)
    FWBP_Notice_Deathlog_COnDeathLogEnd OnDeathLogEnd;                                // 0x02B0 (size: 0x10)
    void OnDeathLogEnd(class UWBP_Notice_Deathlog_C* EndedLog);

    void Finished_594550FE491318B188D5B8A2D194C1DB();
    void SetDeathLog(FText LogText, TSoftObjectPtr<UTexture2D> Icon);
    void SetDisplayTime(double ShortDisplayTime, double LongDisplayTime);
    void SetDisplayTimeType(bool IsShort);
    void CheckDisplay_Short();
    void CheckDisplay_Long();
    void ExecuteUbergraph_WBP_Notice_Deathlog(int32 EntryPoint);
    void OnDeathLogEnd__DelegateSignature(class UWBP_Notice_Deathlog_C* EndedLog);
}; // Size: 0x2C0

#endif
