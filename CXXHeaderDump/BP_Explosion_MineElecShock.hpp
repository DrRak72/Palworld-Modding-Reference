#ifndef UE4SS_SDK_BP_Explosion_MineElecShock_HPP
#define UE4SS_SDK_BP_Explosion_MineElecShock_HPP

class ABP_Explosion_MineElecShock_C : public ABP_Explosion_Mine_Base_C
{
    class UNiagaraComponent* ElectricBomb;                                            // 0x02D8 (size: 0x8)

    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
}; // Size: 0x2E0

#endif
