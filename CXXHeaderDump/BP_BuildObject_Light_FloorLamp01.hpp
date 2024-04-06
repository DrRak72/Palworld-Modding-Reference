#ifndef UE4SS_SDK_BP_BuildObject_Light_FloorLamp01_HPP
#define UE4SS_SDK_BP_BuildObject_Light_FloorLamp01_HPP

class ABP_BuildObject_Light_FloorLamp01_C : public ABP_BuildObject_Lamp_Base_C
{
    class UStaticMeshComponent* SM_FloorLamp;                                         // 0x0590 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0598 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x05A8 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05B0 (size: 0x8)

    void SetActiveLight(bool bActive);
}; // Size: 0x5B8

#endif