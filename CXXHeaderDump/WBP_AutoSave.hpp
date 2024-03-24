#ifndef UE4SS_SDK_WBP_AutoSave_HPP
#define UE4SS_SDK_WBP_AutoSave_HPP

class UWBP_AutoSave_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Saving;                                               // 0x0280 (size: 0x8)
    class UImage* Image_IconBase;                                                     // 0x0288 (size: 0x8)
    class UImage* Image_IconPart_0;                                                   // 0x0290 (size: 0x8)
    class UImage* Image_IconPart_1;                                                   // 0x0298 (size: 0x8)
    class UImage* Image_IconPart_2;                                                   // 0x02A0 (size: 0x8)
    class UImage* Image_IconPart_3;                                                   // 0x02A8 (size: 0x8)
    class UImage* Image_IconPart_4;                                                   // 0x02B0 (size: 0x8)
    class UImage* Image_IconPart_5;                                                   // 0x02B8 (size: 0x8)
    bool IsForceDisplayngTime;                                                        // 0x02C0 (size: 0x1)
    FTimerHandle ForceDisplayTimerHandle;                                             // 0x02C8 (size: 0x8)
    bool IsEndSave;                                                                   // 0x02D0 (size: 0x1)

    void Display();
    void TryHide();
    void AnmEvent_Loop();
    void AnmEvent_Stop();
    void OnStartAutoSave();
    void OnEndedAutoSave(bool IsSuccess);
    void OnEndedForceDisplayTime();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_AutoSave(int32 EntryPoint);
}; // Size: 0x2D1

#endif
