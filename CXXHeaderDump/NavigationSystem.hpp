#ifndef UE4SS_SDK_NavigationSystem_HPP
#define UE4SS_SDK_NavigationSystem_HPP

#include "NavigationSystem_enums.hpp"

struct FNavCollisionBox
{
    FVector Offset;                                                                   // 0x0000 (size: 0x18)
    FVector Extent;                                                                   // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FNavCollisionCylinder
{
    FVector Offset;                                                                   // 0x0000 (size: 0x18)
    float Radius;                                                                     // 0x0018 (size: 0x4)
    float Height;                                                                     // 0x001C (size: 0x4)

}; // Size: 0x20

struct FNavGraphEdge
{
}; // Size: 0x18

struct FNavGraphNode
{
    class UObject* Owner;                                                             // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FNavLinkCustomInstanceData : public FActorComponentInstanceData
{
    uint32 NavLinkUserId;                                                             // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FNavigationFilterArea
{
    TSubclassOf<class UNavArea> AreaClass;                                            // 0x0000 (size: 0x8)
    float TravelCostOverride;                                                         // 0x0008 (size: 0x4)
    float EnteringCostOverride;                                                       // 0x000C (size: 0x4)
    uint8 bIsExcluded;                                                                // 0x0010 (size: 0x1)
    uint8 bOverrideTravelCost;                                                        // 0x0010 (size: 0x1)
    uint8 bOverrideEnteringCost;                                                      // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FNavigationFilterFlags
{
    uint8 bNavFlag0;                                                                  // 0x0000 (size: 0x1)
    uint8 bNavFlag1;                                                                  // 0x0000 (size: 0x1)
    uint8 bNavFlag2;                                                                  // 0x0000 (size: 0x1)
    uint8 bNavFlag3;                                                                  // 0x0000 (size: 0x1)
    uint8 bNavFlag4;                                                                  // 0x0000 (size: 0x1)
    uint8 bNavFlag5;                                                                  // 0x0000 (size: 0x1)
    uint8 bNavFlag6;                                                                  // 0x0000 (size: 0x1)
    uint8 bNavFlag7;                                                                  // 0x0000 (size: 0x1)
    uint8 bNavFlag8;                                                                  // 0x0001 (size: 0x1)
    uint8 bNavFlag9;                                                                  // 0x0001 (size: 0x1)
    uint8 bNavFlag10;                                                                 // 0x0001 (size: 0x1)
    uint8 bNavFlag11;                                                                 // 0x0001 (size: 0x1)
    uint8 bNavFlag12;                                                                 // 0x0001 (size: 0x1)
    uint8 bNavFlag13;                                                                 // 0x0001 (size: 0x1)
    uint8 bNavFlag14;                                                                 // 0x0001 (size: 0x1)
    uint8 bNavFlag15;                                                                 // 0x0001 (size: 0x1)

}; // Size: 0x4

struct FRecastNavMeshGenerationProperties
{
    int32 TilePoolSize;                                                               // 0x0000 (size: 0x4)
    float TileSizeUU;                                                                 // 0x0004 (size: 0x4)
    float CellSize;                                                                   // 0x0008 (size: 0x4)
    float CellHeight;                                                                 // 0x000C (size: 0x4)
    float AgentRadius;                                                                // 0x0010 (size: 0x4)
    float AgentHeight;                                                                // 0x0014 (size: 0x4)
    float AgentMaxSlope;                                                              // 0x0018 (size: 0x4)
    float AgentMaxStepHeight;                                                         // 0x001C (size: 0x4)
    float MinRegionArea;                                                              // 0x0020 (size: 0x4)
    float MergeRegionSize;                                                            // 0x0024 (size: 0x4)
    float MaxSimplificationError;                                                     // 0x0028 (size: 0x4)
    int32 TileNumberHardLimit;                                                        // 0x002C (size: 0x4)
    TEnumAsByte<ERecastPartitioning::Type> RegionPartitioning;                        // 0x0030 (size: 0x1)
    TEnumAsByte<ERecastPartitioning::Type> LayerPartitioning;                         // 0x0031 (size: 0x1)
    int32 RegionChunkSplits;                                                          // 0x0034 (size: 0x4)
    int32 LayerChunkSplits;                                                           // 0x0038 (size: 0x4)
    uint8 bSortNavigationAreasByCost;                                                 // 0x003C (size: 0x1)
    uint8 bPerformVoxelFiltering;                                                     // 0x003C (size: 0x1)
    uint8 bMarkLowHeightAreas;                                                        // 0x003C (size: 0x1)
    uint8 bUseExtraTopCellWhenMarkingAreas;                                           // 0x003C (size: 0x1)
    uint8 bFilterLowSpanSequences;                                                    // 0x003C (size: 0x1)
    uint8 bFilterLowSpanFromTileCache;                                                // 0x003C (size: 0x1)
    uint8 bFixedTilePoolSize;                                                         // 0x003C (size: 0x1)
    uint8 bIsWorldPartitioned;                                                        // 0x003C (size: 0x1)

}; // Size: 0x40

struct FRecastNavMeshTileGenerationDebug
{
    uint8 bEnabled;                                                                   // 0x0000 (size: 0x1)
    FIntVector TileCoordinate;                                                        // 0x0004 (size: 0xC)
    uint8 bHeightfieldSolidFromRasterization;                                         // 0x0010 (size: 0x1)
    uint8 bHeightfieldSolidPostInclusionBoundsFiltering;                              // 0x0010 (size: 0x1)
    uint8 bHeightfieldSolidPostHeightFiltering;                                       // 0x0010 (size: 0x1)
    uint8 bCompactHeightfield;                                                        // 0x0010 (size: 0x1)
    uint8 bCompactHeightfieldEroded;                                                  // 0x0010 (size: 0x1)
    uint8 bCompactHeightfieldRegions;                                                 // 0x0010 (size: 0x1)
    uint8 bCompactHeightfieldDistances;                                               // 0x0010 (size: 0x1)
    uint8 bTileCacheLayerAreas;                                                       // 0x0010 (size: 0x1)
    uint8 bTileCacheLayerRegions;                                                     // 0x0011 (size: 0x1)
    uint8 bTileCacheContours;                                                         // 0x0011 (size: 0x1)
    uint8 bTileCachePolyMesh;                                                         // 0x0011 (size: 0x1)
    uint8 bTileCacheDetailMesh;                                                       // 0x0011 (size: 0x1)

}; // Size: 0x14

struct FSupportedAreaData
{
    FString AreaClassName;                                                            // 0x0000 (size: 0x10)
    int32 AreaID;                                                                     // 0x0010 (size: 0x4)
    UClass* AreaClass;                                                                // 0x0018 (size: 0x8)

}; // Size: 0x20

class AAbstractNavData : public ANavigationData
{
}; // Size: 0x4B8

class ANavMeshBoundsVolume : public AVolume
{
    FNavAgentSelector SupportedAgents;                                                // 0x02C8 (size: 0x4)

}; // Size: 0x2D0

class ANavModifierVolume : public AVolume
{
    TSubclassOf<class UNavArea> AreaClass;                                            // 0x02D0 (size: 0x8)
    bool bMaskFillCollisionUnderneathForNavmesh;                                      // 0x02D8 (size: 0x1)

    void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);
}; // Size: 0x2E0

class ANavSystemConfigOverride : public AActor
{
    class UNavigationSystemConfig* NavigationSystemConfig;                            // 0x0290 (size: 0x8)
    ENavSystemOverridePolicy OverridePolicy;                                          // 0x0298 (size: 0x1)
    uint8 bLoadOnClient;                                                              // 0x0299 (size: 0x1)

}; // Size: 0x2A0

class ANavigationData : public AActor
{
    class UPrimitiveComponent* RenderingComp;                                         // 0x0298 (size: 0x8)
    FNavDataConfig NavDataConfig;                                                     // 0x02A0 (size: 0x98)
    uint8 bEnableDrawing;                                                             // 0x0338 (size: 0x1)
    uint8 bForceRebuildOnLoad;                                                        // 0x0338 (size: 0x1)
    uint8 bAutoDestroyWhenNoNavigation;                                               // 0x0338 (size: 0x1)
    uint8 bCanBeMainNavData;                                                          // 0x0338 (size: 0x1)
    uint8 bCanSpawnOnRebuild;                                                         // 0x0338 (size: 0x1)
    uint8 bRebuildAtRuntime;                                                          // 0x0338 (size: 0x1)
    ERuntimeGenerationType RuntimeGeneration;                                         // 0x033C (size: 0x1)
    float ObservedPathsTickInterval;                                                  // 0x0340 (size: 0x4)
    uint32 DataVersion;                                                               // 0x0344 (size: 0x4)
    TArray<FSupportedAreaData> SupportedAreas;                                        // 0x0450 (size: 0x10)

}; // Size: 0x4B8

class ANavigationGraph : public ANavigationData
{
}; // Size: 0x4B8

class ANavigationGraphNode : public AActor
{
}; // Size: 0x290

class ANavigationTestingActor : public AActor
{
    class UCapsuleComponent* CapsuleComponent;                                        // 0x02A0 (size: 0x8)
    class UNavigationInvokerComponent* InvokerComponent;                              // 0x02A8 (size: 0x8)
    uint8 bActAsNavigationInvoker;                                                    // 0x02B0 (size: 0x1)
    FNavAgentProperties NavAgentProps;                                                // 0x02B8 (size: 0x38)
    FVector QueryingExtent;                                                           // 0x02F0 (size: 0x18)
    class ANavigationData* MyNavData;                                                 // 0x0308 (size: 0x8)
    FVector ProjectedLocation;                                                        // 0x0310 (size: 0x18)
    uint8 bProjectedLocationValid;                                                    // 0x0328 (size: 0x1)
    uint8 bSearchStart;                                                               // 0x0328 (size: 0x1)
    float CostLimitFactor;                                                            // 0x032C (size: 0x4)
    float MinimumCostLimit;                                                           // 0x0330 (size: 0x4)
    uint8 bBacktracking;                                                              // 0x0334 (size: 0x1)
    uint8 bUseHierarchicalPathfinding;                                                // 0x0334 (size: 0x1)
    uint8 bGatherDetailedInfo;                                                        // 0x0334 (size: 0x1)
    uint8 bDrawDistanceToWall;                                                        // 0x0334 (size: 0x1)
    uint8 bShowNodePool;                                                              // 0x0334 (size: 0x1)
    uint8 bShowBestPath;                                                              // 0x0334 (size: 0x1)
    uint8 bShowDiffWithPreviousStep;                                                  // 0x0334 (size: 0x1)
    uint8 bShouldBeVisibleInGame;                                                     // 0x0334 (size: 0x1)
    TEnumAsByte<ENavCostDisplay::Type> CostDisplayMode;                               // 0x0338 (size: 0x1)
    FVector2D TextCanvasOffset;                                                       // 0x0340 (size: 0x10)
    uint8 bPathExist;                                                                 // 0x0350 (size: 0x1)
    uint8 bPathIsPartial;                                                             // 0x0350 (size: 0x1)
    uint8 bPathSearchOutOfNodes;                                                      // 0x0350 (size: 0x1)
    float PathfindingTime;                                                            // 0x0354 (size: 0x4)
    float PathCost;                                                                   // 0x0358 (size: 0x4)
    int32 PathfindingSteps;                                                           // 0x035C (size: 0x4)
    class ANavigationTestingActor* OtherActor;                                        // 0x0360 (size: 0x8)
    TSubclassOf<class UNavigationQueryFilter> FilterClass;                            // 0x0368 (size: 0x8)
    int32 ShowStepIndex;                                                              // 0x0370 (size: 0x4)
    float OffsetFromCornersDistance;                                                  // 0x0374 (size: 0x4)

}; // Size: 0x3B0

class ARecastNavMesh : public ANavigationData
{
    uint8 bDrawTriangleEdges;                                                         // 0x04B8 (size: 0x1)
    uint8 bDrawPolyEdges;                                                             // 0x04B8 (size: 0x1)
    uint8 bDrawFilledPolys;                                                           // 0x04B8 (size: 0x1)
    uint8 bDrawNavMeshEdges;                                                          // 0x04B8 (size: 0x1)
    uint8 bDrawTileBounds;                                                            // 0x04B8 (size: 0x1)
    uint8 bDrawPathCollidingGeometry;                                                 // 0x04B8 (size: 0x1)
    uint8 bDrawTileLabels;                                                            // 0x04B8 (size: 0x1)
    uint8 bDrawPolygonLabels;                                                         // 0x04B8 (size: 0x1)
    uint8 bDrawDefaultPolygonCost;                                                    // 0x04B9 (size: 0x1)
    uint8 bDrawPolygonFlags;                                                          // 0x04B9 (size: 0x1)
    uint8 bDrawLabelsOnPathNodes;                                                     // 0x04B9 (size: 0x1)
    uint8 bDrawNavLinks;                                                              // 0x04B9 (size: 0x1)
    uint8 bDrawFailedNavLinks;                                                        // 0x04B9 (size: 0x1)
    uint8 bDrawClusters;                                                              // 0x04B9 (size: 0x1)
    uint8 bDrawOctree;                                                                // 0x04B9 (size: 0x1)
    uint8 bDrawOctreeDetails;                                                         // 0x04B9 (size: 0x1)
    uint8 bDrawMarkedForbiddenPolys;                                                  // 0x04BA (size: 0x1)
    uint8 bDistinctlyDrawTilesBeingBuilt;                                             // 0x04BA (size: 0x1)
    float DrawOffset;                                                                 // 0x04BC (size: 0x4)
    FRecastNavMeshTileGenerationDebug TileGenerationDebug;                            // 0x04C0 (size: 0x14)
    uint8 bFixedTilePoolSize;                                                         // 0x04D4 (size: 0x1)
    int32 TilePoolSize;                                                               // 0x04D8 (size: 0x4)
    float TileSizeUU;                                                                 // 0x04DC (size: 0x4)
    float CellSize;                                                                   // 0x04E0 (size: 0x4)
    float CellHeight;                                                                 // 0x04E4 (size: 0x4)
    float AgentRadius;                                                                // 0x04E8 (size: 0x4)
    float AgentHeight;                                                                // 0x04EC (size: 0x4)
    float AgentMaxSlope;                                                              // 0x04F0 (size: 0x4)
    float AgentMaxStepHeight;                                                         // 0x04F4 (size: 0x4)
    float MinRegionArea;                                                              // 0x04F8 (size: 0x4)
    float MergeRegionSize;                                                            // 0x04FC (size: 0x4)
    float MaxSimplificationError;                                                     // 0x0500 (size: 0x4)
    int32 MaxSimultaneousTileGenerationJobsCount;                                     // 0x0504 (size: 0x4)
    int32 TileNumberHardLimit;                                                        // 0x0508 (size: 0x4)
    int32 PolyRefTileBits;                                                            // 0x050C (size: 0x4)
    int32 PolyRefNavPolyBits;                                                         // 0x0510 (size: 0x4)
    int32 PolyRefSaltBits;                                                            // 0x0514 (size: 0x4)
    FVector NavMeshOriginOffset;                                                      // 0x0518 (size: 0x18)
    float DefaultDrawDistance;                                                        // 0x0530 (size: 0x4)
    float DefaultMaxSearchNodes;                                                      // 0x0534 (size: 0x4)
    float DefaultMaxHierarchicalSearchNodes;                                          // 0x0538 (size: 0x4)
    TEnumAsByte<ERecastPartitioning::Type> RegionPartitioning;                        // 0x053C (size: 0x1)
    TEnumAsByte<ERecastPartitioning::Type> LayerPartitioning;                         // 0x053D (size: 0x1)
    int32 RegionChunkSplits;                                                          // 0x0540 (size: 0x4)
    int32 LayerChunkSplits;                                                           // 0x0544 (size: 0x4)
    uint8 bSortNavigationAreasByCost;                                                 // 0x0548 (size: 0x1)
    uint8 bIsWorldPartitioned;                                                        // 0x0548 (size: 0x1)
    uint8 bPerformVoxelFiltering;                                                     // 0x0548 (size: 0x1)
    uint8 bMarkLowHeightAreas;                                                        // 0x0548 (size: 0x1)
    uint8 bUseExtraTopCellWhenMarkingAreas;                                           // 0x0548 (size: 0x1)
    uint8 bFilterLowSpanSequences;                                                    // 0x0548 (size: 0x1)
    uint8 bFilterLowSpanFromTileCache;                                                // 0x0548 (size: 0x1)
    uint8 bDoFullyAsyncNavDataGathering;                                              // 0x0548 (size: 0x1)
    uint8 bUseBetterOffsetsFromCorners;                                               // 0x0549 (size: 0x1)
    uint8 bStoreEmptyTileLayers;                                                      // 0x0549 (size: 0x1)
    uint8 bUseVirtualFilters;                                                         // 0x0549 (size: 0x1)
    uint8 bUseVirtualGeometryFilteringAndDirtying;                                    // 0x0549 (size: 0x1)
    uint8 bAllowNavLinkAsPathEnd;                                                     // 0x0549 (size: 0x1)
    int32 TimeSliceFilterLedgeSpansMaxYProcess;                                       // 0x054C (size: 0x4)
    double TimeSliceLongDurationDebug;                                                // 0x0550 (size: 0x8)
    uint8 bUseVoxelCache;                                                             // 0x0558 (size: 0x1)
    float TileSetUpdateInterval;                                                      // 0x055C (size: 0x4)
    float HeuristicScale;                                                             // 0x0560 (size: 0x4)
    float VerticalDeviationFromGroundCompensation;                                    // 0x0564 (size: 0x4)

