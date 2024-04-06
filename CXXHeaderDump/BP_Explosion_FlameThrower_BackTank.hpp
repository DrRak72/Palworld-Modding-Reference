#ifndef UE4SS_SDK_BP_Explosion_FlameThrower_BackTank_HPP
#define UE4SS_SDK_BP_Explosion_FlameThrower_BackTank_HPP

class ABP_Explosion_FlameThrower_BackTank_C : public ABP_ExplosionAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UNiagaraComponent* Explosive;                                               // 0x02D8 (size: 0x8)

    void Get Attackable Friend(bool& IsFriendAttack);
    void BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Explosion_FlameThrower_BackTank(int32 EntryPoint);
}; // Size: 0x2E0

#endif
