#ifndef UE4SS_SDK_BP_PalBiomeLightingAdjuster_HPP
#define UE4SS_SDK_BP_PalBiomeLightingAdjuster_HPP

class UBP_PalBiomeLightingAdjuster_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class APPSkyCreator* SkyCreator;                                                  // 0x00A8 (size: 0x8)
    FLinearColor Rayleigh Scattering;                                                 // 0x00B0 (size: 0x10)
    double Rayleigh Exponential Distribution;                                         // 0x00C0 (size: 0x8)
    FLinearColor Light Albedo;                                                        // 0x00C8 (size: 0x10)
    FLinearColor Light Color;                                                         // 0x00D8 (size: 0x10)
    double Transition Speed;                                                          // 0x00E8 (size: 0x8)
    double Rate;                                                                      // 0x00F0 (size: 0x8)
    bool Is Overlapped;                                                               // 0x00F8 (size: 0x1)
    bool Is Biome Change Processing;                                                  // 0x00F9 (size: 0x1)
    bool Is Override SkyLight Intensity;                                              // 0x00FA (size: 0x1)
    double SkyLight Intensity;                                                        // 0x0100 (size: 0x8)
    FLinearColor Current Rayleigh Scattering;                                         // 0x0108 (size: 0x10)
    double Current Rayleigh Exponential Distribution;                                 // 0x0118 (size: 0x8)
    FLinearColor Current Light Albedo;                                                // 0x0120 (size: 0x10)
    FLinearColor Current Light Color;                                                 // 0x0130 (size: 0x10)
    double Current SkyLight Intensity;                                                // 0x0140 (size: 0x8)
    class UBP_PalBiomeLightingAdjuster_C* Parent Volume;                              // 0x0148 (size: 0x8)

    void TickBiomeAdjuster(double DeltaTime);
    void OnEndOverlap();
    void OnBeginOverlap();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_PalBiomeLightingAdjuster(int32 EntryPoint);
}; // Size: 0x150

#endif
