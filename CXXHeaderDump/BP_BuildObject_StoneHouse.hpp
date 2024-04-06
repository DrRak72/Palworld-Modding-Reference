#ifndef UE4SS_SDK_BP_BuildObject_StoneHouse_HPP
#define UE4SS_SDK_BP_BuildObject_StoneHouse_HPP

class ABP_BuildObject_StoneHouse_C : public APalBuildObject
{
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0580 (size: 0x8)
    class UStaticMeshComponent* SM_wall_bottom_02;                                    // 0x0588 (size: 0x8)
    class UBoxComponent* VirtualMeshCollision;                                        // 0x0590 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0598 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* SM_Floor_02;                                          // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* SM_Floor_01;                                          // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* SM_Stair_01;                                          // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* SM_Brick_Column_010;                                  // 0x05C8 (size: 0x8)
    class UStaticMeshComponent* SM_Brick_Column_09;                                   // 0x05D0 (size: 0x8)
    class UStaticMeshComponent* SM_Brick_Column_08;                                   // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* SM_Brick_Column_07;                                   // 0x05E0 (size: 0x8)
    class UStaticMeshComponent* SM_Roof_12m_04;                                       // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* SM_Roof_12m_03;                                       // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* SM_wall_bottom_01;                                    // 0x05F8 (size: 0x8)
    class UStaticMeshComponent* SM_wall_bottom_side_02;                               // 0x0600 (size: 0x8)
    class UStaticMeshComponent* SM_wall_bottom_side_01;                               // 0x0608 (size: 0x8)
    class USceneComponent* SharedRoot;                                                // 0x0610 (size: 0x8)

}; // Size: 0x618

#endif
