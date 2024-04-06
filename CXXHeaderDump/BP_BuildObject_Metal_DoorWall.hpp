#ifndef UE4SS_SDK_BP_BuildObject_Metal_DoorWall_HPP
#define UE4SS_SDK_BP_BuildObject_Metal_DoorWall_HPP

class ABP_BuildObject_Metal_DoorWall_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UBoxComponent* AffectNavigationBox;                                         // 0x0588 (size: 0x8)
    class UBoxComponent* FrameCollision_01;                                           // 0x0590 (size: 0x8)
    class UBoxComponent* FrameCollision_02;                                           // 0x0598 (size: 0x8)
    class USceneComponent* FrameCollision;                                            // 0x05A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A8 (size: 0x8)
    class UBoxComponent* DoorCollision;                                               // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* SM_Door_Iron;                                         // 0x05B8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* SM_Doorbase_Iron;                                     // 0x05C8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05D0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05D8 (size: 0x8)
    float _______RotateDoor_4557F4194515B75E3534E3B61015D8F5;                         // 0x05E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ________Direction_4557F4194515B75E3534E3B61015D8F5; // 0x05E4 (size: 0x1)
    class UTimelineComponent* タイムライン;                                           // 0x05E8 (size: 0x8)

    void SetRotateDoor(class UStaticMeshComponent* Mesh, double RotateAngle);
    void OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module);
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OpenDoorAnimation();
    void CloseDoorAnimation();
    void ExecuteUbergraph_BP_BuildObject_Metal_DoorWall(int32 EntryPoint);
}; // Size: 0x5F0

#endif
