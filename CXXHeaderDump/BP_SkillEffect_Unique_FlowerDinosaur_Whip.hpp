#ifndef UE4SS_SDK_BP_SkillEffect_Unique_FlowerDinosaur_Whip_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_FlowerDinosaur_Whip_HPP

class ABP_SkillEffect_Unique_FlowerDinosaur_Whip_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UPalHitFilter* HitFilter;                                                   // 0x03C8 (size: 0x8)
    double Radius;                                                                    // 0x03D0 (size: 0x8)
    double Angle;                                                                     // 0x03D8 (size: 0x8)
    double CollisionOffset;                                                           // 0x03E0 (size: 0x8)

    void GetAndInitHitFilter(class UPalHitFilter*& HitFilter);
    void IsValidHit(class AActor* HitTarget, bool& IsHit);
    void OnHit(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SkillEffect_Unique_FlowerDinosaur_Whip(int32 EntryPoint);
}; // Size: 0x3E8

#endif
