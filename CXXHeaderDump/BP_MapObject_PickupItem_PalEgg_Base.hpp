#ifndef UE4SS_SDK_BP_MapObject_PickupItem_PalEgg_Base_HPP
#define UE4SS_SDK_BP_MapObject_PickupItem_PalEgg_Base_HPP

class ABP_MapObject_PickupItem_PalEgg_Base_C : public APalMapObjectPalEgg
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* SM_basket;                                            // 0x03C8 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x03D0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D8 (size: 0x8)
    class USkeletalMeshComponent* SK_Kurinuki_EggA;                                   // 0x03E0 (size: 0x8)
    double Scale;                                                                     // 0x03E8 (size: 0x8)

    void OnRep_Scale();
    void GetPalEggScale(int32 PalRarity, double& PalEggScale);
    void SetupPalEggScale();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base(int32 EntryPoint);
}; // Size: 0x3F0

#endif
