#ifndef UE4SS_SDK_ABP_HeadEquip026_HPP
#define UE4SS_SDK_ABP_HeadEquip026_HPP

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

class UABP_HeadEquip026_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x4110 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x48A0 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x48C0 (size: 0x18)
    double Alpha;                                                                     // 0x48D8 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip026_AnimGraphNode_KawaiiPhysics_453E70DF4DDED227CCFD07835B06D41F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip026_AnimGraphNode_KawaiiPhysics_E3C05D8F4E8035D7C48AA7ADC21A9CF6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip026_AnimGraphNode_KawaiiPhysics_6C78A84B431B5B16ED9961B80B31E914();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip026_AnimGraphNode_KawaiiPhysics_A044CE494FC11831A9A1938EE7E23378();
    void ExecuteUbergraph_ABP_HeadEquip026(int32 EntryPoint);
}; // Size: 0x48E0

#endif
