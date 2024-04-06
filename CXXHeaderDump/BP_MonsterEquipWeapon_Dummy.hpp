#ifndef UE4SS_SDK_BP_MonsterEquipWeapon_Dummy_HPP
#define UE4SS_SDK_BP_MonsterEquipWeapon_Dummy_HPP

class ABP_MonsterEquipWeapon_Dummy_C : public ABP_MonsterEquipWeapon_RapidBase_C
{

    void GetShootInterval_MEWR(double& Time);
    class UNiagaraSystem* GetMuzzleEffect();
    TSubclassOf<class APalBullet> GetBulletClass();
}; // Size: 0x571

#endif
