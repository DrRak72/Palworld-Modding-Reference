#ifndef UE4SS_SDK_ABP_Kitsunebi_PartnerSkill_HPP
#define UE4SS_SDK_ABP_Kitsunebi_PartnerSkill_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_10;                                                          // 0x0004 (size: 0x8)
    bool __BoolProperty_11;                                                           // 0x000C (size: 0x1)
    float __FloatProperty_12;                                                         // 0x0010 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_13;                                // 0x0014 (size: 0x2C)
    float __FloatProperty_14;                                                         // 0x0040 (size: 0x4)
    bool __BoolProperty_15;                                                           // 0x0044 (size: 0x1)
    EAnimSyncMethod __EnumProperty_16;                                                // 0x0045 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_17;                              // 0x0046 (size: 0x1)
    FName __NameProperty_18;                                                          // 0x0048 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_19;                                         // 0x0050 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_Kitsunebi_PartnerSkill_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0368 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0388 (size: 0x48)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x03D0 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Kitsunebi_PartnerSkill(int32 EntryPoint);
}; // Size: 0x418

#endif
