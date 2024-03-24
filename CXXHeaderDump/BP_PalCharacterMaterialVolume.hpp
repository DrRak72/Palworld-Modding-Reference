#ifndef UE4SS_SDK_BP_PalCharacterMaterialVolume_HPP
#define UE4SS_SDK_BP_PalCharacterMaterialVolume_HPP

class ABP_PalCharacterMaterialVolume_C : public ABP_PickMainMeshVolume_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    double Base Emissive Intensity;                                                   // 0x02B8 (size: 0x8)
    double Base Color Intensity;                                                      // 0x02C0 (size: 0x8)
    double Light Affect Emissive Intensity;                                           // 0x02C8 (size: 0x8)
    double Light Affect Emissive Min;                                                 // 0x02D0 (size: 0x8)
    double Light Affect Emissive Max;                                                 // 0x02D8 (size: 0x8)
    TSet<UMaterialInstanceDynamic*> Material Map;                                     // 0x02E0 (size: 0x50)
    double Base Emissive Intensity_0;                                                 // 0x0330 (size: 0x8)
    double Base Color Intensity_0;                                                    // 0x0338 (size: 0x8)
    double Light Affect Emissive Intensity_0;                                         // 0x0340 (size: 0x8)
    double Light Affect Emissive Min_0;                                               // 0x0348 (size: 0x8)
    double Light Affect Emissive Max_0;                                               // 0x0350 (size: 0x8)

    void ForceInit();
    void ForceOn();
    void ForceOff();
    void ForceUpdate();
    void UpdateParameters();
    void SetParameters(class UMaterialInstanceDynamic* Material, double Light Affect Emissive Intensity, double Light Affect Emissive Min, double Light Affect Emissive Max, double Base Emissive Intensity, double Base Color Intensity);
    void EndOverlapPalLit(class UMaterialInstanceDynamic* Material);
    void BeginOverlapPalLit(class UMaterialInstanceDynamic* Material, bool materialSrc);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Force Update();
    void Force Off();
    void Force On();
    void Force Init();
    void ExecuteUbergraph_BP_PalCharacterMaterialVolume(int32 EntryPoint);
}; // Size: 0x358

#endif
