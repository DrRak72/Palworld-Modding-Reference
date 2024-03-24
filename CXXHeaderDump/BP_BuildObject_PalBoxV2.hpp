#ifndef UE4SS_SDK_BP_BuildObject_PalBoxV2_HPP
#define UE4SS_SDK_BP_BuildObject_PalBoxV2_HPP

class ABP_BuildObject_PalBoxV2_C : public APalBuildObjectBaseCampPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource4;    // 0x0588 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource3;    // 0x0590 (size: 0x8)
    class UBoxComponent* CannotOverlapArea;                                           // 0x0598 (size: 0x8)
    class UStaticMeshComponent* AreaRange1;                                           // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* AreaRange;                                            // 0x05A8 (size: 0x8)
    class UPalNavigationInvokerComponent* PalNavigationInvoker;                       // 0x05B0 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource2;    // 0x05B8 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource1;    // 0x05C0 (size: 0x8)
    class UPalLimitVolumeBoxComponent* PalLimitVolumeBox;                             // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* PalSphereLight;                                       // 0x05D0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* space;                                                // 0x05E0 (size: 0x8)
    class UArrowComponent* WorkerSpawnPoint;                                          // 0x05E8 (size: 0x8)
    class UArrowComponent* FastTravelPoint;                                           // 0x05F0 (size: 0x8)
    class UBP_InteractableCapsule_C* BP_PalBoxInteractableCapsule;                    // 0x05F8 (size: 0x8)
    class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSource;     // 0x0600 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0608 (size: 0x8)
    class UStaticMeshComponent* PCStaticMesh;                                         // 0x0610 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0618 (size: 0x8)

    void OnAvailable_BlueprintImpl();
    FTransform GetWorkerSpawnLocalTransform();
    FTransform GetFastTravelLocalTransform();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildObject_PalBoxV2(int32 EntryPoint);
}; // Size: 0x620

#endif
