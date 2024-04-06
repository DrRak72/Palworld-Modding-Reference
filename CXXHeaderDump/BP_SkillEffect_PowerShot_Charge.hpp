#ifndef UE4SS_SDK_BP_SkillEffect_PowerShot_Charge_HPP
#define UE4SS_SDK_BP_SkillEffect_PowerShot_Charge_HPP

class ABP_SkillEffect_PowerShot_Charge_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UNiagaraComponent* Charge;                                                  // 0x03C8 (size: 0x8)
    double HomingOffDistance;                                                         // 0x03D0 (size: 0x8)
    bool IsHoming;                                                                    // 0x03D8 (size: 0x1)

    void ShootBullet(FVector TargetLocation);
    void CancelShoot();
    void ReceiveBeginPlay();
    void FadeOutEffect(double DeltaSecond);
    void ExecuteUbergraph_BP_SkillEffect_PowerShot_Charge(int32 EntryPoint);
}; // Size: 0x3D9

#endif
