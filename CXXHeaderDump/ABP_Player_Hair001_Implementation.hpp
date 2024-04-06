#ifndef UE4SS_SDK_ABP_Player_Hair001_Implementation_HPP
#define UE4SS_SDK_ABP_Player_Hair001_Implementation_HPP

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

class UABP_Player_Hair001_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13;                           // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12;                           // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x4110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x48A0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x5030 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x57C0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x5F50 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x66E0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x6E70 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x6E90 (size: 0x18)
    double Alpha;                                                                     // 0x6EA8 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_815AC33B4E182803179C95A88BD10CE7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_CF68BD814004A9BE933855AAF278E492();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_45CE30654A7FB37D97E2E4A5510467E9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_CCBF9F7B4F40FCEF790AA69A253ED00C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_869DD29A413AF4EDA005FE98B0E48048();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_77CD87CA487FEE98D17775ADDFECDA34();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_9722388A446D396F3E44C2953C8CF4BA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_D2C627AB41C7F7242090DEB9F5971E6A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_1AA876F346A93B52CF7D11A83BC812CD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_5D45771D4196D87E7E3035959F88C0B0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_DDAA787A43E397585134FC973C278B17();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair001_Implementation_AnimGraphNode_KawaiiPhysics_3038E75C46270EDCF356C9AE6CDD7DEF();
    void ExecuteUbergraph_ABP_Player_Hair001_Implementation(int32 EntryPoint);
}; // Size: 0x6EB0

#endif
