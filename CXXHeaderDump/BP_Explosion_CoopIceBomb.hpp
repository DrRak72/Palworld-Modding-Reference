#ifndef UE4SS_SDK_BP_Explosion_CoopIceBomb_HPP
#define UE4SS_SDK_BP_Explosion_CoopIceBomb_HPP

class ABP_Explosion_CoopIceBomb_C : public ABP_Explosion_CoopElectricBomb_C
{

    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
    void GetElement(EPalElementType& Element);
}; // Size: 0x2E0

#endif
