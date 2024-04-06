#ifndef UE4SS_SDK_ABP_NPC_Male_Police01_Implimentation_HPP
#define UE4SS_SDK_ABP_NPC_Male_Police01_Implimentation_HPP

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

class UABP_NPC_Male_Police01_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0368 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x0390 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x0B20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x12B0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x1A40 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1A60 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x1A80 (size: 0x790)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x2210 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x22D8 (size: 0x20)

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Police01_Implimentation_AnimGraphNode_KawaiiPhysics_CE773FE54A52FCE1948288AF231E42CC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Police01_Implimentation_AnimGraphNode_KawaiiPhysics_791340884D50E4404BCA568F4D9FDE92();
    void ExecuteUbergraph_ABP_NPC_Male_Police01_Implimentation(int32 EntryPoint);
}; // Size: 0x22F8

#endif