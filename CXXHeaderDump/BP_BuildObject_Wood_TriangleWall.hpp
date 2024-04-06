#ifndef UE4SS_SDK_BP_BuildObject_Wood_TriangleWall_HPP
#define UE4SS_SDK_BP_BuildObject_Wood_TriangleWall_HPP

class ABP_BuildObject_Wood_TriangleWall_C : public APalBuildObject
{
    class UBoxComponent* AffectNavigationBox;                                         // 0x0580 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_Wall_Wood;                                         // 0x0590 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0598 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05A0 (size: 0x8)

}; // Size: 0x5A8

#endif
