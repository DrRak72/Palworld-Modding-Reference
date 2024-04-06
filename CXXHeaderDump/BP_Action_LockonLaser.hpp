#ifndef UE4SS_SDK_BP_Action_LockonLaser_HPP
#define UE4SS_SDK_BP_Action_LockonLaser_HPP

class UBP_Action_LockonLaser_C : public UBP_ActionGeneralAttackFarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)

    void OnBeginAction();
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void LockPalRotate(bool IsLock);
    void ExecuteUbergraph_BP_Action_LockonLaser(int32 EntryPoint);
}; // Size: 0x2C0

#endif
