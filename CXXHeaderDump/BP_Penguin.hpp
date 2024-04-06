#ifndef UE4SS_SDK_BP_Penguin_HPP
#define UE4SS_SDK_BP_Penguin_HPP

class ABP_Penguin_C : public ABP_MonsterBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A10 (size: 0x8)
    class UPalBodyPartsCapsuleComponent* PalBodyPartsCapsule;                         // 0x0A18 (size: 0x8)
    class UBP_CoopParam_Weapon_C* BP_CoopParam_Weapon;                                // 0x0A20 (size: 0x8)
    class UPalBodyPartsSphereComponent* PalBodyPartsSphere;                           // 0x0A28 (size: 0x8)
    TArray<double> PartnerSkillMagnification;                                         // 0x0A30 (size: 0x10)
    TArray<double> SelfDamageRate;                                                    // 0x0A40 (size: 0x10)

    int32 GetDamegeToSelf();
    void ProcessDamageSelf(int32 Damage, bool NoReaction, FVector BlowVelocity);
    void ProcessDamageSelfAndReaction(FHitResult HitResult);
    void GetBlowVelocity(FHitResult HitResult, FVector& BlowVelocity);
    void Set Disable Throw Pal Flag(bool isDisable);
    void OnActionEnd();
    void BndEvt__BP_Penguin_BP_CoopParam_Weapon_K2Node_ComponentBoundEvent_3_OnDestroyBulletDelegate__DelegateSignature(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, FHitResult HiｔResult);
    void BndEvt__BP_Penguin_BP_CoopParam_Weapon_K2Node_ComponentBoundEvent_4_OnCreatedBulletDelegate__DelegateSignature(class APalBullet* Bullet);
    void BndEvt__BP_Penguin_PalPartnerSkillParameter_K2Node_ComponentBoundEvent_5_OnStop__DelegateSignature();
    void PlayStunBlow(FVector BlowVelocity);
    void ExecuteUbergraph_BP_Penguin(int32 EntryPoint);
}; // Size: 0xA50

#endif
