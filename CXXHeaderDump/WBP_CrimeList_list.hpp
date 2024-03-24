#ifndef UE4SS_SDK_WBP_CrimeList_list_HPP
#define UE4SS_SDK_WBP_CrimeList_list_HPP

class UWBP_CrimeList_list_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_Count;                                  // 0x0278 (size: 0x8)
    class UBP_PalTextBlock_C* BP_PalTextBlock_CrimeName;                              // 0x0280 (size: 0x8)

    void SetCrime(FName CrimeId, int32 CrimeCount);
}; // Size: 0x288

#endif
