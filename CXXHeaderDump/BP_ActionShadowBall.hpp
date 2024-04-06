#ifndef UE4SS_SDK_BP_ActionShadowBall_HPP
#define UE4SS_SDK_BP_ActionShadowBall_HPP

class UBP_ActionShadowBall_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    bool IsSpawned;                                                                   // 0x02C0 (size: 0x1)
    double ElapsedTime;                                                               // 0x02C8 (size: 0x8)
    class APalSkillEffectBase* Effect_0;                                              // 0x02D0 (size: 0x8)
    FVector BallEffectSize;                                                           // 0x02D8 (size: 0x18)
    bool EnableChangeEffectSizeByBP;                                                  // 0x02F0 (size: 0x1)
    double BallEffectScale;                                                           // 0x02F8 (size: 0x8)
    double BulletSpeed_0;                                                             // 0x0300 (size: 0x8)

    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void TickAction(float DeltaTime);
    void OnStartProcessAnimation();
    void Shoot();
    void OnBeginAction();
    void ExecuteUbergraph_BP_ActionShadowBall(int32 EntryPoint);
}; // Size: 0x308

#endif
