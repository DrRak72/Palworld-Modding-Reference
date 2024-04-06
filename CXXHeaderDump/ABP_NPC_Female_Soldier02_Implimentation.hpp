#ifndef UE4SS_SDK_ABP_NPC_Female_Soldier02_Implimentation_HPP
#define UE4SS_SDK_ABP_NPC_Female_Soldier02_Implimentation_HPP

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

class UABP_NPC_Female_Soldier02_Implimentation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12;                           // 0x0370 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x0B00 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x1290 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x1A20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x21B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x2940 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x30D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x3860 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x3FF0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x4780 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x4F10 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x56A0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x5E30 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x65C0 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x65E0 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x6600 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x6620 (size: 0xC8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x66E8 (size: 0x20)

    void NPC_HairClothLayer(FPoseLink InPose, FPoseLink& NPC_HairClothLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_D87F18E54EAB5A7A841074B19BEF237A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_B6DA8A73471B496050A5368AC65A9E43();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_1562410D4CA9DE8F93CB869CD70D1B47();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_BF56EA7A4D77006F4E9882B0EE346F41();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_27411A3C48BD589EEF2757BB0EDADA41();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_F3A46D3B47B51A794BC8CD853F3C0F1F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_E2A8FC314BA3A4A63CD373BA4448296A();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_0A12F8264CC9B6219CF61DBB481E73BD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_Female_Soldier02_Implimentation_AnimGraphNode_KawaiiPhysics_F8C019B94471BB526A3ADF9C80F44D32();
    void ExecuteUbergraph_ABP_NPC_Female_Soldier02_Implimentation(int32 EntryPoint);
}; // Size: 0x6708

#endif
