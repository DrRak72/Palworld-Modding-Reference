#ifndef UE4SS_SDK_BP_MapObject_PickupItem_Base_HPP
#define UE4SS_SDK_BP_MapObject_PickupItem_Base_HPP

class ABP_MapObject_PickupItem_Base_C : public APalMapLevelObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x03D0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_PickupItem_Base(int32 EntryPoint);
}; // Size: 0x3E0

#endif
