#ifndef UE4SS_SDK_WBP_Crime_HPP
#define UE4SS_SDK_WBP_Crime_HPP

class UWBP_Crime_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWBP_Crime_Found_C* WBP_Crime_Found;                                        // 0x0280 (size: 0x8)
    class UWBP_Crime_RankUp_C* WBP_Crime_RankUp;                                      // 0x0288 (size: 0x8)
    class UWBP_Crime_Scene_C* WBP_Crime_Scene;                                        // 0x0290 (size: 0x8)
    class UWBP_CrimeList_C* WBP_CrimeList;                                            // 0x0298 (size: 0x8)

    void SetCrime(bool Crime);
    void CrimeBeFound(const TArray<FName>& CrimeIds);
    void ClearCrimeList();
    void ExecuteUbergraph_WBP_Crime(int32 EntryPoint);
}; // Size: 0x2A0

#endif
