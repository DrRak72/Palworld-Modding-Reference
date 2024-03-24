#ifndef UE4SS_SDK_WBP_PalPossessItemIcon_HPP
#define UE4SS_SDK_WBP_PalPossessItemIcon_HPP

class UWBP_PalPossessItemIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Red;                                                  // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Orange;                                               // 0x0288 (size: 0x8)
    class UWidgetAnimation* Anm_Blue;                                                 // 0x0290 (size: 0x8)
    class UWidgetAnimation* Anm_Loop;                                                 // 0x0298 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x02A8 (size: 0x8)
    class UImage* BaseFlare;                                                          // 0x02B0 (size: 0x8)
    class UImage* Flare;                                                              // 0x02B8 (size: 0x8)
    class UImage* Line;                                                               // 0x02C0 (size: 0x8)
    class UImage* Shadow;                                                             // 0x02C8 (size: 0x8)
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;                            // 0x02D0 (size: 0x8)
    FWBP_PalPossessItemIcon_COnFinishedClose OnFinishedClose;                         // 0x02D8 (size: 0x10)
    void OnFinishedClose();

    void Finished_8EA3005E48EF792C3516879160C3F958();
    void Finished_D25F024E49DE41380A3843A691EA22D3();
    void AnmEvent_Open();
    void AnmEvent_Close();
    void ExecuteUbergraph_WBP_PalPossessItemIcon(int32 EntryPoint);
    void OnFinishedClose__DelegateSignature();
}; // Size: 0x2E8

#endif
