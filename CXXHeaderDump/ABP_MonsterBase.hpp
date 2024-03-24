#ifndef UE4SS_SDK_ABP_MonsterBase_HPP
#define UE4SS_SDK_ABP_MonsterBase_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_323;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_324;                                                         // 0x000C (size: 0x8)
    FName __NameProperty_325;                                                         // 0x0014 (size: 0x8)
    FName __NameProperty_326;                                                         // 0x001C (size: 0x8)
    FName __NameProperty_327;                                                         // 0x0024 (size: 0x8)
    FName __NameProperty_328;                                                         // 0x002C (size: 0x8)
    int32 __IntProperty_329;                                                          // 0x0034 (size: 0x4)
    FName __NameProperty_330;                                                         // 0x0038 (size: 0x8)
    int32 __IntProperty_331;                                                          // 0x0040 (size: 0x4)
    FName __NameProperty_332;                                                         // 0x0044 (size: 0x8)
    int32 __IntProperty_333;                                                          // 0x004C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_334;                               // 0x0050 (size: 0x2C)
    float __FloatProperty_335;                                                        // 0x007C (size: 0x4)
    FName __NameProperty_336;                                                         // 0x0080 (size: 0x8)
    int32 __IntProperty_337;                                                          // 0x0088 (size: 0x4)
    bool __BoolProperty_338;                                                          // 0x008C (size: 0x1)
    float __FloatProperty_339;                                                        // 0x0090 (size: 0x4)
    EAnimSyncMethod __EnumProperty_340;                                               // 0x0094 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_341;                             // 0x0095 (size: 0x1)
    FName __NameProperty_342;                                                         // 0x0098 (size: 0x8)
    FName __NameProperty_343;                                                         // 0x00A0 (size: 0x8)
    int32 __IntProperty_344;                                                          // 0x00A8 (size: 0x4)
    class UBlendProfile* __BlendProfile_345;                                          // 0x00B0 (size: 0x8)
    class UCurveFloat* __CurveFloat_346;                                              // 0x00B8 (size: 0x8)
    bool __BoolProperty_347;                                                          // 0x00C0 (size: 0x1)
    EAlphaBlendOption __EnumProperty_348;                                             // 0x00C1 (size: 0x1)
    EBlendListTransitionType __EnumProperty_349;                                      // 0x00C2 (size: 0x1)
    TArray<float> __ArrayProperty_350;                                                // 0x00C8 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_351;                                        // 0x00D8 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00F8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0178 (size: 0x18)

}; // Size: 0x190

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    bool __BoolProperty_1;                                                            // 0x000C (size: 0x1)
    bool __BoolProperty_2;                                                            // 0x000D (size: 0x1)
    bool __BoolProperty_3;                                                            // 0x000E (size: 0x1)
    float __FloatProperty_4;                                                          // 0x0010 (size: 0x4)
    float __FloatProperty_5;                                                          // 0x0014 (size: 0x4)
    float __FloatProperty_6;                                                          // 0x0018 (size: 0x4)
    bool __BoolProperty_7;                                                            // 0x001C (size: 0x1)
    bool __BoolProperty_8;                                                            // 0x001D (size: 0x1)
    float __FloatProperty_9;                                                          // 0x0020 (size: 0x4)
    float __FloatProperty_10;                                                         // 0x0024 (size: 0x4)
    float __FloatProperty_11;                                                         // 0x0028 (size: 0x4)
    float __FloatProperty_12;                                                         // 0x002C (size: 0x4)
    bool __BoolProperty_13;                                                           // 0x0030 (size: 0x1)
    float __FloatProperty_14;                                                         // 0x0034 (size: 0x4)
    float __FloatProperty_15;                                                         // 0x0038 (size: 0x4)
    float __FloatProperty_16;                                                         // 0x003C (size: 0x4)
    float __FloatProperty_17;                                                         // 0x0040 (size: 0x4)
    TArray<float> __ArrayProperty_18;                                                 // 0x0048 (size: 0x10)
    bool __BoolProperty_19;                                                           // 0x0058 (size: 0x1)
    bool __BoolProperty_20;                                                           // 0x0059 (size: 0x1)

}; // Size: 0x5A

