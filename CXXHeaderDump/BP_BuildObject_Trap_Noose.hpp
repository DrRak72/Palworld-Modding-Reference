#ifndef UE4SS_SDK_BP_BuildObject_Trap_Noose_HPP
#define UE4SS_SDK_BP_BuildObject_Trap_Noose_HPP

class ABP_BuildObject_Trap_Noose_C : public ABP_BuildObject_Trap_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05E8 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x05F0 (size: 0x8)
    class UStaticMeshComponent* SM_NooseTrap_Rope;                                    // 0x05F8 (size: 0x8)
    class USkeletalMeshComponent* SK_NooseTrap_Rock;                                  // 0x0600 (size: 0x8)
    class UStaticMeshComponent* SM_NooseTrap_Base;                                    // 0x0608 (size: 0x8)
    class USceneComponent* RopeFixPosition;                                           // 0x0610 (size: 0x8)
    class AActor* HitTarget_Rep;                                                      // 0x0618 (size: 0x8)
    FTimerHandle ClientRepTimer;                                                      // 0x0620 (size: 0x8)
    double RopeMorph;                                                                 // 0x0628 (size: 0x8)
    FTimerHandle RopeMorphTimer;                                                      // 0x0630 (size: 0x8)

    void RopeMeshLengthUpdate();
    void SetAttachEndToMesh(class AActor* Target);
    void DeadTimerLoop();
    void OnDestroyTarget_ForClient(class AActor* DestroyedActor);
    void OnTriggerTrap_ForAll(class AActor* TargetActor);
    void IsHitByFlag(class AActor* Actor, bool& Hit);
    void OnAddEffect(const class UPalVisualEffectComponent* VisualEffectComponent, EPalVisualEffectID VisualEffectID, class UPalVisualEffectBase* VisualEffect);
    void OnInactivePal(bool bIsActive);
    void OnDeletePal(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void GetMesh(class UMeshComponent*& Mesh);
    void OnTriggerTrap_ForServer(class AActor* TargetActor);
    void GetTrapTime(class AActor* HitTarget, double& Time);
    void DelayDelateSelf();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_BuildObject_Trap_Noose(int32 EntryPoint);
}; // Size: 0x638

#endif
