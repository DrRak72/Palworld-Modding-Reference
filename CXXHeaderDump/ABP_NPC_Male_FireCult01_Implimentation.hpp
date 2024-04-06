#ifndef UE4SS_SDK_ABP_NPC_Male_FireCult01_Implimentation_HPP
#define UE4SS_SDK_ABP_NPC_Male_FireCult01_Implimentation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_56;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_57;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_58;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_59;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_NPC_Male_FireCult01_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13;                           // 0x0370 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12;                           // 0x0B00 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x1290 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x1A20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x21B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x2940 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x30D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x3860 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x3FF0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x4780 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x4F10 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x56A0 (size: 0x790)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x5E30 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x5E50 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x5E70 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x5E90 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x6620 (size: 0x790)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x6DB0 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x6E78 (size: 0x20)

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_2CDF126541EC6E2BB142DEB90F401190();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_5137D1C54414C3A841863F84D3587BA6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_B7A9BDDA4529AFAAB97B069B375069E2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_2315C6C74530F0D70B489AB272E5FEAC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_A62FB4D842970689D776DAA8A467E8AC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_1FD20DD647BA6A31724AEDAEFCF9090B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_90E17136409150BB70032E809C09A414();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_D0B7CA004FE06680621AB1871FACB7D5();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_117295194D8CD93414A19F961A514C66();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_27EA5DE94EC57CD4C0E98E93331E21E4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_73612DEF4AAAD500E872939E2E7A6D23();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_CFC38D014E1B57B9501CB4A635815E10();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_F6FE4FB84F5BACA25CBD6ABA08D151B2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation_AnimGraphNode_KawaiiPhysics_A7F1099F4C89C7F76EAF398A45C9F6F9();
    void ExecuteUbergraph_ABP_NPC_Male_FireCult01_Implimentation(int32 EntryPoint);
}; // Size: 0x6E98

#endif
