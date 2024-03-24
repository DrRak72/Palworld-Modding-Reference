#ifndef UE4SS_SDK_WBP_LvNum_HPP
#define UE4SS_SDK_WBP_LvNum_HPP

class UWBP_LvNum_C : public UUserWidget
{
    class UWidgetAnimation* Anm_shadow;                                               // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Normal;                                               // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C;                                      // 0x0288 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_1;                                    // 0x0290 (size: 0x8)
    double alphaWhenTensPlaceIsZero;                                                  // 0x0298 (size: 0x8)

    void SetLevel(int32 Level);
}; // Size: 0x2A0

#endif
