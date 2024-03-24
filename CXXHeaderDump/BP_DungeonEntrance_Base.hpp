#ifndef UE4SS_SDK_BP_DungeonEntrance_Base_HPP
#define UE4SS_SDK_BP_DungeonEntrance_Base_HPP

class ABP_DungeonEntrance_Base_C : public APalDungeonEntrance
{
    class UStaticMeshComponent* SM_Pal_DungeonPortalMarker;                           // 0x02A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x02A8 (size: 0x8)
    class USceneComponent* WarpPoint;                                                 // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)

    void GetInteractWidget(class UPalUserWidget*& createdWidget);
    FTransform GetWarpPoint();
}; // Size: 0x2C0

#endif
