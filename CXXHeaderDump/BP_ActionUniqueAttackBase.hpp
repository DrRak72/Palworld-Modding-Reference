#ifndef UE4SS_SDK_BP_ActionUniqueAttackBase_HPP
#define UE4SS_SDK_BP_ActionUniqueAttackBase_HPP

class UBP_ActionUniqueAttackBase_C : public UPalActionWazaBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    double RotateSpeed;                                                               // 0x0158 (size: 0x8)
    class UAnimMontage* CurrentMontage;                                               // 0x0160 (size: 0x8)
    class AActor* UniqueActionTarget;                                                 // 0x0168 (size: 0x8)
    double FindFrontTargetDegree;                                                     // 0x0170 (size: 0x8)
    double FindFrontTargetDistance;                                                   // 0x0178 (size: 0x8)
    double FindFrontTargetHeight;                                                     // 0x0180 (size: 0x8)
    FName flagName;                                                                   // 0x0188 (size: 0x8)
    bool IsTargetInFrontCamera;                                                       // 0x0190 (size: 0x1)
    TArray<TSoftObjectPtr<APalSkillEffectBase>> SpawnedEffects;                       // 0x0198 (size: 0x10)
    TMap<class FName, class FSkillEffectSpawnParameter> SkillEffectSpawnParameters;   // 0x01A8 (size: 0x50)
    bool IsHoldTarget;                                                                // 0x01F8 (size: 0x1)
    TSubclassOf<class UPalUniqueSkillModule> SkillModuleClass;                        // 0x0200 (size: 0x8)
    bool IsUseDummy;                                                                  // 0x0208 (size: 0x1)

    void GetCapsuleHalfRadius(double& HalfRadius);
    void GetCapsuleHalfHeight(double& HalfHeight);
    void GetPalAnimInstance(class UPalAnimInstance*& AnimInstance);
    void CreateSkillActionModule(TSubclassOf<class UPalUniqueSkillModule> UniqueSkillModuleClass, class UBP_UniqueSkillModule_Tackle_C*& Module);
    void FindEffectByClass(TSubclassOf<class APalSkillEffectBase> EffectClass, class APalSkillEffectBase*& Effect);
    void OnSpawnEffect(class APalSkillEffectBase* Effect);
    void AttachToOwner(class APalSkillEffectBase* Effect, FVector Offset, FName SocketName);
    void SetMoveState_Gravity(double GravityRate);
    void SetMoveState_Rotate(bool isDisable);
    void SetMoveState_Common(bool isDisable);
    void GetFootLocation(FVector& Location);
    void GetHeightToFloor(double& Height);
    void IsMontagePlaying(class UAnimMontage* Montage, bool& IsPlaying);
    void GetUniqueActionTarget(class AActor*& TargetActor);
    void GetAttackTargetLocation(bool IsFrontLocation, double FrontDistance, FVector& Location);
    void GetRotation(double DeltaTime, bool NoInterp, FRotator& Rotation);
    void FindActionTarget();
    void OnEndAction();
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void SpawnEffect(FName EffectKey);
    void ExecuteUbergraph_BP_ActionUniqueAttackBase(int32 EntryPoint);
}; // Size: 0x209

#endif
