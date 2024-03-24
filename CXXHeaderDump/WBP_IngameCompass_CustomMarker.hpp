#ifndef UE4SS_SDK_WBP_IngameCompass_CustomMarker_HPP
#define UE4SS_SDK_WBP_IngameCompass_CustomMarker_HPP

class UWBP_IngameCompass_CustomMarker_C : public UWBP_CompassIconBase_C
{
    class UImage* Image_Icon;                                                         // 0x0448 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Length;                                            // 0x0450 (size: 0x8)
    TArray<class UTexture2D*> Textures;                                               // 0x0458 (size: 0x10)

    void UpdateDistance();
    void UpdateVisibility(bool& InDistance);
    void SetCustomMarkerTexture(int32 IconType);
    void SetDistanceText(double Length);
}; // Size: 0x468

#endif
