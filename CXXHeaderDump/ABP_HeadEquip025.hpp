#ifndef UE4SS_SDK_ABP_HeadEquip025_HPP
#define UE4SS_SDK_ABP_HeadEquip025_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_20;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_21;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_22;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_23;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_HeadEquip025_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x0C20 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x13B0 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x13D0 (size: 0x18)
    double Alpha;                                                                     // 0x13E8 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip025_AnimGraphNode_KawaiiPhysics_ADC83DDA429AD2DD91B7009339F9B08E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip025_AnimGraphNode_KawaiiPhysics_5384F9D541FAFF7B0ED3F7B368900084();
    void ExecuteUbergraph_ABP_HeadEquip025(int32 EntryPoint);
}; // Size: 0x13F0

#endif
