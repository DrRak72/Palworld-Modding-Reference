#ifndef UE4SS_SDK_BP_SkillEffect_GhostFlame_HPP
#define UE4SS_SDK_BP_SkillEffect_GhostFlame_HPP

class ABP_SkillEffect_GhostFlame_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    int32 Shoot_volume;                                                               // 0x03C8 (size: 0x4)
    double Shoot_extent;                                                              // 0x03D0 (size: 0x8)
    double ShootInterval;                                                             // 0x03D8 (size: 0x8)
    double Temp time;                                                                 // 0x03E0 (size: 0x8)
    int32 Shoot_Count;                                                                // 0x03E8 (size: 0x4)
    double ShootDegree;                                                               // 0x03F0 (size: 0x8)
    double ShootHeight;                                                               // 0x03F8 (size: 0x8)

    void Explosion();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_GhostFlame(int32 EntryPoint);
}; // Size: 0x400

#endif
