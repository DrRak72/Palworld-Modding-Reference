#ifndef UE4SS_SDK_ABP_ElecPanda_Implementation_HPP
#define UE4SS_SDK_ABP_ElecPanda_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_57;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_58;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_59;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_60;                                                          // 0x001C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_61;                                         // 0x0028 (size: 0x20)
    FName __NameProperty_62;                                                          // 0x0048 (size: 0x8)
    FName __NameProperty_63;                                                          // 0x0050 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0058 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00D8 (size: 0x18)

}; // Size: 0xF0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_ElecPanda_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0618 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0620 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0628 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0648 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0710 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0730 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0858 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0980 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x0AA8 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x0AC8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0AE8 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0BB0 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_2;                                          // 0x0BD0 (size: 0x250)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0E20 (size: 0x20)
    FAnimNode_LookAt AnimGraphNode_LookAt_1;                                          // 0x0E40 (size: 0x250)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x1090 (size: 0x250)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x12E0 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x1300 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x13C8 (size: 0xC8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x1490 (size: 0xE0)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1570 (size: 0x20)
    FRotator AimRotator;                                                              // 0x1590 (size: 0x18)
    FVector LookAtWorldLocation;                                                      // 0x15A8 (size: 0x18)

    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ElecPanda_Implementation_AnimGraphNode_ModifyBone_B04BF725487338051D4BEA9094F52BDC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ElecPanda_Implementation_AnimGraphNode_ModifyBone_C60DFEC84E1EF8F9654E6791FEE2A4D1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_ElecPanda_Implementation_AnimGraphNode_ModifyBone_3273F77540B7195930F4D384AB9E4D03();
    void ExecuteUbergraph_ABP_ElecPanda_Implementation(int32 EntryPoint);
}; // Size: 0x15C0

#endif