    bool K2_ReplaceAreaInTileBounds(FBox Bounds, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea, bool ReplaceLinks);
}; // Size: 0x598

class INavLinkCustomInterface : public IInterface
{
}; // Size: 0x28

class INavLinkHostInterface : public IInterface
{
}; // Size: 0x28

class INavNodeInterface : public IInterface
{
}; // Size: 0x28

class INavigationPathGenerator : public IInterface
{
}; // Size: 0x28

class UCrowdManagerBase : public UObject
{
}; // Size: 0x28

class UNavArea : public UNavAreaBase
{
    float DefaultCost;                                                                // 0x0030 (size: 0x4)
    float FixedAreaEnteringCost;                                                      // 0x0034 (size: 0x4)
    FColor DrawColor;                                                                 // 0x0038 (size: 0x4)
    FNavAgentSelector SupportedAgents;                                                // 0x003C (size: 0x4)
    uint8 bSupportsAgent0;                                                            // 0x0040 (size: 0x1)
    uint8 bSupportsAgent1;                                                            // 0x0040 (size: 0x1)
    uint8 bSupportsAgent2;                                                            // 0x0040 (size: 0x1)
    uint8 bSupportsAgent3;                                                            // 0x0040 (size: 0x1)
    uint8 bSupportsAgent4;                                                            // 0x0040 (size: 0x1)
    uint8 bSupportsAgent5;                                                            // 0x0040 (size: 0x1)
    uint8 bSupportsAgent6;                                                            // 0x0040 (size: 0x1)
    uint8 bSupportsAgent7;                                                            // 0x0040 (size: 0x1)
    uint8 bSupportsAgent8;                                                            // 0x0041 (size: 0x1)
    uint8 bSupportsAgent9;                                                            // 0x0041 (size: 0x1)
    uint8 bSupportsAgent10;                                                           // 0x0041 (size: 0x1)
    uint8 bSupportsAgent11;                                                           // 0x0041 (size: 0x1)
    uint8 bSupportsAgent12;                                                           // 0x0041 (size: 0x1)
    uint8 bSupportsAgent13;                                                           // 0x0041 (size: 0x1)
    uint8 bSupportsAgent14;                                                           // 0x0041 (size: 0x1)
    uint8 bSupportsAgent15;                                                           // 0x0041 (size: 0x1)

}; // Size: 0x48

class UNavAreaMeta : public UNavArea
{
}; // Size: 0x48

class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
    TSubclassOf<class UNavArea> Agent0Area;                                           // 0x0048 (size: 0x8)
    TSubclassOf<class UNavArea> Agent1Area;                                           // 0x0050 (size: 0x8)
    TSubclassOf<class UNavArea> Agent2Area;                                           // 0x0058 (size: 0x8)
    TSubclassOf<class UNavArea> Agent3Area;                                           // 0x0060 (size: 0x8)
    TSubclassOf<class UNavArea> Agent4Area;                                           // 0x0068 (size: 0x8)
    TSubclassOf<class UNavArea> Agent5Area;                                           // 0x0070 (size: 0x8)
    TSubclassOf<class UNavArea> Agent6Area;                                           // 0x0078 (size: 0x8)
    TSubclassOf<class UNavArea> Agent7Area;                                           // 0x0080 (size: 0x8)
    TSubclassOf<class UNavArea> Agent8Area;                                           // 0x0088 (size: 0x8)
    TSubclassOf<class UNavArea> Agent9Area;                                           // 0x0090 (size: 0x8)
    TSubclassOf<class UNavArea> Agent10Area;                                          // 0x0098 (size: 0x8)
    TSubclassOf<class UNavArea> Agent11Area;                                          // 0x00A0 (size: 0x8)
    TSubclassOf<class UNavArea> Agent12Area;                                          // 0x00A8 (size: 0x8)
    TSubclassOf<class UNavArea> Agent13Area;                                          // 0x00B0 (size: 0x8)
    TSubclassOf<class UNavArea> Agent14Area;                                          // 0x00B8 (size: 0x8)
    TSubclassOf<class UNavArea> Agent15Area;                                          // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UNavArea_Default : public UNavArea
{
}; // Size: 0x48

class UNavArea_LowHeight : public UNavArea
{
}; // Size: 0x48

class UNavArea_Null : public UNavArea
{
}; // Size: 0x48

class UNavArea_Obstacle : public UNavArea
{
}; // Size: 0x48

class UNavCollision : public UNavCollisionBase
{
    TArray<FNavCollisionCylinder> CylinderCollision;                                  // 0x0080 (size: 0x10)
    TArray<FNavCollisionBox> BoxCollision;                                            // 0x0090 (size: 0x10)
    TSubclassOf<class UNavArea> AreaClass;                                            // 0x00A0 (size: 0x8)
    uint8 bGatherConvexGeometry;                                                      // 0x00A8 (size: 0x1)
    uint8 bCreateOnClient;                                                            // 0x00A8 (size: 0x1)

}; // Size: 0xD0

class UNavLinkComponent : public UPrimitiveComponent
{
    TArray<FNavigationLink> Links;                                                    // 0x0540 (size: 0x10)

}; // Size: 0x550

class UNavLinkCustomComponent : public UNavRelevantComponent
{
    uint32 NavLinkUserId;                                                             // 0x00F8 (size: 0x4)
    TSubclassOf<class UNavArea> EnabledAreaClass;                                     // 0x0100 (size: 0x8)
    TSubclassOf<class UNavArea> DisabledAreaClass;                                    // 0x0108 (size: 0x8)
    FNavAgentSelector SupportedAgents;                                                // 0x0110 (size: 0x4)
    FVector LinkRelativeStart;                                                        // 0x0118 (size: 0x18)
    FVector LinkRelativeEnd;                                                          // 0x0130 (size: 0x18)
    TEnumAsByte<ENavLinkDirection::Type> LinkDirection;                               // 0x0148 (size: 0x1)
    uint8 bLinkEnabled;                                                               // 0x014C (size: 0x1)
    uint8 bNotifyWhenEnabled;                                                         // 0x014C (size: 0x1)
    uint8 bNotifyWhenDisabled;                                                        // 0x014C (size: 0x1)
    uint8 bCreateBoxObstacle;                                                         // 0x014C (size: 0x1)
    FVector ObstacleOffset;                                                           // 0x0150 (size: 0x18)
    FVector ObstacleExtent;                                                           // 0x0168 (size: 0x18)
    TSubclassOf<class UNavArea> ObstacleAreaClass;                                    // 0x0180 (size: 0x8)
    float BroadcastRadius;                                                            // 0x0188 (size: 0x4)
    float BroadcastInterval;                                                          // 0x018C (size: 0x4)
    TEnumAsByte<ECollisionChannel> BroadcastChannel;                                  // 0x0190 (size: 0x1)

}; // Size: 0x1D0

class UNavLinkRenderingComponent : public UPrimitiveComponent
{
}; // Size: 0x540

class UNavLinkTrivial : public UNavLinkDefinition
{
}; // Size: 0x50

class UNavMeshRenderingComponent : public UDebugDrawComponent
{
}; // Size: 0x5A0

class UNavModifierComponent : public UNavRelevantComponent
{
    TSubclassOf<class UNavArea> AreaClass;                                            // 0x00F0 (size: 0x8)
    FVector FailsafeExtent;                                                           // 0x00F8 (size: 0x18)
    uint8 bIncludeAgentHeight;                                                        // 0x0110 (size: 0x1)

