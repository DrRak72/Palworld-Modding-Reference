#ifndef UE4SS_SDK_BP_BuildObject_Stone_Gate_HPP
#define UE4SS_SDK_BP_BuildObject_Stone_Gate_HPP

class ABP_BuildObject_Stone_Gate_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UBoxComponent* AffectNavigationBox;                                         // 0x0588 (size: 0x8)
    class UStaticMeshComponent* SM_Gate_Base_Wood;                                    // 0x0590 (size: 0x8)
    class UStaticMeshComponent* SM_Wall_Door1;                                        // 0x0598 (size: 0x8)
    class UBoxComponent* VirtualMeshCollision;                                        // 0x05A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* SM_Wall_Door;                                         // 0x05B8 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x05C0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05C8 (size: 0x8)
    float _______RotateDoor_A5A1C09248613C99C04ACD94EF87559C;                         // 0x05D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ________Direction_A5A1C09248613C99C04ACD94EF87559C; // 0x05D4 (size: 0x1)
    class UTimelineComponent* タイムライン;                                           // 0x05D8 (size: 0x8)

    void SetRotateDoor(class UStaticMeshComponent* Mesh, double RotateAngle);
    void OnUpdateSwitchState(class UPalMapObjectSwitchModule* Module);
    void OnReadySwitchModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module);
    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
    void OpenDoorAnimation();
    void CloseDoorAnimation();
    void ExecuteUbergraph_BP_BuildObject_Stone_Gate(int32 EntryPoint);
}; // Size: 0x5E0

#endif
