#ifndef UE4SS_SDK_ABP_DefenseFacilityMedieval_Base_Skeleton_HPP
#define UE4SS_SDK_ABP_DefenseFacilityMedieval_Base_Skeleton_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_23;                                                          // 0x0004 (size: 0x8)
    float __FloatProperty_24;                                                         // 0x000C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_25;                                // 0x0010 (size: 0x2C)
    float __FloatProperty_26;                                                         // 0x003C (size: 0x4)
    bool __BoolProperty_27;                                                           // 0x0040 (size: 0x1)
    EAnimSyncMethod __EnumProperty_28;                                                // 0x0041 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_29;                              // 0x0042 (size: 0x1)
    FName __NameProperty_30;                                                          // 0x0044 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_31;                                         // 0x0050 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_DefenseFacilityMedieval_Base_Skeleton_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0618 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0620 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0628 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0648 (size: 0x48)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0690 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x06B0 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x06D0 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x07F8 (size: 0x128)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0920 (size: 0x48)
    FRotator Rotatation;                                                              // 0x0968 (size: 0x18)
    float Y (Pitch);                                                                  // 0x0980 (size: 0x4)

    void AnimGraph(FPoseLink& AnimGraph);
    void SetRotate(FRotator Rotation);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_ABP_DefenseFacilityMedieval_Base_Skeleton(int32 EntryPoint);
}; // Size: 0x984

#endif
