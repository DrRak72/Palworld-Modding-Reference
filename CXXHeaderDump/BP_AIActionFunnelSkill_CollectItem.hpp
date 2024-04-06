#ifndef UE4SS_SDK_BP_AIActionFunnelSkill_CollectItem_HPP
#define UE4SS_SDK_BP_AIActionFunnelSkill_CollectItem_HPP

class UBP_AIActionFunnelSkill_CollectItem_C : public UPalAIActionFunnelSkillBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    bool bPickupped;                                                                  // 0x0140 (size: 0x1)
    class UPalFunnelSkillModuleCollectItem* ModuleCollectItem;                        // 0x0148 (size: 0x8)
    class UAnimMontage* PickupAnimation;                                              // 0x0150 (size: 0x8)

    void Get Actor Root Location(FVector& Location);
    void OnFail_8BFB17EA4AA5F3D3D1A5E8867E5C4F6E(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_8BFB17EA4AA5F3D3D1A5E8867E5C4F6E(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionFunnelSkill_CollectItem(int32 EntryPoint);
}; // Size: 0x158

#endif
