#ifndef UE4SS_SDK_WBP_IngameFlyEff_HPP
#define UE4SS_SDK_WBP_IngameFlyEff_HPP

class UWBP_IngameFlyEff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Fade;                                                 // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_38;                                                           // 0x0290 (size: 0x8)
    bool Enabled;                                                                     // 0x0298 (size: 0x1)
    class APalCharacter* Character;                                                   // 0x02A0 (size: 0x8)
    FTimerHandle UpdateEffTimer;                                                      // 0x02A8 (size: 0x8)
    bool Visible;                                                                     // 0x02B0 (size: 0x1)
    double CachedVelocity;                                                            // 0x02B8 (size: 0x8)

    void EnableEff(bool isEnable, class APalCharacter* Character);
    void UpdateEff();
    void ExecuteUbergraph_WBP_IngameFlyEff(int32 EntryPoint);
}; // Size: 0x2C0

#endif
