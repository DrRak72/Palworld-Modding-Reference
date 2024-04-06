#ifndef UE4SS_SDK_ABP_Player_Hair029_Implementation_HPP
#define UE4SS_SDK_ABP_Player_Hair029_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_38;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_39;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_40;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_41;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_Player_Hair029_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x3980 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x4110 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x4130 (size: 0x18)
    double Alpha;                                                                     // 0x4148 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair029_Implementation_AnimGraphNode_KawaiiPhysics_C89A4D844D8B8761D2376880FB786531();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair029_Implementation_AnimGraphNode_KawaiiPhysics_4694B96E4FBACEE4052099AF0F27AC31();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair029_Implementation_AnimGraphNode_KawaiiPhysics_EFF6707B4A6206195175FD981F5464C0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair029_Implementation_AnimGraphNode_KawaiiPhysics_CDF2F9404A5CE753278EF4AE8CC7CAEA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair029_Implementation_AnimGraphNode_KawaiiPhysics_5B8257994994B83735608E9D8C2EE58E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair029_Implementation_AnimGraphNode_KawaiiPhysics_1FA794CC4F01F60C4C29C9B2CDA9E8BD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair029_Implementation_AnimGraphNode_KawaiiPhysics_6E328FB348C44E46C2126187EF13F011();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair029_Implementation_AnimGraphNode_KawaiiPhysics_F500AB61469FF8828D97C0AB244E1F52();
    void ExecuteUbergraph_ABP_Player_Hair029_Implementation(int32 EntryPoint);
}; // Size: 0x4150

#endif
