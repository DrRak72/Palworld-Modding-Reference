#ifndef UE4SS_SDK_ABP_Player_Hair026_Implementation_HPP
#define UE4SS_SDK_ABP_Player_Hair026_Implementation_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_44;                                                          // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_45;                                         // 0x0010 (size: 0x20)
    FName __NameProperty_46;                                                          // 0x0030 (size: 0x8)
    FName __NameProperty_47;                                                          // 0x0038 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_Player_Hair026_Implementation_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0358 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0360 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root_1;                                              // 0x0368 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x0388 (size: 0xC8)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x0450 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x0470 (size: 0x20)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9;                            // 0x0490 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8;                            // 0x0C20 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7;                            // 0x13B0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6;                            // 0x1B40 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5;                            // 0x22D0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4;                            // 0x2A60 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3;                            // 0x31F0 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2;                            // 0x3980 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_1;                            // 0x4110 (size: 0x790)
    FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics;                              // 0x48A0 (size: 0x790)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x5030 (size: 0x20)
    FKawaiiPhysicsSettings PhysicsSettings;                                           // 0x5050 (size: 0x18)
    double Alpha;                                                                     // 0x5068 (size: 0x8)

    void HairLayer(FPoseLink InPose, FPoseLink& HairLayer);
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair026_Implementation_AnimGraphNode_KawaiiPhysics_58F35A654A7C2DCC81A0A1BD4F3E76DD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair026_Implementation_AnimGraphNode_KawaiiPhysics_79E7ED1148CDECEDD98DCBBB6ECFB493();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair026_Implementation_AnimGraphNode_KawaiiPhysics_EB81780E46DFE76EEB72AC9A849110F1();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair026_Implementation_AnimGraphNode_KawaiiPhysics_77F56292406273FA173C2586DB73535F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair026_Implementation_AnimGraphNode_KawaiiPhysics_B2CB200F4D84099C7A1B18A1314E9458();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair026_Implementation_AnimGraphNode_KawaiiPhysics_AA94D95B4F55F6E8E5DC0B8372463B69();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair026_Implementation_AnimGraphNode_KawaiiPhysics_9A56840A4FC9D9F8CC9E60A53A3B33B9();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair026_Implementation_AnimGraphNode_KawaiiPhysics_782E8E8248B1D75DFE310DA2811AF2B2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair026_Implementation_AnimGraphNode_KawaiiPhysics_68007650484BFF7CD1028C97D16643EE();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Player_Hair026_Implementation_AnimGraphNode_KawaiiPhysics_F30BD801487AE1090D2C12B499EB4251();
    void ExecuteUbergraph_ABP_Player_Hair026_Implementation(int32 EntryPoint);
}; // Size: 0x5070

#endif
