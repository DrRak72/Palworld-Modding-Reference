#ifndef UE4SS_SDK_WBP_Menu_CharacterExpGauge_HPP
#define UE4SS_SDK_WBP_Menu_CharacterExpGauge_HPP

class UWBP_Menu_CharacterExpGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0578 (size: 0x8)
    class UImage* Image;                                                              // 0x0580 (size: 0x8)
    class UImage* Image_398;                                                          // 0x0588 (size: 0x8)
    class UProgressBar* ProgressBar_58;                                               // 0x0590 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NextExp;                                           // 0x0598 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowLevelNum;                                       // 0x05A0 (size: 0x8)

    void UpdateExp(int32 addExp, int32 oldExp, double nowExpRate);
    void UpdateLevel(int32 NewLevel);
    void OnInitialized();
    void Destruct();
    void ExecuteUbergraph_WBP_Menu_CharacterExpGauge(int32 EntryPoint);
}; // Size: 0x5A8

#endif