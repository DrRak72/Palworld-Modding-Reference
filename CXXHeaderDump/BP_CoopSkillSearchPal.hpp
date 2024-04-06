#ifndef UE4SS_SDK_BP_CoopSkillSearchPal_HPP
#define UE4SS_SDK_BP_CoopSkillSearchPal_HPP

class UBP_CoopSkillSearchPal_C : public UPalCoopSkillSearchCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)

    bool IsFinished();
    void Start(const FVector& Origin, int32 Rank, const FGuid& RequestPlayerUId);
    void ExecuteUbergraph_BP_CoopSkillSearchPal(int32 EntryPoint);
}; // Size: 0xA0

#endif
