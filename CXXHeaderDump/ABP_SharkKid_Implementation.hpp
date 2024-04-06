#ifndef UE4SS_SDK_ABP_SharkKid_Implementation_HPP
#define UE4SS_SDK_ABP_SharkKid_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_33;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_34;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_35;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_36;                                                          // 0x001C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_37;                                         // 0x0028 (size: 0x20)
    FName __NameProperty_38;                                                          // 0x0048 (size: 0x8)
    FName __NameProperty_39;                                                          // 0x0050 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0058 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00D8 (size: 0x18)

}; // Size: 0xF0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_SharkKid_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0388 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0450 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x0518 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x0538 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0600 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0620 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x06F0 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0940 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0960 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0980 (size: 0x20)
    FVector LookAtWorldLocation;                                                      // 0x09A0 (size: 0x18)

    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_SharkKid_Implementation(int32 EntryPoint);
}; // Size: 0x9B8

#endif
