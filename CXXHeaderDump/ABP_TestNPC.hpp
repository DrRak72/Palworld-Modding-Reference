#ifndef UE4SS_SDK_ABP_TestNPC_HPP
#define UE4SS_SDK_ABP_TestNPC_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_7;                                                           // 0x0004 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_8;                                          // 0x0010 (size: 0x20)
    bool __BoolProperty_9;                                                            // 0x0030 (size: 0x1)
    float __FloatProperty_10;                                                         // 0x0034 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_11;                                // 0x0038 (size: 0x2C)
    float __FloatProperty_12;                                                         // 0x0064 (size: 0x4)
    bool __BoolProperty_13;                                                           // 0x0068 (size: 0x1)
    EAnimSyncMethod __EnumProperty_14;                                                // 0x0069 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_15;                              // 0x006A (size: 0x1)
    FName __NameProperty_16;                                                          // 0x006C (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0078 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F8 (size: 0x18)

}; // Size: 0x110

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
}; // Size: 0x1

class UABP_TestNPC_C : public UPalAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0610 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0618 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0620 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0628 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0648 (size: 0x48)
    class UAnimSequence* PlayAnimSequence;                                            // 0x0690 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintBeginPlay();
    void OnUpdateAnimSequence();
    void ExecuteUbergraph_ABP_TestNPC(int32 EntryPoint);
}; // Size: 0x698

#endif
