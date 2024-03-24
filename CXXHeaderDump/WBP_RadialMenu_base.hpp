#ifndef UE4SS_SDK_WBP_RadialMenu_base_HPP
#define UE4SS_SDK_WBP_RadialMenu_base_HPP

class UWBP_RadialMenu_base_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Close;                                                // 0x0280 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0288 (size: 0x8)
    class UCanvasPanel* arrowCanvas;                                                  // 0x0290 (size: 0x8)
    class UImage* Base;                                                               // 0x0298 (size: 0x8)
    class UImage* Base_1;                                                             // 0x02A0 (size: 0x8)
    class UCanvasPanel* centerCanvas;                                                 // 0x02A8 (size: 0x8)
    class UImage* Image_Arrow;                                                        // 0x02B0 (size: 0x8)
    class UImage* Line;                                                               // 0x02B8 (size: 0x8)
    class UCanvasPanel* menuCanvas;                                                   // 0x02C0 (size: 0x8)
    class UImage* Shadow;                                                             // 0x02C8 (size: 0x8)

    void SetVisibilityArrow(ESlateVisibility NewVisibility);
    void GetCenterPosition(FVector2D& Position);
    void SetVisibilityCenterBaseImage(ESlateVisibility NewVisibility);
    void SetArrowVisible(ESlateVisibility Visibility);
    void SetArrowAngle(double angleDegree);
    void Anm_OpenMenu();
    void Anm_CloseMenu();
    void ExecuteUbergraph_WBP_RadialMenu_base(int32 EntryPoint);
}; // Size: 0x2D0

#endif