class UABP_MonsterBase_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0618 (size: 0x60)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0678 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0680 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0688 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x06A8 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0770 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x0838 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x0858 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0920 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0940 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0A08 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0A28 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0A50 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0A78 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x0AA0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x0AC8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x0AF0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0B18 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0B40 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0B68 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0B90 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x0BB8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0BE0 (size: 0x28)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_2;                        // 0x0C08 (size: 0xC8)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7;                      // 0x0CD0 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x0D40 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6;                      // 0x0D60 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7;                        // 0x0DD0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0E18 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0E60 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5;                      // 0x0E80 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6;                        // 0x0EF0 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0F38 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0F80 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0FA0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0FE8 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5;                        // 0x1008 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4;                      // 0x1050 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4;                        // 0x10C0 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x1108 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3;                      // 0x1150 (size: 0x70)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2;                      // 0x11C0 (size: 0x70)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x1230 (size: 0x48)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x1278 (size: 0x70)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x12E8 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x1358 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x1378 (size: 0xC8)
    FAnimNode_Slot AnimGraphNode_Slot_2;                                              // 0x1440 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x1488 (size: 0x48)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_1;                        // 0x14D0 (size: 0xC8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;                          // 0x1598 (size: 0x108)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6;                            // 0x16A0 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x16C8 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5;                            // 0x1710 (size: 0x28)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x1738 (size: 0x108)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4;                            // 0x1840 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1868 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x18B0 (size: 0x28)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x18D8 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x1920 (size: 0x28)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x1948 (size: 0xC8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x1A10 (size: 0x108)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x1B18 (size: 0x28)
    FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend;                                  // 0x1B40 (size: 0xC8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x1C08 (size: 0x28)
    class UPalCharacterMovementComponent* K2Node_PropertyAccess_17;                   // 0x1C30 (size: 0x8)
    bool K2Node_PropertyAccess_15;                                                    // 0x1C38 (size: 0x1)
    class UPalCharacterMovementComponent* K2Node_PropertyAccess_14;                   // 0x1C40 (size: 0x8)
    bool K2Node_PropertyAccess_12;                                                    // 0x1C48 (size: 0x1)
    float K2Node_PropertyAccess_10;                                                   // 0x1C4C (size: 0x4)
    float K2Node_PropertyAccess_9;                                                    // 0x1C50 (size: 0x4)
    FVector K2Node_PropertyAccess_8;                                                  // 0x1C58 (size: 0x18)
    bool K2Node_PropertyAccess_7;                                                     // 0x1C70 (size: 0x1)
    FVector K2Node_PropertyAccess_6;                                                  // 0x1C78 (size: 0x18)
    FVector K2Node_PropertyAccess_4;                                                  // 0x1C90 (size: 0x18)
    FRotator K2Node_PropertyAccess_3;                                                 // 0x1CA8 (size: 0x18)
    FWeaponAnimationInfo K2Node_PropertyAccess_2;                                     // 0x1CC0 (size: 0x258)
    bool K2Node_PropertyAccess_1;                                                     // 0x1F18 (size: 0x1)
    bool K2Node_PropertyAccess;                                                       // 0x1F19 (size: 0x1)
    FRotator __CustomProperty_AimRotator_D409488B47D1A68373AC2E9D883DDF47;            // 0x1F20 (size: 0x18)
    FVector __CustomProperty_LookAtWorldLocation_FBA1F7A649A7D6231954198C8C515A62;    // 0x1F38 (size: 0x18)
    bool IsAiming;                                                                    // 0x1F50 (size: 0x1)
    bool IsShooting;                                                                  // 0x1F51 (size: 0x1)
    FWeaponAnimationInfo WeaponAnimInfo;                                              // 0x1F58 (size: 0x258)
    FVector2D CameraVelocityXY;                                                       // 0x21B0 (size: 0x10)
    FRotator AimRotator;                                                              // 0x21C0 (size: 0x18)
    bool IsLookatEnable;                                                              // 0x21D8 (size: 0x1)
    FVector LookAtTarget;                                                             // 0x21E0 (size: 0x18)
    double LookatInTime;                                                              // 0x21F8 (size: 0x8)
    double LookatOutTime;                                                             // 0x2200 (size: 0x8)
    bool IsJumpPreliminary;                                                           // 0x2208 (size: 0x1)
    bool IsSkipJumpStart;                                                             // 0x2209 (size: 0x1)
    double AngleSpeed;                                                                // 0x2210 (size: 0x8)
    bool IsRiding;                                                                    // 0x2218 (size: 0x1)
    bool IsFlying;                                                                    // 0x2219 (size: 0x1)
    bool ShouldBeUseShooterComponent;                                                 // 0x221A (size: 0x1)
    bool ShouldBeUseRiderComponent;                                                   // 0x221B (size: 0x1)
    double PrevMoveSpeed;                                                             // 0x2220 (size: 0x8)
    class UNiagaraSystem* FootStepEffectClass;                                        // 0x2228 (size: 0x8)
    FName FootStepAttachPointName;                                                    // 0x2230 (size: 0x8)
    class UNiagaraComponent* FootStepEffect;                                          // 0x2238 (size: 0x8)
    class APalCharacter* TSCached_OwnerPalCharacter;                                  // 0x2240 (size: 0x8)
    class UPalShooterComponent* TSCached_ShooterComponent;                            // 0x2248 (size: 0x8)
    class UPalLookAtComponent* TSCached_LookAtComponent;                              // 0x2250 (size: 0x8)
    class UPalRideMarkerComponent* TSCached_RideMarker;                               // 0x2258 (size: 0x8)
    bool IsSpawnDashEffect;                                                           // 0x2260 (size: 0x1)
    double DashEffectSpeed;                                                           // 0x2268 (size: 0x8)
    bool IsFloating;                                                                  // 0x2270 (size: 0x1)
    double MovementScale;                                                             // 0x2278 (size: 0x8)

    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void IsFloatingPal();
    void MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, FString& PalSize);
    void PlayLandingSound();
    void UpdateDashEffect_AnyThread();
    void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
    void GetFootStepEffectScale(double& Scale);
    void GetFootStepCharacterSpeed(double& CharacterSpeed);
    void CanSpawnFootStepEffect(bool& CanSpawn);
    void StopFootStepEffect();
    void StartFootStepEffect();
    void PostUpdateDashEffect();
    void PlaySound(FName SoundId);
    void GetSprint(bool& IsSprint);
    void UpdateRidingParameter();
    void UpdateBasicParameter();
    void Update Look at Parameter();
    void UpdateShooterParameter();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ECFECB414886E0974195E991463ACD99();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_925DF20E402882570857548CCD9E3C68();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_6FEC962E4C28F1AC8D56A49C89C4ADFA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_C95153CD4007A62F8D752891550DF5D9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_40ADA346423143A5CAA0D4B50B157F15();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_ADBAEE7E4B8D4BFED7B43DBC07178B76();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_128A52BB436E9B3A31FBB7A0A5CC15C1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_672678E246E619FB275DE5AFE6DDA234();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_B62C4ED042628BD16274AFA4FDD16719();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_FE682B1C41C3E7BF960F52B352036D22();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendSpacePlayer_E84338B149C6CA71A04CD2A2AFEE1A26();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_BlendListByBool_FB442B974C195CB35B6129B622134627();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_SequencePlayer_EA0B5CD54E5A85E50831B98555463D29();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_CE52F1054119833750D5A6BE24F3D0CF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F0D464AD4B31CE2D2A7A7EA95C239B70();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_EE0E56854535C9DCA7F729A194F159F1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_A47488D6499D3064732F10A46F49E205();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_6D5D23194B5DCCF74E79899BDAC0B9BA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_8E5298E14CFFC43AC4CB97899CB66188();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_56B64F4E4C9E82DE226407ACE61B8F62();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_94EBA2794624A1AE0E87B0B8F0C035CA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_12D0A21548EC4F9A1B3A7F89B42E002E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F48506EF4272DE0D9403FC8091658CC2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MonsterBase_AnimGraphNode_TransitionResult_F96787034784DF12FF90028A34BB8B39();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void BlueprintPostEvaluateAnimation();
    void AnimNotify_Landing();
    void ExecuteUbergraph_ABP_MonsterBase(int32 EntryPoint);
}; // Size: 0x2280

#endif
