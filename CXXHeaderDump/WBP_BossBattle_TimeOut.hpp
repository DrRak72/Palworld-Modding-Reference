#ifndef UE4SS_SDK_WBP_BossBattle_TimeOut_HPP
#define UE4SS_SDK_WBP_BossBattle_TimeOut_HPP

class UWBP_BossBattle_TimeOut_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_OpenClose;                                            // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_48;                                   // 0x0290 (size: 0x8)

    void ChangeText(bool IsTimeOut);
    void ExecuteUbergraph_WBP_BossBattle_TimeOut(int32 EntryPoint);
}; // Size: 0x298

#endif
