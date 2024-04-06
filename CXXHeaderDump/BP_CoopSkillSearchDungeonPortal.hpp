#ifndef UE4SS_SDK_BP_CoopSkillSearchDungeonPortal_HPP
#define UE4SS_SDK_BP_CoopSkillSearchDungeonPortal_HPP

class UBP_CoopSkillSearchDungeonPortal_C : public UPalCoopSkillSearchDungeonPortal
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)

    bool IsFinished();
    void Start(const FVector& Origin, int32 Rank, const FGuid& RequestPlayerUId);
    void ExecuteUbergraph_BP_CoopSkillSearchDungeonPortal(int32 EntryPoint);
}; // Size: 0xA0

#endif
