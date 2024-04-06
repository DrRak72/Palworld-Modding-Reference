#ifndef UE4SS_SDK_ABP_RidingBoss_HPP
#define UE4SS_SDK_ABP_RidingBoss_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_201;                                                         // 0x0004 (size: 0x8)
    FName __NameProperty_202;                                                         // 0x000C (size: 0x8)
    int32 __IntProperty_203;                                                          // 0x0014 (size: 0x4)
    FName __NameProperty_204;                                                         // 0x0018 (size: 0x8)
    int32 __IntProperty_205;                                                          // 0x0020 (size: 0x4)
    FName __NameProperty_206;                                                         // 0x0024 (size: 0x8)
    int32 __IntProperty_207;                                                          // 0x002C (size: 0x4)
    FName __NameProperty_208;                                                         // 0x0030 (size: 0x8)
    int32 __IntProperty_209;                                                          // 0x0038 (size: 0x4)
    FName __NameProperty_210;                                                         // 0x003C (size: 0x8)
    int32 __IntProperty_211;                                                          // 0x0044 (size: 0x4)
    FName __NameProperty_212;                                                         // 0x0048 (size: 0x8)
    int32 __IntProperty_213;                                                          // 0x0050 (size: 0x4)
    FName __NameProperty_214;                                                         // 0x0054 (size: 0x8)
    int32 __IntProperty_215;                                                          // 0x005C (size: 0x4)
    FName __NameProperty_216;                                                         // 0x0060 (size: 0x8)
    int32 __IntProperty_217;                                                          // 0x0068 (size: 0x4)
    bool __BoolProperty_218;                                                          // 0x006C (size: 0x1)
    float __FloatProperty_219;                                                        // 0x0070 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_220;                               // 0x0074 (size: 0x2C)
    float __FloatProperty_221;                                                        // 0x00A0 (size: 0x4)
    bool __BoolProperty_222;                                                          // 0x00A4 (size: 0x1)
    EAnimSyncMethod __EnumProperty_223;                                               // 0x00A5 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_224;                             // 0x00A6 (size: 0x1)
    FName __NameProperty_225;                                                         // 0x00A8 (size: 0x8)
    FName __NameProperty_226;                                                         // 0x00B0 (size: 0x8)
    int32 __IntProperty_227;                                                          // 0x00B8 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_228;                                        // 0x00C0 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00E0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0160 (size: 0x18)

}; // Size: 0x178

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_RidingBoss_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0390 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x05E0 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12;                     // 0x0600 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11;                     // 0x0628 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10;                     // 0x0650 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9;                      // 0x0678 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8;                      // 0x06A0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7;                      // 0x06C8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6;                      // 0x06F0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0718 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0740 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0768 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x0790 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x07B8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x07E0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8;                          // 0x0808 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_8;                                // 0x0850 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7;                          // 0x0870 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_7;                                // 0x08B8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6;                          // 0x08D8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_6;                                // 0x0920 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5;                          // 0x0940 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_5;                                // 0x0988 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4;                          // 0x09A8 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_4;                                // 0x09F0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0A10 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0A58 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x0A78 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0AC0 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0AE0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0B28 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0B48 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0B90 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x0BB0 (size: 0xC8)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0C78 (size: 0x20)
    FAnimNode_Inertialization AnimGraphNode_Inertialization;                          // 0x0C98 (size: 0x100)
    FVector OwnerTargetDirection;                                                     // 0x0D98 (size: 0x18)
    TEnumAsByte<E_RideActionType::Type> RideActionType;                               // 0x0DB0 (size: 0x1)
    bool DoCommonWazaSeparetedAnim?;                                                  // 0x0DB1 (size: 0x1)
    FST_BossAnimations AnimList;                                                      // 0x0DB8 (size: 0x40)
    bool DoLookat?;                                                                   // 0x0DF8 (size: 0x1)
    class UPalActionComponent* ActionComponent;                                       // 0x0E00 (size: 0x8)
    class UPhysicsAsset* ShakePhysics;                                                // 0x0E08 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void Find if Input Is Unique Waza(class UPalActionBase* Input, class UPalStaticCharacterParameterComponent* StaticCharacterComponent, bool& IsUniqueWaza?);
    void ChangeRideActionTypeByAction(class UPalActionBase* Object);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_556152964AD30A70B1F926AD317E7441();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_6266333F4ACB96C3A82AB08C7201AED8();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_306B502444B12DC45E0E19A24F8AB33F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_41FC7A384219171EC0C0658341049D32();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_43A34FE84928851FE2FFF3AC987329E3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_B975B7A341E1772362811F997C382EFF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_RidingBoss_AnimGraphNode_TransitionResult_07D8A20D411F356B0FF8D5AF7EDC6D53();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void OnActionBeginDelegate_Event_0(const class UPalActionBase* action);
    void BlueprintBeginPlay();
    void OnAllActionFinishDelegate_Event_0(const class UPalActionComponent* ActionComponent);
    void OnProcess();
    void ExecuteUbergraph_ABP_RidingBoss(int32 EntryPoint);
}; // Size: 0xE10

#endif
