#ifndef UE4SS_SDK_BP_WaterfallTool_HPP
#define UE4SS_SDK_BP_WaterfallTool_HPP

class ABP_WaterfallTool_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UPalAmbientSoundLineComponent* PalAmbientSoundLine;                         // 0x0298 (size: 0x8)
    class UParticleSystemComponent* Mist;                                             // 0x02A0 (size: 0x8)
    class UParticleSystemComponent* BottomSplash;                                     // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* TopSplash;                                        // 0x02B0 (size: 0x8)
    class USplineComponent* Waterfall_Spline;                                         // 0x02B8 (size: 0x8)
    bool Ground Check;                                                                // 0x02C0 (size: 0x1)
    double Easy Scale;                                                                // 0x02C8 (size: 0x8)
    FLinearColor Water Color;                                                         // 0x02D0 (size: 0x10)
    double Foam Brightness;                                                           // 0x02E0 (size: 0x8)
    double Opacity;                                                                   // 0x02E8 (size: 0x8)
    double Opacity Edge Fade;                                                         // 0x02F0 (size: 0x8)
    double Flow Speed;                                                                // 0x02F8 (size: 0x8)
    double Start Fade;                                                                // 0x0300 (size: 0x8)
    TArray<FAdditionalCascades> Additional Waterfalls;                                // 0x0308 (size: 0x10)
    TArray<class UParticleSystemComponent*> Additional Top Splash;                    // 0x0318 (size: 0x10)
    TArray<class UParticleSystemComponent*> Additional Bottom Splash;                 // 0x0328 (size: 0x10)
    TArray<class UParticleSystemComponent*> Additional Mist;                          // 0x0338 (size: 0x10)
    TArray<class USplineComponent*> Adds Waterfall Spline Comps;                      // 0x0348 (size: 0x10)
    double End Fade;                                                                  // 0x0358 (size: 0x8)
    double Edge Fade;                                                                 // 0x0360 (size: 0x8)
    bool Object Detection;                                                            // 0x0368 (size: 0x1)
    double Object Detection Size;                                                     // 0x0370 (size: 0x8)
    double Object Detection Strength;                                                 // 0x0378 (size: 0x8)
    double Object Detection Smoothness;                                               // 0x0380 (size: 0x8)
    TArray<class AActor*> Actors to Ignore;                                           // 0x0388 (size: 0x10)

    void CheckIntervalByDistance();
    void Setup Waterfall Particles();
    void Setup Adds Waterfall Particles();
    void Setup Waterfall Particle Parameters();
    void Setup Adds Waterfall Particle Parameters();
    void Set Adds Waterfall Particle Effect Location(TArray<FAdditionalCascades>& Cascade Splines Data, TArray<class UParticleSystemComponent*>& Cascade Top Splash, TArray<class UParticleSystemComponent*>& Cascade Bottom Splash, TArray<class UParticleSystemComponent*>& Cascade Mist, TArray<class USplineComponent*>& Cascade Spline Comps);
    void Do Waterfall Trace(class USplineComponent* Spline Input, double Scale, TArray<class AActor*>& Actors to Ignore);
    void Check Spline Input Keys(TArray<FAdditionalCascades>& Cascades In, bool& passed);
    void Setup Spline Mesh(class USplineComponent* Spline Comp, double Scale);
    void Set Waterfall Particle Effect Location();
    void Setup Material Parameters(class UMaterialInstanceDynamic* Material, int32 Current Index, class USplineComponent* Spline);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WaterfallTool(int32 EntryPoint);
}; // Size: 0x398

#endif
