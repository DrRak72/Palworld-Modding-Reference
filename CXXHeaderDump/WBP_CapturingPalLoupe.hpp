#ifndef UE4SS_SDK_WBP_CapturingPalLoupe_HPP
#define UE4SS_SDK_WBP_CapturingPalLoupe_HPP

class UWBP_CapturingPalLoupe_C : public UWBP_LoupeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0488 (size: 0x8)
    class UWidgetAnimation* Failed;                                                   // 0x0490 (size: 0x8)
    class UWidgetAnimation* Success;                                                  // 0x0498 (size: 0x8)
    class UWidgetAnimation* Loop;                                                     // 0x04A0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_168;                                              // 0x04A8 (size: 0x8)
    class UImage* Image_Sphere;                                                       // 0x04B0 (size: 0x8)
    class UImage* LoupeArrow;                                                         // 0x04B8 (size: 0x8)
    class UBP_PalTextBlock_C* Text_CaptureingState;                                   // 0x04C0 (size: 0x8)
    class UBP_PalTextBlock_C* Text_Length;                                            // 0x04C8 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x04D0 (size: 0x8)
    TSoftObjectPtr<ABP_PalCaptureBodyBase_C> targetCaptureBody;                       // 0x04D8 (size: 0x30)
    FVector2D calcedPosition;                                                         // 0x0508 (size: 0x10)
    double calcedDot;                                                                 // 0x0518 (size: 0x8)
    bool isWaitEnded;                                                                 // 0x0520 (size: 0x1)
    FVector FinalPosition;                                                            // 0x0528 (size: 0x18)
    bool isEnded;                                                                     // 0x0540 (size: 0x1)

    void UpdateLength();
    void UpdateArrowImageAngle(double newAngle);
    void GetLoupeWidgetSize(FVector2D& widgetSize);
    void Setup(class ABP_PalCaptureBodyBase_C* targetCaptureBody, class UPalIndividualCharacterHandle* targetHandle);
    bool IsEnableLoupe();
    void GetTargetWorldLocation(FVector& outVector);
    void GetTargetWidgetSize(FVector2D& outVector);
    void CalcScreenPosition();
    void OnInitialized();
    void OnRequestedClose();
    void OnSuccess(class UPalIndividualCharacterHandle* targetHandle);
    void OnEndAnimeFiniched();
    void OnFailed(class UPalIndividualCharacterHandle* targetHandle, TEnumAsByte<EPalSphereCaptureFailedReason::Type> failedReson);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_CapturingPalLoupe(int32 EntryPoint);
}; // Size: 0x541

#endif
