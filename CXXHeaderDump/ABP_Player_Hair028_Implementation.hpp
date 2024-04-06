#ifndef UE4SS_SDK_ABP_Player_Hair028_Implementation_HPP
#define UE4SS_SDK_ABP_Player_Hair028_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_32;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_33;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_34;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_35;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_Player_Hair028_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x2A60 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x31F0 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x3210 (size: 0x18)
    double Alpha;                                                                     // 0x3228 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair028_Implementation_AnimGraphNode_KawaiiPhysics_59525EB143F745D66B6508A7BB21D183();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair028_Implementation_AnimGraphNode_KawaiiPhysics_BBB412FC416D4CD0E146F2AED5946DAB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair028_Implementation_AnimGraphNode_KawaiiPhysics_2DF47B994A0BFAE54A4987904DED06DE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair028_Implementation_AnimGraphNode_KawaiiPhysics_06AE96F04CAB320A4207E899AD6ED4C2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair028_Implementation_AnimGraphNode_KawaiiPhysics_0958F64D46B10969FF3DC689FC473BFB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair028_Implementation_AnimGraphNode_KawaiiPhysics_A7F1A853494BC19856F592936CF71C96();
    void ExecuteUbergraph_ABP_Player_Hair028_Implementation(int32 EntryPoint);
}; // Size: 0x3230

#endif
