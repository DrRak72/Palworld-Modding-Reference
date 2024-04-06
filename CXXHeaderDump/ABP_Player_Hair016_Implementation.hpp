#ifndef UE4SS_SDK_ABP_Player_Hair016_Implementation_HPP
#define UE4SS_SDK_ABP_Player_Hair016_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_50;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_51;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_52;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_53;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_Player_Hair016_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x4110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x48A0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x5030 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x57C0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x5F50 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x5F70 (size: 0x18)
    double Alpha;                                                                     // 0x5F88 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_7596F5044D8D08E269EBE89D44901E79();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_BE4C33724E81207E021946BED75300AC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_31E0B31540BF7631C1A70D856B7C20A0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_EC7DB4A140B61547023B0AAE9F880C01();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_8229BEF84D60DC7F6833CEBDA89FBE88();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_519E3FD14523B301F19910859D681FA0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_0406F1534A6C4E78F138C6B41FBD9ECD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_896F70DC45ADA2B33E5217BD28D51FBC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_CDBB08FC4A6BB0D5E7BF97AA7286ECCC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_448EB1414A8114DDB26B54B62ADC6925();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_87B8D25545ADB1B81C26CF932902A670();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair016_Implementation_AnimGraphNode_KawaiiPhysics_799E73A74892D563677917839519668F();
    void ExecuteUbergraph_ABP_Player_Hair016_Implementation(int32 EntryPoint);
}; // Size: 0x5F90

#endif
