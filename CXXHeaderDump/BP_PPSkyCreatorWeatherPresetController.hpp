#ifndef UE4SS_SDK_BP_PPSkyCreatorWeatherPresetController_HPP
#define UE4SS_SDK_BP_PPSkyCreatorWeatherPresetController_HPP

class ABP_PPSkyCreatorWeatherPresetController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    class APPSkyCreator* SkyCreatorTarget;                                            // 0x02A0 (size: 0x8)
    TArray<FS_PPSkyCreatorTimePreset> Weather Presets;                                // 0x02A8 (size: 0x10)
    double Interpolation Duration;                                                    // 0x02B8 (size: 0x8)
    double Time;                                                                      // 0x02C0 (size: 0x8)
    double Alpha;                                                                     // 0x02C8 (size: 0x8)
    class UPPSkyCreatorWeatherPreset* Preset;                                         // 0x02D0 (size: 0x8)
    class UPPSkyCreatorWeatherPreset* next preset;                                    // 0x02D8 (size: 0x8)

    void SetBrightness();
    void GetPresets(double Time, class UPPSkyCreatorWeatherPreset*& CurrentPreset, class UPPSkyCreatorWeatherPreset*& NextPreset, double& Alpha, int32& PresetIndex);
    void GetPrePreset(int32 Index, class UPPSkyCreatorWeatherPreset*& Pre);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController(int32 EntryPoint);
}; // Size: 0x2E0

#endif
