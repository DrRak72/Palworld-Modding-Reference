#ifndef UE4SS_SDK_ABP_Umihebi_Implementation_HPP
#define UE4SS_SDK_ABP_Umihebi_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_45;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_46;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_47;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_48;                                                          // 0x001C (size: 0x8)
    FName __NameProperty_49;                                                          // 0x0024 (size: 0x8)
    FName __NameProperty_50;                                                          // 0x002C (size: 0x8)
    TEnumAsByte<ERefPoseType> __ByteProperty_51;                                      // 0x0034 (size: 0x1)
    FAnimNodeFunctionRef __StructProperty_52;                                         // 0x0038 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0058 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00D8 (size: 0x18)

}; // Size: 0xF0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_Umihebi_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0618 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0620 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0628 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0648 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0710 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x07D8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x07F8 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x08C0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x08E0 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x09B0 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0C00 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0C20 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x0C40 (size: 0x250)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0E90 (size: 0x250)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x10E0 (size: 0x20)
    FAnimNode_RefPose AnimGraphNode_LocalRefPose;                                     // 0x1100 (size: 0x10)
    FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer;                          // 0x1110 (size: 0xC8)
    FVector LookAtWorldLocation;                                                      // 0x11D8 (size: 0x18)

    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Umihebi_Implementation(int32 EntryPoint);
}; // Size: 0x11F0

#endif
