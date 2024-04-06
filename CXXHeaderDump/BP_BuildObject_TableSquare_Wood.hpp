#ifndef UE4SS_SDK_BP_BuildObject_TableSquare_Wood_HPP
#define UE4SS_SDK_BP_BuildObject_TableSquare_Wood_HPP

class ABP_BuildObject_TableSquare_Wood_C : public APalBuildObject
{
    class UStaticMeshComponent* SM_HamSet;                                            // 0x0580 (size: 0x8)
    class UStaticMeshComponent* SM_BlackBreadSet;                                     // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_CheeseSet;                                         // 0x0590 (size: 0x8)
    class UStaticMeshComponent* SM_CakeSet;                                           // 0x0598 (size: 0x8)
    class UStaticMeshComponent* SM_SausageSet;                                        // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* SM_Rectangular_Table;                                 // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* SM_Rectangular_Table_onProp;                          // 0x05B0 (size: 0x8)
    class USceneComponent* Meshes;                                                    // 0x05B8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05C0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05C8 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x05D8 (size: 0x8)

}; // Size: 0x5E0

#endif
