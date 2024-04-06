#ifndef UE4SS_SDK_BP_SniperCamera_HPP
#define UE4SS_SDK_BP_SniperCamera_HPP

class ABP_SniperCamera_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D_InScope;                  // 0x0298 (size: 0x8)
    class UPalCharacterCameraComponent* PalCharacterCamera_OutScope;                  // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SniperCamera(int32 EntryPoint);
}; // Size: 0x2B0

#endif
