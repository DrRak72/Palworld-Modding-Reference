#ifndef UE4SS_SDK_ABP_HeadEquip024_HPP
#define UE4SS_SDK_ABP_HeadEquip024_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_62;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_63;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_64;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_65;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_HeadEquip024_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_15;                           // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_14;                           // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13;                           // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12;                           // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x4110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x48A0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x5030 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x57C0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x5F50 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x66E0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x6E70 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x7600 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x7D90 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x7DB0 (size: 0x18)
    double Alpha;                                                                     // 0x7DC8 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip024_AnimGraphNode_KawaiiPhysics_C20AD439437D9E4EF9D2029255C7502E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip024_AnimGraphNode_KawaiiPhysics_8B7E2592490FBEEF5DE163A36C2D309A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip024_AnimGraphNode_KawaiiPhysics_F0BC894F4339C00FA6CFE4876326A5DB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip024_AnimGraphNode_KawaiiPhysics_70970BDC479E035577E9FE8F154E519D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip024_AnimGraphNode_KawaiiPhysics_2F5E6852485C7CEEDF2491A2EA06A2BD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip024_AnimGraphNode_KawaiiPhysics_7D4ABBB44F50E8F6A75DA1AE78BBE93A();
    void ExecuteUbergraph_ABP_HeadEquip024(int32 EntryPoint);
}; // Size: 0x7DD0

#endif
