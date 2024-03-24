#ifndef UE4SS_SDK_StemSpline_BP_HPP
#define UE4SS_SDK_StemSpline_BP_HPP

class AStemSpline_BP_C : public AActor
{
    class UBillboardComponent* Billboard;                                             // 0x0290 (size: 0x8)
    class UArrowComponent* Arrow3;                                                    // 0x0298 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x02A0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02A8 (size: 0x8)
    double IrregularityLevel;                                                         // 0x02B0 (size: 0x8)
    double IrregularityLevel_SubStems;                                                // 0x02B8 (size: 0x8)
    double pointHeightAboveSurface;                                                   // 0x02C0 (size: 0x8)
    double pointHeightOnEdge;                                                         // 0x02C8 (size: 0x8)
    bool addCornerPoints;                                                             // 0x02D0 (size: 0x1)
    bool optimizeEdges;                                                               // 0x02D1 (size: 0x1)
    double traceSegmentLength;                                                        // 0x02D8 (size: 0x8)
    double downTraceLength;                                                           // 0x02E0 (size: 0x8)
    int32 Seed;                                                                       // 0x02E8 (size: 0x4)
    int32 AmountOfSegments;                                                           // 0x02EC (size: 0x4)
    int32 amountOfSegmentsDone;                                                       // 0x02F0 (size: 0x4)
    int32 edgeDetectionPrecision;                                                     // 0x02F4 (size: 0x4)
    double splineMeshAmountFactor;                                                    // 0x02F8 (size: 0x8)
    bool matchDirection&SurfaceNormal;                                                // 0x0300 (size: 0x1)
    TArray<FVector> Points;                                                           // 0x0308 (size: 0x10)
    double subStemChance;                                                             // 0x0318 (size: 0x8)
    bool showSplinePoints;                                                            // 0x0320 (size: 0x1)
    FVector currentSubstemDirection;                                                  // 0x0328 (size: 0x18)
    TArray<FVector> currentAddingSubstemPoints;                                       // 0x0340 (size: 0x10)
    int32 currentAddingSubstemAmountOfSegments;                                       // 0x0350 (size: 0x4)
    TArray<FSubStemStarter> subStemStarters;                                          // 0x0358 (size: 0x10)
    int32 currentAddingSubLevel;                                                      // 0x0368 (size: 0x4)
    int32 maxSubStemLevels;                                                           // 0x036C (size: 0x4)
    TArray<class USplineComponent*> subStemSplines;                                   // 0x0370 (size: 0x10)
    double subStems_minGrowAlongLength;                                               // 0x0380 (size: 0x8)
    double subStems_maxGrowAlongLength;                                               // 0x0388 (size: 0x8)
    double subStemAngle;                                                              // 0x0390 (size: 0x8)
    double subStemAngleAdditionalRandom;                                              // 0x0398 (size: 0x8)
    int32 maxSubstemAmount;                                                           // 0x03A0 (size: 0x4)
    int32 currentSubstemAmount;                                                       // 0x03A4 (size: 0x4)
    double perSubLevelLengthMultiplier;                                               // 0x03A8 (size: 0x8)
    bool optimizeToLowerPoly;                                                         // 0x03B0 (size: 0x1)
    double optimizeMesh_DirectionMargin;                                              // 0x03B8 (size: 0x8)
    double optimizeMesh_TangentMargin;                                                // 0x03C0 (size: 0x8)
    bool StripStem;                                                                   // 0x03C8 (size: 0x1)
    double StripStemStartWidth;                                                       // 0x03D0 (size: 0x8)
    double StripStemEndWidth;                                                         // 0x03D8 (size: 0x8)
    double StripStemFullWidthTime;                                                    // 0x03E0 (size: 0x8)
    class UStaticMesh* StripStemMain;                                                 // 0x03E8 (size: 0x8)
    class UStaticMesh* StripStemLowPoly;                                              // 0x03F0 (size: 0x8)
    class UMaterialInterface* StripStemMaterial;                                      // 0x03F8 (size: 0x8)
    double StartMeshScaleExtension;                                                   // 0x0400 (size: 0x8)
    double EndMeshScaleExtension;                                                     // 0x0408 (size: 0x8)
    FVector2D mainMeshScale;                                                          // 0x0410 (size: 0x10)
    class UStaticMesh* splineMesh_Middle;                                             // 0x0420 (size: 0x8)
    class UStaticMesh* splineMesh_Start;                                              // 0x0428 (size: 0x8)
    class UStaticMesh* splineMesh_End;                                                // 0x0430 (size: 0x8)
    class UStaticMesh* splineMesh_LowPoly;                                            // 0x0438 (size: 0x8)
    class USplineComponent* mainSpline;                                               // 0x0440 (size: 0x8)
    TArray<int32> occupiedLengths;                                                    // 0x0448 (size: 0x10)
    FVector startPointSeekDirection;                                                  // 0x0458 (size: 0x18)
    double splineEndScale;                                                            // 0x0470 (size: 0x8)
    double MainStemCurve;                                                             // 0x0478 (size: 0x8)
    bool MainStemCurve_Bending;                                                       // 0x0480 (size: 0x1)
    bool MainStemCurve_Incremental;                                                   // 0x0481 (size: 0x1)
    double SubStemCurve;                                                              // 0x0488 (size: 0x8)
    bool SubStemCurve_Bending;                                                        // 0x0490 (size: 0x1)
    FVector lastTraceDirection;                                                       // 0x0498 (size: 0x18)
    bool dropOffFromBottomEdges;                                                      // 0x04B0 (size: 0x1)
    int32 dropOffFromBottomEdges_maxDrop;                                             // 0x04B4 (size: 0x4)
    int32 currentDropOffs;                                                            // 0x04B8 (size: 0x4)
    bool doingDropOffNow;                                                             // 0x04BC (size: 0x1)
    double dropOffTolerance;                                                          // 0x04C0 (size: 0x8)
    double dropOff_EdgeAdjust;                                                        // 0x04C8 (size: 0x8)
    bool dropOffIfDownDirection;                                                      // 0x04D0 (size: 0x1)
    double dropOffIfDownDirection_reqLength;                                          // 0x04D8 (size: 0x8)
    FVector dropOffPoint;                                                             // 0x04E0 (size: 0x18)
    double dropOffDownDirection_EdgeAdjust;                                           // 0x04F8 (size: 0x8)
    bool makeBridges;                                                                 // 0x0500 (size: 0x1)
    bool makeBridgesWithSubStems;                                                     // 0x0501 (size: 0x1)
    double BridgeChance;                                                              // 0x0508 (size: 0x8)
    double BridgeGravity;                                                             // 0x0510 (size: 0x8)
    double BridgeGravity_RandomAdd;                                                   // 0x0518 (size: 0x8)
    class UCurveFloat* BridgeCurve;                                                   // 0x0520 (size: 0x8)
    bool badTwistWorkaround;                                                          // 0x0528 (size: 0x1)
    TArray<double> meshStartTimes;                                                    // 0x0530 (size: 0x10)
    TArray<double> meshEndTimes;                                                      // 0x0540 (size: 0x10)
    TArray<FVector> edgePoints_Locations;                                             // 0x0550 (size: 0x10)
    double splineMeshRoll;                                                            // 0x0560 (size: 0x8)
    bool fixTangentUV-Stretching;                                                     // 0x0568 (size: 0x1)
    TArray<double> edgePointsTimes;                                                   // 0x0570 (size: 0x10)
    double SeekDistance;                                                              // 0x0580 (size: 0x8)
    double SeekStartOffset;                                                           // 0x0588 (size: 0x8)
    bool PrioritizeHigherObjects;                                                     // 0x0590 (size: 0x1)
    bool showSeekTraces;                                                              // 0x0591 (size: 0x1)
    int32 maxTraceChecks;                                                             // 0x0594 (size: 0x4)
    bool useFixedSeekDirection;                                                       // 0x0598 (size: 0x1)
    FVector FixedSeekDirection;                                                       // 0x05A0 (size: 0x18)
    bool makeBridgesFromCeilings;                                                     // 0x05B8 (size: 0x1)
    double strongTangentsReduction;                                                   // 0x05C0 (size: 0x8)
    bool 'X'_asUpVector;                                                              // 0x05C8 (size: 0x1)
    bool clampedEdges;                                                                // 0x05C9 (size: 0x1)
    bool CreateSplineMeshes;                                                          // 0x05CA (size: 0x1)
    bool onlyFromEdges;                                                               // 0x05CB (size: 0x1)
    double requiredEdgeSharpness;                                                     // 0x05D0 (size: 0x8)
    int32 maxBridgeAmount;                                                            // 0x05D8 (size: 0x4)
    int32 currentBridgeAmount;                                                        // 0x05DC (size: 0x4)
    bool SplineMeshShadow;                                                            // 0x05E0 (size: 0x1)
    bool SplineMeshCollision;                                                         // 0x05E1 (size: 0x1)
    bool SubStemCurve_Incremental;                                                    // 0x05E2 (size: 0x1)
    bool hideDirectionArrows;                                                         // 0x05E3 (size: 0x1)
    TArray<FMeshToSpawnAlong> meshesToSpawnAlong;                                     // 0x05E8 (size: 0x10)
    bool Click;                                                                       // 0x05F8 (size: 0x1)
    TArray<FSkelMeshToSpawnAlong> SkelMeshesToSpawnAlong;                             // 0x0600 (size: 0x10)
    bool useTargetPoint;                                                              // 0x0610 (size: 0x1)
    class ASplineTarget_BP_C* TargetPoint;                                            // 0x0618 (size: 0x8)
    FVector Direction;                                                                // 0x0620 (size: 0x18)
    FRandomStream RandomStream;                                                       // 0x0638 (size: 0x8)
    bool ProcessSubStems;                                                             // 0x0640 (size: 0x1)
    double IrregularityLevelSubStems_Neg;                                             // 0x0648 (size: 0x8)
    double IrregularityLevel_Neg;                                                     // 0x0650 (size: 0x8)
    double BridgeGravityRandomAdd_Neg;                                                // 0x0658 (size: 0x8)
    FLinearColor FullRed;                                                             // 0x0660 (size: 0x10)
    FLinearColor NoRed;                                                               // 0x0670 (size: 0x10)

