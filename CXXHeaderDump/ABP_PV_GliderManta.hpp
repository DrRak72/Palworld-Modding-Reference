#ifndef UE4SS_SDK_ABP_PV_GliderManta_HPP
#define UE4SS_SDK_ABP_PV_GliderManta_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_14;                                                          // 0x0004 (size: 0x8)
    bool __BoolProperty_15;                                                           // 0x000C (size: 0x1)
    float __FloatProperty_16;                                                         // 0x0010 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_17;                                // 0x0014 (size: 0x2C)
    float __FloatProperty_18;                                                         // 0x0040 (size: 0x4)
    bool __BoolProperty_19;                                                           // 0x0044 (size: 0x1)
    EAnimSyncMethod __EnumProperty_20;                                                // 0x0045 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_21;                              // 0x0046 (size: 0x1)
    FName __NameProperty_22;                                                          // 0x0048 (size: 0x8)
    FName __NameProperty_23;                                                          // 0x0050 (size: 0x8)
    int32 __IntProperty_24;                                                           // 0x0058 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_25;                                         // 0x0060 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0080 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0100 (size: 0x18)

}; // Size: 0x118

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_PV_GliderManta_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0388 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x03D0 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x03F0 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_PV_GliderManta(int32 EntryPoint);
}; // Size: 0x4B8

#endif
