#ifndef UE4SS_SDK_BPI_CoopWeapon_HPP
#define UE4SS_SDK_BPI_CoopWeapon_HPP

class IBPI_CoopWeapon_C : public IInterface
{

    void SetAttacker(class AActor* AttackerPal);
    void SetWeaponDamage(int32 Damageam);
}; // Size: 0x28

#endif
