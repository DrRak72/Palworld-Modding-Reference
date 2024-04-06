#ifndef UE4SS_SDK_ABP_HeadEquip022_HPP
#define UE4SS_SDK_ABP_HeadEquip022_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_65;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_66;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_67;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_68;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_HeadEquip022_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_16;                           // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_15;                           // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_14;                           // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13;                           // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12;                           // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x4110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x48A0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x5030 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x57C0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x5F50 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x66E0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x6E70 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x7600 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x7D90 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x8520 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x8540 (size: 0x18)
    double Alpha;                                                                     // 0x8558 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip022_AnimGraphNode_KawaiiPhysics_D4D28DCB42D785EB2BDC0B9F78ECC9D7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip022_AnimGraphNode_KawaiiPhysics_BDC542984441795940577C88B9CAD7B2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip022_AnimGraphNode_KawaiiPhysics_9D5E148C4626EE9A80CF9AB0E76269C1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip022_AnimGraphNode_KawaiiPhysics_E0CBA9C34C32B31EADD8C4B80D69BF40();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip022_AnimGraphNode_KawaiiPhysics_106FDF5D429CA4BB6C4203809984E19C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip022_AnimGraphNode_KawaiiPhysics_542D98A645F96FEC5429E78371131885();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip022_AnimGraphNode_KawaiiPhysics_13B82E6E475A32DA05ADC69B27497461();
    void ExecuteUbergraph_ABP_HeadEquip022(int32 EntryPoint);
}; // Size: 0x8560

#endif
