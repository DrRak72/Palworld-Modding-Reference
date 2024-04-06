#ifndef UE4SS_SDK_ABP_F_Hunter001_Implimentation_HPP
#define UE4SS_SDK_ABP_F_Hunter001_Implimentation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_35;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_36;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_37;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_38;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_F_Hunter001_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics;                                // 0x0370 (size: 0x520)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0890 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x08B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x1040 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x17D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x1F60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x26F0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x2E80 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x2EA0 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x2EC0 (size: 0x790)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x3650 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x3718 (size: 0x20)

    void ClothLayer(FPoseLink InPose, FPoseLink& ClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_F_Hunter001_Implimentation(int32 EntryPoint);
}; // Size: 0x3738

#endif
