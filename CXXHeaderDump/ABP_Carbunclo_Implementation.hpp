#ifndef UE4SS_SDK_ABP_Carbunclo_Implementation_HPP
#define UE4SS_SDK_ABP_Carbunclo_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_39;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_40;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_41;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_42;                                                          // 0x001C (size: 0x8)
    FName __NameProperty_43;                                                          // 0x0024 (size: 0x8)
    FName __NameProperty_44;                                                          // 0x002C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_45;                                         // 0x0038 (size: 0x20)
    TEnumAsByte<ERefPoseType> __ByteProperty_46;                                      // 0x0058 (size: 0x1)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0060 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00E0 (size: 0x18)

}; // Size: 0xF8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_Carbunclo_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0618 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0620 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0628 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0648 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0710 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x07D8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x07F8 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x08C0 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0B10 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0B30 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0B50 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0B70 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0C38 (size: 0x20)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x0C58 (size: 0xC8)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x0D20 (size: 0x10)
    FVector LookAtWorldLocation;                                                      // 0x0D30 (size: 0x18)

    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Carbunclo_Implementation(int32 EntryPoint);
}; // Size: 0xD48

#endif
