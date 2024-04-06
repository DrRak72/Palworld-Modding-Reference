#ifndef UE4SS_SDK_ABP_HeadEquip023_HPP
#define UE4SS_SDK_ABP_HeadEquip023_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_44;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_45;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_46;                                                          // 0x0014 (size: 0x8)
    TEnumAsByte<ERefPoseType> __ByteProperty_47;                                      // 0x001C (size: 0x1)
    FAnimNodeFunctionRef __StructProperty_48;                                         // 0x0020 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_HeadEquip023_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x0450 (size: 0x790)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0BE0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0C00 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x3980 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x4110 (size: 0x20)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x4130 (size: 0x10)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x4140 (size: 0xC8)

    void DynamicsLayer(FPoseLink InPose, FPoseLink& DynamicsLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip023_AnimGraphNode_KawaiiPhysics_62BE89C743E8D0DCCA4B00B8574A743B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip023_AnimGraphNode_KawaiiPhysics_7C70F8C443097F142BD015902682A85B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip023_AnimGraphNode_KawaiiPhysics_E97D8E1F4C66602D5D7930BEA130C7E6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip023_AnimGraphNode_KawaiiPhysics_89000F204A7A886B63D3FC86360D66E9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip023_AnimGraphNode_KawaiiPhysics_C4AE7C8749CA964F306363B4DD62CE1C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip023_AnimGraphNode_KawaiiPhysics_FFC0086F4D3EDF28B6269FAEABEB29EE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip023_AnimGraphNode_KawaiiPhysics_C433D144471B7DA75A2D47A7B5F5E623();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip023_AnimGraphNode_KawaiiPhysics_AC7471774F385A9AE609138AB046C164();
    void ExecuteUbergraph_ABP_HeadEquip023(int32 EntryPoint);
}; // Size: 0x4208

#endif
