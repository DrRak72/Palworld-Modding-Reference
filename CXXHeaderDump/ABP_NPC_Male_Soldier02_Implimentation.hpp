#ifndef UE4SS_SDK_ABP_NPC_Male_Soldier02_Implimentation_HPP
#define UE4SS_SDK_ABP_NPC_Male_Soldier02_Implimentation_HPP

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

class UABP_NPC_Male_Soldier02_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0368 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x0390 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x0B20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x12B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x1A40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x21D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x2960 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x30F0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x3880 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x38A0 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x38C0 (size: 0x790)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x4050 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x4118 (size: 0x20)

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_880BF88142C9D3AB82BA75819635CFEB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_534F0E1A406C0E7A58C706887DD86E8E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_C566F6F04A02C9FC686525A23C10D62F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_512D1BF542A49A6945AF50901799E801();
    void ExecuteUbergraph_ABP_NPC_Male_Soldier02_Implimentation(int32 EntryPoint);
}; // Size: 0x4138

#endif
