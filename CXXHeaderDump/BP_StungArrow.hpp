#ifndef UE4SS_SDK_BP_StungArrow_HPP
#define UE4SS_SDK_BP_StungArrow_HPP

class ABP_StungArrow_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    class USkeletalMeshComponent* AttachMesh;                                         // 0x02A8 (size: 0x8)

    void Set Attach Mesh(class USkeletalMeshComponent* AttachMeshComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_StungArrow(int32 EntryPoint);
}; // Size: 0x2B0

#endif
