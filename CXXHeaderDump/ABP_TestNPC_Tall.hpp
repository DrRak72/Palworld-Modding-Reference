#ifndef UE4SS_SDK_ABP_TestNPC_Tall_HPP
#define UE4SS_SDK_ABP_TestNPC_Tall_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_4;                                                           // 0x0004 (size: 0x8)
    FName __NameProperty_5;                                                           // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_6;                                          // 0x0018 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0038 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00B8 (size: 0x18)

}; // Size: 0xD0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_TestNPC_Tall_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0618 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0620 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0628 (size: 0x20)
    FAnimNode_RetargetPoseFromMesh AnimGraphNode_RetargetPoseFromMesh;                // 0x0648 (size: 0x258)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TestNPC_Tall(int32 EntryPoint);
}; // Size: 0x8A0

#endif
