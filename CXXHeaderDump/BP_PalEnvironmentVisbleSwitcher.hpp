#ifndef UE4SS_SDK_BP_PalEnvironmentVisbleSwitcher_HPP
#define UE4SS_SDK_BP_PalEnvironmentVisbleSwitcher_HPP

class ABP_PalEnvironmentVisbleSwitcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    TArray<class AActor*> TargetActors;                                               // 0x02A8 (size: 0x10)

    void SetVisibilityAll(bool IsVisibility);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_PalEnvironmentVisbleSwitcher(int32 EntryPoint);
}; // Size: 0x2B8

#endif
