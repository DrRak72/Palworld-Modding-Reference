#ifndef UE4SS_SDK_BP_SkillEffect_RockLance_HPP
#define UE4SS_SDK_BP_SkillEffect_RockLance_HPP

class ABP_SkillEffect_RockLance_C : public ABP_BulletRain_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)

    void SpawnBullet(int32 Count);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SkillEffect_RockLance(int32 EntryPoint);
}; // Size: 0x418

#endif
