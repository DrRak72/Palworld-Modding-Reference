#ifndef UE4SS_SDK_BP_Skill_ThunderFunnel_Funnel_HPP
#define UE4SS_SDK_BP_Skill_ThunderFunnel_Funnel_HPP

class ABP_Skill_ThunderFunnel_Funnel_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class USphereComponent* TargetSensor;                                             // 0x03C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D0 (size: 0x8)
    class UNiagaraComponent* ThunderFunnel;                                           // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* Funnel;                                               // 0x03E0 (size: 0x8)
    double MaxLeng;                                                                   // 0x03E8 (size: 0x8)
    double FunnelSpeed;                                                               // 0x03F0 (size: 0x8)
    double ShotSpan;                                                                  // 0x03F8 (size: 0x8)
    double TempTime;                                                                  // 0x0400 (size: 0x8)
    FVector PosOffset;                                                                // 0x0408 (size: 0x18)
    double EasePos;                                                                   // 0x0420 (size: 0x8)
    double EaseRot;                                                                   // 0x0428 (size: 0x8)
    bool DelayFlg;                                                                    // 0x0430 (size: 0x1)
    double DelayTime;                                                                 // 0x0438 (size: 0x8)
    class AActor* Target;                                                             // 0x0440 (size: 0x8)
    FRotator DefaultRot;                                                              // 0x0448 (size: 0x18)
    FVector DefaultPos;                                                               // 0x0460 (size: 0x18)
    bool OnRide;                                                                      // 0x0478 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> Object Types;                               // 0x0480 (size: 0x10)

    void GetNearestTargetLocation(FVector& NearestTargetLocation);
    void EasePosFunnel();
    void EaseRotFunnel();
    void SetBulletRotat();
    void SpawnBullet();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnInitialize();
    void ExecuteUbergraph_BP_Skill_ThunderFunnel_Funnel(int32 EntryPoint);
}; // Size: 0x490

#endif
