#ifndef UE4SS_SDK_ABP_NPC_Male_Soldier04_Implimentation_HPP
#define UE4SS_SDK_ABP_NPC_Male_Soldier04_Implimentation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_89;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_90;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_91;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_92;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_NPC_Male_Soldier04_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_24;                           // 0x0370 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_23;                           // 0x0B00 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_22;                           // 0x1290 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_21;                           // 0x1A20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_20;                           // 0x21B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_19;                           // 0x2940 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_18;                           // 0x30D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_17;                           // 0x3860 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_16;                           // 0x3FF0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_15;                           // 0x4780 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_14;                           // 0x4F10 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13;                           // 0x56A0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12;                           // 0x5E30 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x65C0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x6D50 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x74E0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x7C70 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x8400 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x8B90 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x9320 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x9AB0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0xA240 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0xA9D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0xB160 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0xB8F0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0xC080 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0xC0A0 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0xC0C0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0xC0E0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0xC1A8 (size: 0x20)

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_CB4BA4EC4FB742C5D0CD9C9160D4CE6F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_AD42C9A04B22623632B6C6AFF6F48C6E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_9B20FF16436B413B39D9D6B39B14C1F1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_F4777C5742726823D7A31B80C9BF5EEA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_9FFA574941DB11460A8E29ADCF1F417F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_9587FCDF41085AC06B6910B281896F65();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_B0E619F94A4DD37B92D63788DD9E0B88();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_6212403F48FBCFE1F6EB3AA59F586724();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_496F146C418300C25E5D2DBF38D4A41B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_181412044057D4EC164D2C8CED64E90D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_D5E6F2324F349F3A01D7C4BE0B76262C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_E11EF28D46403AD0AF7F1EA9E70E54C9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_34580D20408C06F09A3F199E061BD794();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_226EA2D94979E7B5437FE49E5A350181();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_F1FC151E4C7589A15B4951A88950CCFC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_76A2DE9E4BD632550ADFDC91BD8A4232();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_5D679558405EEAE5450D8AA918EA828C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_6B48E5384BAF3F97BA22CD8FF63C09AF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_5024EC304F219B82BA79879970D31300();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_1EA5217B4E2053F17E131DB198E5B3DD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation_AnimGraphNode_KawaiiPhysics_DEF181BD40BC0B73E76821985F5C2C84();
    void ExecuteUbergraph_ABP_NPC_Male_Soldier04_Implimentation(int32 EntryPoint);
}; // Size: 0xC1C8

#endif
