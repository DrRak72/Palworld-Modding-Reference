#ifndef UE4SS_SDK_ABP_HeadEquip014_HPP
#define UE4SS_SDK_ABP_HeadEquip014_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_23;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_24;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_25;                                                          // 0x0014 (size: 0x8)
    TEnumAsByte<ERefPoseType> __ByteProperty_26;                                      // 0x001C (size: 0x1)
    FAnimNodeFunctionRef __StructProperty_27;                                         // 0x0020 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_HeadEquip014_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x0450 (size: 0x790)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0BE0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0C00 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0C20 (size: 0x20)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x0C40 (size: 0x10)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x0C50 (size: 0xC8)

    void DynamicsLayer(FPoseLink InPose, FPoseLink& DynamicsLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HeadEquip014(int32 EntryPoint);
}; // Size: 0xD18

#endif
