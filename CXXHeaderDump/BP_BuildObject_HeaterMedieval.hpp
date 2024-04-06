#ifndef UE4SS_SDK_BP_BuildObject_HeaterMedieval_HPP
#define UE4SS_SDK_BP_BuildObject_HeaterMedieval_HPP

class ABP_BuildObject_HeaterMedieval_C : public ABP_BuildObject_SwitchHeatSource_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0598 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05A0 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x05A8 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05B0 (size: 0x8)
    class UStaticMeshComponent* SM_HeaterMedieval;                                    // 0x05B8 (size: 0x8)
    class UNiagaraComponent* NS_StableFire_HeaterMedieval;                            // 0x05C0 (size: 0x8)

    void SetActive_Internal(bool bOn);
    void ReceiveBeginPlay();
    void OnAvailable_BlueprintImpl();
    void ExecuteUbergraph_BP_BuildObject_HeaterMedieval(int32 EntryPoint);
}; // Size: 0x5C8

#endif
