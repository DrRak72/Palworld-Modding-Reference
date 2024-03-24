#ifndef UE4SS_SDK_WBP_PalCapturingLoupeCanvas_HPP
#define UE4SS_SDK_WBP_PalCapturingLoupeCanvas_HPP

class UWBP_PalCapturingLoupeCanvas_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Down;                                         // 0x0410 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Up;                                           // 0x0418 (size: 0x8)
    class UCanvasPanel* TmpCanvas;                                                    // 0x0420 (size: 0x8)
    class UVerticalBox* VerticalBox_Left;                                             // 0x0428 (size: 0x8)
    class UVerticalBox* VerticalBox_Right;                                            // 0x0430 (size: 0x8)
    double displayBorderX;                                                            // 0x0438 (size: 0x8)
    double displayBorderY;                                                            // 0x0440 (size: 0x8)
    TSoftObjectPtr<ABP_CapturePrism_C> lastEquipedCaptureWeapon;                      // 0x0448 (size: 0x30)
    TMap<class UPalIndividualCharacterHandle*, class UWBP_CapturingPalLoupe_C*> widgetMap; // 0x0478 (size: 0x50)

    void CheckWidgetEnded();
    void CreateLoupeWidget(class UPalIndividualCharacterHandle* targetHandle, class ABP_PalCaptureBodyBase_C* targetCaptureBody, class UWBP_CapturingPalLoupe_C*& createdWidget);
    void OnStartedCapture(class AActor* createdBodyActor, class UPalIndividualCharacterHandle* targetHandle, bool isBonus);
    void OnThrowCaptureWeapon(class AActor* Bullet);
    void RegisterWeaponEvent(class ABP_CapturePrism_C* captureWeapon);
    void UnregisterWeaponEvent();
    void OnChangedWeaponEvent(class APalWeaponBase* weapon);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnSetup_AfterCreatedPlayer();
    void ExecuteUbergraph_WBP_PalCapturingLoupeCanvas(int32 EntryPoint);
}; // Size: 0x4C8

#endif