    void ConstructionLogic();
    void SetMainDirectionVector();
    void AddSkelMeshesAlongSpline(class USplineComponent* SplineComp);
    void [SubStem]-DoCheckSegment(FVector StartLocation, FVector relativeNormal, int32 currentSubLevel);
    void SeekForBridge(FVector StartLoc, FVector startNormal, bool& bridgeBuilt, TArray<FVector>& bridgePoints, FVector& newSurfaceNormal);
    void (Bridge)_TraceTowardsDirection(FVector StartLocation, FVector relativeNormal, FVector Direction, bool& hitSomething, FVector& LastLocation, FVector& HitLocation, FVector& HitNormal, FVector& traceDirection);
    void FindBridgeEdge(int32 maxSegmentChecks, FVector fromWhere, FVector startNormal, FVector Direction, bool& Found, FVector& edgeLocation, FVector& edgeNormal);
    void WorldLocToSplineTimeApprox(FVector worldLoc, int32 Iterations, double distanceTolerance_, class USplineComponent* SplineComponent, double StartTime, double EndTime, double& bestTime);
    void FindClosestVector(TArray<FVector>& inArray, FVector toVector, int32& closestValueIndex_);
    void CheckIfContainsVectorInDistance(TArray<FVector>& Array, double InDistance, FVector Vector, bool& Contains?);
    void FindClosestValue(TArray<double>& inArray, double toValue, int32& closestValueIndex_);
    void CheckIfContainsValueInRange(TArray<double>& Array, double Range: Min, double Range: Max, bool& Contains?);
    void AddMeshesAlongSpline(class USplineComponent* SplineComp);
    void AddSubStem(FVector StartLoc, FVector startNormal, int32 currentSubLevel);
    void AddSplineMeshes(class USplineComponent* SplineComponent);
    void AddSplinePoints();
    void SearchForEdge(FVector searchStartLocation, FVector searchDirectionNormal, bool forSubstem, bool& FoundAnEdge_, FVector& foundEdgeLocation, FVector& foundEdgeNormal);
    void DoCheckSegment(FVector StartLocation, FVector relativeNormal);
    void TraceDown(FVector StartLocation, FVector relativeNormal, bool forBridgeSeek, FVector& HitLocation, FVector& HitNormal, bool& hitSomething);
    void TraceTowardsDirection(FVector StartLocation, FVector relativeNormal, bool forSubstem, FVector& HitLocation, FVector& HitNormal, FVector& LastLocation, FVector& traceDirection, bool& hitSomething, bool& targetReached);
    void FindStartPoint(FVector& StartLoc, FVector& startNormal);
    void UserConstructionScript();
}; // Size: 0x680

#endif
