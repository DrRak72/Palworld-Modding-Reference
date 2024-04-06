#ifndef UE4SS_SDK_ABP_NPC_NPC_Male_Trader01_Implimentation_HPP
#define UE4SS_SDK_ABP_NPC_NPC_Male_Trader01_Implimentation_HPP

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

class UABP_NPC_NPC_Male_Trader01_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0368 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x0390 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x0B20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x12B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x1A40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x21D0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x2960 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x2980 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x29A0 (size: 0x790)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x3130 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x31F8 (size: 0x20)

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_NPC_Male_Trader01_Implimentation_AnimGraphNode_KawaiiPhysics_090F60A0417580EE3F2358A03174B3BC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_NPC_Male_Trader01_Implimentation_AnimGraphNode_KawaiiPhysics_34E7E4FA42243D2E211C85A4F19F1FEE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_NPC_Male_Trader01_Implimentation_AnimGraphNode_KawaiiPhysics_9EE362FE4E80CF236C3362AA919B1D40();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_NPC_Male_Trader01_Implimentation_AnimGraphNode_KawaiiPhysics_2F7FA8644F65566CDB1EC097D645CFF7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_NPC_Male_Trader01_Implimentation_AnimGraphNode_KawaiiPhysics_8002778347A521528E4EF0805F33E2D1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_NPC_Male_Trader01_Implimentation_AnimGraphNode_KawaiiPhysics_4680EC924BA0444DD676739F1F8702CC();
    void ExecuteUbergraph_ABP_NPC_NPC_Male_Trader01_Implimentation(int32 EntryPoint);
}; // Size: 0x3218

#endif
