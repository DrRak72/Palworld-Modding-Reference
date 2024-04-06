#ifndef UE4SS_SDK_ABP_HeadEquip033_HPP
#define UE4SS_SDK_ABP_HeadEquip033_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_59;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_60;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_61;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_62;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_HeadEquip033_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_14;                           // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13;                           // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12;                           // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x4110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x48A0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x5030 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x57C0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x5F50 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x66E0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x6E70 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x7600 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x7620 (size: 0x18)
    double Alpha;                                                                     // 0x7638 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_EF6CB10D412A39783042549853DA8998();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_A5761AED42F506690D2DA3BA739552F1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_DA9B5E0F4CF53E2979ACE49671D20A07();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_FFEABD434C0CAED77C8C17A84909AB44();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_90F592244B8AC953FAE418A1B0850042();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_DA34C5F24EA1FCF59942A79B2051A37B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_22C1D11747F70D7CE8CB0D911AF809B5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_CC9BE31A4B7638520B73DDBF17CDB8E2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_A045C35E40D085DF4A294DBD436F7427();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_FA975A42486B7C6B3C127E9FCB1D6836();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_83ECEEFD430D6B85FA54A0BF7DDC8EE1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_F503E728448999A008CE718FCDCA9A30();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_25183F134B274D11CEB318A748886DEF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_FBC5B2764008B56D3DE6C485EB0760FF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip033_AnimGraphNode_KawaiiPhysics_0F95CF5742500F0001FC22BD14EBB893();
    void ExecuteUbergraph_ABP_HeadEquip033(int32 EntryPoint);
}; // Size: 0x7640

#endif
