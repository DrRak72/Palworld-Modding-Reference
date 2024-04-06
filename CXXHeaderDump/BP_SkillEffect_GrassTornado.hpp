#ifndef UE4SS_SDK_BP_SkillEffect_GrassTornado_HPP
#define UE4SS_SDK_BP_SkillEffect_GrassTornado_HPP

class ABP_SkillEffect_GrassTornado_C : public ABP_SkillEffectBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    double SideOffset;                                                                // 0x03C8 (size: 0x8)
    double DegereeOffset;                                                             // 0x03D0 (size: 0x8)
    class APalSkillEffectBase* RightTornado;                                          // 0x03D8 (size: 0x8)
    class APalSkillEffectBase* LeftTornado;                                           // 0x03E0 (size: 0x8)
    TSubclassOf<class AActor> bulletClass;                                            // 0x03E8 (size: 0x8)
    FVector2D ForwardVec2D;                                                           // 0x03F0 (size: 0x10)
    FVector2D LeftTargetLocation2D;                                                   // 0x0400 (size: 0x10)
    FVector2D LeftNormalizedDirection2D;                                              // 0x0410 (size: 0x10)
    double DotThreshold;                                                              // 0x0420 (size: 0x8)
    double RotationDegree;                                                            // 0x0428 (size: 0x8)
    double Speed;                                                                     // 0x0430 (size: 0x8)
    FVector2D RightTargetLocation2D;                                                  // 0x0438 (size: 0x10)
    FVector2D RightNormalizedDirection2D;                                             // 0x0448 (size: 0x10)

    void GetDesiredLocation(double DeltaTime, FVector2D TargetLocation2D, FVector2D NormalizedDirection2D, FVector2D& NewDirection, FVector& NewLocation);
    void MoveToTargetLocation(class APalSkillEffectBase*& Tornado, double DeltaTime, FVector2D TargetLocation2D, FVector2D NormalizedDirection2D, FVector2D& NewDirection);
    void Shoot(FVector TargetLocation);
    void CancelShoot();
    void ReceiveTick(float DeltaSeconds);
    void OnInitialize();
    void ShootBullet(FVector TargetLocation);
    void ExecuteUbergraph_BP_SkillEffect_GrassTornado(int32 EntryPoint);
}; // Size: 0x458

#endif
