#ifndef UE4SS_SDK_BP_AirGrapplingRope_HPP
#define UE4SS_SDK_BP_AirGrapplingRope_HPP

class ABP_AirGrapplingRope_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* Rope;                                                 // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Pivot;                                                // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    class AActor* User;                                                               // 0x02B0 (size: 0x8)
    double LifeTime;                                                                  // 0x02B8 (size: 0x8)
    double ElapsedTime;                                                               // 0x02C0 (size: 0x8)
    FBP_AirGrapplingRope_COnActivate OnActivate;                                      // 0x02C8 (size: 0x10)
    void OnActivate();
    FBP_AirGrapplingRope_COnDeactivate OnDeactivate;                                  // 0x02D8 (size: 0x10)
    void OnDeactivate();
    FVector StartLocation;                                                            // 0x02E8 (size: 0x18)
    FTransform RootTransform;                                                         // 0x0300 (size: 0x60)
    FName Flag Name;                                                                  // 0x0360 (size: 0x8)
    double AnimTime;                                                                  // 0x0368 (size: 0x8)
    double ElapsedAnimTime;                                                           // 0x0370 (size: 0x8)
    bool IsScaleAnimFinished;                                                         // 0x0378 (size: 0x1)
    FVector PivotOrgScale;                                                            // 0x0380 (size: 0x18)

    void Get Rope Term Location(FVector& NewParam);
    void Set Model Transform(double AnimScale);
    void SetEnablePlayerGravity(bool isEnable);
    void SetVisible(bool IsVisible);
    void SetPlayerVelocity();
    void SetPlayerShootDisable(bool isDisable);
    void GetMuzzleLocation(FVector& MuzzleLocation);
    void IsActive(bool& IsActive);
    void Deactive();
    void UpdateRope(double DeltaTime);
    void UpdateAnimeTime(double DeltaTime);
    void UpdateLifeTime(double DeltaTime);
    void Activate(FTransform PivotTransform, class AActor* UserActor);
    void CanUpdate(bool& CanUpdate);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_AirGrapplingRope(int32 EntryPoint);
    void OnDeactivate__DelegateSignature();
    void OnActivate__DelegateSignature();
}; // Size: 0x398

#endif
