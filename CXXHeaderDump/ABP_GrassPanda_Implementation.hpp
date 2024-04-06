#ifndef UE4SS_SDK_ABP_GrassPanda_Implementation_HPP
#define UE4SS_SDK_ABP_GrassPanda_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_48;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_49;                                                          // 0x000C (size: 0x8)
    FName __NameProperty_50;                                                          // 0x0014 (size: 0x8)
    FName __NameProperty_51;                                                          // 0x001C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_52;                                         // 0x0028 (size: 0x20)
    FName __NameProperty_53;                                                          // 0x0048 (size: 0x8)
    FName __NameProperty_54;                                                          // 0x0050 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0058 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00D8 (size: 0x18)

}; // Size: 0xF0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_GrassPanda_Implementation_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0618 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0620 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_3;                                              // 0x0628 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3;                        // 0x0648 (size: 0xC8)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x0710 (size: 0x128)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;     // 0x0838 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x0858 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x0980 (size: 0x128)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;     // 0x0AA8 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root_2;                                              // 0x0AC8 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x0AE8 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0BB0 (size: 0x250)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0E00 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0E20 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0E40 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x0E60 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0F28 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0FF0 (size: 0x20)
    FRotator AimRotator;                                                              // 0x1010 (size: 0x18)
    FVector LookAtWorldLocation;                                                      // 0x1028 (size: 0x18)

    void AimingOverride(FPoseLink DefaultPose, FRotator AimRotator, FPoseLink& AimingOverride);
    void LookAtOverride(FPoseLink InPose, FVector LookAtWorldLocation, FPoseLink& LookAtOverride);
    void UpperOverride(FPoseLink NativePose, FPoseLink ActionPose, FPoseLink& UpperOverride);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_46D5D7D84A629BA96819029DBB7A90F5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_93DFD3BE4E28AB0AB3200CB5ABC0A4D5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GrassPanda_Implementation_AnimGraphNode_ModifyBone_C1855993489164A48479578D3D9A7A8F();
    void ExecuteUbergraph_ABP_GrassPanda_Implementation(int32 EntryPoint);
}; // Size: 0x1040

#endif
