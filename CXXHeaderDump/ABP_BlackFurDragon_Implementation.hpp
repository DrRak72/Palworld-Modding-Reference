#ifndef UE4SS_SDK_ABP_BlackFurDragon_Implementation_HPP
#define UE4SS_SDK_ABP_BlackFurDragon_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_51;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_52;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_53;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_54;                                                          // 0x001C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_55;                                         // 0x0028 (size: 0x20)
    FName __NameProperty_56;                                                          // 0x0048 (size: 0x8)
    FName __NameProperty_57;                                                          // 0x0050 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0058 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00D8 (size: 0x18)

}; // Size: 0xF0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_BlackFurDragon_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0618 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0620 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0628 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0648 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0710 (size: 0xC8)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x07D8 (size: 0xE0)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x08B8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x08D8 (size: 0xC8)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x09A0 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0AC8 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0BF0 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x0D18 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0D38 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0D58 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0D78 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0E40 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1090 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x10B0 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x10D0 (size: 0x20)
    FRotator AimRotator;                                                              // 0x10F0 (size: 0x18)
    FVector LookAtWorldLocation;                                                      // 0x1108 (size: 0x18)

    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BlackFurDragon_Implementation_AnimGraphNode_ModifyBone_E457FE1E476C02161FCD05B7B5BC5D6C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BlackFurDragon_Implementation_AnimGraphNode_ModifyBone_793C8A65460AE90B58CCC4BE1AA3786B();
    void ExecuteUbergraph_ABP_BlackFurDragon_Implementation(int32 EntryPoint);
}; // Size: 0x1120

#endif
