#ifndef UE4SS_SDK_BP_Torch_HPP
#define UE4SS_SDK_BP_Torch_HPP

class ABP_Torch_C : public ABP_MeleeWeaponBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0548 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0550 (size: 0x8)
    class UNiagaraComponent* NS_TorchFire;                                            // 0x0558 (size: 0x8)
    FName HeatName;                                                                   // 0x0560 (size: 0x8)

    int32 GetWeaponEffectValue();
    EPalAdditionalEffectType GetWeaponEffectType();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnAttachWeapon(class AActor* attachActor);
    void OnDetachWeapon(class AActor* detachActor);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_Torch(int32 EntryPoint);
}; // Size: 0x568

#endif
