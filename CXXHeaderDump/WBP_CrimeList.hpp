#ifndef UE4SS_SDK_WBP_CrimeList_HPP
#define UE4SS_SDK_WBP_CrimeList_HPP

class UWBP_CrimeList_C : public UUserWidget
{
    class UBP_PalTextBlock_C* BP_PalTextBlock_WantedPrize;                            // 0x0278 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0280 (size: 0x8)
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge;                        // 0x0288 (size: 0x8)
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_1;                      // 0x0290 (size: 0x8)
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_2;                      // 0x0298 (size: 0x8)
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_3;                      // 0x02A0 (size: 0x8)
    class UWBP_CrimeList_RankGauge_C* WBP_CrimeList_RankGauge_4;                      // 0x02A8 (size: 0x8)

    void SetCrimeList(TArray<FName>& CrimeList);
    void RemoveAllCrime();
    void SortCrime();
    void SetPrizeMoney(int32 Money);
}; // Size: 0x2B0

#endif
