#ifndef UE4SS_SDK_ABP_NPC_Female_Soldier03_Implimentation_HPP
#define UE4SS_SDK_ABP_NPC_Female_Soldier03_Implimentation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_47;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_48;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_49;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_50;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_NPC_Female_Soldier03_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x0370 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x0B00 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x1290 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x1A20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x21B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x2940 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x30D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x3860 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x3FF0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x4780 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x4F10 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x56A0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x56C0 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x56E0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x5700 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x57C8 (size: 0x20)

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier03_Implimentation_AnimGraphNode_KawaiiPhysics_53C7772D404FFB6A5D37F897309F1B0A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier03_Implimentation_AnimGraphNode_KawaiiPhysics_5911C7504CBCEC82B1C2D79F173E0E8A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier03_Implimentation_AnimGraphNode_KawaiiPhysics_36AAD2E740A39FE623C2A492C4B762EB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier03_Implimentation_AnimGraphNode_KawaiiPhysics_831B6C644E73F3666C435F87E6EB16E0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier03_Implimentation_AnimGraphNode_KawaiiPhysics_2F8872D9462CDAC6EA941CB759A08974();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier03_Implimentation_AnimGraphNode_KawaiiPhysics_7DD86C5448187EE2985E50A433AD94DF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier03_Implimentation_AnimGraphNode_KawaiiPhysics_EBF3F1DA49DF9517A17E5792B011F210();
    void ExecuteUbergraph_ABP_NPC_Female_Soldier03_Implimentation(int32 EntryPoint);
}; // Size: 0x57E8

#endif
