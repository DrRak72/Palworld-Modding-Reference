#ifndef UE4SS_SDK_ABP_HeadEquip028_HPP
#define UE4SS_SDK_ABP_HeadEquip028_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_35;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_36;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_37;                                                          // 0x0014 (size: 0x8)
    TEnumAsByte<ERefPoseType> __ByteProperty_38;                                      // 0x001C (size: 0x1)
    FAnimNodeFunctionRef __StructProperty_39;                                         // 0x0020 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_HeadEquip028_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x0450 (size: 0x790)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0BE0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0C00 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x22D0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x2A60 (size: 0x20)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x2A80 (size: 0x10)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x2A90 (size: 0xC8)

    void DynamicsLayer(FPoseLink InPose, FPoseLink& DynamicsLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip028_AnimGraphNode_KawaiiPhysics_0B9A338F44A1CBF8BF724C8993AA375A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip028_AnimGraphNode_KawaiiPhysics_80693981437E22DF41A6458D454D8D6C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip028_AnimGraphNode_KawaiiPhysics_CC09FA2845BD449175006FB2ACDB70E0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip028_AnimGraphNode_KawaiiPhysics_AF7EFB0547640CC00C4EC5A5D2EFAF40();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip028_AnimGraphNode_KawaiiPhysics_3A891B63403DCB27B56756BBE8CF09B1();
    void ExecuteUbergraph_ABP_HeadEquip028(int32 EntryPoint);
}; // Size: 0x2B58

#endif
