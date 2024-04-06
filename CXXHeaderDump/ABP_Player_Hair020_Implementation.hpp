#ifndef UE4SS_SDK_ABP_Player_Hair020_Implementation_HPP
#define UE4SS_SDK_ABP_Player_Hair020_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_68;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_69;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_70;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_71;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_Player_Hair020_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_17;                           // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_16;                           // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_15;                           // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_14;                           // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13;                           // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12;                           // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11;                           // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10;                           // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x4110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x48A0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x5030 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x57C0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x5F50 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x66E0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x6E70 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x7600 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x7D90 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x8520 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x8CB0 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x8CD0 (size: 0x18)
    double Alpha;                                                                     // 0x8CE8 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_33F0137843A7ED85244487B55210838E();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_A3D61F07429647642286568D9B1181EC();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_8692DF27448EB4163A211F9A68FBF7D7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_6F2D8DC24055A407EF8176B874C9C219();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_BE9F50BF42660D1C8DDE66AC9B76B12C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_A1331DC94A065B2626759EB6411BDD2F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_9EAC9C67415FE742CD939087A1294201();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_B10F2CBF4467910DE084A494847CB7D6();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_0F35BAEB4E664CC6D98163A62F85F1EB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_135559B8493A907E932772AAD9F9D8D0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_5B4F868E4DB40A3AF74EE89E2EADEB04();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_F2FFEC484C2C410925C99298FBB24845();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_DD99F1C448B9DBDFAC7C68AF29090C39();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_FD990F0D4B1E7D9F570E16B7254FBCAF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_DBC957E04A554AFA8606B8B85A4CB481();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_583156B94BC9D6E6670911A55ECF9BF4();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_AB2F5EA1441957C26C669DAC9E4C8032();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair020_Implementation_AnimGraphNode_KawaiiPhysics_483B48E94A4ED8BCBE3E94A69C61CB43();
    void ExecuteUbergraph_ABP_Player_Hair020_Implementation(int32 EntryPoint);
}; // Size: 0x8CF0

#endif
