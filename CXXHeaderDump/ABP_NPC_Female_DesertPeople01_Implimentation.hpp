#ifndef UE4SS_SDK_ABP_NPC_Female_DesertPeople01_Implimentation_HPP
#define UE4SS_SDK_ABP_NPC_Female_DesertPeople01_Implimentation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_41;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_42;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_43;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_44;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_NPC_Female_DesertPeople01_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0368 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x0390 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x0B20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x12B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x1A40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x21D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x2960 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x30F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x3880 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x4010 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x4030 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x4050 (size: 0x790)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x47E0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x48A8 (size: 0x20)

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_DesertPeople01_Implimentation_AnimGraphNode_KawaiiPhysics_F33324864F1F5F16A3B512BF1CC1B8C0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_DesertPeople01_Implimentation_AnimGraphNode_KawaiiPhysics_683821F441E027D8AC53FFA072B7DE25();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_DesertPeople01_Implimentation_AnimGraphNode_KawaiiPhysics_5BBB2263463ED5C9C4104A86D1E31DB0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_DesertPeople01_Implimentation_AnimGraphNode_KawaiiPhysics_2BA47F264B7F9DD2B70FEABCEB40FD58();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_DesertPeople01_Implimentation_AnimGraphNode_KawaiiPhysics_341196044A538AFDF0DA60BD487EC26E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_DesertPeople01_Implimentation_AnimGraphNode_KawaiiPhysics_2DC96B724BB2DFAA7A2A7C82AF895814();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_DesertPeople01_Implimentation_AnimGraphNode_KawaiiPhysics_59A52BF94FFEC9A8D706F6BDA63BA1D3();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_DesertPeople01_Implimentation_AnimGraphNode_KawaiiPhysics_D66F2DDC4F5BB4BEA0987AA04A931C87();
    void ExecuteUbergraph_ABP_NPC_Female_DesertPeople01_Implimentation(int32 EntryPoint);
}; // Size: 0x48C8

#endif
