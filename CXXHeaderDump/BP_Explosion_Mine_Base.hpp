#ifndef UE4SS_SDK_BP_Explosion_Mine_Base_HPP
#define UE4SS_SDK_BP_Explosion_Mine_Base_HPP

class ABP_Explosion_Mine_Base_C : public ABP_ExplosionAttackBase_C
{
    class UNiagaraComponent* Explosive;                                               // 0x02D0 (size: 0x8)

    void Is Attack Able(class AActor* Attacker, class AActor* HitActor, class UPrimitiveComponent* HitComponent, bool& IsHit);
    void Get Attackable Friend(bool& IsFriendAttack);
    void GetWeaponAttackType(EPalAttackType& AttackType);
    void FindAttacker(class AActor*& Attacker);
}; // Size: 0x2D8

#endif
