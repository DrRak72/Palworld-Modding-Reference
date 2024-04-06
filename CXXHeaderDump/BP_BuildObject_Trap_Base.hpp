#ifndef UE4SS_SDK_BP_BuildObject_Trap_Base_HPP
#define UE4SS_SDK_BP_BuildObject_Trap_Base_HPP

class ABP_BuildObject_Trap_Base_C : public APalBuildObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class UBoxComponent* AttackBox_PawnRoot;                                          // 0x0588 (size: 0x8)
    class UBoxComponent* AttackBox;                                                   // 0x0590 (size: 0x8)
    class UBP_InteractableBox_C* BP_InteractableBox;                                  // 0x0598 (size: 0x8)
    class UBoxComponent* CheckOverlapCollision;                                       // 0x05A0 (size: 0x8)
    class UBoxComponent* BuildWorkableBounds;                                         // 0x05A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x05B0 (size: 0x8)
    double Const_TrapTime;                                                            // 0x05B8 (size: 0x8)
    class AActor* HitTarget;                                                          // 0x05C0 (size: 0x8)
    bool Const_AutoMeshDisable;                                                       // 0x05C8 (size: 0x1)
    TArray<EPalSizeType> Const_HitSizeList;                                           // 0x05D0 (size: 0x10)
    class AActor* tempHitActor;                                                       // 0x05E0 (size: 0x8)

    void IsHitableCharacter(class AActor* HitActor, bool& IsHit);
    void IsTargetEnemy(class AActor* TargetActor, bool& bReturnValue);
    void IsHitByFlag(class AActor* Actor, bool& Hit);
    void IsRiding(class AActor* HitActor, bool& IsRiding);
    void IsHitBySize(class AActor* HitCharacter, bool& IsHit);
    void GetTrapTime(class AActor* HitTarget, double& Time);
    void GetMesh(class UMeshComponent*& Mesh);
    void OnEndTrap_ForAll(class AActor* TargetActor);
    void OnEndTrap_ForServer(class AActor* Target);
    void OnTriggerTrap_ForAll(class AActor* TargetActor);
    void OnTriggerTrap_ForServer(class AActor* TargetActor);
    void OnTriggerTrapEvent_ToAll(class AActor* TargetActor);
    void OnEndTrapEvent_ToAll(class AActor* TargetActor);
    void BndEvt__BP_BuildObject_Trap_Base_AttackBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_BuildObject_Trap_Base_AttackBox_PawnRoot_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_BuildObject_Trap_Base(int32 EntryPoint);
}; // Size: 0x5E8

#endif