    void SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass);
}; // Size: 0x190

class UNavRelevantComponent : public UActorComponent
{
    uint8 bAttachToOwnersRoot;                                                        // 0x00E0 (size: 0x1)
    class UObject* CachedNavParent;                                                   // 0x00E8 (size: 0x8)

    void SetNavigationRelevancy(bool bRelevant);
}; // Size: 0xF0

class UNavTestRenderingComponent : public UDebugDrawComponent
{
}; // Size: 0x590

class UNavigationGraphNodeComponent : public USceneComponent
{
    FNavGraphNode Node;                                                               // 0x02A0 (size: 0x18)
    class UNavigationGraphNodeComponent* NextNodeComponent;                           // 0x02B8 (size: 0x8)
    class UNavigationGraphNodeComponent* PrevNodeComponent;                           // 0x02C0 (size: 0x8)

}; // Size: 0x2D0

class UNavigationInvokerComponent : public UActorComponent
{
    float TileGenerationRadius;                                                       // 0x00A0 (size: 0x4)
    float TileRemovalRadius;                                                          // 0x00A4 (size: 0x4)

}; // Size: 0xA8

class UNavigationPath : public UObject
{
    FNavigationPathPathUpdatedNotifier PathUpdatedNotifier;                           // 0x0028 (size: 0x10)
    void OnNavigationPathUpdated(class UNavigationPath* AffectedPath, TEnumAsByte<ENavPathEvent::Type> PathEvent);
    TArray<FVector> PathPoints;                                                       // 0x0038 (size: 0x10)
    TEnumAsByte<ENavigationOptionFlag::Type> RecalculateOnInvalidation;               // 0x0048 (size: 0x1)

