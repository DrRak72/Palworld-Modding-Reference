#ifndef UE4SS_SDK_WBP_IngameCompass_arrow_HPP
#define UE4SS_SDK_WBP_IngameCompass_arrow_HPP

class UWBP_IngameCompass_arrow_C : public UWBP_CompassIconBase_C
{
    class UBorder* Border;                                                            // 0x0448 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0450 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Length;                                            // 0x0458 (size: 0x8)

    void ChangeBorderDrawType(TEnumAsByte<ESlateBrushDrawType::Type> drawType);
    void ChangeBorderColor(FLinearColor Color);
    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void SetDistanceText(double Length);
}; // Size: 0x460

#endif
