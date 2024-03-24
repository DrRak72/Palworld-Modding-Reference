#ifndef UE4SS_SDK_BP_ActionAirCanon_HPP
#define UE4SS_SDK_BP_ActionAirCanon_HPP

class UBP_ActionAirCanon_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    bool IsShooted;                                                                   // 0x02C0 (size: 0x1)

    void SetBulletSpeed(class APalSkillEffectBase*& Effect);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void ExecuteUbergraph_BP_ActionAirCanon(int32 EntryPoint);
}; // Size: 0x2C1

#endif
