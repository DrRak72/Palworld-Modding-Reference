#ifndef UE4SS_SDK_ABP_HeadEquip011_HPP
#define UE4SS_SDK_ABP_HeadEquip011_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_44;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_45;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_46;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_47;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_HeadEquip011_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x4110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x48A0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x5030 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x5050 (size: 0x18)
    double Alpha;                                                                     // 0x5068 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HeadEquip011(int32 EntryPoint);
}; // Size: 0x5070

#endif
