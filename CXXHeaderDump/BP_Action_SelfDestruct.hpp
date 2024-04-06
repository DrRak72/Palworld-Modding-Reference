#ifndef UE4SS_SDK_BP_Action_SelfDestruct_HPP
#define UE4SS_SDK_BP_Action_SelfDestruct_HPP

class UBP_Action_SelfDestruct_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    double SpeedMultiplier;                                                           // 0x0158 (size: 0x8)
    double YawMultiply;                                                               // 0x0160 (size: 0x8)
    double HomingRate;                                                                // 0x0168 (size: 0x8)
    double ExplosionDistanceThreshold;                                                // 0x0170 (size: 0x8)
    FName flagName;                                                                   // 0x0178 (size: 0x8)
    bool StartExplosion;                                                              // 0x0180 (size: 0x1)
    bool HasLaunch;                                                                   // 0x0181 (size: 0x1)
    FFixedPoint64 New HP;                                                             // 0x0188 (size: 0x8)
    FVector BlowVelocity;                                                             // 0x0190 (size: 0x18)
    float DefaultEmissiveDuration;                                                    // 0x01A8 (size: 0x4)
    float DefaultNoEmissiveDuration;                                                  // 0x01AC (size: 0x4)
    float MinEmissiveDuration;                                                        // 0x01B0 (size: 0x4)
    float DecayRateOfEmissiveTime;                                                    // 0x01B4 (size: 0x4)
    class UPalVisualEffectBase* VisualEffect;                                         // 0x01B8 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x01C0 (size: 0x8)

    void MakeVisualEffectParameter(FPalVisualEffectDynamicParameter& PalVisualEffectDynamicParameter);
    void BlowAndKillSelf();
    void UpdateVelocity();
    void UpdateYaw();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_SelfDestruct(int32 EntryPoint);
}; // Size: 0x1C8

#endif
