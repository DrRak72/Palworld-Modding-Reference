#ifndef UE4SS_SDK_ABP_F_Cloth001_Implimentation_HPP
#define UE4SS_SDK_ABP_F_Cloth001_Implimentation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_26;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_27;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_28;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_29;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_F_Cloth001_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x0370 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x0B00 (size: 0x790)
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics;                                // 0x1290 (size: 0x520)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x17B0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x1F40 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1F60 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1F80 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x1FA0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x2068 (size: 0x20)

    void ClothLayer(FPoseLink InPose, FPoseLink& ClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_AnimGraphNode_KawaiiPhysics_8A45C6DC49AEE17D684F0E844C5D07AB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_F_Cloth001_Implimentation_AnimGraphNode_KawaiiPhysics_26B8E1664A61C748422E82AEC71A0B03();
    void ExecuteUbergraph_ABP_F_Cloth001_Implimentation(int32 EntryPoint);
}; // Size: 0x2088

#endif