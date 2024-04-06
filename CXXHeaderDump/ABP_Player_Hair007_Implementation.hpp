#ifndef UE4SS_SDK_ABP_Player_Hair007_Implementation_HPP
#define UE4SS_SDK_ABP_Player_Hair007_Implementation_HPP

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

class UABP_Player_Hair007_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0368 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0388 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x03B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x0B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x12D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x1A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x21F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x2980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x3110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x38A0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x4030 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x4050 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x4118 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x4138 (size: 0x18)
    double Alpha;                                                                     // 0x4150 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair007_Implementation_AnimGraphNode_KawaiiPhysics_25A3C88C48DCF168243009BBE6399A41();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair007_Implementation_AnimGraphNode_KawaiiPhysics_21EEF29B4FFD91C19A0586A1E1C22178();
    void ExecuteUbergraph_ABP_Player_Hair007_Implementation(int32 EntryPoint);
}; // Size: 0x4158

#endif
