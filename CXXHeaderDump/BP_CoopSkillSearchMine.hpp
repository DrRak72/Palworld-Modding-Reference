#ifndef UE4SS_SDK_BP_CoopSkillSearchMine_HPP
#define UE4SS_SDK_BP_CoopSkillSearchMine_HPP

class UBP_CoopSkillSearchMine_C : public UPalCoopSkillSearchMapObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    TArray<FName> SearchMapObjIds;                                                    // 0x00A0 (size: 0x10)

    bool IsFinished();
    void Start(const FVector& Origin, int32 Rank, const FGuid& RequestPlayerUId);
    void ExecuteUbergraph_BP_CoopSkillSearchMine(int32 EntryPoint);
}; // Size: 0xB0

#endif
