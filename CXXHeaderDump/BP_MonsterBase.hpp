#ifndef UE4SS_SDK_BP_MonsterBase_HPP
#define UE4SS_SDK_BP_MonsterBase_HPP

class ABP_MonsterBase_C : public APalMonsterCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0880 (size: 0x8)
    class UPalAbilitySkillParameterComponent* PalAbilitySkillParameter;               // 0x0888 (size: 0x8)
    class UMotionWarpingComponent* MotionWarping;                                     // 0x0890 (size: 0x8)
    class UBP_PalCryComponent_C* BP_PalCryComponent;                                  // 0x0898 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PalPartnerSkillParameter;               // 0x08A0 (size: 0x8)
    class UPalNavigationInvokerComponent* PalNavigationInvoker;                       // 0x08A8 (size: 0x8)
    class UPalInteractableSphereComponentNative* BP_InteractableSphere;               // 0x08B0 (size: 0x8)
    class UPalFacialComponent* PalFacial;                                             // 0x08B8 (size: 0x8)
    TEnumAsByte<ECollisionChannel> CapsuleCollisionChannel;                           // 0x08C0 (size: 0x1)
    FName CollisionProfileNameCache;                                                  // 0x08C4 (size: 0x8)
    class UNiagaraComponent* FlyEffect;                                               // 0x08D0 (size: 0x8)
    double EffectiveAttackLogTimer;                                                   // 0x08D8 (size: 0x8)
    FBP_MonsterBase_COnInflictDamageEvent OnInflictDamageEvent;                       // 0x08E0 (size: 0x10)
    void OnInflictDamageEvent(FPalDamageResult DamageResult);

    void OnLanded_Proc(class UPalCharacterMovementComponent* Component, FHitResult Hit);
    void AddEffectivceAttackLog(FPalDeadInfo Info);
    void AddTargetDefeatLog(FPalDeadInfo Info);
    void GetVisual_ExceptMainMesh_SyncAnyway(TArray<class USceneComponent*>& OutComponent);
    void GetJumpEffectSpawnLocation(FVector& Location);
    void GetEffectScale(double& Scale);
    void PlayJumpSound();
    void GetFlyEffectAttachOffset(FTransform& EffectTransform);
    void UpdateFlyEffect(double DeltaTime);
    void OnNotifyEnd_098E824D485481E7313DA1A9DC5E74B5(FName NotifyName);
    void OnNotifyBegin_098E824D485481E7313DA1A9DC5E74B5(FName NotifyName);
    void OnInterrupted_098E824D485481E7313DA1A9DC5E74B5(FName NotifyName);
    void OnBlendOut_098E824D485481E7313DA1A9DC5E74B5(FName NotifyName);
    void OnCompleted_098E824D485481E7313DA1A9DC5E74B5(FName NotifyName);
    void OnLoaded_4AE31D724846BFB2E85A948698F32C16(class UObject* Loaded);
    void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_0_OnJumpDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Event_DeadGiftExp(FPalDeadInfo DeadInfo);
    void SetUpDelegate();
    void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_1_OnLandedDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component, const FHitResult& Hit);
    void BndEvt__BP_MonsterBase_CharacterMovement_K2Node_ComponentBoundEvent_2_OnFlyDelegate__DelegateSignature(class UPalCharacterMovementComponent* Component);
    void OnDefeatCharacter(const FPalDeadInfo& DeadInfo);
    void OnInflictDamage(const FPalDamageResult& DamageResult);
    void OnInitialized(class APalCharacter* InCharacter);
    void OnUpdateLevelDelegate_イベント_0(int32 addLevel, int32 nowLevel);
    void ExecuteUbergraph_BP_MonsterBase(int32 EntryPoint);
    void OnInflictDamageEvent__DelegateSignature(FPalDamageResult DamageResult);
}; // Size: 0x8F0

#endif
