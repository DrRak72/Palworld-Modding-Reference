#ifndef UE4SS_SDK_BP_Flamethrower_HPP
#define UE4SS_SDK_BP_Flamethrower_HPP

class ABP_Flamethrower_C : public ABP_Kitsunebi_Flamethrower_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F8 (size: 0x8)
    class AActor* tank;                                                               // 0x0600 (size: 0x8)

    bool IsUseLeftHandAttach();
    FTransform GetLeftHandTransform();
    void GetAttackType(EPalAttackType& AttackType);
    void PlayShootMotion();
    void PlayIdleMotion(bool StopAllMontages);
    int32 GetWeaponDamage();
    int32 GetNPCWeaponDamage();
    void CustomEvent();
    void OnPullTrigger();
    void ReceiveBeginPlay();
    void OnReloadStart();
    void ExecuteUbergraph_BP_Flamethrower(int32 EntryPoint);
}; // Size: 0x608

#endif
