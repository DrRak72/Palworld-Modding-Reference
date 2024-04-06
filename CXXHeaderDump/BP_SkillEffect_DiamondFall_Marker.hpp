#ifndef UE4SS_SDK_BP_SkillEffect_DiamondFall_Marker_HPP
#define UE4SS_SDK_BP_SkillEffect_DiamondFall_Marker_HPP

class ABP_SkillEffect_DiamondFall_Marker_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    double HalfMaxRange;                                                              // 0x03C8 (size: 0x8)
    int32 AmbienceFallCount;                                                          // 0x03D0 (size: 0x4)
    int32 PredictFallCount;                                                           // 0x03D4 (size: 0x4)
    int32 DirectFallCount;                                                            // 0x03D8 (size: 0x4)
    double FallInterval;                                                              // 0x03E0 (size: 0x8)
    FTimerHandle FallTimer;                                                           // 0x03E8 (size: 0x8)
    int32 CurrentCeiling;                                                             // 0x03F0 (size: 0x4)
    int32 CeilingCount;                                                               // 0x03F4 (size: 0x4)

    void GetRandomFallType(bool NoAmbience, int32& Type);
    void SpawnDiamond();
    void OnInitialize();
    void ExecuteUbergraph_BP_SkillEffect_DiamondFall_Marker(int32 EntryPoint);
}; // Size: 0x3F8

#endif
