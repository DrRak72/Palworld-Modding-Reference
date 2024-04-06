#ifndef UE4SS_SDK_BP_Explosion_FragGrenade_Ice_HPP
#define UE4SS_SDK_BP_Explosion_FragGrenade_Ice_HPP

class ABP_Explosion_FragGrenade_Ice_C : public ABP_ExplosionAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UNiagaraComponent* Explosive;                                               // 0x02D8 (size: 0x8)

    void GetElement(EPalElementType& Element);
    void GetEffectValue(int32& Value);
    void GetEffectType(EPalAdditionalEffectType& Effect);
    void BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
    void ExecuteUbergraph_BP_Explosion_FragGrenade_Ice(int32 EntryPoint);
}; // Size: 0x2E0

#endif
