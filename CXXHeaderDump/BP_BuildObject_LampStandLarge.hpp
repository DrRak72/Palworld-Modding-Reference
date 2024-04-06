#ifndef UE4SS_SDK_BP_BuildObject_LampStandLarge_HPP
#define UE4SS_SDK_BP_BuildObject_LampStandLarge_HPP

class ABP_BuildObject_LampStandLarge_C : public ABP_BuildObject_Lamp_Base_C
{
    class UBoxComponent* CheckOverlapCollision;                                       // 0x0590 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x0598 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x05A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* SM_TorchStand;                                        // 0x05B0 (size: 0x8)

    void SetActiveLight(bool bActive);
}; // Size: 0x5B8

#endif
