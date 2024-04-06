#ifndef UE4SS_SDK_BP_LilyQueen_GYM_HPP
#define UE4SS_SDK_BP_LilyQueen_GYM_HPP

class ABP_LilyQueen_GYM_C : public ABP_LilyQueen_C
{
    class UPalSkeletalMeshComponent* PalSkeletalMesh;                                 // 0x0A28 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule3;                        // 0x0A30 (size: 0x8)
    class UBP_PalBossNPCMarker_C* BP_PalBossNPCMarker;                                // 0x0A38 (size: 0x8)

    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
}; // Size: 0xA40

#endif
