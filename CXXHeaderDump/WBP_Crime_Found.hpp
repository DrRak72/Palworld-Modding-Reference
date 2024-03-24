#ifndef UE4SS_SDK_WBP_Crime_Found_HPP
#define UE4SS_SDK_WBP_Crime_Found_HPP

class UWBP_Crime_Found_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UWidgetAnimation* Anm_Open;                                                 // 0x0280 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0288 (size: 0x8)
    bool Displaying;                                                                  // 0x0290 (size: 0x1)
    TArray<FName> Crime Ids;                                                          // 0x0298 (size: 0x10)

    void Finished_DEA8290E42785E70DA2914B20F7C172E();
    void SetCrimesFound(const TArray<FName>& CrimeIds);
    void ClearFoundList();
    void ExecuteUbergraph_WBP_Crime_Found(int32 EntryPoint);
}; // Size: 0x2A8

#endif
