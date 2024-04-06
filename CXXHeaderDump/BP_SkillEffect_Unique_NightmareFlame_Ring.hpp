#ifndef UE4SS_SDK_BP_SkillEffect_Unique_NightmareFlame_Ring_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_NightmareFlame_Ring_HPP

class ABP_SkillEffect_Unique_NightmareFlame_Ring_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UCapsuleComponent* Outer Collision;                                         // 0x03C8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03D0 (size: 0x8)
    double Duration;                                                                  // 0x03D8 (size: 0x8)
    TArray<class AActor*> HittedActors;                                               // 0x03E0 (size: 0x10)
    double RingThickness;                                                             // 0x03F0 (size: 0x8)
    double ExpandSpeed;                                                               // 0x03F8 (size: 0x8)
    double CurrentExpansion;                                                          // 0x0400 (size: 0x8)
    float MaxHitHeight;                                                               // 0x0408 (size: 0x4)
    double HeightBelow;                                                               // 0x0410 (size: 0x8)
    TMap<class AActor*, class UPrimitiveComponent*> CurrentHitableActorMap;           // 0x0418 (size: 0x50)

    void GetActorRootLocationZ(class AActor* Actor, double& LocationZ);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StartFadeRing();
    void FadeOutEffect(double DeltaSecond);
    void BndEvt__BP_SkillEffect_Unique_NightmareFlame_Ring_Outer Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SkillEffect_Unique_NightmareFlame_Ring(int32 EntryPoint);
}; // Size: 0x468

#endif
