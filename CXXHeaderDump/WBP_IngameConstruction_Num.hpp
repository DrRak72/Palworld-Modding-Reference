#ifndef UE4SS_SDK_WBP_IngameConstruction_Num_HPP
#define UE4SS_SDK_WBP_IngameConstruction_Num_HPP

class UWBP_IngameConstruction_Num_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_1;                                    // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_Num4;                                    // 0x0280 (size: 0x8)
    class UBP_PalTextBlock_C* BPPalTextBlock_Num5;                                    // 0x0288 (size: 0x8)
    FColor errorColor;                                                                // 0x0290 (size: 0x4)

    void SetNumInternal(class UBP_PalTextBlock_C* targetText, int32 inNum);
    void SetNums(int32 requiredNum, int32 MaxNum);
}; // Size: 0x294

#endif
