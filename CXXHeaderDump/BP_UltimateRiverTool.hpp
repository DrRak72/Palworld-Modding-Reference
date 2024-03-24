#ifndef UE4SS_SDK_BP_UltimateRiverTool_HPP
#define UE4SS_SDK_BP_UltimateRiverTool_HPP

class ABP_UltimateRiverTool_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USplineComponent* mainSpline;                                               // 0x0298 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02A0 (size: 0x8)
    bool UpdateBlueprint;                                                             // 0x02A8 (size: 0x1)
    TSubclassOf<class ABP_PrefabBase_C> BasePrefabBlueprint;                          // 0x02B0 (size: 0x8)
    TArray<FRiverSplineElement> SplineMeshes;                                         // 0x02B8 (size: 0x10)
    TArray<FSplineAttachment> Objects;                                                // 0x02C8 (size: 0x10)
    TArray<FSplinesInEditor> Splines;                                                 // 0x02D8 (size: 0x10)
    bool UseSplineMeshes;                                                             // 0x02E8 (size: 0x1)
    bool UseEndFixedObjects;                                                          // 0x02E9 (size: 0x1)
    bool UseStartFixedObjects;                                                        // 0x02EA (size: 0x1)
    TArray<FSplineObject> SplineObjects;                                              // 0x02F0 (size: 0x10)
    FString DebugText;                                                                // 0x0300 (size: 0x10)
    bool CurrentObjectIsSpline;                                                       // 0x0310 (size: 0x1)
    FVector CurrentStartPos;                                                          // 0x0318 (size: 0x18)
    FVector CurrentEndPos;                                                            // 0x0330 (size: 0x18)
    double CalcSpacing;                                                               // 0x0348 (size: 0x8)
    bool UpVector;                                                                    // 0x0350 (size: 0x1)
    bool IsStartFixedObject;                                                          // 0x0351 (size: 0x1)
    bool IsEndFixedObject;                                                            // 0x0352 (size: 0x1)
    TArray<FSplineAttachment> Objects_StartFixed;                                     // 0x0358 (size: 0x10)
    TArray<FSplineAttachment> Objects_EndFixed;                                       // 0x0368 (size: 0x10)
    bool UseObjectLoops;                                                              // 0x0378 (size: 0x1)
    double CalcTangentScale;                                                          // 0x0380 (size: 0x8)
    int32 Int;                                                                        // 0x0388 (size: 0x4)
    bool IsScaleable;                                                                 // 0x038C (size: 0x1)
    class USplineComponent* CurrentSpline;                                            // 0x0390 (size: 0x8)
    bool SplineObjectExists;                                                          // 0x0398 (size: 0x1)
    bool UseSplineObjects;                                                            // 0x0399 (size: 0x1)
    TArray<FVector> PointLocations;                                                   // 0x03A0 (size: 0x10)
    TArray<FVector> PointTangets;                                                     // 0x03B0 (size: 0x10)
    TArray<FVector> PointScales;                                                      // 0x03C0 (size: 0x10)
    TArray<double> PointRolls;                                                        // 0x03D0 (size: 0x10)
    TArray<FRotator> PointRotations;                                                  // 0x03E0 (size: 0x10)
    TArray<FRotator> Debug;                                                           // 0x03F0 (size: 0x10)
    TEnumAsByte<ECollisionEnabled::Type> Collision;                                   // 0x0400 (size: 0x1)
    bool CastShadow;                                                                  // 0x0401 (size: 0x1)
    double GlobalScale;                                                               // 0x0408 (size: 0x8)
    bool SimulateFlowPhysics;                                                         // 0x0410 (size: 0x1)
    bool EnabledForSwimming;                                                          // 0x0411 (size: 0x1)
    double Physics_FlowSpeed;                                                         // 0x0418 (size: 0x8)
    double Physics_CenterMassOffset;                                                  // 0x0420 (size: 0x8)
    double RiverWidth;                                                                // 0x0428 (size: 0x8)
    double RiverSpline_TangetScale;                                                   // 0x0430 (size: 0x8)
    double RiverMeshSmoothness;                                                       // 0x0438 (size: 0x8)
    class UMaterialInterface* RiverMaterial;                                          // 0x0440 (size: 0x8)
    class UStaticMesh* RiverMesh;                                                     // 0x0448 (size: 0x8)
    class UMaterialInstanceDynamic* MaterialOverrideInstance;                         // 0x0450 (size: 0x8)
    int32 SimpleTiling_Scale_Y;                                                       // 0x0458 (size: 0x4)
    double Tiling_Scale_X;                                                            // 0x0460 (size: 0x8)
    bool SimpleTiling_Y;                                                              // 0x0468 (size: 0x1)
    double Tiling_Scale_Y;                                                            // 0x0470 (size: 0x8)
    TArray<double> SplineLenghtsDebug;                                                // 0x0478 (size: 0x10)
    double MASTER_UV_WarpIntensity;                                                   // 0x0488 (size: 0x8)
    double MASTER_UV_WarpFalloff;                                                     // 0x0490 (size: 0x8)
    double MASTER_UV_WarpRadius;                                                      // 0x0498 (size: 0x8)
    double MASTER_WaterReflection;                                                    // 0x04A0 (size: 0x8)
    double LINEAR_POWER;                                                              // 0x04A8 (size: 0x8)
    double LINEAR_Foam2Intensity;                                                     // 0x04B0 (size: 0x8)
    double LINEAR_FoamIntensity;                                                      // 0x04B8 (size: 0x8)
    double LINEAR_FlowSpeed;                                                          // 0x04C0 (size: 0x8)
    double LINEAR_UV_WarpIntensity;                                                   // 0x04C8 (size: 0x8)
    double LINEAR_Obstacles_UV_WarpIntensity;                                         // 0x04D0 (size: 0x8)
    double LINEAR_ObstaclesFoamIntensity;                                             // 0x04D8 (size: 0x8)
    double LINEAR_Obstacles_FlowSpeed;                                                // 0x04E0 (size: 0x8)
    double LINEAR_WaterDistortion;                                                    // 0x04E8 (size: 0x8)
    double SLOPES_UV_WarpIntensity;                                                   // 0x04F0 (size: 0x8)
    double SLOPES_WaterDistortion;                                                    // 0x04F8 (size: 0x8)
    double FoamIntensity_Slopes;                                                      // 0x0500 (size: 0x8)
    double FoamIntensity_Slopes_Power;                                                // 0x0508 (size: 0x8)
    double FoamIntensity_Slopes_Small;                                                // 0x0510 (size: 0x8)
    double FoamIntensity_Slopes_Large;                                                // 0x0518 (size: 0x8)
    double SLOPES_UV_FlowWarp;                                                        // 0x0520 (size: 0x8)
    double ObstacleAffectDistance;                                                    // 0x0528 (size: 0x8)
    double Metallic;                                                                  // 0x0530 (size: 0x8)
    double Specular;                                                                  // 0x0538 (size: 0x8)
    double Roughness;                                                                 // 0x0540 (size: 0x8)
    double Obstacle_Side_Intensity;                                                   // 0x0548 (size: 0x8)
    double Obstacle_Side_Falloff;                                                     // 0x0550 (size: 0x8)
    double Obstacle_Front_Intensity;                                                  // 0x0558 (size: 0x8)
    double Obstacle_Front_Falloff;                                                    // 0x0560 (size: 0x8)
    double Obstacle_Back_Intensity;                                                   // 0x0568 (size: 0x8)
    double Obstacle_Back_Falloff;                                                     // 0x0570 (size: 0x8)
    double SlopeStartAngle;                                                           // 0x0578 (size: 0x8)
    double SlopeEndAngle;                                                             // 0x0580 (size: 0x8)
    double SlopeAngleFalloff;                                                         // 0x0588 (size: 0x8)
    double Emissive;                                                                  // 0x0590 (size: 0x8)
    double Opacity;                                                                   // 0x0598 (size: 0x8)
    double Displacement_Intensity;                                                    // 0x05A0 (size: 0x8)
    double Displacement_FrontScale;                                                   // 0x05A8 (size: 0x8)
    double Displacement_BackScale;                                                    // 0x05B0 (size: 0x8)
    double Displacement_BackPower;                                                    // 0x05B8 (size: 0x8)
    double Displacement_Noize_Obstacles_Intensity;                                    // 0x05C0 (size: 0x8)
    double Displacement_Noize_Linear_Intensity;                                       // 0x05C8 (size: 0x8)
    FLinearColor WaterColor_Linear;                                                   // 0x05D0 (size: 0x10)
    FLinearColor WaterColor_Slopes;                                                   // 0x05E0 (size: 0x10)
    double WaterDiffusivity_Slopes;                                                   // 0x05F0 (size: 0x8)
    double DistanceField_ZOffset;                                                     // 0x05F8 (size: 0x8)
    double ObstacleFront_BubblesPower;                                                // 0x0600 (size: 0x8)
    double ObstacleFront_BubblesIntensity;                                            // 0x0608 (size: 0x8)
    double ObstacleFront_LandscapeDFOffset;                                           // 0x0610 (size: 0x8)
    TArray<class USplineMeshComponent*> SplineOverlapVolumes;                         // 0x0618 (size: 0x10)
    double Obstacles_FoamIntensityGlobal;                                             // 0x0628 (size: 0x8)
    bool ShowVolumes;                                                                 // 0x0630 (size: 0x1)
    double DepthVolumesScaleZ;                                                        // 0x0638 (size: 0x8)
    double DepthVolumesOffsetZ;                                                       // 0x0640 (size: 0x8)
    bool con;                                                                         // 0x0648 (size: 0x1)
    int32 TranslucentSortPriority;                                                    // 0x064C (size: 0x4)
    bool PlayInFX;                                                                    // 0x0650 (size: 0x1)
    class UParticleSystem* Emitter_In;                                                // 0x0658 (size: 0x8)

    void SetupCollision(class USplineMeshComponent* SplineMesh);
    void GenerateSplineMesh_TriggerVolume(TEnumAsByte<ECollisionEnabled::Type> Collision, bool CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, FVector Offset, FVector Scale, double TangetScale, double Spacing, FRotator Rotation, class UStaticMesh* StaticMesh, class USplineComponent* PathDeform, double PathDeformDistance, bool isTriggerVolume);
    void PathDeform(class USplineComponent* Spline, FVector CoorinatesIn, double Distance, FVector&  CoordinatesOut);
    void GenerateSplineMesh_Cycle(TEnumAsByte<ECollisionEnabled::Type> Collision, bool CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, FVector Offset, FVector Scale, double TangetScale, double Spacing, FRotator Rotation, class UStaticMesh* StaticMesh);
    void GenerateSplineMesh(TEnumAsByte<ECollisionEnabled::Type> Collision, bool CastShadow, class UMaterialInterface* Material, class USplineComponent* TargetSpline, double SplineStartOffset, FVector Offset, FVector Scale, double TangetScale, double Spacing, FRotator Rotation, class UStaticMesh* StaticMesh, class USplineComponent* PathDeform, double PathDeformDistance, bool isTriggerVolume, int32 TranslucentSortPriority);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void WaterEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void WaterBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_UltimateRiverTool(int32 EntryPoint);
}; // Size: 0x660

#endif