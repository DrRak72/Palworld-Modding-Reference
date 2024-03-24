#ifndef UE4SS_SDK_WBP_CompassIcon_ForPal_HPP
#define UE4SS_SDK_WBP_CompassIcon_ForPal_HPP

class UWBP_CompassIcon_ForPal_C : public UWBP_IngameCompass_arrow_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)

    void SetupTexture(TSoftObjectPtr<UTexture2D> SoftTexture);
    void OnInitialized();
    void ExecuteUbergraph_WBP_CompassIcon_ForPal(int32 EntryPoint);
}; // Size: 0x468

#endif
