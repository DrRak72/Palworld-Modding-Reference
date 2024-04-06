#ifndef UE4SS_SDK_BP_Action_Unique_BluePlatypus_Toboggan_HPP
#define UE4SS_SDK_BP_Action_Unique_BluePlatypus_Toboggan_HPP

class UBP_Action_Unique_BluePlatypus_Toboggan_C : public UBP_ActionUniqueAttackBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    bool IsAbort;                                                                     // 0x0218 (size: 0x1)
    bool IsMoving;                                                                    // 0x0219 (size: 0x1)
    double ElapsedTime;                                                               // 0x0220 (size: 0x8)
    double MovingLimitTime;                                                           // 0x0228 (size: 0x8)
    class APalAIController* AIController;                                             // 0x0230 (size: 0x8)
    class UPalSkeletalMeshComponent* SkeletalMesh;                                    // 0x0238 (size: 0x8)
    class UPalStaticCharacterParameterComponent* StaticParameter;                     // 0x0240 (size: 0x8)
    class UPalCharacterMovementComponent* Movement;                                   // 0x0248 (size: 0x8)
    FName flagName_0;                                                                 // 0x0250 (size: 0x8)
    float MaxSpeedMultiply;                                                           // 0x0258 (size: 0x4)
    class UPalAnimNotifyParameterComponent* AnimNotify;                               // 0x0260 (size: 0x8)
    float YawMultiply;                                                                // 0x0268 (size: 0x4)
    class ABP_SkillEffectBase_C* SkillEffect;                                         // 0x0270 (size: 0x8)
    bool IsCoolDown;                                                                  // 0x0278 (size: 0x1)
    bool IsNearTarget;                                                                // 0x0279 (size: 0x1)
    double CoolDownTime;                                                              // 0x0280 (size: 0x8)
    double StartRotationTime;                                                         // 0x0288 (size: 0x8)
    double MovingRotationTime;                                                        // 0x0290 (size: 0x8)
    double NearDistance;                                                              // 0x0298 (size: 0x8)
    double SkillEffectEndTime;                                                        // 0x02A0 (size: 0x8)

    void SetMovementDisable(bool isDisable);
    void EndSkillEffect();
    void CreateSkillEffect();
    void StartCoolDown();
    void SetActorRotationByLerp(FVector PrevDirection, FVector targetDirection, double Rate);
    void SetActorLocation(double DeltaTime, double MoveSpeed, FVector Direction);
    void SetActiveAI(bool IsActive);
    void Finish();
    void HitProc(class AActor* HitActor);
    void CoolDown(double DeltaTime);
    void MoveToTarget(class AActor* Target, double DeltaTime);
    void Turn to Target(double DeltaTime);
    void Update(double DeltaTime);
    void StartSliding();
    void SetupAction();
    void OnNotifyEnd_D0B9C3F54B2F81251B4977B51A209E29(FName NotifyName);
    void OnNotifyBegin_D0B9C3F54B2F81251B4977B51A209E29(FName NotifyName);
    void OnInterrupted_D0B9C3F54B2F81251B4977B51A209E29(FName NotifyName);
    void OnBlendOut_D0B9C3F54B2F81251B4977B51A209E29(FName NotifyName);
    void OnCompleted_D0B9C3F54B2F81251B4977B51A209E29(FName NotifyName);
    void OnNotifyEnd_27660E4840A46F251D46CE833F021C6A(FName NotifyName);
    void OnNotifyBegin_27660E4840A46F251D46CE833F021C6A(FName NotifyName);
    void OnInterrupted_27660E4840A46F251D46CE833F021C6A(FName NotifyName);
    void OnBlendOut_27660E4840A46F251D46CE833F021C6A(FName NotifyName);
    void OnCompleted_27660E4840A46F251D46CE833F021C6A(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void TickAction(float DeltaTime);
    void BindHitEvent();
    void UnbindHitEvent();
    void OnHit(class UPrimitiveComponent* MyHitComponent, class AActor* OtherHitActor, class UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    void ExecuteUbergraph_BP_Action_Unique_BluePlatypus_Toboggan(int32 EntryPoint);
}; // Size: 0x2A8

#endif
