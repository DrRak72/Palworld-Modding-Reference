#ifndef UE4SS_SDK_BP_Skill_ThunderFunnel_HPP
#define UE4SS_SDK_BP_Skill_ThunderFunnel_HPP

class ABP_Skill_ThunderFunnel_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* Sphere2;                                              // 0x03D0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* Sphere1;                                              // 0x03E0 (size: 0x8)
    double SpawnOffset;                                                               // 0x03E8 (size: 0x8)
    class AActor* Target;                                                             // 0x03F0 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnHitDelegate_イベント(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void ExecuteUbergraph_BP_Skill_ThunderFunnel(int32 EntryPoint);
}; // Size: 0x3F8

#endif
