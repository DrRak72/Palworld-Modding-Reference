#ifndef UE4SS_SDK_BP_DungeonFixedEntrance_HPP
#define UE4SS_SDK_BP_DungeonFixedEntrance_HPP

class ABP_DungeonFixedEntrance_C : public APalDungeonFixedEntrance
{
    class UArrowComponent* DeadItemDropPoint;                                         // 0x0320 (size: 0x8)
    class USceneComponent* IndicatorOrigin;                                           // 0x0328 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x0330 (size: 0x8)
    class UArrowComponent* WarpPoint;                                                 // 0x0338 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0340 (size: 0x8)

    void GetInteractWidget(class UPalUserWidget*& createdWidget);
    FTransform GetDeadItemDropPoint();
    FTransform GetWarpPoint();
}; // Size: 0x348

#endif
