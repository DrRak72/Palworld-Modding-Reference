#ifndef UE4SS_SDK_BP_Explosion_MineFreeze_HPP
#define UE4SS_SDK_BP_Explosion_MineFreeze_HPP

class ABP_Explosion_MineFreeze_C : public ABP_Explosion_Mine_Base_C
{
    class UNiagaraComponent* NS_IceMissileMuzzle;                                     // 0x02D8 (size: 0x8)

    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
}; // Size: 0x2E0

#endif
