#ifndef UE4SS_SDK_BP_SkillEffect_Unique_BlackGriffon_Tackle_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_BlackGriffon_Tackle_HPP

class ABP_SkillEffect_Unique_BlackGriffon_Tackle_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* TargetSensor;                                             // 0x03C8 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect;                                           // 0x03D0 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> Object Types;                               // 0x03D8 (size: 0x10)
    FVector LastPlausibleTarget;                                                      // 0x03E8 (size: 0x18)
    FBP_SkillEffect_Unique_BlackGriffon_Tackle_CSetLastPlausibleTarget SetLastPlausibleTarget; // 0x0400 (size: 0x10)
    void SetLastPlausibleTarget(FVector Target);

    void SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp);
    void GetNearestTargetLocation(FVector& NearestTargetLocation, bool& PlausibleTarget);
    void ReceiveTick(float DeltaSeconds);
    void FadeOutEffect(double DeltaSecond);
    void SetHoldTime(double HoldTime);
    void LaunchLaser();
    void ReceiveBeginPlay();
    void SetPlausibleTarget(FVector NewParam);
    void ExecuteUbergraph_BP_SkillEffect_Unique_BlackGriffon_Tackle(int32 EntryPoint);
    void SetLastPlausibleTarget__DelegateSignature(FVector Target);
}; // Size: 0x410

#endif
