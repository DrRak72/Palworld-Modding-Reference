#ifndef UE4SS_SDK_BP_ThrowWeapon_FragGrenade_NPC_HPP
#define UE4SS_SDK_BP_ThrowWeapon_FragGrenade_NPC_HPP

class ABP_ThrowWeapon_FragGrenade_NPC_C : public ABP_ThrowWeapon_FragGrenade_C
{

    void GetThrowObjectClass(TSubclassOf<class AActor>& ThrowObject);
    void GetShootPitch(double& Pitch);
    void ComsumeItem();
    int32 GetNPCWeaponDamage();
    int32 GetWeaponDamage();
}; // Size: 0x568

#endif
