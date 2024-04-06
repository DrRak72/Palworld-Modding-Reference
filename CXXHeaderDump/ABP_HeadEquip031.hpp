#ifndef UE4SS_SDK_ABP_HeadEquip031_HPP
#define UE4SS_SDK_ABP_HeadEquip031_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_53;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_54;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_55;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_56;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_HeadEquip031_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12;                           // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x4110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x48A0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x5030 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x57C0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x5F50 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x66E0 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x6700 (size: 0x18)
    double Alpha;                                                                     // 0x6718 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_7A3E4AF24420C40BD74D4F871A522F8A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_1989A6C14D72F6EB6A73F9B977FBA278();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_C590E5014DF3C1C8DE0A8EAA44CB5BA9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_54A2D03346A4FB01BC35EBA7A6B22078();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_3933F21E4AE3FFECA24EDDA188C95F3A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_5599770748F51066EB21449E5F0A8AB6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_D0C131654CE7C530B4DFCB89C5623B3C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_73401FFF490BA35CBBCE8F891C2E5A0C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_AD3D65B645DD5A0C680420AE854E98FB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_1802ECC04DC62DA3880F29AA14DB9896();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_A72B290140E3C60C8B04008093B34261();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_0C322ED44FCE9F83EB77D9A9B9136DA4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HeadEquip031_AnimGraphNode_KawaiiPhysics_120D69CA466248332DB1CB962B206414();
    void ExecuteUbergraph_ABP_HeadEquip031(int32 EntryPoint);
}; // Size: 0x6720

#endif
