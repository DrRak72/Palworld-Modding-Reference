#ifndef UE4SS_SDK_BP_RightHandChildArrow_HPP
#define UE4SS_SDK_BP_RightHandChildArrow_HPP

class ABP_RightHandChildArrow_C : public AActor
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0290 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)

    void Get Effect Transform(FTransform& TF);
}; // Size: 0x2A0

#endif
