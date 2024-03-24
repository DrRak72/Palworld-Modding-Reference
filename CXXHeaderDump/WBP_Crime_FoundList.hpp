#ifndef UE4SS_SDK_WBP_Crime_FoundList_HPP
#define UE4SS_SDK_WBP_Crime_FoundList_HPP

class UWBP_Crime_FoundList_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_CrimeName;                              // 0x0278 (size: 0x8)

    void SetCrimeName(FName CrimeId);
}; // Size: 0x280

#endif
