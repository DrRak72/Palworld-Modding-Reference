#ifndef UE4SS_SDK_ABP_Player_Hair002_Implementation_HPP
#define UE4SS_SDK_ABP_Player_Hair002_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_53;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_54;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_55;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_56;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_Player_Hair002_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12;                           // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x4110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x48A0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x5030 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x57C0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x5F50 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x66E0 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x6700 (size: 0x18)
    double Alpha;                                                                     // 0x6718 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_4D5A4C7F4F16582193BA8788D3145CBA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_6233C10A42770E106FA2F0AA097D2B26();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_0B07D4CA4A84E084DDFD0B858EAEB812();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_BB0BA5D24B4F4A9042AC7894C9705F27();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_1D9EFA4C42FB5C4B4CBFE78791878B57();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_27FCBA3F4E4E1D07B42B20BC1483020F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_F4BCCE3C42A60C1650A6619F6FBDB41A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_100993514A15F239A2105B840352CF8D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_14F5AE9547BF94F6BFDC719653092598();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_57FCF84B46FB1E76760129827A63BC08();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_163ED4CD42B5B27AE09C50822C7B9533();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair002_Implementation_AnimGraphNode_KawaiiPhysics_BBB8C4D342FD1D6411EA7C93DAF1EB18();
    void ExecuteUbergraph_ABP_Player_Hair002_Implementation(int32 EntryPoint);
}; // Size: 0x6720

#endif
