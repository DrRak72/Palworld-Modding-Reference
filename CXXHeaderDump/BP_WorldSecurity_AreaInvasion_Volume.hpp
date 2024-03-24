#ifndef UE4SS_SDK_BP_WorldSecurity_AreaInvasion_Volume_HPP
#define UE4SS_SDK_BP_WorldSecurity_AreaInvasion_Volume_HPP

class ABP_WorldSecurity_AreaInvasion_Volume_C : public APalTriggerAreaBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02C8 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x02D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D8 (size: 0x8)
    TArray<class AActor*> HitActorArray;                                              // 0x02E0 (size: 0x10)

    void NotifyHitActors();
    void IsPlayerOverlap(bool& IsOverlap, TArray<class AActor*>& OverlapPlayers);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_WorldSecurity_AreaInvasion_Volume(int32 EntryPoint);
}; // Size: 0x2F0

#endif
