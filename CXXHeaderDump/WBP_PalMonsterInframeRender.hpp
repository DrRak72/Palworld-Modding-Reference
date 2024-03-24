#ifndef UE4SS_SDK_WBP_PalMonsterInframeRender_HPP
#define UE4SS_SDK_WBP_PalMonsterInframeRender_HPP

class UWBP_PalMonsterInframeRender_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)
    class UImage* Image_Captured;                                                     // 0x0410 (size: 0x8)
    class ABP_PalMonsterCaptureSet_C* CaptureCamera;                                  // 0x0418 (size: 0x8)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0420 (size: 0x8)
    bool isCaptureEveryFrame;                                                         // 0x0428 (size: 0x1)
    TSubclassOf<class ABP_PalMonsterCaptureSet_C> CaptureSetClass;                    // 0x0430 (size: 0x8)
    double CaptureInterval;                                                           // 0x0438 (size: 0x8)
    FTimerHandle CaptureSceneTimerHandle;                                             // 0x0440 (size: 0x8)
    class UMaterialInstanceDynamic* RenderTargetMaterial;                             // 0x0448 (size: 0x8)
    class ABP_PalMonsterInframeRendererSoundPlayer_C* SoundPlayerActor;               // 0x0450 (size: 0x8)

    void PlayNowDisplayingPalCryRandom();
    void PlayNowDisplayingPalCry(FName EmoStateName);
    void OnCompleteCapture();
    void OnTimer_CaptureScene();
    void Initialize_Internal(int32 TextureSizeX, int32 TExtureSizeY);
    void ResetRotation();
    void AddRotation(FRotator Rotator);
    void RequestCapture(FName CharacterID);
    void GetCaptureCameraActor(class ABP_PalMonsterCaptureSet_C*& CameraActor);
    void Reset();
    void Initialize_FreeSize(int32 TextureSizeX, int32 TExtureSizeY);
    void Initialize(int32 TextureSize);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void ExecuteUbergraph_WBP_PalMonsterInframeRender(int32 EntryPoint);
}; // Size: 0x458

#endif
