#ifndef UE4SS_SDK_WBP_SniperScopeSight_HPP
#define UE4SS_SDK_WBP_SniperScopeSight_HPP

class UWBP_SniperScopeSight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UImage* Black;                                                              // 0x0280 (size: 0x8)
    class UImage* ModelImage;                                                         // 0x0288 (size: 0x8)
    class UImage* RenderTarget;                                                       // 0x0290 (size: 0x8)
    class UImage* SightImage;                                                         // 0x0298 (size: 0x8)
    bool FadeMode;                                                                    // 0x02A0 (size: 0x1)
    class UCurveFloat* AlphaCurve;                                                    // 0x02A8 (size: 0x8)
    double CurveInput;                                                                // 0x02B0 (size: 0x8)
    double FadeSpeed;                                                                 // 0x02B8 (size: 0x8)

    void SetUIVisiable(bool Active);
    void SetAlpha(double Alpha);
    void ForceClear();
    void FadeOutStart();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_SniperScopeSight(int32 EntryPoint);
}; // Size: 0x2C0

#endif
