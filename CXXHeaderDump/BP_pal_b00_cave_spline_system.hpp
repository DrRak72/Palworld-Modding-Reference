#ifndef UE4SS_SDK_BP_pal_b00_cave_spline_system_HPP
#define UE4SS_SDK_BP_pal_b00_cave_spline_system_HPP

class ABP_pal_b00_cave_spline_system_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)
    double SECTION LENGTH;                                                            // 0x02A0 (size: 0x8)

    void BUILD CAVE();
    void UserConstructionScript();
}; // Size: 0x2A8

#endif