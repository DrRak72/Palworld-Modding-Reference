#ifndef UE4SS_SDK_BP_ActionDragonMeteor_HPP
#define UE4SS_SDK_BP_ActionDragonMeteor_HPP

class UBP_ActionDragonMeteor_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    int32 NumberOfEffects;                                                            // 0x02C0 (size: 0x4)
    int32 NumberOfSet;                                                                // 0x02C4 (size: 0x4)
    int32 counter;                                                                    // 0x02C8 (size: 0x4)
    int32 SetCounter;                                                                 // 0x02CC (size: 0x4)
    float Interval;                                                                   // 0x02D0 (size: 0x4)
    TArray<class APalSkillEffectBase*> MeteorEffects;                                 // 0x02D8 (size: 0x10)
    double Degree;                                                                    // 0x02E8 (size: 0x8)
    double Height;                                                                    // 0x02F0 (size: 0x8)

    void SetBulletVelocity_ForRide(class AActor* SkillActor);
    void CalcMeteorLocation(FVector& Location);
    void GetVelocityByControlRot(class APalSkillEffectBase* Effect, FVector& Velocity);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void ShootMeteor(const TArray<class APalSkillEffectBase*>& NewParam);
    void ExecuteUbergraph_BP_ActionDragonMeteor(int32 EntryPoint);
}; // Size: 0x2F8

#endif