    bool IsValid();
    bool IsStringPulled();
    bool IsPartial();
    float GetPathLength();
    float GetPathCost();
    FString GetDebugString();
    void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation);
    void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);
}; // Size: 0x88

class UNavigationQueryFilter : public UObject
{
    TArray<FNavigationFilterArea> Areas;                                              // 0x0028 (size: 0x10)
    FNavigationFilterFlags IncludeFlags;                                              // 0x0038 (size: 0x4)
    FNavigationFilterFlags ExcludeFlags;                                              // 0x003C (size: 0x4)

}; // Size: 0x48

class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
    uint8 bStrictlyStatic;                                                            // 0x0058 (size: 0x1)
    uint8 bCreateOnClient;                                                            // 0x0058 (size: 0x1)
    uint8 bAutoSpawnMissingNavData;                                                   // 0x0058 (size: 0x1)
    uint8 bSpawnNavDataInNavBoundsLevel;                                              // 0x0058 (size: 0x1)

}; // Size: 0x60

class UNavigationSystemV1 : public UNavigationSystemBase
{
    class ANavigationData* MainNavData;                                               // 0x0028 (size: 0x8)
    class ANavigationData* AbstractNavData;                                           // 0x0030 (size: 0x8)
    FName DefaultAgentName;                                                           // 0x0038 (size: 0x8)
    TSoftClassPtr<UCrowdManagerBase> CrowdManagerClass;                               // 0x0040 (size: 0x30)
    uint8 bAutoCreateNavigationData;                                                  // 0x0070 (size: 0x1)
    uint8 bSpawnNavDataInNavBoundsLevel;                                              // 0x0070 (size: 0x1)
    uint8 bAllowClientSideNavigation;                                                 // 0x0070 (size: 0x1)
    uint8 bShouldDiscardSubLevelNavData;                                              // 0x0070 (size: 0x1)
    uint8 bTickWhilePaused;                                                           // 0x0070 (size: 0x1)
    uint8 bSupportRebuilding;                                                         // 0x0070 (size: 0x1)
    uint8 bInitialBuildingLocked;                                                     // 0x0070 (size: 0x1)
    uint8 bSkipAgentHeightCheckWhenPickingNavData;                                    // 0x0071 (size: 0x1)
    int32 GeometryExportVertexCountWarningThreshold;                                  // 0x0074 (size: 0x4)
    uint8 bGenerateNavigationOnlyAroundNavigationInvokers;                            // 0x0078 (size: 0x1)
    float ActiveTilesUpdateInterval;                                                  // 0x007C (size: 0x4)
    ENavDataGatheringModeConfig DataGatheringMode;                                    // 0x0080 (size: 0x1)
    float DirtyAreaWarningSizeThreshold;                                              // 0x0084 (size: 0x4)
    float GatheringNavModifiersWarningLimitTime;                                      // 0x0088 (size: 0x4)
    TArray<FNavDataConfig> SupportedAgents;                                           // 0x0090 (size: 0x10)
    FNavAgentSelector SupportedAgentsMask;                                            // 0x00A0 (size: 0x4)
    FBox BuildBounds;                                                                 // 0x00A8 (size: 0x38)
    TArray<class ANavigationData*> NavDataSet;                                        // 0x00E0 (size: 0x10)
    TArray<class ANavigationData*> NavDataRegistrationQueue;                          // 0x00F0 (size: 0x10)
    FNavigationSystemV1OnNavDataRegisteredEvent OnNavDataRegisteredEvent;             // 0x0110 (size: 0x10)
    void OnNavDataGenericEvent(class ANavigationData* NavData);
    FNavigationSystemV1OnNavigationGenerationFinishedDelegate OnNavigationGenerationFinishedDelegate; // 0x0120 (size: 0x10)
    void OnNavDataGenericEvent(class ANavigationData* NavData);
    FNavigationSystemRunMode OperationMode;                                           // 0x020C (size: 0x1)

    void UnregisterNavigationInvoker(class AActor* Invoker);
    void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);
    void SetGeometryGatheringMode(ENavDataGatheringModeConfig newMode);
    void ResetMaxSimultaneousTileGenerationJobsCount();
    void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
    void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
    bool NavigationRaycast(class UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<class UNavigationQueryFilter> FilterClass, class AController* Querier);
    bool K2_ReplaceAreaInOctreeData(const class UObject* Object, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea);
    bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const FVector QueryExtent);
    bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
    bool IsNavigationBeingBuilt(class UObject* WorldContextObject);
    TEnumAsByte<ENavigationQueryResult::Type> GetPathLength(class UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathLength, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    TEnumAsByte<ENavigationQueryResult::Type> GetPathCost(class UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathCost, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);
    class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
    class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, const FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass);
}; // Size: 0x1530

class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
}; // Size: 0x48

class URecastNavMeshDataChunk : public UNavigationDataChunk
{
}; // Size: 0x40

#endif