#ifndef UE4SS_SDK_BP_PalDamageExplodeComponent_HPP
#define UE4SS_SDK_BP_PalDamageExplodeComponent_HPP

class UBP_PalDamageExplodeComponent_C : public UPalDamageExplodeComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00C8 (size: 0x8)
    TSubclassOf<class ABP_ExplosionAttackBase_C> ExClass;                             // 0x00D0 (size: 0x8)
    int32 Power;                                                                      // 0x00D8 (size: 0x4)
    FBP_PalDamageExplodeComponent_COnSpawnEx OnSpawnEx;                               // 0x00E0 (size: 0x10)
    void OnSpawnEx();

    void SpawnExplosionActor(class AActor* Attacker);
    void SpawnEx_ToAll(class AActor* Attacker);
    void SpawnExplosionActor_Delay(class AActor* Attacker, float DelayTime);
    void ExecuteUbergraph_BP_PalDamageExplodeComponent(int32 EntryPoint);
    void OnSpawnEx__DelegateSignature();
}; // Size: 0xF0

#endif
