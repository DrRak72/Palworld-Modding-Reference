#ifndef UE4SS_SDK_BP_ThunderStrikeBase_HPP
#define UE4SS_SDK_BP_ThunderStrikeBase_HPP

class ABP_ThunderStrikeBase_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Main;                                                    // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Omen;                                                    // 0x03D0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x03D8 (size: 0x8)
    double ShootInterval;                                                             // 0x03E0 (size: 0x8)
    double CollisitionEnableTime;                                                     // 0x03E8 (size: 0x8)
    class UMaterialInterface* Decal Material;                                         // 0x03F0 (size: 0x8)
    FVector DecalLocationOffset;                                                      // 0x03F8 (size: 0x18)
    double ThunderScale;                                                              // 0x0410 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> CameraShakeClass;                             // 0x0418 (size: 0x8)
    float ThunderStrikeDelay;                                                         // 0x0420 (size: 0x4)

    void SetThuderSize();
    void ReceiveBeginPlay();
    void ActivateOmen();
    void ShootThunder();
    void DisableCollision();
    void OnHitDelegate_01(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void BndEvt__BP_ThunderStrikeBase_NS_Thunder01_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
    void ActivateThunder();
    void ExecuteUbergraph_BP_ThunderStrikeBase(int32 EntryPoint);
}; // Size: 0x424

#endif
