#ifndef UE4SS_SDK_BP_FlamethrowBackTank_HPP
#define UE4SS_SDK_BP_FlamethrowBackTank_HPP

class ABP_FlamethrowBackTank_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNiagaraComponent* NS_UniqueSkill_FlameBuffalo_FlameHorn_End;               // 0x0298 (size: 0x8)
    class UBP_PalDamageExplodeComponent_C* BP_PalDamageExplodeComponent;              // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A8 (size: 0x8)
    class UCapsuleComponent* CapsuleCollision;                                        // 0x02B0 (size: 0x8)
    class AActor* HitBulletAttacker;                                                  // 0x02B8 (size: 0x8)
    bool IsBurn;                                                                      // 0x02C0 (size: 0x1)

    void OnEx();
    void OnOwnerDelete(class AActor* DestroyedActor);
    void ReceiveTick(float DeltaSeconds);
    void SelfDelete(FPalDeadInfo DeadInfo);
    void OnDamage(FPalDamageInfo DamageInfo);
    void AddStatus(const class UPalStatusComponent* StatusComponent, EPalStatusID StatusId, class UPalStatusBase* Status);
    void RemoveStatus(const class UPalStatusComponent* StatusComponent, EPalStatusID StatusId);
    void ExecuteUbergraph_BP_FlamethrowBackTank(int32 EntryPoint);
}; // Size: 0x2C1

#endif
