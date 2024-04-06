#ifndef UE4SS_SDK_BP_BuildObject_TorchStand_HPP
#define UE4SS_SDK_BP_BuildObject_TorchStand_HPP

class ABP_BuildObject_TorchStand_C : public ABP_BuildObject_Torch_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0598 (size: 0x8)
    class UNiagaraComponent* NS_TorchFire;                                            // 0x05A0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x05B0 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05B8 (size: 0x8)
    class UStaticMeshComponent* SM_TorchStand;                                        // 0x05C0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05C8 (size: 0x8)

    void SetActiveLight(bool bActive);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BuildObject_TorchStand(int32 EntryPoint);
}; // Size: 0x5D0

#endif
