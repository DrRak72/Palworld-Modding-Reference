#ifndef UE4SS_SDK_WBP_PalAim_HPP
#define UE4SS_SDK_WBP_PalAim_HPP

class UWBP_PalAim_C : public UPalUIAimReticleBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UCanvasPanel* AimCanvas;                                                    // 0x0418 (size: 0x8)
    class UImage* Image_101;                                                          // 0x0420 (size: 0x8)
    class UWBP_Reticle_Cancel_C* WBP_Reticle_Cancel;                                  // 0x0428 (size: 0x8)
    class UWBP_Reticle_Pal_C* WBP_Reticle_Pal;                                        // 0x0430 (size: 0x8)
    double TargetScale;                                                               // 0x0438 (size: 0x8)
    double nowScale;                                                                  // 0x0440 (size: 0x8)
    bool isThrowPalMode;                                                              // 0x0448 (size: 0x1)
    class APalCharacter* CurrentCampLiftingPal;                                       // 0x0450 (size: 0x8)

    void OnEndLiftCampPal();
    void OnLiftCampPal(class APalCharacter* TargetCharacter);
    void On Dead Detail();
    void DisplayOutlineTarget(FHitResult& HitResult);
    void Raycast Reticle Direction Body();
    void EndThrowPalMode();
    void StartThrowPalMode();
    void Get Reticle Hit Result(FHitResult& HitResult);
    void GetNowSelectedOtomoParameter(class UPalCharacterParameterComponent*& Parameter);
    void Show Assignable Throwing Pal(FHitResult& HitResult);
    void OnChangedWeaon(class APalWeaponBase* weapon);
    void Setup_AfterCreatedPlayer();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_PalAim(int32 EntryPoint);
}; // Size: 0x458

#endif
