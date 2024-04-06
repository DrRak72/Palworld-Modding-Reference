#ifndef UE4SS_SDK_BP_SkillEffect_Unique_Gorilla_GroundPunch_HPP
#define UE4SS_SDK_BP_SkillEffect_Unique_Gorilla_GroundPunch_HPP

class ABP_SkillEffect_Unique_Gorilla_GroundPunch_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    double Radius;                                                                    // 0x03C8 (size: 0x8)
    double Angle;                                                                     // 0x03D0 (size: 0x8)
    class UPalHitFilter* HitFilter;                                                   // 0x03D8 (size: 0x8)
    FReserveMontage LastAttackMontage;                                                // 0x03E0 (size: 0x10)
    bool IsHitEventBind;                                                              // 0x03F0 (size: 0x1)
    double CollisionHeight;                                                           // 0x03F8 (size: 0x8)
    bool EnableDebugDraw;                                                             // 0x0400 (size: 0x1)

    void DrawDebugShape();
    void IsValidHit(class AActor* HitTarget, bool& IsHit);
    void GetAndInitHitFilter(class UPalHitFilter*& HitFilter);
    void OnHit(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void カスタムイベント(class UAnimMontage* Montage, FName NotifyName);
    void ExecuteUbergraph_BP_SkillEffect_Unique_Gorilla_GroundPunch(int32 EntryPoint);
}; // Size: 0x401

#endif
